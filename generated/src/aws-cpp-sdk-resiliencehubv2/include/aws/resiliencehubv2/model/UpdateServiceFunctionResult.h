/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ServiceFunction.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {
class UpdateServiceFunctionResult {
 public:
  AWS_RESILIENCEHUBV2_API UpdateServiceFunctionResult() = default;
  AWS_RESILIENCEHUBV2_API UpdateServiceFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API UpdateServiceFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The updated service function.</p>
   */
  inline const ServiceFunction& GetServiceFunction() const { return m_serviceFunction; }
  template <typename ServiceFunctionT = ServiceFunction>
  void SetServiceFunction(ServiceFunctionT&& value) {
    m_serviceFunctionHasBeenSet = true;
    m_serviceFunction = std::forward<ServiceFunctionT>(value);
  }
  template <typename ServiceFunctionT = ServiceFunction>
  UpdateServiceFunctionResult& WithServiceFunction(ServiceFunctionT&& value) {
    SetServiceFunction(std::forward<ServiceFunctionT>(value));
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
  UpdateServiceFunctionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ServiceFunction m_serviceFunction;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_serviceFunctionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
