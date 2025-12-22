/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/RouterOutput.h>

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
class GetRouterOutputResult {
 public:
  AWS_MEDIACONNECT_API GetRouterOutputResult() = default;
  AWS_MEDIACONNECT_API GetRouterOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API GetRouterOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the requested router output, including its configuration,
   * state, and other attributes.</p>
   */
  inline const RouterOutput& GetRouterOutput() const { return m_routerOutput; }
  template <typename RouterOutputT = RouterOutput>
  void SetRouterOutput(RouterOutputT&& value) {
    m_routerOutputHasBeenSet = true;
    m_routerOutput = std::forward<RouterOutputT>(value);
  }
  template <typename RouterOutputT = RouterOutput>
  GetRouterOutputResult& WithRouterOutput(RouterOutputT&& value) {
    SetRouterOutput(std::forward<RouterOutputT>(value));
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
  GetRouterOutputResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  RouterOutput m_routerOutput;

  Aws::String m_requestId;
  bool m_routerOutputHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
