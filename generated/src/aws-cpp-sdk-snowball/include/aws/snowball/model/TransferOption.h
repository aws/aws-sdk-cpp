/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/Snowball_EXPORTS.h>

namespace Aws {
namespace Snowball {
namespace Model {
enum class TransferOption { NOT_SET, IMPORT, EXPORT, LOCAL_USE };

namespace TransferOptionMapper {
AWS_SNOWBALL_API TransferOption GetTransferOptionForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForTransferOption(TransferOption value);
}  // namespace TransferOptionMapper
}  // namespace Model
}  // namespace Snowball
}  // namespace Aws
