/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PolicyPrincipal.h>

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
class ListPrincipalsForPolicyResult {
 public:
  AWS_QUICKSIGHT_API ListPrincipalsForPolicyResult() = default;
  AWS_QUICKSIGHT_API ListPrincipalsForPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API ListPrincipalsForPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of principals that the policy is assigned to.</p>
   */
  inline const Aws::Vector<PolicyPrincipal>& GetPrincipals() const { return m_principals; }
  template <typename PrincipalsT = Aws::Vector<PolicyPrincipal>>
  void SetPrincipals(PrincipalsT&& value) {
    m_principalsHasBeenSet = true;
    m_principals = std::forward<PrincipalsT>(value);
  }
  template <typename PrincipalsT = Aws::Vector<PolicyPrincipal>>
  ListPrincipalsForPolicyResult& WithPrincipals(PrincipalsT&& value) {
    SetPrincipals(std::forward<PrincipalsT>(value));
    return *this;
  }
  template <typename PrincipalsT = PolicyPrincipal>
  ListPrincipalsForPolicyResult& AddPrincipals(PrincipalsT&& value) {
    m_principalsHasBeenSet = true;
    m_principals.emplace_back(std::forward<PrincipalsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next page of results. This value is absent if there are no
   * more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPrincipalsForPolicyResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListPrincipalsForPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<PolicyPrincipal> m_principals;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_principalsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
