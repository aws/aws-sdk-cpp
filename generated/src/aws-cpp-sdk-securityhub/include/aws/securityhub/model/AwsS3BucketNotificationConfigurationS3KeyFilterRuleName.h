/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class AwsS3BucketNotificationConfigurationS3KeyFilterRuleName
  {
    NOT_SET,
    Prefix,
    Suffix
  };

namespace AwsS3BucketNotificationConfigurationS3KeyFilterRuleNameMapper
{
AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationS3KeyFilterRuleName GetAwsS3BucketNotificationConfigurationS3KeyFilterRuleNameForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForAwsS3BucketNotificationConfigurationS3KeyFilterRuleName(AwsS3BucketNotificationConfigurationS3KeyFilterRuleName value);
} // namespace AwsS3BucketNotificationConfigurationS3KeyFilterRuleNameMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
