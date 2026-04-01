/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/Artifact.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
class GetArtifactResult {
 public:
  AWS_SECURITYAGENT_API GetArtifactResult() = default;
  AWS_SECURITYAGENT_API GetArtifactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API GetArtifactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique identifier of the agent space</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  GetArtifactResult& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier of the artifact</p>
   */
  inline const Aws::String& GetArtifactId() const { return m_artifactId; }
  template <typename ArtifactIdT = Aws::String>
  void SetArtifactId(ArtifactIdT&& value) {
    m_artifactIdHasBeenSet = true;
    m_artifactId = std::forward<ArtifactIdT>(value);
  }
  template <typename ArtifactIdT = Aws::String>
  GetArtifactResult& WithArtifactId(ArtifactIdT&& value) {
    SetArtifactId(std::forward<ArtifactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Artifact details</p>
   */
  inline const Artifact& GetArtifact() const { return m_artifact; }
  template <typename ArtifactT = Artifact>
  void SetArtifact(ArtifactT&& value) {
    m_artifactHasBeenSet = true;
    m_artifact = std::forward<ArtifactT>(value);
  }
  template <typename ArtifactT = Artifact>
  GetArtifactResult& WithArtifact(ArtifactT&& value) {
    SetArtifact(std::forward<ArtifactT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the artifact file</p>
   */
  inline const Aws::String& GetFileName() const { return m_fileName; }
  template <typename FileNameT = Aws::String>
  void SetFileName(FileNameT&& value) {
    m_fileNameHasBeenSet = true;
    m_fileName = std::forward<FileNameT>(value);
  }
  template <typename FileNameT = Aws::String>
  GetArtifactResult& WithFileName(FileNameT&& value) {
    SetFileName(std::forward<FileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the artifact was last updated</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetArtifactResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetArtifactResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_agentSpaceId;

  Aws::String m_artifactId;

  Artifact m_artifact;

  Aws::String m_fileName;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_artifactIdHasBeenSet = false;
  bool m_artifactHasBeenSet = false;
  bool m_fileNameHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
