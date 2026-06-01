/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AgentStatus.h>
#include <aws/quicksight/model/FailedToUpdateAssociation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class UpdateAgentResult {
 public:
  AWS_QUICKSIGHT_API UpdateAgentResult() = default;
  AWS_QUICKSIGHT_API UpdateAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API UpdateAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the agent.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateAgentResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the agent.</p>
   */
  inline const Aws::String& GetAgentId() const { return m_agentId; }
  template <typename AgentIdT = Aws::String>
  void SetAgentId(AgentIdT&& value) {
    m_agentIdHasBeenSet = true;
    m_agentId = std::forward<AgentIdT>(value);
  }
  template <typename AgentIdT = Aws::String>
  UpdateAgentResult& WithAgentId(AgentIdT&& value) {
    SetAgentId(std::forward<AgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the agent.</p>
   */
  inline AgentStatus GetAgentStatus() const { return m_agentStatus; }
  inline void SetAgentStatus(AgentStatus value) {
    m_agentStatusHasBeenSet = true;
    m_agentStatus = value;
  }
  inline UpdateAgentResult& WithAgentStatus(AgentStatus value) {
    SetAgentStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of per-ARN failures from the spaces that were requested to be
   * added.</p>
   */
  inline const Aws::Vector<FailedToUpdateAssociation>& GetFailedToAddSpaces() const { return m_failedToAddSpaces; }
  template <typename FailedToAddSpacesT = Aws::Vector<FailedToUpdateAssociation>>
  void SetFailedToAddSpaces(FailedToAddSpacesT&& value) {
    m_failedToAddSpacesHasBeenSet = true;
    m_failedToAddSpaces = std::forward<FailedToAddSpacesT>(value);
  }
  template <typename FailedToAddSpacesT = Aws::Vector<FailedToUpdateAssociation>>
  UpdateAgentResult& WithFailedToAddSpaces(FailedToAddSpacesT&& value) {
    SetFailedToAddSpaces(std::forward<FailedToAddSpacesT>(value));
    return *this;
  }
  template <typename FailedToAddSpacesT = FailedToUpdateAssociation>
  UpdateAgentResult& AddFailedToAddSpaces(FailedToAddSpacesT&& value) {
    m_failedToAddSpacesHasBeenSet = true;
    m_failedToAddSpaces.emplace_back(std::forward<FailedToAddSpacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of per-ARN failures from the spaces that were requested to be
   * removed.</p>
   */
  inline const Aws::Vector<FailedToUpdateAssociation>& GetFailedToRemoveSpaces() const { return m_failedToRemoveSpaces; }
  template <typename FailedToRemoveSpacesT = Aws::Vector<FailedToUpdateAssociation>>
  void SetFailedToRemoveSpaces(FailedToRemoveSpacesT&& value) {
    m_failedToRemoveSpacesHasBeenSet = true;
    m_failedToRemoveSpaces = std::forward<FailedToRemoveSpacesT>(value);
  }
  template <typename FailedToRemoveSpacesT = Aws::Vector<FailedToUpdateAssociation>>
  UpdateAgentResult& WithFailedToRemoveSpaces(FailedToRemoveSpacesT&& value) {
    SetFailedToRemoveSpaces(std::forward<FailedToRemoveSpacesT>(value));
    return *this;
  }
  template <typename FailedToRemoveSpacesT = FailedToUpdateAssociation>
  UpdateAgentResult& AddFailedToRemoveSpaces(FailedToRemoveSpacesT&& value) {
    m_failedToRemoveSpacesHasBeenSet = true;
    m_failedToRemoveSpaces.emplace_back(std::forward<FailedToRemoveSpacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of per-ARN failures from the action connectors that were requested to
   * be added.</p>
   */
  inline const Aws::Vector<FailedToUpdateAssociation>& GetFailedToAddActionConnectors() const { return m_failedToAddActionConnectors; }
  template <typename FailedToAddActionConnectorsT = Aws::Vector<FailedToUpdateAssociation>>
  void SetFailedToAddActionConnectors(FailedToAddActionConnectorsT&& value) {
    m_failedToAddActionConnectorsHasBeenSet = true;
    m_failedToAddActionConnectors = std::forward<FailedToAddActionConnectorsT>(value);
  }
  template <typename FailedToAddActionConnectorsT = Aws::Vector<FailedToUpdateAssociation>>
  UpdateAgentResult& WithFailedToAddActionConnectors(FailedToAddActionConnectorsT&& value) {
    SetFailedToAddActionConnectors(std::forward<FailedToAddActionConnectorsT>(value));
    return *this;
  }
  template <typename FailedToAddActionConnectorsT = FailedToUpdateAssociation>
  UpdateAgentResult& AddFailedToAddActionConnectors(FailedToAddActionConnectorsT&& value) {
    m_failedToAddActionConnectorsHasBeenSet = true;
    m_failedToAddActionConnectors.emplace_back(std::forward<FailedToAddActionConnectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of per-ARN failures from the action connectors that were requested to
   * be removed.</p>
   */
  inline const Aws::Vector<FailedToUpdateAssociation>& GetFailedToRemoveActionConnectors() const {
    return m_failedToRemoveActionConnectors;
  }
  template <typename FailedToRemoveActionConnectorsT = Aws::Vector<FailedToUpdateAssociation>>
  void SetFailedToRemoveActionConnectors(FailedToRemoveActionConnectorsT&& value) {
    m_failedToRemoveActionConnectorsHasBeenSet = true;
    m_failedToRemoveActionConnectors = std::forward<FailedToRemoveActionConnectorsT>(value);
  }
  template <typename FailedToRemoveActionConnectorsT = Aws::Vector<FailedToUpdateAssociation>>
  UpdateAgentResult& WithFailedToRemoveActionConnectors(FailedToRemoveActionConnectorsT&& value) {
    SetFailedToRemoveActionConnectors(std::forward<FailedToRemoveActionConnectorsT>(value));
    return *this;
  }
  template <typename FailedToRemoveActionConnectorsT = FailedToUpdateAssociation>
  UpdateAgentResult& AddFailedToRemoveActionConnectors(FailedToRemoveActionConnectorsT&& value) {
    m_failedToRemoveActionConnectorsHasBeenSet = true;
    m_failedToRemoveActionConnectors.emplace_back(std::forward<FailedToRemoveActionConnectorsT>(value));
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
  UpdateAgentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_agentId;

  AgentStatus m_agentStatus{AgentStatus::NOT_SET};

  Aws::Vector<FailedToUpdateAssociation> m_failedToAddSpaces;

  Aws::Vector<FailedToUpdateAssociation> m_failedToRemoveSpaces;

  Aws::Vector<FailedToUpdateAssociation> m_failedToAddActionConnectors;

  Aws::Vector<FailedToUpdateAssociation> m_failedToRemoveActionConnectors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_agentIdHasBeenSet = false;
  bool m_agentStatusHasBeenSet = false;
  bool m_failedToAddSpacesHasBeenSet = false;
  bool m_failedToRemoveSpacesHasBeenSet = false;
  bool m_failedToAddActionConnectorsHasBeenSet = false;
  bool m_failedToRemoveActionConnectorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
