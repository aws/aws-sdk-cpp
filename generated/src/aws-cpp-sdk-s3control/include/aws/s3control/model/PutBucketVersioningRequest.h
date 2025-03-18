/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/VersioningConfiguration.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class PutBucketVersioningRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API PutBucketVersioningRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBucketVersioning"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the S3 on Outposts bucket.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    PutBucketVersioningRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 on Outposts bucket to set the versioning state for.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    PutBucketVersioningRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The concatenation of the authentication device's serial number, a space, and
     * the value that is displayed on your authentication device.</p>
     */
    inline const Aws::String& GetMFA() const { return m_mFA; }
    inline bool MFAHasBeenSet() const { return m_mFAHasBeenSet; }
    template<typename MFAT = Aws::String>
    void SetMFA(MFAT&& value) { m_mFAHasBeenSet = true; m_mFA = std::forward<MFAT>(value); }
    template<typename MFAT = Aws::String>
    PutBucketVersioningRequest& WithMFA(MFAT&& value) { SetMFA(std::forward<MFAT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root-level tag for the <code>VersioningConfiguration</code>
     * parameters.</p>
     */
    inline const VersioningConfiguration& GetVersioningConfiguration() const { return m_versioningConfiguration; }
    inline bool VersioningConfigurationHasBeenSet() const { return m_versioningConfigurationHasBeenSet; }
    template<typename VersioningConfigurationT = VersioningConfiguration>
    void SetVersioningConfiguration(VersioningConfigurationT&& value) { m_versioningConfigurationHasBeenSet = true; m_versioningConfiguration = std::forward<VersioningConfigurationT>(value); }
    template<typename VersioningConfigurationT = VersioningConfiguration>
    PutBucketVersioningRequest& WithVersioningConfiguration(VersioningConfigurationT&& value) { SetVersioningConfiguration(std::forward<VersioningConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_mFA;
    bool m_mFAHasBeenSet = false;

    VersioningConfiguration m_versioningConfiguration;
    bool m_versioningConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
