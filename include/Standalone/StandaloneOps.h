//===- StandaloneOps.h - Standalone dialect ops -----------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef STANDALONE_STANDALONEOPS_H
#define STANDALONE_STANDALONEOPS_H

namespace mlir {
namespace standalone {

#define GET_OP_CLASSES
#include "Standalone/StandaloneOps.h.inc"

} // namespace standalone
} // namespace mlir

#endif // STANDALONE_STANDALONEOPS_H
