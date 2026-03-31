/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ArtifactType.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 */
class AddArtifactRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API AddArtifactRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AddArtifact"; }

  AWS_SECURITYAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Unique identifier of the agent space</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  AddArtifactRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Binary content of the artifact</p>
   */
  inline const Aws::Utils::ByteBuffer& GetArtifactContent() const { return m_artifactContent; }
  inline bool ArtifactContentHasBeenSet() const { return m_artifactContentHasBeenSet; }
  template <typename ArtifactContentT = Aws::Utils::ByteBuffer>
  void SetArtifactContent(ArtifactContentT&& value) {
    m_artifactContentHasBeenSet = true;
    m_artifactContent = std::forward<ArtifactContentT>(value);
  }
  template <typename ArtifactContentT = Aws::Utils::ByteBuffer>
  AddArtifactRequest& WithArtifactContent(ArtifactContentT&& value) {
    SetArtifactContent(std::forward<ArtifactContentT>(value));
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
  inline AddArtifactRequest& WithArtifactType(ArtifactType value) {
    SetArtifactType(value);
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
  AddArtifactRequest& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::Utils::ByteBuffer m_artifactContent{};

  ArtifactType m_artifactType{ArtifactType::NOT_SET};

  Aws::String m_fileName;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_artifactContentHasBeenSet = false;
  bool m_artifactTypeHasBeenSet = false;
  bool m_fileNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
