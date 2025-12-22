/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mwaa-serverless/MWAAServerless_EXPORTS.h>
#include <aws/mwaa-serverless/model/EncryptionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MWAAServerless {
namespace Model {

/**
 * <p>Configuration for encrypting workflow data at rest and in transit. Amazon
 * Managed Workflows for Apache Airflow Serverless provides comprehensive
 * encryption capabilities to protect sensitive workflow data, parameters, and
 * execution logs. When using customer-managed keys, the service integrates with
 * Amazon Web Services KMS to provide fine-grained access control and audit
 * capabilities. Encryption is applied consistently across the distributed
 * execution environment including task containers, metadata storage, and log
 * streams.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mwaa-serverless-2024-07-26/EncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class EncryptionConfiguration {
 public:
  AWS_MWAASERVERLESS_API EncryptionConfiguration() = default;
  AWS_MWAASERVERLESS_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MWAASERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of encryption to use. Values are <code>AWS_MANAGED_KEY</code>
   * (Amazon Web Services manages the encryption key) or
   * <code>CUSTOMER_MANAGED_KEY</code> (you provide a KMS key).</p>
   */
  inline EncryptionType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EncryptionType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline EncryptionConfiguration& WithType(EncryptionType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID or ARN of the Amazon Web Services KMS key to use for encryption.
   * Required when <code>Type</code> is <code>CUSTOMER_MANAGED_KEY</code>.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  EncryptionConfiguration& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  EncryptionType m_type{EncryptionType::NOT_SET};

  Aws::String m_kmsKeyId;
  bool m_typeHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MWAAServerless
}  // namespace Aws
