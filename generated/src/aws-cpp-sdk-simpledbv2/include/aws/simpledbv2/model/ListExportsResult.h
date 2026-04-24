/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>
#include <aws/simpledbv2/model/ExportSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SimpleDBv2 {
namespace Model {
class ListExportsResult {
 public:
  AWS_SIMPLEDBV2_API ListExportsResult() = default;
  AWS_SIMPLEDBV2_API ListExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIMPLEDBV2_API ListExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of export summaries containing export ARN, status, request timestamp,
   * and associated domain name.</p>
   */
  inline const Aws::Vector<ExportSummary>& GetExportSummaries() const { return m_exportSummaries; }
  template <typename ExportSummariesT = Aws::Vector<ExportSummary>>
  void SetExportSummaries(ExportSummariesT&& value) {
    m_exportSummariesHasBeenSet = true;
    m_exportSummaries = std::forward<ExportSummariesT>(value);
  }
  template <typename ExportSummariesT = Aws::Vector<ExportSummary>>
  ListExportsResult& WithExportSummaries(ExportSummariesT&& value) {
    SetExportSummaries(std::forward<ExportSummariesT>(value));
    return *this;
  }
  template <typename ExportSummariesT = ExportSummary>
  ListExportsResult& AddExportSummaries(ExportSummariesT&& value) {
    m_exportSummariesHasBeenSet = true;
    m_exportSummaries.emplace_back(std::forward<ExportSummariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token indicating that more results are available. To retrieve
   * the next page of results, provide this token in a subsequent ListExports
   * request. If null or empty, there are no more results to retrieve.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListExportsResult& WithNextToken(NextTokenT&& value) {
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
  ListExportsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ExportSummary> m_exportSummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_exportSummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SimpleDBv2
}  // namespace Aws
