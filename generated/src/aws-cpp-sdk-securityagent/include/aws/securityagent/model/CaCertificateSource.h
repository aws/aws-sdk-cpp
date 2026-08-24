/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>The source of a trusted CA certificate. Exactly one member must be
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/CaCertificateSource">AWS
 * API Reference</a></p>
 */
class CaCertificateSource {
 public:
  AWS_SECURITYAGENT_API CaCertificateSource() = default;
  AWS_SECURITYAGENT_API CaCertificateSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API CaCertificateSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A PEM-encoded X.509 certificate supplied inline.</p>
   */
  inline const Aws::String& GetInlinePem() const { return m_inlinePem; }
  inline bool InlinePemHasBeenSet() const { return m_inlinePemHasBeenSet; }
  template <typename InlinePemT = Aws::String>
  void SetInlinePem(InlinePemT&& value) {
    m_inlinePemHasBeenSet = true;
    m_inlinePem = std::forward<InlinePemT>(value);
  }
  template <typename InlinePemT = Aws::String>
  CaCertificateSource& WithInlinePem(InlinePemT&& value) {
    SetInlinePem(std::forward<InlinePemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The artifact ID of an uploaded certificate file.</p>
   */
  inline const Aws::String& GetArtifactId() const { return m_artifactId; }
  inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }
  template <typename ArtifactIdT = Aws::String>
  void SetArtifactId(ArtifactIdT&& value) {
    m_artifactIdHasBeenSet = true;
    m_artifactId = std::forward<ArtifactIdT>(value);
  }
  template <typename ArtifactIdT = Aws::String>
  CaCertificateSource& WithArtifactId(ArtifactIdT&& value) {
    SetArtifactId(std::forward<ArtifactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location URI of a customer-staged certificate.</p>
   */
  inline const Aws::String& GetS3Location() const { return m_s3Location; }
  inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
  template <typename S3LocationT = Aws::String>
  void SetS3Location(S3LocationT&& value) {
    m_s3LocationHasBeenSet = true;
    m_s3Location = std::forward<S3LocationT>(value);
  }
  template <typename S3LocationT = Aws::String>
  CaCertificateSource& WithS3Location(S3LocationT&& value) {
    SetS3Location(std::forward<S3LocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inlinePem;

  Aws::String m_artifactId;

  Aws::String m_s3Location;
  bool m_inlinePemHasBeenSet = false;
  bool m_artifactIdHasBeenSet = false;
  bool m_s3LocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
