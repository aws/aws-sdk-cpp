/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/InputSourceSummary.h>

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
class ListInputSourcesResult {
 public:
  AWS_RESILIENCEHUBV2_API ListInputSourcesResult() = default;
  AWS_RESILIENCEHUBV2_API ListInputSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListInputSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of input source summaries.</p>
   */
  inline const Aws::Vector<InputSourceSummary>& GetInputSourceSummaries() const { return m_inputSourceSummaries; }
  template <typename InputSourceSummariesT = Aws::Vector<InputSourceSummary>>
  void SetInputSourceSummaries(InputSourceSummariesT&& value) {
    m_inputSourceSummariesHasBeenSet = true;
    m_inputSourceSummaries = std::forward<InputSourceSummariesT>(value);
  }
  template <typename InputSourceSummariesT = Aws::Vector<InputSourceSummary>>
  ListInputSourcesResult& WithInputSourceSummaries(InputSourceSummariesT&& value) {
    SetInputSourceSummaries(std::forward<InputSourceSummariesT>(value));
    return *this;
  }
  template <typename InputSourceSummariesT = InputSourceSummary>
  ListInputSourcesResult& AddInputSourceSummaries(InputSourceSummariesT&& value) {
    m_inputSourceSummariesHasBeenSet = true;
    m_inputSourceSummaries.emplace_back(std::forward<InputSourceSummariesT>(value));
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
  ListInputSourcesResult& WithNextToken(NextTokenT&& value) {
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
  ListInputSourcesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<InputSourceSummary> m_inputSourceSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_inputSourceSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
