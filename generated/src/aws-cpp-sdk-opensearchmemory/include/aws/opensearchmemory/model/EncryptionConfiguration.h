/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {

/**
 * <p>Encryption settings for a space.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/EncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class EncryptionConfiguration {
 public:
  AWS_OPENSEARCHMEMORY_API EncryptionConfiguration() = default;
  AWS_OPENSEARCHMEMORY_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of a customer managed AWS KMS key that encrypts the space's data. The
   * key must be an enabled symmetric encryption key in the space's Region, and you
   * need permission to create grants on it (<code>kms:CreateGrant</code>).
   * Otherwise, the request fails with <code>ValidationException</code> or
   * <code>AccessDeniedException</code>.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  EncryptionConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKeyArn;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
