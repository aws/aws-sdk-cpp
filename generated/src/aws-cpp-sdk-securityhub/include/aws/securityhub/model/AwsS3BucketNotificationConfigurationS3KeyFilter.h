/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsS3BucketNotificationConfigurationS3KeyFilterRule.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details for an Amazon S3 filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketNotificationConfigurationS3KeyFilter">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketNotificationConfigurationS3KeyFilter
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationS3KeyFilter();
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationS3KeyFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationS3KeyFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filter rules for the filter.</p>
     */
    inline const Aws::Vector<AwsS3BucketNotificationConfigurationS3KeyFilterRule>& GetFilterRules() const{ return m_filterRules; }

    /**
     * <p>The filter rules for the filter.</p>
     */
    inline bool FilterRulesHasBeenSet() const { return m_filterRulesHasBeenSet; }

    /**
     * <p>The filter rules for the filter.</p>
     */
    inline void SetFilterRules(const Aws::Vector<AwsS3BucketNotificationConfigurationS3KeyFilterRule>& value) { m_filterRulesHasBeenSet = true; m_filterRules = value; }

    /**
     * <p>The filter rules for the filter.</p>
     */
    inline void SetFilterRules(Aws::Vector<AwsS3BucketNotificationConfigurationS3KeyFilterRule>&& value) { m_filterRulesHasBeenSet = true; m_filterRules = std::move(value); }

    /**
     * <p>The filter rules for the filter.</p>
     */
    inline AwsS3BucketNotificationConfigurationS3KeyFilter& WithFilterRules(const Aws::Vector<AwsS3BucketNotificationConfigurationS3KeyFilterRule>& value) { SetFilterRules(value); return *this;}

    /**
     * <p>The filter rules for the filter.</p>
     */
    inline AwsS3BucketNotificationConfigurationS3KeyFilter& WithFilterRules(Aws::Vector<AwsS3BucketNotificationConfigurationS3KeyFilterRule>&& value) { SetFilterRules(std::move(value)); return *this;}

    /**
     * <p>The filter rules for the filter.</p>
     */
    inline AwsS3BucketNotificationConfigurationS3KeyFilter& AddFilterRules(const AwsS3BucketNotificationConfigurationS3KeyFilterRule& value) { m_filterRulesHasBeenSet = true; m_filterRules.push_back(value); return *this; }

    /**
     * <p>The filter rules for the filter.</p>
     */
    inline AwsS3BucketNotificationConfigurationS3KeyFilter& AddFilterRules(AwsS3BucketNotificationConfigurationS3KeyFilterRule&& value) { m_filterRulesHasBeenSet = true; m_filterRules.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AwsS3BucketNotificationConfigurationS3KeyFilterRule> m_filterRules;
    bool m_filterRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
