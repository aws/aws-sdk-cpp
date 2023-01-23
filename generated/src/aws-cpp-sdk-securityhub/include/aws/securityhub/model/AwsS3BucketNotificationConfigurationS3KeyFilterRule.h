/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsS3BucketNotificationConfigurationS3KeyFilterRuleName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Details for a filter rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketNotificationConfigurationS3KeyFilterRule">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketNotificationConfigurationS3KeyFilterRule
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationS3KeyFilterRule();
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationS3KeyFilterRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationS3KeyFilterRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether the filter is based on the prefix or suffix of the Amazon
     * S3 key.</p>
     */
    inline const AwsS3BucketNotificationConfigurationS3KeyFilterRuleName& GetName() const{ return m_name; }

    /**
     * <p>Indicates whether the filter is based on the prefix or suffix of the Amazon
     * S3 key.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Indicates whether the filter is based on the prefix or suffix of the Amazon
     * S3 key.</p>
     */
    inline void SetName(const AwsS3BucketNotificationConfigurationS3KeyFilterRuleName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Indicates whether the filter is based on the prefix or suffix of the Amazon
     * S3 key.</p>
     */
    inline void SetName(AwsS3BucketNotificationConfigurationS3KeyFilterRuleName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Indicates whether the filter is based on the prefix or suffix of the Amazon
     * S3 key.</p>
     */
    inline AwsS3BucketNotificationConfigurationS3KeyFilterRule& WithName(const AwsS3BucketNotificationConfigurationS3KeyFilterRuleName& value) { SetName(value); return *this;}

    /**
     * <p>Indicates whether the filter is based on the prefix or suffix of the Amazon
     * S3 key.</p>
     */
    inline AwsS3BucketNotificationConfigurationS3KeyFilterRule& WithName(AwsS3BucketNotificationConfigurationS3KeyFilterRuleName&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The filter value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The filter value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The filter value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The filter value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The filter value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The filter value.</p>
     */
    inline AwsS3BucketNotificationConfigurationS3KeyFilterRule& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The filter value.</p>
     */
    inline AwsS3BucketNotificationConfigurationS3KeyFilterRule& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The filter value.</p>
     */
    inline AwsS3BucketNotificationConfigurationS3KeyFilterRule& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    AwsS3BucketNotificationConfigurationS3KeyFilterRuleName m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
