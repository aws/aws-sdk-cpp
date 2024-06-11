/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsS3BucketNotificationConfigurationS3KeyFilter.h>
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
   * <p>Filtering information for the notifications. The filtering is based on Amazon
   * S3 key names.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketNotificationConfigurationFilter">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketNotificationConfigurationFilter
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationFilter();
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketNotificationConfigurationFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details for an Amazon S3 filter.</p>
     */
    inline const AwsS3BucketNotificationConfigurationS3KeyFilter& GetS3KeyFilter() const{ return m_s3KeyFilter; }
    inline bool S3KeyFilterHasBeenSet() const { return m_s3KeyFilterHasBeenSet; }
    inline void SetS3KeyFilter(const AwsS3BucketNotificationConfigurationS3KeyFilter& value) { m_s3KeyFilterHasBeenSet = true; m_s3KeyFilter = value; }
    inline void SetS3KeyFilter(AwsS3BucketNotificationConfigurationS3KeyFilter&& value) { m_s3KeyFilterHasBeenSet = true; m_s3KeyFilter = std::move(value); }
    inline AwsS3BucketNotificationConfigurationFilter& WithS3KeyFilter(const AwsS3BucketNotificationConfigurationS3KeyFilter& value) { SetS3KeyFilter(value); return *this;}
    inline AwsS3BucketNotificationConfigurationFilter& WithS3KeyFilter(AwsS3BucketNotificationConfigurationS3KeyFilter&& value) { SetS3KeyFilter(std::move(value)); return *this;}
    ///@}
  private:

    AwsS3BucketNotificationConfigurationS3KeyFilter m_s3KeyFilter;
    bool m_s3KeyFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
