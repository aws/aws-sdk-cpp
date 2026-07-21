/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/redshift/Redshift_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Redshift {
namespace Model {

/**
 */
class DescribeQev2IdcApplicationsRequest : public RedshiftRequest {
 public:
  AWS_REDSHIFT_API DescribeQev2IdcApplicationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeQev2IdcApplications"; }

  AWS_REDSHIFT_API Aws::String SerializePayload() const override;

 protected:
  AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) for the Amazon Redshift Query Editor (QEV2)
   * application that integrates with IAM Identity Center.</p>
   */
  inline const Aws::String& GetQev2IdcApplicationArn() const { return m_qev2IdcApplicationArn; }
  inline bool Qev2IdcApplicationArnHasBeenSet() const { return m_qev2IdcApplicationArnHasBeenSet; }
  template <typename Qev2IdcApplicationArnT = Aws::String>
  void SetQev2IdcApplicationArn(Qev2IdcApplicationArnT&& value) {
    m_qev2IdcApplicationArnHasBeenSet = true;
    m_qev2IdcApplicationArn = std::forward<Qev2IdcApplicationArnT>(value);
  }
  template <typename Qev2IdcApplicationArnT = Aws::String>
  DescribeQev2IdcApplicationsRequest& WithQev2IdcApplicationArn(Qev2IdcApplicationArnT&& value) {
    SetQev2IdcApplicationArn(std::forward<Qev2IdcApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of response records to return in each call. If the number
   * of remaining response records exceeds the specified MaxRecords value, a value is
   * returned in a marker field of the response. You can retrieve the next set of
   * records by retrying the command with the returned marker value.</p>
   */
  inline int GetMaxRecords() const { return m_maxRecords; }
  inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
  inline void SetMaxRecords(int value) {
    m_maxRecordsHasBeenSet = true;
    m_maxRecords = value;
  }
  inline DescribeQev2IdcApplicationsRequest& WithMaxRecords(int value) {
    SetMaxRecords(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A value that indicates the starting point for the next set of response
   * records in a subsequent request. If a value is returned in a response, you can
   * retrieve the next set of records by providing this returned marker value in the
   * Marker parameter and retrying the command. If the Marker field is empty, all
   * response records have been retrieved for the request. </p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  DescribeQev2IdcApplicationsRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_qev2IdcApplicationArn;

  int m_maxRecords{0};

  Aws::String m_marker;
  bool m_qev2IdcApplicationArnHasBeenSet = false;
  bool m_maxRecordsHasBeenSet = false;
  bool m_markerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
