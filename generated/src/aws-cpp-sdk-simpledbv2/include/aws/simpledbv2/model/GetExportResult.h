/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>
#include <aws/simpledbv2/model/ExportStatus.h>
#include <aws/simpledbv2/model/S3SseAlgorithm.h>

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
class GetExportResult {
 public:
  AWS_SIMPLEDBV2_API GetExportResult() = default;
  AWS_SIMPLEDBV2_API GetExportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SIMPLEDBV2_API GetExportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Unique ARN identifier of the export.</p>
   */
  inline const Aws::String& GetExportArn() const { return m_exportArn; }
  template <typename ExportArnT = Aws::String>
  void SetExportArn(ExportArnT&& value) {
    m_exportArnHasBeenSet = true;
    m_exportArn = std::forward<ExportArnT>(value);
  }
  template <typename ExportArnT = Aws::String>
  GetExportResult& WithExportArn(ExportArnT&& value) {
    SetExportArn(std::forward<ExportArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client token provided for this export.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  GetExportResult& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the export. Current possible values include : PENDING -
   * export request received, IN_PROGRESS - export is being processed, SUCCEEDED -
   * export completed successfully, and FAILED - export encountered an error.</p>
   */
  inline ExportStatus GetExportStatus() const { return m_exportStatus; }
  inline void SetExportStatus(ExportStatus value) {
    m_exportStatusHasBeenSet = true;
    m_exportStatus = value;
  }
  inline GetExportResult& WithExportStatus(ExportStatus value) {
    SetExportStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the domain that was exported.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  GetExportResult& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the export request was received by the service.</p>
   */
  inline const Aws::Utils::DateTime& GetRequestedAt() const { return m_requestedAt; }
  template <typename RequestedAtT = Aws::Utils::DateTime>
  void SetRequestedAt(RequestedAtT&& value) {
    m_requestedAtHasBeenSet = true;
    m_requestedAt = std::forward<RequestedAtT>(value);
  }
  template <typename RequestedAtT = Aws::Utils::DateTime>
  GetExportResult& WithRequestedAt(RequestedAtT&& value) {
    SetRequestedAt(std::forward<RequestedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the S3 bucket for this export.</p>
   */
  inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
  template <typename S3BucketT = Aws::String>
  void SetS3Bucket(S3BucketT&& value) {
    m_s3BucketHasBeenSet = true;
    m_s3Bucket = std::forward<S3BucketT>(value);
  }
  template <typename S3BucketT = Aws::String>
  GetExportResult& WithS3Bucket(S3BucketT&& value) {
    SetS3Bucket(std::forward<S3BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 key prefix provided in the corresponding StartDomainExport
   * request.</p>
   */
  inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
  template <typename S3KeyPrefixT = Aws::String>
  void SetS3KeyPrefix(S3KeyPrefixT&& value) {
    m_s3KeyPrefixHasBeenSet = true;
    m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value);
  }
  template <typename S3KeyPrefixT = Aws::String>
  GetExportResult& WithS3KeyPrefix(S3KeyPrefixT&& value) {
    SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 SSE encryption algorithm for this export.</p>
   */
  inline S3SseAlgorithm GetS3SseAlgorithm() const { return m_s3SseAlgorithm; }
  inline void SetS3SseAlgorithm(S3SseAlgorithm value) {
    m_s3SseAlgorithmHasBeenSet = true;
    m_s3SseAlgorithm = value;
  }
  inline GetExportResult& WithS3SseAlgorithm(S3SseAlgorithm value) {
    SetS3SseAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The KMS key ID for this export.</p>
   */
  inline const Aws::String& GetS3SseKmsKeyId() const { return m_s3SseKmsKeyId; }
  template <typename S3SseKmsKeyIdT = Aws::String>
  void SetS3SseKmsKeyId(S3SseKmsKeyIdT&& value) {
    m_s3SseKmsKeyIdHasBeenSet = true;
    m_s3SseKmsKeyId = std::forward<S3SseKmsKeyIdT>(value);
  }
  template <typename S3SseKmsKeyIdT = Aws::String>
  GetExportResult& WithS3SseKmsKeyId(S3SseKmsKeyIdT&& value) {
    SetS3SseKmsKeyId(std::forward<S3SseKmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 bucket owner account ID for this export.</p>
   */
  inline const Aws::String& GetS3BucketOwner() const { return m_s3BucketOwner; }
  template <typename S3BucketOwnerT = Aws::String>
  void SetS3BucketOwner(S3BucketOwnerT&& value) {
    m_s3BucketOwnerHasBeenSet = true;
    m_s3BucketOwner = std::forward<S3BucketOwnerT>(value);
  }
  template <typename S3BucketOwnerT = Aws::String>
  GetExportResult& WithS3BucketOwner(S3BucketOwnerT&& value) {
    SetS3BucketOwner(std::forward<S3BucketOwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Failure code for the result of the failed export.</p>
   */
  inline const Aws::String& GetFailureCode() const { return m_failureCode; }
  template <typename FailureCodeT = Aws::String>
  void SetFailureCode(FailureCodeT&& value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = std::forward<FailureCodeT>(value);
  }
  template <typename FailureCodeT = Aws::String>
  GetExportResult& WithFailureCode(FailureCodeT&& value) {
    SetFailureCode(std::forward<FailureCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Export failure reason description.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  GetExportResult& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the manifest summary file for the export.</p>
   */
  inline const Aws::String& GetExportManifest() const { return m_exportManifest; }
  template <typename ExportManifestT = Aws::String>
  void SetExportManifest(ExportManifestT&& value) {
    m_exportManifestHasBeenSet = true;
    m_exportManifest = std::forward<ExportManifestT>(value);
  }
  template <typename ExportManifestT = Aws::String>
  GetExportResult& WithExportManifest(ExportManifestT&& value) {
    SetExportManifest(std::forward<ExportManifestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total number of exported items.</p>
   */
  inline long long GetItemsCount() const { return m_itemsCount; }
  inline void SetItemsCount(long long value) {
    m_itemsCountHasBeenSet = true;
    m_itemsCount = value;
  }
  inline GetExportResult& WithItemsCount(long long value) {
    SetItemsCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp indicating the cutoff point for data inclusion in the export.
   * All data inserted or modified before this time will be present in the exported
   * data. Data insertions or modifications after this timestamp may or may not be
   * present in the export.</p>
   */
  inline const Aws::Utils::DateTime& GetExportDataCutoffTime() const { return m_exportDataCutoffTime; }
  template <typename ExportDataCutoffTimeT = Aws::Utils::DateTime>
  void SetExportDataCutoffTime(ExportDataCutoffTimeT&& value) {
    m_exportDataCutoffTimeHasBeenSet = true;
    m_exportDataCutoffTime = std::forward<ExportDataCutoffTimeT>(value);
  }
  template <typename ExportDataCutoffTimeT = Aws::Utils::DateTime>
  GetExportResult& WithExportDataCutoffTime(ExportDataCutoffTimeT&& value) {
    SetExportDataCutoffTime(std::forward<ExportDataCutoffTimeT>(value));
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
  GetExportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_exportArn;

  Aws::String m_clientToken;

  ExportStatus m_exportStatus{ExportStatus::NOT_SET};

  Aws::String m_domainName;

  Aws::Utils::DateTime m_requestedAt{};

  Aws::String m_s3Bucket;

  Aws::String m_s3KeyPrefix;

  S3SseAlgorithm m_s3SseAlgorithm{S3SseAlgorithm::NOT_SET};

  Aws::String m_s3SseKmsKeyId;

  Aws::String m_s3BucketOwner;

  Aws::String m_failureCode;

  Aws::String m_failureMessage;

  Aws::String m_exportManifest;

  long long m_itemsCount{0};

  Aws::Utils::DateTime m_exportDataCutoffTime{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_exportArnHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
  bool m_exportStatusHasBeenSet = false;
  bool m_domainNameHasBeenSet = false;
  bool m_requestedAtHasBeenSet = false;
  bool m_s3BucketHasBeenSet = false;
  bool m_s3KeyPrefixHasBeenSet = false;
  bool m_s3SseAlgorithmHasBeenSet = false;
  bool m_s3SseKmsKeyIdHasBeenSet = false;
  bool m_s3BucketOwnerHasBeenSet = false;
  bool m_failureCodeHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
  bool m_exportManifestHasBeenSet = false;
  bool m_itemsCountHasBeenSet = false;
  bool m_exportDataCutoffTimeHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SimpleDBv2
}  // namespace Aws
