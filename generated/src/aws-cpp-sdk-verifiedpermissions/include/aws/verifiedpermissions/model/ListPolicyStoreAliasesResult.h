/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/verifiedpermissions/model/PolicyStoreAliasItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace VerifiedPermissions {
namespace Model {
class ListPolicyStoreAliasesResult {
 public:
  AWS_VERIFIEDPERMISSIONS_API ListPolicyStoreAliasesResult() = default;
  AWS_VERIFIEDPERMISSIONS_API ListPolicyStoreAliasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_VERIFIEDPERMISSIONS_API ListPolicyStoreAliasesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>If present, this value indicates that more output is available than is
   * included in the current response. Use this value in the <code>NextToken</code>
   * request parameter in a subsequent call to the operation to get the next part of
   * the output. You should repeat this until the <code>NextToken</code> response
   * element comes back as <code>null</code>. This indicates that this is the last
   * page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListPolicyStoreAliasesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of policy store aliases in the account.</p>
   */
  inline const Aws::Vector<PolicyStoreAliasItem>& GetPolicyStoreAliases() const { return m_policyStoreAliases; }
  template <typename PolicyStoreAliasesT = Aws::Vector<PolicyStoreAliasItem>>
  void SetPolicyStoreAliases(PolicyStoreAliasesT&& value) {
    m_policyStoreAliasesHasBeenSet = true;
    m_policyStoreAliases = std::forward<PolicyStoreAliasesT>(value);
  }
  template <typename PolicyStoreAliasesT = Aws::Vector<PolicyStoreAliasItem>>
  ListPolicyStoreAliasesResult& WithPolicyStoreAliases(PolicyStoreAliasesT&& value) {
    SetPolicyStoreAliases(std::forward<PolicyStoreAliasesT>(value));
    return *this;
  }
  template <typename PolicyStoreAliasesT = PolicyStoreAliasItem>
  ListPolicyStoreAliasesResult& AddPolicyStoreAliases(PolicyStoreAliasesT&& value) {
    m_policyStoreAliasesHasBeenSet = true;
    m_policyStoreAliases.emplace_back(std::forward<PolicyStoreAliasesT>(value));
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
  ListPolicyStoreAliasesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_nextToken;

  Aws::Vector<PolicyStoreAliasItem> m_policyStoreAliases;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nextTokenHasBeenSet = false;
  bool m_policyStoreAliasesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace VerifiedPermissions
}  // namespace Aws
