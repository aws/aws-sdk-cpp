/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class WebCrawlerAuthType { NOT_SET, NO_AUTH, BASIC_AUTH, FORM, SAML };

namespace WebCrawlerAuthTypeMapper {
AWS_QUICKSIGHT_API WebCrawlerAuthType GetWebCrawlerAuthTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForWebCrawlerAuthType(WebCrawlerAuthType value);
}  // namespace WebCrawlerAuthTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
