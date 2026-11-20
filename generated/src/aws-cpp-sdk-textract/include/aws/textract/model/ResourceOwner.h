/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/Textract_EXPORTS.h>

namespace Aws {
namespace Textract {
namespace Model {
enum class ResourceOwner { NOT_SET, ACCOUNT, SERVICE };

namespace ResourceOwnerMapper {
AWS_TEXTRACT_API ResourceOwner GetResourceOwnerForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForResourceOwner(ResourceOwner value);
}  // namespace ResourceOwnerMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
