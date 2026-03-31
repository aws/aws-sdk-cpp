/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/EnrichmentSourceS3Configuration.h>
#include <aws/mgn/model/EnrichmentTargetS3Configuration.h>
#include <aws/mgn/model/IpAssignmentStrategy.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class StartImportFileEnrichmentRequest : public MgnRequest {
 public:
  AWS_MGN_API StartImportFileEnrichmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartImportFileEnrichment"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartImportFileEnrichmentRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 configuration specifying the source location of the import file to be
   * enriched.</p>
   */
  inline const EnrichmentSourceS3Configuration& GetS3BucketSource() const { return m_s3BucketSource; }
  inline bool S3BucketSourceHasBeenSet() const { return m_s3BucketSourceHasBeenSet; }
  template <typename S3BucketSourceT = EnrichmentSourceS3Configuration>
  void SetS3BucketSource(S3BucketSourceT&& value) {
    m_s3BucketSourceHasBeenSet = true;
    m_s3BucketSource = std::forward<S3BucketSourceT>(value);
  }
  template <typename S3BucketSourceT = EnrichmentSourceS3Configuration>
  StartImportFileEnrichmentRequest& WithS3BucketSource(S3BucketSourceT&& value) {
    SetS3BucketSource(std::forward<S3BucketSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 configuration specifying the target location where the enriched import
   * file will be stored.</p>
   */
  inline const EnrichmentTargetS3Configuration& GetS3BucketTarget() const { return m_s3BucketTarget; }
  inline bool S3BucketTargetHasBeenSet() const { return m_s3BucketTargetHasBeenSet; }
  template <typename S3BucketTargetT = EnrichmentTargetS3Configuration>
  void SetS3BucketTarget(S3BucketTargetT&& value) {
    m_s3BucketTargetHasBeenSet = true;
    m_s3BucketTarget = std::forward<S3BucketTargetT>(value);
  }
  template <typename S3BucketTargetT = EnrichmentTargetS3Configuration>
  StartImportFileEnrichmentRequest& WithS3BucketTarget(S3BucketTargetT&& value) {
    SetS3BucketTarget(std::forward<S3BucketTargetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP assignment strategy to use when enriching the import file. Can be
   * STATIC or DYNAMIC.</p>
   */
  inline IpAssignmentStrategy GetIpAssignmentStrategy() const { return m_ipAssignmentStrategy; }
  inline bool IpAssignmentStrategyHasBeenSet() const { return m_ipAssignmentStrategyHasBeenSet; }
  inline void SetIpAssignmentStrategy(IpAssignmentStrategy value) {
    m_ipAssignmentStrategyHasBeenSet = true;
    m_ipAssignmentStrategy = value;
  }
  inline StartImportFileEnrichmentRequest& WithIpAssignmentStrategy(IpAssignmentStrategy value) {
    SetIpAssignmentStrategy(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  EnrichmentSourceS3Configuration m_s3BucketSource;

  EnrichmentTargetS3Configuration m_s3BucketTarget;

  IpAssignmentStrategy m_ipAssignmentStrategy{IpAssignmentStrategy::NOT_SET};
  bool m_clientTokenHasBeenSet = true;
  bool m_s3BucketSourceHasBeenSet = false;
  bool m_s3BucketTargetHasBeenSet = false;
  bool m_ipAssignmentStrategyHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
