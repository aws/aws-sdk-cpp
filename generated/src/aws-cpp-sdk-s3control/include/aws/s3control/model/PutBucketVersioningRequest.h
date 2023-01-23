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
    AWS_S3CONTROL_API PutBucketVersioningRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutBucketVersioning"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }


    /**
     * <p>The Amazon Web Services account ID of the S3 on Outposts bucket.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the S3 on Outposts bucket.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the S3 on Outposts bucket.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the S3 on Outposts bucket.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the S3 on Outposts bucket.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the S3 on Outposts bucket.</p>
     */
    inline PutBucketVersioningRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the S3 on Outposts bucket.</p>
     */
    inline PutBucketVersioningRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the S3 on Outposts bucket.</p>
     */
    inline PutBucketVersioningRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The S3 on Outposts bucket to set the versioning state for.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The S3 on Outposts bucket to set the versioning state for.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The S3 on Outposts bucket to set the versioning state for.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The S3 on Outposts bucket to set the versioning state for.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The S3 on Outposts bucket to set the versioning state for.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The S3 on Outposts bucket to set the versioning state for.</p>
     */
    inline PutBucketVersioningRequest& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The S3 on Outposts bucket to set the versioning state for.</p>
     */
    inline PutBucketVersioningRequest& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The S3 on Outposts bucket to set the versioning state for.</p>
     */
    inline PutBucketVersioningRequest& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The concatenation of the authentication device's serial number, a space, and
     * the value that is displayed on your authentication device.</p>
     */
    inline const Aws::String& GetMFA() const{ return m_mFA; }

    /**
     * <p>The concatenation of the authentication device's serial number, a space, and
     * the value that is displayed on your authentication device.</p>
     */
    inline bool MFAHasBeenSet() const { return m_mFAHasBeenSet; }

    /**
     * <p>The concatenation of the authentication device's serial number, a space, and
     * the value that is displayed on your authentication device.</p>
     */
    inline void SetMFA(const Aws::String& value) { m_mFAHasBeenSet = true; m_mFA = value; }

    /**
     * <p>The concatenation of the authentication device's serial number, a space, and
     * the value that is displayed on your authentication device.</p>
     */
    inline void SetMFA(Aws::String&& value) { m_mFAHasBeenSet = true; m_mFA = std::move(value); }

    /**
     * <p>The concatenation of the authentication device's serial number, a space, and
     * the value that is displayed on your authentication device.</p>
     */
    inline void SetMFA(const char* value) { m_mFAHasBeenSet = true; m_mFA.assign(value); }

    /**
     * <p>The concatenation of the authentication device's serial number, a space, and
     * the value that is displayed on your authentication device.</p>
     */
    inline PutBucketVersioningRequest& WithMFA(const Aws::String& value) { SetMFA(value); return *this;}

    /**
     * <p>The concatenation of the authentication device's serial number, a space, and
     * the value that is displayed on your authentication device.</p>
     */
    inline PutBucketVersioningRequest& WithMFA(Aws::String&& value) { SetMFA(std::move(value)); return *this;}

    /**
     * <p>The concatenation of the authentication device's serial number, a space, and
     * the value that is displayed on your authentication device.</p>
     */
    inline PutBucketVersioningRequest& WithMFA(const char* value) { SetMFA(value); return *this;}


    /**
     * <p>The root-level tag for the <code>VersioningConfiguration</code>
     * parameters.</p>
     */
    inline const VersioningConfiguration& GetVersioningConfiguration() const{ return m_versioningConfiguration; }

    /**
     * <p>The root-level tag for the <code>VersioningConfiguration</code>
     * parameters.</p>
     */
    inline bool VersioningConfigurationHasBeenSet() const { return m_versioningConfigurationHasBeenSet; }

    /**
     * <p>The root-level tag for the <code>VersioningConfiguration</code>
     * parameters.</p>
     */
    inline void SetVersioningConfiguration(const VersioningConfiguration& value) { m_versioningConfigurationHasBeenSet = true; m_versioningConfiguration = value; }

    /**
     * <p>The root-level tag for the <code>VersioningConfiguration</code>
     * parameters.</p>
     */
    inline void SetVersioningConfiguration(VersioningConfiguration&& value) { m_versioningConfigurationHasBeenSet = true; m_versioningConfiguration = std::move(value); }

    /**
     * <p>The root-level tag for the <code>VersioningConfiguration</code>
     * parameters.</p>
     */
    inline PutBucketVersioningRequest& WithVersioningConfiguration(const VersioningConfiguration& value) { SetVersioningConfiguration(value); return *this;}

    /**
     * <p>The root-level tag for the <code>VersioningConfiguration</code>
     * parameters.</p>
     */
    inline PutBucketVersioningRequest& WithVersioningConfiguration(VersioningConfiguration&& value) { SetVersioningConfiguration(std::move(value)); return *this;}

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
