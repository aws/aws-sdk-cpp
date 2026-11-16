/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/OrganizationalReportFormat.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class SendAgentOrganizationalReportDataToS3Request : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API SendAgentOrganizationalReportDataToS3Request() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SendAgentOrganizationalReportDataToS3"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_WELLARCHITECTED_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>Identifier of the report whose data is being delivered.</p>
   */
  inline const Aws::String& GetReportId() const { return m_reportId; }
  inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
  template <typename ReportIdT = Aws::String>
  void SetReportId(ReportIdT&& value) {
    m_reportIdHasBeenSet = true;
    m_reportId = std::forward<ReportIdT>(value);
  }
  template <typename ReportIdT = Aws::String>
  SendAgentOrganizationalReportDataToS3Request& WithReportId(ReportIdT&& value) {
    SetReportId(std::forward<ReportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Format of the delivered artifact (CSV, JSON, or PARQUET).</p>
   */
  inline OrganizationalReportFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(OrganizationalReportFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline SendAgentOrganizationalReportDataToS3Request& WithFormat(OrganizationalReportFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>ARN of the caller-owned S3 bucket that will receive the artifact.</p>
   */
  inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
  inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
  template <typename BucketArnT = Aws::String>
  void SetBucketArn(BucketArnT&& value) {
    m_bucketArnHasBeenSet = true;
    m_bucketArn = std::forward<BucketArnT>(value);
  }
  template <typename BucketArnT = Aws::String>
  SendAgentOrganizationalReportDataToS3Request& WithBucketArn(BucketArnT&& value) {
    SetBucketArn(std::forward<BucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>S3 object key under bucketArn where the artifact will be written.</p>
   */
  inline const Aws::String& GetObjectKey() const { return m_objectKey; }
  inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }
  template <typename ObjectKeyT = Aws::String>
  void SetObjectKey(ObjectKeyT&& value) {
    m_objectKeyHasBeenSet = true;
    m_objectKey = std::forward<ObjectKeyT>(value);
  }
  template <typename ObjectKeyT = Aws::String>
  SendAgentOrganizationalReportDataToS3Request& WithObjectKey(ObjectKeyT&& value) {
    SetObjectKey(std::forward<ObjectKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_reportId;

  OrganizationalReportFormat m_format{OrganizationalReportFormat::NOT_SET};

  Aws::String m_bucketArn;

  Aws::String m_objectKey;
  bool m_reportIdHasBeenSet = false;
  bool m_formatHasBeenSet = false;
  bool m_bucketArnHasBeenSet = false;
  bool m_objectKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
