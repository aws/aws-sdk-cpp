/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/transcribe/TranscribeService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace TranscribeService {
namespace Model {

/**
 * Encryption configuration for the invocation<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/EncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class EncryptionConfiguration {
 public:
  AWS_TRANSCRIBESERVICE_API EncryptionConfiguration() = default;
  AWS_TRANSCRIBESERVICE_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSCRIBESERVICE_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of plain text, non-secret key:value pairs, known as encryption context
   * pairs, that provide an added layer of security for your data. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/key-management.html#kms-context">KMS
   * encryption context</a>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetKMSEncryptionContext() const { return m_kMSEncryptionContext; }
  inline bool KMSEncryptionContextHasBeenSet() const { return m_kMSEncryptionContextHasBeenSet; }
  template <typename KMSEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  void SetKMSEncryptionContext(KMSEncryptionContextT&& value) {
    m_kMSEncryptionContextHasBeenSet = true;
    m_kMSEncryptionContext = std::forward<KMSEncryptionContextT>(value);
  }
  template <typename KMSEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
  EncryptionConfiguration& WithKMSEncryptionContext(KMSEncryptionContextT&& value) {
    SetKMSEncryptionContext(std::forward<KMSEncryptionContextT>(value));
    return *this;
  }
  template <typename KMSEncryptionContextKeyT = Aws::String, typename KMSEncryptionContextValueT = Aws::String>
  EncryptionConfiguration& AddKMSEncryptionContext(KMSEncryptionContextKeyT&& key, KMSEncryptionContextValueT&& value) {
    m_kMSEncryptionContextHasBeenSet = true;
    m_kMSEncryptionContext.emplace(std::forward<KMSEncryptionContextKeyT>(key), std::forward<KMSEncryptionContextValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key you want to use to encrypt your
   * resource artifacts. Only full KMS key ARN format is supported.</p> <p>KMS key
   * ARNs have the format <code>arn:partition:kms:region:account:key/key-id</code>.
   * For example:
   * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">KMS
   * key ARNs</a>.</p>
   */
  inline const Aws::String& GetKMSKey() const { return m_kMSKey; }
  inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
  template <typename KMSKeyT = Aws::String>
  void SetKMSKey(KMSKeyT&& value) {
    m_kMSKeyHasBeenSet = true;
    m_kMSKey = std::forward<KMSKeyT>(value);
  }
  template <typename KMSKeyT = Aws::String>
  EncryptionConfiguration& WithKMSKey(KMSKeyT&& value) {
    SetKMSKey(std::forward<KMSKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_kMSEncryptionContext;

  Aws::String m_kMSKey;
  bool m_kMSEncryptionContextHasBeenSet = false;
  bool m_kMSKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws
