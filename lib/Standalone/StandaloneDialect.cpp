//===- StandaloneDialect.cpp - Standalone dialect ---------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "Standalone/StandaloneDialect.h"
#include "Standalone/StandaloneOps.h"

using namespace mlir;
using namespace mlir::standalone;

//===----------------------------------------------------------------------===//
// Standalone dialect.
//===----------------------------------------------------------------------===//

StandaloneDialect::StandaloneDialect(mlir::MLIRContext *context)
    : Dialect(getDialectNamespace(), context) {}
