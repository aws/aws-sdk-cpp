/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/Encryption.h>
#include <aws/observabilityadmin/model/IntegrationStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {
class GetS3TableIntegrationResult {
 public:
  AWS_OBSERVABILITYADMIN_API GetS3TableIntegrationResult() = default;
  AWS_OBSERVABILITYADMIN_API GetS3TableIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API GetS3TableIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3 Table integration.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetS3TableIntegrationResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role used by the S3 Table
   * integration.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  GetS3TableIntegrationResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the S3 Table integration.</p>
   */
  inline IntegrationStatus GetStatus() const { return m_status; }
  inline void SetStatus(IntegrationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetS3TableIntegrationResult& WithStatus(IntegrationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration for the S3 Table integration.</p>
   */
  inline const Encryption& GetEncryption() const { return m_encryption; }
  template <typename EncryptionT = Encryption>
  void SetEncryption(EncryptionT&& value) {
    m_encryptionHasBeenSet = true;
    m_encryption = std::forward<EncryptionT>(value);
  }
  template <typename EncryptionT = Encryption>
  GetS3TableIntegrationResult& WithEncryption(EncryptionT&& value) {
    SetEncryption(std::forward<EncryptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3 bucket used as the destination for
   * the table data.</p>
   */
  inline const Aws::String& GetDestinationTableBucketArn() const { return m_destinationTableBucketArn; }
  template <typename DestinationTableBucketArnT = Aws::String>
  void SetDestinationTableBucketArn(DestinationTableBucketArnT&& value) {
    m_destinationTableBucketArnHasBeenSet = true;
    m_destinationTableBucketArn = std::forward<DestinationTableBucketArnT>(value);
  }
  template <typename DestinationTableBucketArnT = Aws::String>
  GetS3TableIntegrationResult& WithDestinationTableBucketArn(DestinationTableBucketArnT&& value) {
    SetDestinationTableBucketArn(std::forward<DestinationTableBucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the S3 Table integration was created.</p>
   */
  inline long long GetCreatedTimeStamp() const { return m_createdTimeStamp; }
  inline void SetCreatedTimeStamp(long long value) {
    m_createdTimeStampHasBeenSet = true;
    m_createdTimeStamp = value;
  }
  inline GetS3TableIntegrationResult& WithCreatedTimeStamp(long long value) {
    SetCreatedTimeStamp(value);
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
  GetS3TableIntegrationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;

  Aws::String m_roleArn;
  bool m_roleArnHasBeenSet = false;

  IntegrationStatus m_status{IntegrationStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Encryption m_encryption;
  bool m_encryptionHasBeenSet = false;

  Aws::String m_destinationTableBucketArn;
  bool m_destinationTableBucketArnHasBeenSet = false;

  long long m_createdTimeStamp{0};
  bool m_createdTimeStampHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
