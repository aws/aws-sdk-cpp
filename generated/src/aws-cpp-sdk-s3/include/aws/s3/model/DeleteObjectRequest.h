/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/RequestPayer.h>
#include <aws/core/utils/DateTime.h>
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
  class DeleteObjectRequest : public S3Request
  {
  public:
    AWS_S3_API DeleteObjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteObject"; }

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
     * <p>The bucket name of the bucket containing the object. </p> <p> <b>Directory
     * buckets</b> - When you use this operation with a directory bucket, you must use
     * virtual-hosted-style requests in the format <code>
     * <i>Bucket-name</i>.s3express-<i>zone-id</i>.<i>region-code</i>.amazonaws.com</code>.
     * Path-style requests are not supported. Directory bucket names must be unique in
     * the chosen Zone (Availability Zone or Local Zone). Bucket names must follow the
     * format <code> <i>bucket-base-name</i>--<i>zone-id</i>--x-s3</code> (for example,
     * <code> <i>amzn-s3-demo-bucket</i>--<i>usw2-az1</i>--x-s3</code>). For
     * information about bucket naming restrictions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-bucket-naming-rules.html">Directory
     * bucket naming rules</a> in the <i>Amazon S3 User Guide</i>.</p> <p> <b>Access
     * points</b> - When you use this action with an access point for general purpose
     * buckets, you must provide the alias of the access point in place of the bucket
     * name or specify the access point ARN. When you use this action with an access
     * point for directory buckets, you must provide the access point name in place of
     * the bucket name. When using the access point ARN, you must direct requests to
     * the access point hostname. The access point hostname takes the form
     * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com.
     * When using this action with an access point through the Amazon Web Services
     * SDKs, you provide the access point ARN in place of the bucket name. For more
     * information about access point ARNs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-access-points.html">Using
     * access points</a> in the <i>Amazon S3 User Guide</i>.</p>  <p>Object
     * Lambda access points are not supported by directory buckets.</p>  <p>
     * <b>S3 on Outposts</b> - When you use this action with S3 on Outposts, you must
     * direct requests to the S3 on Outposts hostname. The S3 on Outposts hostname
     * takes the form <code>
     * <i>AccessPointName</i>-<i>AccountId</i>.<i>outpostID</i>.s3-outposts.<i>Region</i>.amazonaws.com</code>.
     * When you use this action with S3 on Outposts, the destination bucket must be the
     * Outposts access point ARN or the access point alias. For more information about
     * S3 on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/S3onOutposts.html">What
     * is S3 on Outposts?</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    DeleteObjectRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key name of the object to delete.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    DeleteObjectRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The concatenation of the authentication device's serial number, a space, and
     * the value that is displayed on your authentication device. Required to
     * permanently delete a versioned object if versioning is configured with MFA
     * delete enabled.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline const Aws::String& GetMFA() const { return m_mFA; }
    inline bool MFAHasBeenSet() const { return m_mFAHasBeenSet; }
    template<typename MFAT = Aws::String>
    void SetMFA(MFAT&& value) { m_mFAHasBeenSet = true; m_mFA = std::forward<MFAT>(value); }
    template<typename MFAT = Aws::String>
    DeleteObjectRequest& WithMFA(MFAT&& value) { SetMFA(std::forward<MFAT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version ID used to reference a specific version of the object.</p> 
     * <p>For directory buckets in this API operation, only the <code>null</code> value
     * of the version ID is supported.</p> 
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    DeleteObjectRequest& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline RequestPayer GetRequestPayer() const { return m_requestPayer; }
    inline bool RequestPayerHasBeenSet() const { return m_requestPayerHasBeenSet; }
    inline void SetRequestPayer(RequestPayer value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }
    inline DeleteObjectRequest& WithRequestPayer(RequestPayer value) { SetRequestPayer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether S3 Object Lock should bypass Governance-mode restrictions
     * to process this operation. To use this header, you must have the
     * <code>s3:BypassGovernanceRetention</code> permission.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline bool GetBypassGovernanceRetention() const { return m_bypassGovernanceRetention; }
    inline bool BypassGovernanceRetentionHasBeenSet() const { return m_bypassGovernanceRetentionHasBeenSet; }
    inline void SetBypassGovernanceRetention(bool value) { m_bypassGovernanceRetentionHasBeenSet = true; m_bypassGovernanceRetention = value; }
    inline DeleteObjectRequest& WithBypassGovernanceRetention(bool value) { SetBypassGovernanceRetention(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the expected bucket owner. If the account ID that you
     * provide does not match the actual owner of the bucket, the request fails with
     * the HTTP status code <code>403 Forbidden</code> (access denied).</p>
     */
    inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
    inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
    template<typename ExpectedBucketOwnerT = Aws::String>
    void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) { m_expectedBucketOwnerHasBeenSet = true; m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value); }
    template<typename ExpectedBucketOwnerT = Aws::String>
    DeleteObjectRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>If-Match</code> header field makes the request method conditional
     * on ETags. If the ETag value does not match, the operation returns a <code>412
     * Precondition Failed</code> error. If the ETag matches or if the object doesn't
     * exist, the operation will return a <code>204 Success (No Content)
     * response</code>.</p> <p>For more information about conditional requests, see <a
     * href="https://tools.ietf.org/html/rfc7232">RFC 7232</a>.</p>  <p>This
     * functionality is only supported for directory buckets.</p> 
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    DeleteObjectRequest& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, the object is deleted only if its modification times matches the
     * provided <code>Timestamp</code>. If the <code>Timestamp</code> values do not
     * match, the operation returns a <code>412 Precondition Failed</code> error. If
     * the <code>Timestamp</code> matches or if the object doesn’t exist, the operation
     * returns a <code>204 Success (No Content)</code> response.</p>  <p>This
     * functionality is only supported for directory buckets.</p> 
     */
    inline const Aws::Utils::DateTime& GetIfMatchLastModifiedTime() const { return m_ifMatchLastModifiedTime; }
    inline bool IfMatchLastModifiedTimeHasBeenSet() const { return m_ifMatchLastModifiedTimeHasBeenSet; }
    template<typename IfMatchLastModifiedTimeT = Aws::Utils::DateTime>
    void SetIfMatchLastModifiedTime(IfMatchLastModifiedTimeT&& value) { m_ifMatchLastModifiedTimeHasBeenSet = true; m_ifMatchLastModifiedTime = std::forward<IfMatchLastModifiedTimeT>(value); }
    template<typename IfMatchLastModifiedTimeT = Aws::Utils::DateTime>
    DeleteObjectRequest& WithIfMatchLastModifiedTime(IfMatchLastModifiedTimeT&& value) { SetIfMatchLastModifiedTime(std::forward<IfMatchLastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, the object is deleted only if its size matches the provided size
     * in bytes. If the <code>Size</code> value does not match, the operation returns a
     * <code>412 Precondition Failed</code> error. If the <code>Size</code> matches or
     * if the object doesn’t exist, the operation returns a <code>204 Success (No
     * Content)</code> response.</p>  <p>This functionality is only supported for
     * directory buckets.</p>   <p>You can use the
     * <code>If-Match</code>, <code>x-amz-if-match-last-modified-time</code> and
     * <code>x-amz-if-match-size</code> conditional headers in conjunction with
     * each-other or individually.</p> 
     */
    inline long long GetIfMatchSize() const { return m_ifMatchSize; }
    inline bool IfMatchSizeHasBeenSet() const { return m_ifMatchSizeHasBeenSet; }
    inline void SetIfMatchSize(long long value) { m_ifMatchSizeHasBeenSet = true; m_ifMatchSize = value; }
    inline DeleteObjectRequest& WithIfMatchSize(long long value) { SetIfMatchSize(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    DeleteObjectRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    DeleteObjectRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_mFA;
    bool m_mFAHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    RequestPayer m_requestPayer{RequestPayer::NOT_SET};
    bool m_requestPayerHasBeenSet = false;

    bool m_bypassGovernanceRetention{false};
    bool m_bypassGovernanceRetentionHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    Aws::Utils::DateTime m_ifMatchLastModifiedTime{};
    bool m_ifMatchLastModifiedTimeHasBeenSet = false;

    long long m_ifMatchSize{0};
    bool m_ifMatchSizeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
