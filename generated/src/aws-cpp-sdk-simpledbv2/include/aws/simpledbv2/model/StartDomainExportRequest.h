/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/simpledbv2/SimpleDBv2Request.h>
#include <aws/simpledbv2/SimpleDBv2_EXPORTS.h>
#include <aws/simpledbv2/model/S3SseAlgorithm.h>

#include <utility>

namespace Aws {
namespace SimpleDBv2 {
namespace Model {

/**
 */
class StartDomainExportRequest : public SimpleDBv2Request {
 public:
  AWS_SIMPLEDBV2_API StartDomainExportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartDomainExport"; }

  AWS_SIMPLEDBV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Providing a ClientToken makes the call to StartDomainExport API idempotent,
   * meaning that multiple identical calls have the same effect as one single call. A
   * client token is valid for 8 hours after the first request that uses it is
   * completed. After 8 hours, any request with the same client token is treated as a
   * new request. Do not resubmit the same request with the same client token for
   * more than 8 hours, or the result might not be idempotent. If you submit a
   * request with the same client token but a change in other parameters within the
   * 8-hour idempotency window, a ConflictException will be returned.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartDomainExportRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the domain to export.</p>
   */
  inline const Aws::String& GetDomainName() const { return m_domainName; }
  inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
  template <typename DomainNameT = Aws::String>
  void SetDomainName(DomainNameT&& value) {
    m_domainNameHasBeenSet = true;
    m_domainName = std::forward<DomainNameT>(value);
  }
  template <typename DomainNameT = Aws::String>
  StartDomainExportRequest& WithDomainName(DomainNameT&& value) {
    SetDomainName(std::forward<DomainNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the S3 bucket where the domain data will be exported.</p>
   */
  inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
  inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
  template <typename S3BucketT = Aws::String>
  void SetS3Bucket(S3BucketT&& value) {
    m_s3BucketHasBeenSet = true;
    m_s3Bucket = std::forward<S3BucketT>(value);
  }
  template <typename S3BucketT = Aws::String>
  StartDomainExportRequest& WithS3Bucket(S3BucketT&& value) {
    SetS3Bucket(std::forward<S3BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prefix string to be used to generate the S3 object keys for export
   * artifacts.</p>
   */
  inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
  inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
  template <typename S3KeyPrefixT = Aws::String>
  void SetS3KeyPrefix(S3KeyPrefixT&& value) {
    m_s3KeyPrefixHasBeenSet = true;
    m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value);
  }
  template <typename S3KeyPrefixT = Aws::String>
  StartDomainExportRequest& WithS3KeyPrefix(S3KeyPrefixT&& value) {
    SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The server-side encryption algorithm to use for the exported data in S3.
   * Valid values are: AES256 (SSE-S3) and KMS (SSE-KMS). If not specified, bucket's
   * default encryption will apply.</p>
   */
  inline S3SseAlgorithm GetS3SseAlgorithm() const { return m_s3SseAlgorithm; }
  inline bool S3SseAlgorithmHasBeenSet() const { return m_s3SseAlgorithmHasBeenSet; }
  inline void SetS3SseAlgorithm(S3SseAlgorithm value) {
    m_s3SseAlgorithmHasBeenSet = true;
    m_s3SseAlgorithm = value;
  }
  inline StartDomainExportRequest& WithS3SseAlgorithm(S3SseAlgorithm value) {
    SetS3SseAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The KMS key ID to use for server-side encryption with AWS KMS-managed keys
   * (SSE-KMS). This parameter is only expected with KMS as the S3 SSE algorithm.</p>
   */
  inline const Aws::String& GetS3SseKmsKeyId() const { return m_s3SseKmsKeyId; }
  inline bool S3SseKmsKeyIdHasBeenSet() const { return m_s3SseKmsKeyIdHasBeenSet; }
  template <typename S3SseKmsKeyIdT = Aws::String>
  void SetS3SseKmsKeyId(S3SseKmsKeyIdT&& value) {
    m_s3SseKmsKeyIdHasBeenSet = true;
    m_s3SseKmsKeyId = std::forward<S3SseKmsKeyIdT>(value);
  }
  template <typename S3SseKmsKeyIdT = Aws::String>
  StartDomainExportRequest& WithS3SseKmsKeyId(S3SseKmsKeyIdT&& value) {
    SetS3SseKmsKeyId(std::forward<S3SseKmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the AWS account that owns the bucket the export will be stored
   * in.</p>
   */
  inline const Aws::String& GetS3BucketOwner() const { return m_s3BucketOwner; }
  inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
  template <typename S3BucketOwnerT = Aws::String>
  void SetS3BucketOwner(S3BucketOwnerT&& value) {
    m_s3BucketOwnerHasBeenSet = true;
    m_s3BucketOwner = std::forward<S3BucketOwnerT>(value);
  }
  template <typename S3BucketOwnerT = Aws::String>
  StartDomainExportRequest& WithS3BucketOwner(S3BucketOwnerT&& value) {
    SetS3BucketOwner(std::forward<S3BucketOwnerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_domainName;

  Aws::String m_s3Bucket;

  Aws::String m_s3KeyPrefix;

  S3SseAlgorithm m_s3SseAlgorithm{S3SseAlgorithm::NOT_SET};

  Aws::String m_s3SseKmsKeyId;

  Aws::String m_s3BucketOwner;
  bool m_clientTokenHasBeenSet = true;
  bool m_domainNameHasBeenSet = false;
  bool m_s3BucketHasBeenSet = false;
  bool m_s3KeyPrefixHasBeenSet = false;
  bool m_s3SseAlgorithmHasBeenSet = false;
  bool m_s3SseKmsKeyIdHasBeenSet = false;
  bool m_s3BucketOwnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace SimpleDBv2
}  // namespace Aws
