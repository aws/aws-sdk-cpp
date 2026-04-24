/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ArtifactType.h>

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
 * <p>Summary information about an artifact</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ArtifactSummary">AWS
 * API Reference</a></p>
 */
class ArtifactSummary {
 public:
  AWS_SECURITYAGENT_API ArtifactSummary() = default;
  AWS_SECURITYAGENT_API ArtifactSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ArtifactSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique identifier of the artifact</p>
   */
  inline const Aws::String& GetArtifactId() const { return m_artifactId; }
  inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }
  template <typename ArtifactIdT = Aws::String>
  void SetArtifactId(ArtifactIdT&& value) {
    m_artifactIdHasBeenSet = true;
    m_artifactId = std::forward<ArtifactIdT>(value);
  }
  template <typename ArtifactIdT = Aws::String>
  ArtifactSummary& WithArtifactId(ArtifactIdT&& value) {
    SetArtifactId(std::forward<ArtifactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the artifact file</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  ArtifactSummary& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of the artifact file</p>
   */
  inline ArtifactType GetArtifactType() const { return m_artifactType; }
  inline bool ArtifactTypeHasBeenSet() const { return m_artifactTypeHasBeenSet; }
  inline void SetArtifactType(ArtifactType value) {
    m_artifactTypeHasBeenSet = true;
    m_artifactType = value;
  }
  inline ArtifactSummary& WithArtifactType(ArtifactType value) {
    SetArtifactType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_artifactId;

  Aws::String m_fileName;

  ArtifactType m_artifactType{ArtifactType::NOT_SET};
  bool m_artifactIdHasBeenSet = false;
  bool m_fileNameHasBeenSet = false;
  bool m_artifactTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
