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
 * <p>Information about a document relevant to security testing</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/DocumentInfo">AWS
 * API Reference</a></p>
 */
class DocumentInfo {
 public:
  AWS_SECURITYAGENT_API DocumentInfo() = default;
  AWS_SECURITYAGENT_API DocumentInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API DocumentInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>S3 storage location of the document</p>
   */
  inline const Aws::String& GetS3Location() const { return m_s3Location; }
  inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
  template <typename S3LocationT = Aws::String>
  void SetS3Location(S3LocationT&& value) {
    m_s3LocationHasBeenSet = true;
    m_s3Location = std::forward<S3LocationT>(value);
  }
  template <typename S3LocationT = Aws::String>
  DocumentInfo& WithS3Location(S3LocationT&& value) {
    SetS3Location(std::forward<S3LocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Artifact ID of the document</p>
   */
  inline const Aws::String& GetArtifactId() const { return m_artifactId; }
  inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }
  template <typename ArtifactIdT = Aws::String>
  void SetArtifactId(ArtifactIdT&& value) {
    m_artifactIdHasBeenSet = true;
    m_artifactId = std::forward<ArtifactIdT>(value);
  }
  template <typename ArtifactIdT = Aws::String>
  DocumentInfo& WithArtifactId(ArtifactIdT&& value) {
    SetArtifactId(std::forward<ArtifactIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3Location;

  Aws::String m_artifactId;
  bool m_s3LocationHasBeenSet = false;
  bool m_artifactIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
