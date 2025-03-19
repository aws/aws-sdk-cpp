/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>Contains encryption related settings to be used for data encryption with Key
   * Management Service, including KmsEncryptionContext and KmsKeyId. The KmsKeyId is
   * required, while KmsEncryptionContext is optional for additional layer of
   * security. </p> <p>By default, Amazon Web Services HealthScribe provides
   * encryption at rest to protect sensitive customer data using Amazon S3-managed
   * keys. HealthScribe uses the KMS key you specify as a second layer of
   * encryption.</p> <p> Your <code>ResourceAccessRoleArn</code> must permission to
   * use your KMS key. For more information, see <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/health-scribe-encryption.html">Data
   * Encryption at rest for Amazon Web Services HealthScribe</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribeEncryptionSettings">AWS
   * API Reference</a></p>
   */
  class MedicalScribeEncryptionSettings
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeEncryptionSettings() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeEncryptionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeEncryptionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map of plain text, non-secret key:value pairs, known as encryption context
     * pairs, that provide an added layer of security for your data. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMSencryption
     * context </a> and <a
     * href="https://docs.aws.amazon.com/transcribe/latest/dg/symmetric-asymmetric.html">Asymmetric
     * keys in KMS </a>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetKmsEncryptionContext() const { return m_kmsEncryptionContext; }
    inline bool KmsEncryptionContextHasBeenSet() const { return m_kmsEncryptionContextHasBeenSet; }
    template<typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    void SetKmsEncryptionContext(KmsEncryptionContextT&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = std::forward<KmsEncryptionContextT>(value); }
    template<typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    MedicalScribeEncryptionSettings& WithKmsEncryptionContext(KmsEncryptionContextT&& value) { SetKmsEncryptionContext(std::forward<KmsEncryptionContextT>(value)); return *this;}
    template<typename KmsEncryptionContextKeyT = Aws::String, typename KmsEncryptionContextValueT = Aws::String>
    MedicalScribeEncryptionSettings& AddKmsEncryptionContext(KmsEncryptionContextKeyT&& key, KmsEncryptionContextValueT&& value) {
      m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::forward<KmsEncryptionContextKeyT>(key), std::forward<KmsEncryptionContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the KMS key you want to use for your streaming session. You can
     * specify its KMS key ID, key Amazon Resource Name (ARN), alias name, or alias
     * ARN. When using an alias name, prefix it with <code>"alias/"</code>. To specify
     * a KMS key in a different Amazon Web Services account, you must use the key ARN
     * or alias ARN.</p> <p>For example:</p> <ul> <li> <p>Key ID:
     * 1234abcd-12ab-34cd-56ef-1234567890ab</p> </li> <li> <p>Key ARN:
     * arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</p>
     * </li> <li> <p> Alias name: alias/ExampleAlias</p> </li> <li> <p> Alias ARN:
     * arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias </p> </li> </ul> <p> To
     * get the key ID and key ARN for a KMS key, use the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_ListKeys.html">ListKeys</a>
     * or <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html">DescribeKey</a>
     * KMS API operations. To get the alias name and alias ARN, use <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_ListAliases.html">ListKeys</a>
     * API operation. </p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    MedicalScribeEncryptionSettings& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_kmsEncryptionContext;
    bool m_kmsEncryptionContextHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
