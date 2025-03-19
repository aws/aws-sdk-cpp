/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>

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
   * <p>Information about what Amazon S3 does when a multipart upload is
   * incomplete.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails() = default;
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of days after which Amazon S3 cancels an incomplete multipart
     * upload.</p>
     */
    inline int GetDaysAfterInitiation() const { return m_daysAfterInitiation; }
    inline bool DaysAfterInitiationHasBeenSet() const { return m_daysAfterInitiationHasBeenSet; }
    inline void SetDaysAfterInitiation(int value) { m_daysAfterInitiationHasBeenSet = true; m_daysAfterInitiation = value; }
    inline AwsS3BucketBucketLifecycleConfigurationRulesAbortIncompleteMultipartUploadDetails& WithDaysAfterInitiation(int value) { SetDaysAfterInitiation(value); return *this;}
    ///@}
  private:

    int m_daysAfterInitiation{0};
    bool m_daysAfterInitiationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
