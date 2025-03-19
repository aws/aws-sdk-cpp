/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsS3BucketServerSideEncryptionByDefault.h>
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
   * <p>An encryption rule to apply to the S3 bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketServerSideEncryptionRule">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketServerSideEncryptionRule
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketServerSideEncryptionRule() = default;
    AWS_SECURITYHUB_API AwsS3BucketServerSideEncryptionRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketServerSideEncryptionRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the default server-side encryption to apply to new objects in the
     * bucket. If a <code>PUT</code> object request doesn't specify any server-side
     * encryption, this default encryption is applied.</p>
     */
    inline const AwsS3BucketServerSideEncryptionByDefault& GetApplyServerSideEncryptionByDefault() const { return m_applyServerSideEncryptionByDefault; }
    inline bool ApplyServerSideEncryptionByDefaultHasBeenSet() const { return m_applyServerSideEncryptionByDefaultHasBeenSet; }
    template<typename ApplyServerSideEncryptionByDefaultT = AwsS3BucketServerSideEncryptionByDefault>
    void SetApplyServerSideEncryptionByDefault(ApplyServerSideEncryptionByDefaultT&& value) { m_applyServerSideEncryptionByDefaultHasBeenSet = true; m_applyServerSideEncryptionByDefault = std::forward<ApplyServerSideEncryptionByDefaultT>(value); }
    template<typename ApplyServerSideEncryptionByDefaultT = AwsS3BucketServerSideEncryptionByDefault>
    AwsS3BucketServerSideEncryptionRule& WithApplyServerSideEncryptionByDefault(ApplyServerSideEncryptionByDefaultT&& value) { SetApplyServerSideEncryptionByDefault(std::forward<ApplyServerSideEncryptionByDefaultT>(value)); return *this;}
    ///@}
  private:

    AwsS3BucketServerSideEncryptionByDefault m_applyServerSideEncryptionByDefault;
    bool m_applyServerSideEncryptionByDefaultHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
