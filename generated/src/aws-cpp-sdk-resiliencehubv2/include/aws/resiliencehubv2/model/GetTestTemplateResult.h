/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/TestTemplate.h>

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
class GetTestTemplateResult {
 public:
  AWS_RESILIENCEHUBV2_API GetTestTemplateResult() = default;
  AWS_RESILIENCEHUBV2_API GetTestTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API GetTestTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The requested test template.</p>
   */
  inline const TestTemplate& GetTestTemplate() const { return m_testTemplate; }
  template <typename TestTemplateT = TestTemplate>
  void SetTestTemplate(TestTemplateT&& value) {
    m_testTemplateHasBeenSet = true;
    m_testTemplate = std::forward<TestTemplateT>(value);
  }
  template <typename TestTemplateT = TestTemplate>
  GetTestTemplateResult& WithTestTemplate(TestTemplateT&& value) {
    SetTestTemplate(std::forward<TestTemplateT>(value));
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
  GetTestTemplateResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  TestTemplate m_testTemplate;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_testTemplateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
