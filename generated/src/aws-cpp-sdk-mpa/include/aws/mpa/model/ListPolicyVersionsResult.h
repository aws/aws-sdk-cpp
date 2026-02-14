/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/PolicyVersionSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MPA {
namespace Model {
class ListPolicyVersionsResult {
 public:
  AWS_MPA_API ListPolicyVersionsResult() = default;
  AWS_MPA_API ListPolicyVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MPA_API ListPolicyVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>If present, indicates that more output is available than is included in the
   * current response. Use this value in the <code>NextToken</code> request parameter
   * in a next call to the operation to get more output. You can repeat this until
   * the <code>NextToken</code> response element returns <code>null</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPolicyVersionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of <code>PolicyVersionSummary</code> objects. Contains details for
   * the version of the policies that define the permissions for team resources.</p>
   */
  inline const Aws::Vector<PolicyVersionSummary>& GetPolicyVersions() const { return m_policyVersions; }
  template <typename PolicyVersionsT = Aws::Vector<PolicyVersionSummary>>
  void SetPolicyVersions(PolicyVersionsT&& value) {
    m_policyVersionsHasBeenSet = true;
    m_policyVersions = std::forward<PolicyVersionsT>(value);
  }
  template <typename PolicyVersionsT = Aws::Vector<PolicyVersionSummary>>
  ListPolicyVersionsResult& WithPolicyVersions(PolicyVersionsT&& value) {
    SetPolicyVersions(std::forward<PolicyVersionsT>(value));
    return *this;
  }
  template <typename PolicyVersionsT = PolicyVersionSummary>
  ListPolicyVersionsResult& AddPolicyVersions(PolicyVersionsT&& value) {
    m_policyVersionsHasBeenSet = true;
    m_policyVersions.emplace_back(std::forward<PolicyVersionsT>(value));
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
  ListPolicyVersionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetResponseCode() const { return m_responseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<PolicyVersionSummary> m_policyVersions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_responseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_policyVersionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MPA
}  // namespace Aws
