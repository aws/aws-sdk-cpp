/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>
#include <aws/security-ir/model/InvestigationAction.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityIR {
namespace Model {
class ListInvestigationsResult {
 public:
  AWS_SECURITYIR_API ListInvestigationsResult() = default;
  AWS_SECURITYIR_API ListInvestigationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYIR_API ListInvestigationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Investigation performed by an agent for a security incident for next
   * Token</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListInvestigationsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Investigation performed by an agent for a security incid…Unique identifier
   * for the specific investigation&gt;</p>
   */
  inline const Aws::Vector<InvestigationAction>& GetInvestigationActions() const { return m_investigationActions; }
  template <typename InvestigationActionsT = Aws::Vector<InvestigationAction>>
  void SetInvestigationActions(InvestigationActionsT&& value) {
    m_investigationActionsHasBeenSet = true;
    m_investigationActions = std::forward<InvestigationActionsT>(value);
  }
  template <typename InvestigationActionsT = Aws::Vector<InvestigationAction>>
  ListInvestigationsResult& WithInvestigationActions(InvestigationActionsT&& value) {
    SetInvestigationActions(std::forward<InvestigationActionsT>(value));
    return *this;
  }
  template <typename InvestigationActionsT = InvestigationAction>
  ListInvestigationsResult& AddInvestigationActions(InvestigationActionsT&& value) {
    m_investigationActionsHasBeenSet = true;
    m_investigationActions.emplace_back(std::forward<InvestigationActionsT>(value));
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
  ListInvestigationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<InvestigationAction> m_investigationActions;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_investigationActionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
