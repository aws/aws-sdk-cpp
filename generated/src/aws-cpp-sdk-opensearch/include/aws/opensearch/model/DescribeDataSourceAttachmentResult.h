/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DataSourceAttachmentStatus.h>

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
class DescribeDataSourceAttachmentResult {
 public:
  AWS_OPENSEARCHSERVICE_API DescribeDataSourceAttachmentResult() = default;
  AWS_OPENSEARCHSERVICE_API DescribeDataSourceAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHSERVICE_API DescribeDataSourceAttachmentResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier assigned to the data source attachment.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  DescribeDataSourceAttachmentResult& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the OpenSearch application.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DescribeDataSourceAttachmentResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DescribeDataSourceAttachmentResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
  template <typename DataSourceArnT = Aws::String>
  void SetDataSourceArn(DataSourceArnT&& value) {
    m_dataSourceArnHasBeenSet = true;
    m_dataSourceArn = std::forward<DataSourceArnT>(value);
  }
  template <typename DataSourceArnT = Aws::String>
  DescribeDataSourceAttachmentResult& WithDataSourceArn(DataSourceArnT&& value) {
    SetDataSourceArn(std::forward<DataSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the data source attachment. Valid values are
   * <code>PENDING</code>, <code>ATTACHED</code>, and <code>FAILED</code>.</p>
   */
  inline DataSourceAttachmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(DataSourceAttachmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeDataSourceAttachmentResult& WithStatus(DataSourceAttachmentStatus value) {
    SetStatus(value);
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
  DescribeDataSourceAttachmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_attachmentId;

  Aws::String m_id;

  Aws::String m_arn;

  Aws::String m_dataSourceArn;

  DataSourceAttachmentStatus m_status{DataSourceAttachmentStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_attachmentIdHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_dataSourceArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
