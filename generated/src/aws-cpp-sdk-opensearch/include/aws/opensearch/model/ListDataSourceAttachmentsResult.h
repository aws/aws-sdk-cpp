/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DataSourceAttachmentSummary.h>

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
class ListDataSourceAttachmentsResult {
 public:
  AWS_OPENSEARCHSERVICE_API ListDataSourceAttachmentsResult() = default;
  AWS_OPENSEARCHSERVICE_API ListDataSourceAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVICE_API ListDataSourceAttachmentsResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of data source attachment summaries for the specified application.</p>
   */
  inline const Aws::Vector<DataSourceAttachmentSummary>& GetAttachments() const { return m_attachments; }
  template <typename AttachmentsT = Aws::Vector<DataSourceAttachmentSummary>>
  void SetAttachments(AttachmentsT&& value) {
    m_attachmentsHasBeenSet = true;
    m_attachments = std::forward<AttachmentsT>(value);
  }
  template <typename AttachmentsT = Aws::Vector<DataSourceAttachmentSummary>>
  ListDataSourceAttachmentsResult& WithAttachments(AttachmentsT&& value) {
    SetAttachments(std::forward<AttachmentsT>(value));
    return *this;
  }
  template <typename AttachmentsT = DataSourceAttachmentSummary>
  ListDataSourceAttachmentsResult& AddAttachments(AttachmentsT&& value) {
    m_attachmentsHasBeenSet = true;
    m_attachments.emplace_back(std::forward<AttachmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pagination token to use in a subsequent call to retrieve the next set of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDataSourceAttachmentsResult& WithNextToken(NextTokenT&& value) {
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
  ListDataSourceAttachmentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DataSourceAttachmentSummary> m_attachments;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_attachmentsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
