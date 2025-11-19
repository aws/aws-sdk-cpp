/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ListedRouterOutput.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {
class ListRouterOutputsResult {
 public:
  AWS_MEDIACONNECT_API ListRouterOutputsResult() = default;
  AWS_MEDIACONNECT_API ListRouterOutputsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API ListRouterOutputsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The summary information for the retrieved router outputs.</p>
   */
  inline const Aws::Vector<ListedRouterOutput>& GetRouterOutputs() const { return m_routerOutputs; }
  template <typename RouterOutputsT = Aws::Vector<ListedRouterOutput>>
  void SetRouterOutputs(RouterOutputsT&& value) {
    m_routerOutputsHasBeenSet = true;
    m_routerOutputs = std::forward<RouterOutputsT>(value);
  }
  template <typename RouterOutputsT = Aws::Vector<ListedRouterOutput>>
  ListRouterOutputsResult& WithRouterOutputs(RouterOutputsT&& value) {
    SetRouterOutputs(std::forward<RouterOutputsT>(value));
    return *this;
  }
  template <typename RouterOutputsT = ListedRouterOutput>
  ListRouterOutputsResult& AddRouterOutputs(RouterOutputsT&& value) {
    m_routerOutputsHasBeenSet = true;
    m_routerOutputs.emplace_back(std::forward<RouterOutputsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRouterOutputsResult& WithNextToken(NextTokenT&& value) {
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
  ListRouterOutputsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ListedRouterOutput> m_routerOutputs;
  bool m_routerOutputsHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
