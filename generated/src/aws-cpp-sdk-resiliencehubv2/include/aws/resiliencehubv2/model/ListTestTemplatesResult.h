/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/TestTemplateSummary.h>

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
class ListTestTemplatesResult {
 public:
  AWS_RESILIENCEHUBV2_API ListTestTemplatesResult() = default;
  AWS_RESILIENCEHUBV2_API ListTestTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListTestTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of test template summaries.</p>
   */
  inline const Aws::Vector<TestTemplateSummary>& GetTestTemplates() const { return m_testTemplates; }
  template <typename TestTemplatesT = Aws::Vector<TestTemplateSummary>>
  void SetTestTemplates(TestTemplatesT&& value) {
    m_testTemplatesHasBeenSet = true;
    m_testTemplates = std::forward<TestTemplatesT>(value);
  }
  template <typename TestTemplatesT = Aws::Vector<TestTemplateSummary>>
  ListTestTemplatesResult& WithTestTemplates(TestTemplatesT&& value) {
    SetTestTemplates(std::forward<TestTemplatesT>(value));
    return *this;
  }
  template <typename TestTemplatesT = TestTemplateSummary>
  ListTestTemplatesResult& AddTestTemplates(TestTemplatesT&& value) {
    m_testTemplatesHasBeenSet = true;
    m_testTemplates.emplace_back(std::forward<TestTemplatesT>(value));
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
  ListTestTemplatesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<TestTemplateSummary> m_testTemplates;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_testTemplatesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
