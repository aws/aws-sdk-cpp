/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AgentStatus.h>

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
class CreateAgentResult {
 public:
  AWS_QUICKSIGHT_API CreateAgentResult() = default;
  AWS_QUICKSIGHT_API CreateAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API CreateAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  CreateAgentResult& WithArn(ArnT&& value) {
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
  CreateAgentResult& WithAgentId(AgentIdT&& value) {
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
  inline CreateAgentResult& WithAgentStatus(AgentStatus value) {
    SetAgentStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the agent.</p>
   */
  inline const Aws::String& GetAgentName() const { return m_agentName; }
  template <typename AgentNameT = Aws::String>
  void SetAgentName(AgentNameT&& value) {
    m_agentNameHasBeenSet = true;
    m_agentName = std::forward<AgentNameT>(value);
  }
  template <typename AgentNameT = Aws::String>
  CreateAgentResult& WithAgentName(AgentNameT&& value) {
    SetAgentName(std::forward<AgentNameT>(value));
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
  CreateAgentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_agentId;

  AgentStatus m_agentStatus{AgentStatus::NOT_SET};

  Aws::String m_agentName;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_agentIdHasBeenSet = false;
  bool m_agentStatusHasBeenSet = false;
  bool m_agentNameHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
