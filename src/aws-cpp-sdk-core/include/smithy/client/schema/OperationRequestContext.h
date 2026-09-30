/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/Smithy_EXPORTS.h>

namespace smithy {
namespace schema {

struct SMITHY_API OperationRequestContext {
  Aws::String action;
  Aws::String version;
};

}  // namespace schema
}  // namespace smithy
