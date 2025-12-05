/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/ListedRouterInput.h>

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
class ListRouterInputsResult {
 public:
  AWS_MEDIACONNECT_API ListRouterInputsResult() = default;
  AWS_MEDIACONNECT_API ListRouterInputsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API ListRouterInputsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The summary information for the retrieved router inputs.</p>
   */
  inline const Aws::Vector<ListedRouterInput>& GetRouterInputs() const { return m_routerInputs; }
  template <typename RouterInputsT = Aws::Vector<ListedRouterInput>>
  void SetRouterInputs(RouterInputsT&& value) {
    m_routerInputsHasBeenSet = true;
    m_routerInputs = std::forward<RouterInputsT>(value);
  }
  template <typename RouterInputsT = Aws::Vector<ListedRouterInput>>
  ListRouterInputsResult& WithRouterInputs(RouterInputsT&& value) {
    SetRouterInputs(std::forward<RouterInputsT>(value));
    return *this;
  }
  template <typename RouterInputsT = ListedRouterInput>
  ListRouterInputsResult& AddRouterInputs(RouterInputsT&& value) {
    m_routerInputsHasBeenSet = true;
    m_routerInputs.emplace_back(std::forward<RouterInputsT>(value));
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
  ListRouterInputsResult& WithNextToken(NextTokenT&& value) {
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
  ListRouterInputsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ListedRouterInput> m_routerInputs;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_routerInputsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
