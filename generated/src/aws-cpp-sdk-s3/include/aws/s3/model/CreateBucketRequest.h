/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/s3/model/BucketCannedACL.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/CreateBucketConfiguration.h>
#include <aws/s3/model/ObjectOwnership.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3
{
namespace Model
{

  /**
   */
  class CreateBucketRequest : public S3Request
  {
  public:
    AWS_S3_API CreateBucketRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBucket"; }

    AWS_S3_API Aws::String SerializePayload() const override;

    AWS_S3_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3_API bool HasEmbeddedError(IOStream &body, const Http::HeaderValueCollection &header) const override;
    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The canned ACL to apply to the bucket.</p>  <p>This functionality is
     * not supported for directory buckets.</p> 
     */
    inline BucketCannedACL GetACL() const { return m_aCL; }
    inline bool ACLHasBeenSet() const { return m_aCLHasBeenSet; }
    inline void SetACL(BucketCannedACL value) { m_aCLHasBeenSet = true; m_aCL = value; }
    inline CreateBucketRequest& WithACL(BucketCannedACL value) { SetACL(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bucket to create.</p> <p> <b>General purpose buckets</b> -
     * For information about bucket naming restrictions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucketnamingrules.html">Bucket
     * naming rules</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Directory
     * buckets </b> - When you use this operation with a directory bucket, you must use
     * path-style requests in the format
     * <code>https://s3express-control.<i>region-code</i>.amazonaws.com/<i>bucket-name</i>
     * </code>. Virtual-hosted-style requests aren't supported. Directory bucket names
     * must be unique in the chosen Zone (Availability Zone or Local Zone). Bucket
     * names must also follow the format <code>
     * <i>bucket-base-name</i>--<i>zone-id</i>--x-s3</code> (for example, <code>
     * <i>DOC-EXAMPLE-BUCKET</i>--<i>usw2-az1</i>--x-s3</code>). For information about
     * bucket naming restrictions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-bucket-naming-rules.html">Directory
     * bucket naming rules</a> in the <i>Amazon S3 User Guide</i> </p>
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
     * <p>The configuration information for the bucket.</p>
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
     * bucket.</p>  <p>This functionality is not supported for directory
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
     * <p>Allows grantee to list the objects in the bucket.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
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
     * <p>Allows grantee to read the bucket ACL.</p>  <p>This functionality is
     * not supported for directory buckets.</p> 
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
     * <p>Allows grantee to create new objects in the bucket.</p> <p>For the bucket and
     * object owners of existing objects, also allows deletions and overwrites of those
     * objects.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
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
     * functionality is not supported for directory buckets.</p> 
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
     * bucket.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline bool GetObjectLockEnabledForBucket() const { return m_objectLockEnabledForBucket; }
    inline bool ObjectLockEnabledForBucketHasBeenSet() const { return m_objectLockEnabledForBucketHasBeenSet; }
    inline void SetObjectLockEnabledForBucket(bool value) { m_objectLockEnabledForBucketHasBeenSet = true; m_objectLockEnabledForBucket = value; }
    inline CreateBucketRequest& WithObjectLockEnabledForBucket(bool value) { SetObjectLockEnabledForBucket(value); return *this;}
    ///@}

    ///@{
    
    inline ObjectOwnership GetObjectOwnership() const { return m_objectOwnership; }
    inline bool ObjectOwnershipHasBeenSet() const { return m_objectOwnershipHasBeenSet; }
    inline void SetObjectOwnership(ObjectOwnership value) { m_objectOwnershipHasBeenSet = true; m_objectOwnership = value; }
    inline CreateBucketRequest& WithObjectOwnership(ObjectOwnership value) { SetObjectOwnership(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    CreateBucketRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    CreateBucketRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
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

    ObjectOwnership m_objectOwnership{ObjectOwnership::NOT_SET};
    bool m_objectOwnershipHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
