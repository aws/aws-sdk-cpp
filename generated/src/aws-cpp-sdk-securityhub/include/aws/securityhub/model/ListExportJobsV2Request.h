/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ExportDataType.h>
#include <aws/securityhub/model/ExportStatus.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace SecurityHub {
namespace Model {

/**
 */
class ListExportJobsV2Request : public SecurityHubRequest {
 public:
  AWS_SECURITYHUB_API ListExportJobsV2Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListExportJobsV2"; }

  AWS_SECURITYHUB_API Aws::String SerializePayload() const override;

  AWS_SECURITYHUB_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>Filters the results to export jobs that have the specified status.</p>
   */
  inline ExportStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListExportJobsV2Request& WithStatus(ExportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filters the results to export jobs that produce the specified data type.</p>
   */
  inline ExportDataType GetDataType() const { return m_dataType; }
  inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
  inline void SetDataType(ExportDataType value) {
    m_dataTypeHasBeenSet = true;
    m_dataType = value;
  }
  inline ListExportJobsV2Request& WithDataType(ExportDataType value) {
    SetDataType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. Valid range is
   * 1–20.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListExportJobsV2Request& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token required for pagination. On your first call, set the value of this
   * parameter to <code>NULL</code>. For subsequent calls, to continue listing data,
   * set the value of this parameter to the value returned in the previous
   * response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListExportJobsV2Request& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  ExportStatus m_status{ExportStatus::NOT_SET};

  ExportDataType m_dataType{ExportDataType::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_statusHasBeenSet = false;
  bool m_dataTypeHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
