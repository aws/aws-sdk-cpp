/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/QueryField.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkFlowMonitor {
namespace Model {
class GetQueryResultsPerformanceMonitorResult {
 public:
  AWS_NETWORKFLOWMONITOR_API GetQueryResultsPerformanceMonitorResult() = default;
  AWS_NETWORKFLOWMONITOR_API GetQueryResultsPerformanceMonitorResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFLOWMONITOR_API GetQueryResultsPerformanceMonitorResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The columns that the query returns, in the order that the values for each row
   * appear in <code>data</code>.</p>
   */
  inline const Aws::Vector<QueryField>& GetFields() const { return m_fields; }
  template <typename FieldsT = Aws::Vector<QueryField>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<QueryField>>
  GetQueryResultsPerformanceMonitorResult& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = QueryField>
  GetQueryResultsPerformanceMonitorResult& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The results of the query. Each row contains the values for the columns that
   * <code>fields</code> describes, in the same order.</p>
   */
  inline const Aws::Vector<Aws::Vector<Aws::Crt::Optional<Aws::String>>>& GetData() const { return m_data; }
  template <typename DataT = Aws::Vector<Aws::Vector<Aws::Crt::Optional<Aws::String>>>>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = Aws::Vector<Aws::Vector<Aws::Crt::Optional<Aws::String>>>>
  GetQueryResultsPerformanceMonitorResult& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  template <typename DataT = Aws::Vector<Aws::Crt::Optional<Aws::String>>>
  GetQueryResultsPerformanceMonitorResult& AddData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data.emplace_back(std::forward<DataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. You receive this token from a previous
   * call.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetQueryResultsPerformanceMonitorResult& WithNextToken(NextTokenT&& value) {
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
  GetQueryResultsPerformanceMonitorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<QueryField> m_fields;

  Aws::Vector<Aws::Vector<Aws::Crt::Optional<Aws::String>>> m_data;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fieldsHasBeenSet = false;
  bool m_dataHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
