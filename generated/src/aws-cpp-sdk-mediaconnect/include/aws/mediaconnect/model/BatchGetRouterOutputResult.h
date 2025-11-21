/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BatchGetRouterOutputError.h>
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
class BatchGetRouterOutputResult {
 public:
  AWS_MEDIACONNECT_API BatchGetRouterOutputResult() = default;
  AWS_MEDIACONNECT_API BatchGetRouterOutputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API BatchGetRouterOutputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of router outputs that were successfully retrieved.</p>
   */
  inline const Aws::Vector<RouterOutput>& GetRouterOutputs() const { return m_routerOutputs; }
  template <typename RouterOutputsT = Aws::Vector<RouterOutput>>
  void SetRouterOutputs(RouterOutputsT&& value) {
    m_routerOutputsHasBeenSet = true;
    m_routerOutputs = std::forward<RouterOutputsT>(value);
  }
  template <typename RouterOutputsT = Aws::Vector<RouterOutput>>
  BatchGetRouterOutputResult& WithRouterOutputs(RouterOutputsT&& value) {
    SetRouterOutputs(std::forward<RouterOutputsT>(value));
    return *this;
  }
  template <typename RouterOutputsT = RouterOutput>
  BatchGetRouterOutputResult& AddRouterOutputs(RouterOutputsT&& value) {
    m_routerOutputsHasBeenSet = true;
    m_routerOutputs.emplace_back(std::forward<RouterOutputsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of errors that occurred when retrieving the requested router
   * outputs.</p>
   */
  inline const Aws::Vector<BatchGetRouterOutputError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetRouterOutputError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetRouterOutputError>>
  BatchGetRouterOutputResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetRouterOutputError>
  BatchGetRouterOutputResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchGetRouterOutputResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouterOutput> m_routerOutputs;
  bool m_routerOutputsHasBeenSet = false;

  Aws::Vector<BatchGetRouterOutputError> m_errors;
  bool m_errorsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
