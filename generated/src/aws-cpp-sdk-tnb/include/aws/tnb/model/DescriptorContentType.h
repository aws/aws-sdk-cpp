/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/Tnb_EXPORTS.h>

namespace Aws {
namespace tnb {
namespace Model {
enum class DescriptorContentType { NOT_SET, text_plain };

namespace DescriptorContentTypeMapper {
AWS_TNB_API DescriptorContentType GetDescriptorContentTypeForName(const Aws::String& name);

AWS_TNB_API Aws::String GetNameForDescriptorContentType(DescriptorContentType value);
}  // namespace DescriptorContentTypeMapper
}  // namespace Model
}  // namespace tnb
}  // namespace Aws
