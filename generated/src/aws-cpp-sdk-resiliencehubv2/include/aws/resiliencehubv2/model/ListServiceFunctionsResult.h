/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
class ListServiceFunctionsResult {
 public:
  AWS_RESILIENCEHUBV2_API ListServiceFunctionsResult() = default;
  AWS_RESILIENCEHUBV2_API ListServiceFunctionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListServiceFunctionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of service functions.</p>
   */
  inline const Aws::Vector<ServiceFunction>& GetServiceFunctions() const { return m_serviceFunctions; }
  template <typename ServiceFunctionsT = Aws::Vector<ServiceFunction>>
  void SetServiceFunctions(ServiceFunctionsT&& value) {
    m_serviceFunctionsHasBeenSet = true;
    m_serviceFunctions = std::forward<ServiceFunctionsT>(value);
  }
  template <typename ServiceFunctionsT = Aws::Vector<ServiceFunction>>
  ListServiceFunctionsResult& WithServiceFunctions(ServiceFunctionsT&& value) {
    SetServiceFunctions(std::forward<ServiceFunctionsT>(value));
    return *this;
  }
  template <typename ServiceFunctionsT = ServiceFunction>
  ListServiceFunctionsResult& AddServiceFunctions(ServiceFunctionsT&& value) {
    m_serviceFunctionsHasBeenSet = true;
    m_serviceFunctions.emplace_back(std::forward<ServiceFunctionsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListServiceFunctionsResult& WithNextToken(NextTokenT&& value) {
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
  ListServiceFunctionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ServiceFunction> m_serviceFunctions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_serviceFunctionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
