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
   * <p> Specifies the method used to encrypt the user’s data stores in the Athena
   * workgroup. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails();
    AWS_SECURITYHUB_API AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates whether Amazon Simple Storage Service (Amazon S3) server-side
     * encryption with Amazon S3 managed keys (SSE_S3), server-side encryption with KMS
     * keys (SSE_KMS), or client-side encryption with KMS customer managed keys
     * (CSE_KMS) is used. </p>
     */
    inline const Aws::String& GetEncryptionOption() const{ return m_encryptionOption; }

    /**
     * <p> Indicates whether Amazon Simple Storage Service (Amazon S3) server-side
     * encryption with Amazon S3 managed keys (SSE_S3), server-side encryption with KMS
     * keys (SSE_KMS), or client-side encryption with KMS customer managed keys
     * (CSE_KMS) is used. </p>
     */
    inline bool EncryptionOptionHasBeenSet() const { return m_encryptionOptionHasBeenSet; }

    /**
     * <p> Indicates whether Amazon Simple Storage Service (Amazon S3) server-side
     * encryption with Amazon S3 managed keys (SSE_S3), server-side encryption with KMS
     * keys (SSE_KMS), or client-side encryption with KMS customer managed keys
     * (CSE_KMS) is used. </p>
     */
    inline void SetEncryptionOption(const Aws::String& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = value; }

    /**
     * <p> Indicates whether Amazon Simple Storage Service (Amazon S3) server-side
     * encryption with Amazon S3 managed keys (SSE_S3), server-side encryption with KMS
     * keys (SSE_KMS), or client-side encryption with KMS customer managed keys
     * (CSE_KMS) is used. </p>
     */
    inline void SetEncryptionOption(Aws::String&& value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption = std::move(value); }

    /**
     * <p> Indicates whether Amazon Simple Storage Service (Amazon S3) server-side
     * encryption with Amazon S3 managed keys (SSE_S3), server-side encryption with KMS
     * keys (SSE_KMS), or client-side encryption with KMS customer managed keys
     * (CSE_KMS) is used. </p>
     */
    inline void SetEncryptionOption(const char* value) { m_encryptionOptionHasBeenSet = true; m_encryptionOption.assign(value); }

    /**
     * <p> Indicates whether Amazon Simple Storage Service (Amazon S3) server-side
     * encryption with Amazon S3 managed keys (SSE_S3), server-side encryption with KMS
     * keys (SSE_KMS), or client-side encryption with KMS customer managed keys
     * (CSE_KMS) is used. </p>
     */
    inline AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails& WithEncryptionOption(const Aws::String& value) { SetEncryptionOption(value); return *this;}

    /**
     * <p> Indicates whether Amazon Simple Storage Service (Amazon S3) server-side
     * encryption with Amazon S3 managed keys (SSE_S3), server-side encryption with KMS
     * keys (SSE_KMS), or client-side encryption with KMS customer managed keys
     * (CSE_KMS) is used. </p>
     */
    inline AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails& WithEncryptionOption(Aws::String&& value) { SetEncryptionOption(std::move(value)); return *this;}

    /**
     * <p> Indicates whether Amazon Simple Storage Service (Amazon S3) server-side
     * encryption with Amazon S3 managed keys (SSE_S3), server-side encryption with KMS
     * keys (SSE_KMS), or client-side encryption with KMS customer managed keys
     * (CSE_KMS) is used. </p>
     */
    inline AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails& WithEncryptionOption(const char* value) { SetEncryptionOption(value); return *this;}


    /**
     * <p> For <code>SSE_KMS</code> and <code>CSE_KMS</code>, this is the KMS key
     * Amazon Resource Name (ARN) or ID. </p>
     */
    inline const Aws::String& GetKmsKey() const{ return m_kmsKey; }

    /**
     * <p> For <code>SSE_KMS</code> and <code>CSE_KMS</code>, this is the KMS key
     * Amazon Resource Name (ARN) or ID. </p>
     */
    inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }

    /**
     * <p> For <code>SSE_KMS</code> and <code>CSE_KMS</code>, this is the KMS key
     * Amazon Resource Name (ARN) or ID. </p>
     */
    inline void SetKmsKey(const Aws::String& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = value; }

    /**
     * <p> For <code>SSE_KMS</code> and <code>CSE_KMS</code>, this is the KMS key
     * Amazon Resource Name (ARN) or ID. </p>
     */
    inline void SetKmsKey(Aws::String&& value) { m_kmsKeyHasBeenSet = true; m_kmsKey = std::move(value); }

    /**
     * <p> For <code>SSE_KMS</code> and <code>CSE_KMS</code>, this is the KMS key
     * Amazon Resource Name (ARN) or ID. </p>
     */
    inline void SetKmsKey(const char* value) { m_kmsKeyHasBeenSet = true; m_kmsKey.assign(value); }

    /**
     * <p> For <code>SSE_KMS</code> and <code>CSE_KMS</code>, this is the KMS key
     * Amazon Resource Name (ARN) or ID. </p>
     */
    inline AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails& WithKmsKey(const Aws::String& value) { SetKmsKey(value); return *this;}

    /**
     * <p> For <code>SSE_KMS</code> and <code>CSE_KMS</code>, this is the KMS key
     * Amazon Resource Name (ARN) or ID. </p>
     */
    inline AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails& WithKmsKey(Aws::String&& value) { SetKmsKey(std::move(value)); return *this;}

    /**
     * <p> For <code>SSE_KMS</code> and <code>CSE_KMS</code>, this is the KMS key
     * Amazon Resource Name (ARN) or ID. </p>
     */
    inline AwsAthenaWorkGroupConfigurationResultConfigurationEncryptionConfigurationDetails& WithKmsKey(const char* value) { SetKmsKey(value); return *this;}

  private:

    Aws::String m_encryptionOption;
    bool m_encryptionOptionHasBeenSet = false;

    Aws::String m_kmsKey;
    bool m_kmsKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
