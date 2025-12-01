/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>
#include <aws/route53globalresolver/model/GlobalResolversItem.h>

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
class ListGlobalResolversResult {
 public:
  AWS_ROUTE53GLOBALRESOLVER_API ListGlobalResolversResult() = default;
  AWS_ROUTE53GLOBALRESOLVER_API ListGlobalResolversResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ROUTE53GLOBALRESOLVER_API ListGlobalResolversResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  ListGlobalResolversResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Paginated list of Global Resolvers.</p>
   */
  inline const Aws::Vector<GlobalResolversItem>& GetGlobalResolvers() const { return m_globalResolvers; }
  template <typename GlobalResolversT = Aws::Vector<GlobalResolversItem>>
  void SetGlobalResolvers(GlobalResolversT&& value) {
    m_globalResolversHasBeenSet = true;
    m_globalResolvers = std::forward<GlobalResolversT>(value);
  }
  template <typename GlobalResolversT = Aws::Vector<GlobalResolversItem>>
  ListGlobalResolversResult& WithGlobalResolvers(GlobalResolversT&& value) {
    SetGlobalResolvers(std::forward<GlobalResolversT>(value));
    return *this;
  }
  template <typename GlobalResolversT = GlobalResolversItem>
  ListGlobalResolversResult& AddGlobalResolvers(GlobalResolversT&& value) {
    m_globalResolversHasBeenSet = true;
    m_globalResolvers.emplace_back(std::forward<GlobalResolversT>(value));
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
  ListGlobalResolversResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::Vector<GlobalResolversItem> m_globalResolvers;
  bool m_globalResolversHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53GlobalResolver
}  // namespace Aws
