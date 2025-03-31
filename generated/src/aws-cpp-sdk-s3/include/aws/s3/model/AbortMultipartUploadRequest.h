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
  class AbortMultipartUploadRequest : public S3Request
  {
  public:
    AWS_S3_API AbortMultipartUploadRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AbortMultipartUpload"; }

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
     * <p>The bucket name to which the upload was taking place. </p> <p> <b>Directory
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
    AbortMultipartUploadRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key of the object for which the multipart upload was initiated.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    AbortMultipartUploadRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Upload ID that identifies the multipart upload.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    AbortMultipartUploadRequest& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline RequestPayer GetRequestPayer() const { return m_requestPayer; }
    inline bool RequestPayerHasBeenSet() const { return m_requestPayerHasBeenSet; }
    inline void SetRequestPayer(RequestPayer value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }
    inline AbortMultipartUploadRequest& WithRequestPayer(RequestPayer value) { SetRequestPayer(value); return *this;}
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
    AbortMultipartUploadRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If present, this header aborts an in progress multipart upload only if it was
     * initiated on the provided timestamp. If the initiated timestamp of the multipart
     * upload does not match the provided value, the operation returns a <code>412
     * Precondition Failed</code> error. If the initiated timestamp matches or if the
     * multipart upload doesn’t exist, the operation returns a <code>204 Success (No
     * Content)</code> response. </p>  <p>This functionality is only supported
     * for directory buckets.</p> 
     */
    inline const Aws::Utils::DateTime& GetIfMatchInitiatedTime() const { return m_ifMatchInitiatedTime; }
    inline bool IfMatchInitiatedTimeHasBeenSet() const { return m_ifMatchInitiatedTimeHasBeenSet; }
    template<typename IfMatchInitiatedTimeT = Aws::Utils::DateTime>
    void SetIfMatchInitiatedTime(IfMatchInitiatedTimeT&& value) { m_ifMatchInitiatedTimeHasBeenSet = true; m_ifMatchInitiatedTime = std::forward<IfMatchInitiatedTimeT>(value); }
    template<typename IfMatchInitiatedTimeT = Aws::Utils::DateTime>
    AbortMultipartUploadRequest& WithIfMatchInitiatedTime(IfMatchInitiatedTimeT&& value) { SetIfMatchInitiatedTime(std::forward<IfMatchInitiatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    AbortMultipartUploadRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    AbortMultipartUploadRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    RequestPayer m_requestPayer{RequestPayer::NOT_SET};
    bool m_requestPayerHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    Aws::Utils::DateTime m_ifMatchInitiatedTime{};
    bool m_ifMatchInitiatedTimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
