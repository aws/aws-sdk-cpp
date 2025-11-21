/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/BatchGetRouterInputError.h>
#include <aws/mediaconnect/model/RouterInput.h>

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
class BatchGetRouterInputResult {
 public:
  AWS_MEDIACONNECT_API BatchGetRouterInputResult() = default;
  AWS_MEDIACONNECT_API BatchGetRouterInputResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MEDIACONNECT_API BatchGetRouterInputResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of router inputs that were successfully retrieved.</p>
   */
  inline const Aws::Vector<RouterInput>& GetRouterInputs() const { return m_routerInputs; }
  template <typename RouterInputsT = Aws::Vector<RouterInput>>
  void SetRouterInputs(RouterInputsT&& value) {
    m_routerInputsHasBeenSet = true;
    m_routerInputs = std::forward<RouterInputsT>(value);
  }
  template <typename RouterInputsT = Aws::Vector<RouterInput>>
  BatchGetRouterInputResult& WithRouterInputs(RouterInputsT&& value) {
    SetRouterInputs(std::forward<RouterInputsT>(value));
    return *this;
  }
  template <typename RouterInputsT = RouterInput>
  BatchGetRouterInputResult& AddRouterInputs(RouterInputsT&& value) {
    m_routerInputsHasBeenSet = true;
    m_routerInputs.emplace_back(std::forward<RouterInputsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of errors that occurred when retrieving the requested router
   * inputs.</p>
   */
  inline const Aws::Vector<BatchGetRouterInputError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetRouterInputError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetRouterInputError>>
  BatchGetRouterInputResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetRouterInputError>
  BatchGetRouterInputResult& AddErrors(ErrorsT&& value) {
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
  BatchGetRouterInputResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RouterInput> m_routerInputs;
  bool m_routerInputsHasBeenSet = false;

  Aws::Vector<BatchGetRouterInputError> m_errors;
  bool m_errorsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
