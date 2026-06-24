/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/DataSourceAttachmentStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchService {
namespace Model {

/**
 * <p>Summary information about a data source attachment, including its identifier,
 * data source ARN, and current status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DataSourceAttachmentSummary">AWS
 * API Reference</a></p>
 */
class DataSourceAttachmentSummary {
 public:
  AWS_OPENSEARCHSERVICE_API DataSourceAttachmentSummary() = default;
  AWS_OPENSEARCHSERVICE_API DataSourceAttachmentSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API DataSourceAttachmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier assigned to the data source attachment.</p>
   */
  inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
  inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
  template <typename AttachmentIdT = Aws::String>
  void SetAttachmentId(AttachmentIdT&& value) {
    m_attachmentIdHasBeenSet = true;
    m_attachmentId = std::forward<AttachmentIdT>(value);
  }
  template <typename AttachmentIdT = Aws::String>
  DataSourceAttachmentSummary& WithAttachmentId(AttachmentIdT&& value) {
    SetAttachmentId(std::forward<AttachmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
  inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
  template <typename DataSourceArnT = Aws::String>
  void SetDataSourceArn(DataSourceArnT&& value) {
    m_dataSourceArnHasBeenSet = true;
    m_dataSourceArn = std::forward<DataSourceArnT>(value);
  }
  template <typename DataSourceArnT = Aws::String>
  DataSourceAttachmentSummary& WithDataSourceArn(DataSourceArnT&& value) {
    SetDataSourceArn(std::forward<DataSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the data source attachment. Valid values are
   * <code>PENDING</code>, <code>ATTACHED</code>, and <code>FAILED</code>.</p>
   */
  inline DataSourceAttachmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DataSourceAttachmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DataSourceAttachmentSummary& WithStatus(DataSourceAttachmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_attachmentId;

  Aws::String m_dataSourceArn;

  DataSourceAttachmentStatus m_status{DataSourceAttachmentStatus::NOT_SET};
  bool m_attachmentIdHasBeenSet = false;
  bool m_dataSourceArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
