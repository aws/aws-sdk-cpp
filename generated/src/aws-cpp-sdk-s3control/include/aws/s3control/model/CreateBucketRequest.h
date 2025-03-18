/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/s3control/model/BucketCannedACL.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/CreateBucketConfiguration.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class CreateBucketRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API CreateBucketRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBucket"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The canned ACL to apply to the bucket.</p>  <p>This is not supported by
     * Amazon S3 on Outposts buckets.</p> 
     */
    inline BucketCannedACL GetACL() const { return m_aCL; }
    inline bool ACLHasBeenSet() const { return m_aCLHasBeenSet; }
    inline void SetACL(BucketCannedACL value) { m_aCLHasBeenSet = true; m_aCL = value; }
    inline CreateBucketRequest& WithACL(BucketCannedACL value) { SetACL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bucket.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    CreateBucketRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the bucket.</p>  <p>This is not
     * supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline const CreateBucketConfiguration& GetCreateBucketConfiguration() const { return m_createBucketConfiguration; }
    inline bool CreateBucketConfigurationHasBeenSet() const { return m_createBucketConfigurationHasBeenSet; }
    template<typename CreateBucketConfigurationT = CreateBucketConfiguration>
    void SetCreateBucketConfiguration(CreateBucketConfigurationT&& value) { m_createBucketConfigurationHasBeenSet = true; m_createBucketConfiguration = std::forward<CreateBucketConfigurationT>(value); }
    template<typename CreateBucketConfigurationT = CreateBucketConfiguration>
    CreateBucketRequest& WithCreateBucketConfiguration(CreateBucketConfigurationT&& value) { SetCreateBucketConfiguration(std::forward<CreateBucketConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee the read, write, read ACP, and write ACP permissions on the
     * bucket.</p>  <p>This is not supported by Amazon S3 on Outposts
     * buckets.</p> 
     */
    inline const Aws::String& GetGrantFullControl() const { return m_grantFullControl; }
    inline bool GrantFullControlHasBeenSet() const { return m_grantFullControlHasBeenSet; }
    template<typename GrantFullControlT = Aws::String>
    void SetGrantFullControl(GrantFullControlT&& value) { m_grantFullControlHasBeenSet = true; m_grantFullControl = std::forward<GrantFullControlT>(value); }
    template<typename GrantFullControlT = Aws::String>
    CreateBucketRequest& WithGrantFullControl(GrantFullControlT&& value) { SetGrantFullControl(std::forward<GrantFullControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee to list the objects in the bucket.</p>  <p>This is not
     * supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline const Aws::String& GetGrantRead() const { return m_grantRead; }
    inline bool GrantReadHasBeenSet() const { return m_grantReadHasBeenSet; }
    template<typename GrantReadT = Aws::String>
    void SetGrantRead(GrantReadT&& value) { m_grantReadHasBeenSet = true; m_grantRead = std::forward<GrantReadT>(value); }
    template<typename GrantReadT = Aws::String>
    CreateBucketRequest& WithGrantRead(GrantReadT&& value) { SetGrantRead(std::forward<GrantReadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee to read the bucket ACL.</p>  <p>This is not supported by
     * Amazon S3 on Outposts buckets.</p> 
     */
    inline const Aws::String& GetGrantReadACP() const { return m_grantReadACP; }
    inline bool GrantReadACPHasBeenSet() const { return m_grantReadACPHasBeenSet; }
    template<typename GrantReadACPT = Aws::String>
    void SetGrantReadACP(GrantReadACPT&& value) { m_grantReadACPHasBeenSet = true; m_grantReadACP = std::forward<GrantReadACPT>(value); }
    template<typename GrantReadACPT = Aws::String>
    CreateBucketRequest& WithGrantReadACP(GrantReadACPT&& value) { SetGrantReadACP(std::forward<GrantReadACPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee to create, overwrite, and delete any object in the bucket.</p>
     *  <p>This is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline const Aws::String& GetGrantWrite() const { return m_grantWrite; }
    inline bool GrantWriteHasBeenSet() const { return m_grantWriteHasBeenSet; }
    template<typename GrantWriteT = Aws::String>
    void SetGrantWrite(GrantWriteT&& value) { m_grantWriteHasBeenSet = true; m_grantWrite = std::forward<GrantWriteT>(value); }
    template<typename GrantWriteT = Aws::String>
    CreateBucketRequest& WithGrantWrite(GrantWriteT&& value) { SetGrantWrite(std::forward<GrantWriteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Allows grantee to write the ACL for the applicable bucket.</p>  <p>This
     * is not supported by Amazon S3 on Outposts buckets.</p> 
     */
    inline const Aws::String& GetGrantWriteACP() const { return m_grantWriteACP; }
    inline bool GrantWriteACPHasBeenSet() const { return m_grantWriteACPHasBeenSet; }
    template<typename GrantWriteACPT = Aws::String>
    void SetGrantWriteACP(GrantWriteACPT&& value) { m_grantWriteACPHasBeenSet = true; m_grantWriteACP = std::forward<GrantWriteACPT>(value); }
    template<typename GrantWriteACPT = Aws::String>
    CreateBucketRequest& WithGrantWriteACP(GrantWriteACPT&& value) { SetGrantWriteACP(std::forward<GrantWriteACPT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether you want S3 Object Lock to be enabled for the new
     * bucket.</p>  <p>This is not supported by Amazon S3 on Outposts
     * buckets.</p> 
     */
    inline bool GetObjectLockEnabledForBucket() const { return m_objectLockEnabledForBucket; }
    inline bool ObjectLockEnabledForBucketHasBeenSet() const { return m_objectLockEnabledForBucketHasBeenSet; }
    inline void SetObjectLockEnabledForBucket(bool value) { m_objectLockEnabledForBucketHasBeenSet = true; m_objectLockEnabledForBucket = value; }
    inline CreateBucketRequest& WithObjectLockEnabledForBucket(bool value) { SetObjectLockEnabledForBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Outposts where the bucket is being created.</p>  <p>This
     * ID is required by Amazon S3 on Outposts buckets.</p> 
     */
    inline const Aws::String& GetOutpostId() const { return m_outpostId; }
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }
    template<typename OutpostIdT = Aws::String>
    void SetOutpostId(OutpostIdT&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::forward<OutpostIdT>(value); }
    template<typename OutpostIdT = Aws::String>
    CreateBucketRequest& WithOutpostId(OutpostIdT&& value) { SetOutpostId(std::forward<OutpostIdT>(value)); return *this;}
    ///@}
  private:

    BucketCannedACL m_aCL{BucketCannedACL::NOT_SET};
    bool m_aCLHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    CreateBucketConfiguration m_createBucketConfiguration;
    bool m_createBucketConfigurationHasBeenSet = false;

    Aws::String m_grantFullControl;
    bool m_grantFullControlHasBeenSet = false;

    Aws::String m_grantRead;
    bool m_grantReadHasBeenSet = false;

    Aws::String m_grantReadACP;
    bool m_grantReadACPHasBeenSet = false;

    Aws::String m_grantWrite;
    bool m_grantWriteHasBeenSet = false;

    Aws::String m_grantWriteACP;
    bool m_grantWriteACPHasBeenSet = false;

    bool m_objectLockEnabledForBucket{false};
    bool m_objectLockEnabledForBucketHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
