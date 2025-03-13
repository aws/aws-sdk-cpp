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
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationS3KeyFilterRule() = default;
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationS3KeyFilterRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationS3KeyFilterRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether the filter is based on the prefix or suffix of the Amazon
     * S3 key.</p>
     */
    inline AwsS3BucketNotificationConfigurationS3KeyFilterRuleName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(AwsS3BucketNotificationConfigurationS3KeyFilterRuleName value) { m_nameHasBeenSet = true; m_name = value; }
    inline AwsS3BucketNotificationConfigurationS3KeyFilterRule& WithName(AwsS3BucketNotificationConfigurationS3KeyFilterRuleName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter value.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    AwsS3BucketNotificationConfigurationS3KeyFilterRule& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    AwsS3BucketNotificationConfigurationS3KeyFilterRuleName m_name{AwsS3BucketNotificationConfigurationS3KeyFilterRuleName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
