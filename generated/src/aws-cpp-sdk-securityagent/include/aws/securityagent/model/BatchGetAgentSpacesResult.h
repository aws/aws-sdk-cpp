/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/AgentSpace.h>

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
/**
 * <p>Output for the BatchGetAgentSpaces operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchGetAgentSpacesOutput">AWS
 * API Reference</a></p>
 */
class BatchGetAgentSpacesResult {
 public:
  AWS_SECURITYAGENT_API BatchGetAgentSpacesResult() = default;
  AWS_SECURITYAGENT_API BatchGetAgentSpacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchGetAgentSpacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of agent spaces that were successfully retrieved</p>
   */
  inline const Aws::Vector<AgentSpace>& GetAgentSpaces() const { return m_agentSpaces; }
  template <typename AgentSpacesT = Aws::Vector<AgentSpace>>
  void SetAgentSpaces(AgentSpacesT&& value) {
    m_agentSpacesHasBeenSet = true;
    m_agentSpaces = std::forward<AgentSpacesT>(value);
  }
  template <typename AgentSpacesT = Aws::Vector<AgentSpace>>
  BatchGetAgentSpacesResult& WithAgentSpaces(AgentSpacesT&& value) {
    SetAgentSpaces(std::forward<AgentSpacesT>(value));
    return *this;
  }
  template <typename AgentSpacesT = AgentSpace>
  BatchGetAgentSpacesResult& AddAgentSpaces(AgentSpacesT&& value) {
    m_agentSpacesHasBeenSet = true;
    m_agentSpaces.emplace_back(std::forward<AgentSpacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of agent space IDs that could not be found</p>
   */
  inline const Aws::Vector<Aws::String>& GetNotFound() const { return m_notFound; }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  void SetNotFound(NotFoundT&& value) {
    m_notFoundHasBeenSet = true;
    m_notFound = std::forward<NotFoundT>(value);
  }
  template <typename NotFoundT = Aws::Vector<Aws::String>>
  BatchGetAgentSpacesResult& WithNotFound(NotFoundT&& value) {
    SetNotFound(std::forward<NotFoundT>(value));
    return *this;
  }
  template <typename NotFoundT = Aws::String>
  BatchGetAgentSpacesResult& AddNotFound(NotFoundT&& value) {
    m_notFoundHasBeenSet = true;
    m_notFound.emplace_back(std::forward<NotFoundT>(value));
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
  BatchGetAgentSpacesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AgentSpace> m_agentSpaces;

  Aws::Vector<Aws::String> m_notFound;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agentSpacesHasBeenSet = false;
  bool m_notFoundHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
