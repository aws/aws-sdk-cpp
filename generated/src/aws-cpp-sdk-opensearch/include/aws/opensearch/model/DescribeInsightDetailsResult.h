/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/InsightField.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {
/**
 * <p>The result of a <code>DescribeInsightDetails</code> request. Contains the
 * detailed fields associated with the specified insight.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeInsightDetailsResponse">AWS
 * API Reference</a></p>
 */
class DescribeInsightDetailsResult {
 public:
  AWS_OPENSEARCHSERVICE_API DescribeInsightDetailsResult() = default;
  AWS_OPENSEARCHSERVICE_API DescribeInsightDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVICE_API DescribeInsightDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of fields that contain detailed information about the insight.</p>
   */
  inline const Aws::Vector<InsightField>& GetFields() const { return m_fields; }
  template <typename FieldsT = Aws::Vector<InsightField>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<InsightField>>
  DescribeInsightDetailsResult& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = InsightField>
  DescribeInsightDetailsResult& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
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
  DescribeInsightDetailsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<InsightField> m_fields;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_fieldsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
