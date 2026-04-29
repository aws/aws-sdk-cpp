/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>

namespace Aws {
namespace mediapackagev2 {
namespace Model {
enum class UriSeparator { NOT_SET, UNDERSCORE, HYPHEN };

namespace UriSeparatorMapper {
AWS_MEDIAPACKAGEV2_API UriSeparator GetUriSeparatorForName(const Aws::String& name);

AWS_MEDIAPACKAGEV2_API Aws::String GetNameForUriSeparator(UriSeparator value);
}  // namespace UriSeparatorMapper
}  // namespace Model
}  // namespace mediapackagev2
}  // namespace Aws
