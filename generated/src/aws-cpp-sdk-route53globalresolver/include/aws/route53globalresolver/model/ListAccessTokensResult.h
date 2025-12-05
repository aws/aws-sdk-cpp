/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/AccessTokenItem.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Route53GlobalResolver {
namespace Model {
class ListAccessTokensResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ListAccessTokensResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API ListAccessTokensResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API ListAccessTokensResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A pagination token used for large sets of results that can't be returned in a
   * single response. Provide this token in the next call to get the results not
   * returned in this call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAccessTokensResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of the tokens.</p>
   */
  inline const Aws::Vector<AccessTokenItem>& GetAccessTokens() const { return m_accessTokens; }
  template <typename AccessTokensT = Aws::Vector<AccessTokenItem>>
  void SetAccessTokens(AccessTokensT&& value) {
    m_accessTokensHasBeenSet = true;
    m_accessTokens = std::forward<AccessTokensT>(value);
  }
  template <typename AccessTokensT = Aws::Vector<AccessTokenItem>>
  ListAccessTokensResult& WithAccessTokens(AccessTokensT&& value) {
    SetAccessTokens(std::forward<AccessTokensT>(value));
    return *this;
  }
  template <typename AccessTokensT = AccessTokenItem>
  ListAccessTokensResult& AddAccessTokens(AccessTokensT&& value) {
    m_accessTokensHasBeenSet = true;
    m_accessTokens.emplace_back(std::forward<AccessTokensT>(value));
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
  ListAccessTokensResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  Aws::Vector<AccessTokenItem> m_accessTokens;

  Aws::String m_requestId;
  bool m_nextTokenHasBeenSet = false;
  bool m_accessTokensHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
