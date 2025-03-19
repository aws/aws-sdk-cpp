/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
   * <p>Specifies the default server-side encryption to apply to new objects in the
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsS3BucketServerSideEncryptionByDefault">AWS
   * API Reference</a></p>
   */
  class AwsS3BucketServerSideEncryptionByDefault
  {
  public:
    AWS_SECURITYHUB_API AwsS3BucketServerSideEncryptionByDefault() = default;
    AWS_SECURITYHUB_API AwsS3BucketServerSideEncryptionByDefault(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsS3BucketServerSideEncryptionByDefault& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Server-side encryption algorithm to use for the default encryption. Valid
     * values are <code>aws: kms</code> or <code>AES256</code>.</p>
     */
    inline const Aws::String& GetSSEAlgorithm() const { return m_sSEAlgorithm; }
    inline bool SSEAlgorithmHasBeenSet() const { return m_sSEAlgorithmHasBeenSet; }
    template<typename SSEAlgorithmT = Aws::String>
    void SetSSEAlgorithm(SSEAlgorithmT&& value) { m_sSEAlgorithmHasBeenSet = true; m_sSEAlgorithm = std::forward<SSEAlgorithmT>(value); }
    template<typename SSEAlgorithmT = Aws::String>
    AwsS3BucketServerSideEncryptionByDefault& WithSSEAlgorithm(SSEAlgorithmT&& value) { SetSSEAlgorithm(std::forward<SSEAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>KMS key ID to use for the default encryption.</p>
     */
    inline const Aws::String& GetKMSMasterKeyID() const { return m_kMSMasterKeyID; }
    inline bool KMSMasterKeyIDHasBeenSet() const { return m_kMSMasterKeyIDHasBeenSet; }
    template<typename KMSMasterKeyIDT = Aws::String>
    void SetKMSMasterKeyID(KMSMasterKeyIDT&& value) { m_kMSMasterKeyIDHasBeenSet = true; m_kMSMasterKeyID = std::forward<KMSMasterKeyIDT>(value); }
    template<typename KMSMasterKeyIDT = Aws::String>
    AwsS3BucketServerSideEncryptionByDefault& WithKMSMasterKeyID(KMSMasterKeyIDT&& value) { SetKMSMasterKeyID(std::forward<KMSMasterKeyIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sSEAlgorithm;
    bool m_sSEAlgorithmHasBeenSet = false;

    Aws::String m_kMSMasterKeyID;
    bool m_kMSMasterKeyIDHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
