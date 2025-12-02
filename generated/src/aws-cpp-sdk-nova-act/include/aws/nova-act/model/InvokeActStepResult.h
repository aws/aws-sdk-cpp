/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>
#include <aws/nova-act/model/Call.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {
class InvokeActStepResult {
 public:
  AWS_NOVAACT_API InvokeActStepResult() = default;
  AWS_NOVAACT_API InvokeActStepResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NOVAACT_API InvokeActStepResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of tool calls that the act wants to execute in this step.</p>
   */
  inline const Aws::Vector<Call>& GetCalls() const { return m_calls; }
  template <typename CallsT = Aws::Vector<Call>>
  void SetCalls(CallsT&& value) {
    m_callsHasBeenSet = true;
    m_calls = std::forward<CallsT>(value);
  }
  template <typename CallsT = Aws::Vector<Call>>
  InvokeActStepResult& WithCalls(CallsT&& value) {
    SetCalls(std::forward<CallsT>(value));
    return *this;
  }
  template <typename CallsT = Call>
  InvokeActStepResult& AddCalls(CallsT&& value) {
    m_callsHasBeenSet = true;
    m_calls.emplace_back(std::forward<CallsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for this execution step.</p>
   */
  inline const Aws::String& GetStepId() const { return m_stepId; }
  template <typename StepIdT = Aws::String>
  void SetStepId(StepIdT&& value) {
    m_stepIdHasBeenSet = true;
    m_stepId = std::forward<StepIdT>(value);
  }
  template <typename StepIdT = Aws::String>
  InvokeActStepResult& WithStepId(StepIdT&& value) {
    SetStepId(std::forward<StepIdT>(value));
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
  InvokeActStepResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Call> m_calls;
  bool m_callsHasBeenSet = false;

  Aws::String m_stepId;
  bool m_stepIdHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
