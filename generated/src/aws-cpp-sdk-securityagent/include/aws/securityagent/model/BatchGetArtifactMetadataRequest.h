/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgentRequest.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SecurityAgent {
namespace Model {

/**
 */
class BatchGetArtifactMetadataRequest : public SecurityAgentRequest {
 public:
  AWS_SECURITYAGENT_API BatchGetArtifactMetadataRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchGetArtifactMetadata"; }

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
  BatchGetArtifactMetadataRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of artifact identifiers</p>
   */
  inline const Aws::Vector<Aws::String>& GetArtifactIds() const { return m_artifactIds; }
  inline bool ArtifactIdsHasBeenSet() const { return m_artifactIdsHasBeenSet; }
  template <typename ArtifactIdsT = Aws::Vector<Aws::String>>
  void SetArtifactIds(ArtifactIdsT&& value) {
    m_artifactIdsHasBeenSet = true;
    m_artifactIds = std::forward<ArtifactIdsT>(value);
  }
  template <typename ArtifactIdsT = Aws::Vector<Aws::String>>
  BatchGetArtifactMetadataRequest& WithArtifactIds(ArtifactIdsT&& value) {
    SetArtifactIds(std::forward<ArtifactIdsT>(value));
    return *this;
  }
  template <typename ArtifactIdsT = Aws::String>
  BatchGetArtifactMetadataRequest& AddArtifactIds(ArtifactIdsT&& value) {
    m_artifactIdsHasBeenSet = true;
    m_artifactIds.emplace_back(std::forward<ArtifactIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::Vector<Aws::String> m_artifactIds;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_artifactIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
