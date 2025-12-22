/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/SSEAlgorithm.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Defines the encryption configuration for S3 Table integrations, including the
 * encryption algorithm and KMS key settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/Encryption">AWS
 * API Reference</a></p>
 */
class Encryption {
 public:
  AWS_OBSERVABILITYADMIN_API Encryption() = default;
  AWS_OBSERVABILITYADMIN_API Encryption(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Encryption& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The server-side encryption algorithm used for encrypting data in the S3 Table
   * integration.</p>
   */
  inline SSEAlgorithm GetSseAlgorithm() const { return m_sseAlgorithm; }
  inline bool SseAlgorithmHasBeenSet() const { return m_sseAlgorithmHasBeenSet; }
  inline void SetSseAlgorithm(SSEAlgorithm value) {
    m_sseAlgorithmHasBeenSet = true;
    m_sseAlgorithm = value;
  }
  inline Encryption& WithSseAlgorithm(SSEAlgorithm value) {
    SetSseAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key used for encryption when using
   * customer-managed keys.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  Encryption& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  SSEAlgorithm m_sseAlgorithm{SSEAlgorithm::NOT_SET};

  Aws::String m_kmsKeyArn;
  bool m_sseAlgorithmHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
