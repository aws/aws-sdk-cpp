/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/EncodingType.h>
#include <aws/s3/model/RequestPayer.h>
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
  class ListMultipartUploadsRequest : public S3Request
  {
  public:
    AWS_S3_API ListMultipartUploadsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMultipartUploads"; }

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
     * <p>The name of the bucket to which the multipart upload was initiated. </p> <p>
     * <b>Directory buckets</b> - When you use this operation with a directory bucket,
     * you must use virtual-hosted-style requests in the format <code>
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
    ListMultipartUploadsRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Character you use to group keys.</p> <p>All keys that contain the same string
     * between the prefix, if specified, and the first occurrence of the delimiter
     * after the prefix are grouped under a single result element,
     * <code>CommonPrefixes</code>. If you don't specify the prefix parameter, then the
     * substring starts at the beginning of the key. The keys that are grouped under
     * <code>CommonPrefixes</code> result element are not returned elsewhere in the
     * response.</p>  <p> <b>Directory buckets</b> - For directory buckets,
     * <code>/</code> is the only supported delimiter.</p> 
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    ListMultipartUploadsRequest& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline EncodingType GetEncodingType() const { return m_encodingType; }
    inline bool EncodingTypeHasBeenSet() const { return m_encodingTypeHasBeenSet; }
    inline void SetEncodingType(EncodingType value) { m_encodingTypeHasBeenSet = true; m_encodingType = value; }
    inline ListMultipartUploadsRequest& WithEncodingType(EncodingType value) { SetEncodingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the multipart upload after which listing should begin.</p> 
     * <ul> <li> <p> <b>General purpose buckets</b> - For general purpose buckets,
     * <code>key-marker</code> is an object key. Together with
     * <code>upload-id-marker</code>, this parameter specifies the multipart upload
     * after which listing should begin.</p> <p>If <code>upload-id-marker</code> is not
     * specified, only the keys lexicographically greater than the specified
     * <code>key-marker</code> will be included in the list.</p> <p>If
     * <code>upload-id-marker</code> is specified, any multipart uploads for a key
     * equal to the <code>key-marker</code> might also be included, provided those
     * multipart uploads have upload IDs lexicographically greater than the specified
     * <code>upload-id-marker</code>.</p> </li> <li> <p> <b>Directory buckets</b> - For
     * directory buckets, <code>key-marker</code> is obfuscated and isn't a real object
     * key. The <code>upload-id-marker</code> parameter isn't supported by directory
     * buckets. To list the additional multipart uploads, you only need to set the
     * value of <code>key-marker</code> to the <code>NextKeyMarker</code> value from
     * the previous response. </p> <p>In the <code>ListMultipartUploads</code>
     * response, the multipart uploads aren't sorted lexicographically based on the
     * object keys. </p> </li> </ul> 
     */
    inline const Aws::String& GetKeyMarker() const { return m_keyMarker; }
    inline bool KeyMarkerHasBeenSet() const { return m_keyMarkerHasBeenSet; }
    template<typename KeyMarkerT = Aws::String>
    void SetKeyMarker(KeyMarkerT&& value) { m_keyMarkerHasBeenSet = true; m_keyMarker = std::forward<KeyMarkerT>(value); }
    template<typename KeyMarkerT = Aws::String>
    ListMultipartUploadsRequest& WithKeyMarker(KeyMarkerT&& value) { SetKeyMarker(std::forward<KeyMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the maximum number of multipart uploads, from 1 to 1,000, to return in
     * the response body. 1,000 is the maximum number of uploads that can be returned
     * in a response.</p>
     */
    inline int GetMaxUploads() const { return m_maxUploads; }
    inline bool MaxUploadsHasBeenSet() const { return m_maxUploadsHasBeenSet; }
    inline void SetMaxUploads(int value) { m_maxUploadsHasBeenSet = true; m_maxUploads = value; }
    inline ListMultipartUploadsRequest& WithMaxUploads(int value) { SetMaxUploads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists in-progress uploads only for those keys that begin with the specified
     * prefix. You can use prefixes to separate a bucket into different grouping of
     * keys. (You can think of using <code>prefix</code> to make groups in the same way
     * that you'd use a folder in a file system.)</p>  <p> <b>Directory
     * buckets</b> - For directory buckets, only prefixes that end in a delimiter
     * (<code>/</code>) are supported.</p> 
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    ListMultipartUploadsRequest& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Together with key-marker, specifies the multipart upload after which listing
     * should begin. If key-marker is not specified, the upload-id-marker parameter is
     * ignored. Otherwise, any multipart uploads for a key equal to the key-marker
     * might be included in the list only if they have an upload ID lexicographically
     * greater than the specified <code>upload-id-marker</code>.</p>  <p>This
     * functionality is not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetUploadIdMarker() const { return m_uploadIdMarker; }
    inline bool UploadIdMarkerHasBeenSet() const { return m_uploadIdMarkerHasBeenSet; }
    template<typename UploadIdMarkerT = Aws::String>
    void SetUploadIdMarker(UploadIdMarkerT&& value) { m_uploadIdMarkerHasBeenSet = true; m_uploadIdMarker = std::forward<UploadIdMarkerT>(value); }
    template<typename UploadIdMarkerT = Aws::String>
    ListMultipartUploadsRequest& WithUploadIdMarker(UploadIdMarkerT&& value) { SetUploadIdMarker(std::forward<UploadIdMarkerT>(value)); return *this;}
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
    ListMultipartUploadsRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) { SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline RequestPayer GetRequestPayer() const { return m_requestPayer; }
    inline bool RequestPayerHasBeenSet() const { return m_requestPayerHasBeenSet; }
    inline void SetRequestPayer(RequestPayer value) { m_requestPayerHasBeenSet = true; m_requestPayer = value; }
    inline ListMultipartUploadsRequest& WithRequestPayer(RequestPayer value) { SetRequestPayer(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    ListMultipartUploadsRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    ListMultipartUploadsRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    EncodingType m_encodingType{EncodingType::NOT_SET};
    bool m_encodingTypeHasBeenSet = false;

    Aws::String m_keyMarker;
    bool m_keyMarkerHasBeenSet = false;

    int m_maxUploads{0};
    bool m_maxUploadsHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_uploadIdMarker;
    bool m_uploadIdMarkerHasBeenSet = false;

    Aws::String m_expectedBucketOwner;
    bool m_expectedBucketOwnerHasBeenSet = false;

    RequestPayer m_requestPayer{RequestPayer::NOT_SET};
    bool m_requestPayerHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
