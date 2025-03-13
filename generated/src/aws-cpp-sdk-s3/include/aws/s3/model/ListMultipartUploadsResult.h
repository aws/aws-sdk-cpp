/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/EncodingType.h>
#include <aws/s3/model/RequestCharged.h>
#include <aws/s3/model/MultipartUpload.h>
#include <aws/s3/model/CommonPrefix.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{
  class ListMultipartUploadsResult
  {
  public:
    AWS_S3_API ListMultipartUploadsResult() = default;
    AWS_S3_API ListMultipartUploadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API ListMultipartUploadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The name of the bucket to which the multipart upload was initiated. Does not
     * return the access point ARN or access point alias if used.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    ListMultipartUploadsResult& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The key at or after which the listing began.</p>
     */
    inline const Aws::String& GetKeyMarker() const { return m_keyMarker; }
    template<typename KeyMarkerT = Aws::String>
    void SetKeyMarker(KeyMarkerT&& value) { m_keyMarkerHasBeenSet = true; m_keyMarker = std::forward<KeyMarkerT>(value); }
    template<typename KeyMarkerT = Aws::String>
    ListMultipartUploadsResult& WithKeyMarker(KeyMarkerT&& value) { SetKeyMarker(std::forward<KeyMarkerT>(value)); return *this;}
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
    template<typename UploadIdMarkerT = Aws::String>
    void SetUploadIdMarker(UploadIdMarkerT&& value) { m_uploadIdMarkerHasBeenSet = true; m_uploadIdMarker = std::forward<UploadIdMarkerT>(value); }
    template<typename UploadIdMarkerT = Aws::String>
    ListMultipartUploadsResult& WithUploadIdMarker(UploadIdMarkerT&& value) { SetUploadIdMarker(std::forward<UploadIdMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a list is truncated, this element specifies the value that should be
     * used for the key-marker request parameter in a subsequent request.</p>
     */
    inline const Aws::String& GetNextKeyMarker() const { return m_nextKeyMarker; }
    template<typename NextKeyMarkerT = Aws::String>
    void SetNextKeyMarker(NextKeyMarkerT&& value) { m_nextKeyMarkerHasBeenSet = true; m_nextKeyMarker = std::forward<NextKeyMarkerT>(value); }
    template<typename NextKeyMarkerT = Aws::String>
    ListMultipartUploadsResult& WithNextKeyMarker(NextKeyMarkerT&& value) { SetNextKeyMarker(std::forward<NextKeyMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a prefix is provided in the request, this field contains the specified
     * prefix. The result contains only keys starting with the specified prefix.</p>
     *  <p> <b>Directory buckets</b> - For directory buckets, only prefixes that
     * end in a delimiter (<code>/</code>) are supported.</p> 
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    ListMultipartUploadsResult& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the delimiter you specified in the request. If you don't specify a
     * delimiter in your request, this element is absent from the response.</p> 
     * <p> <b>Directory buckets</b> - For directory buckets, <code>/</code> is the only
     * supported delimiter.</p> 
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    ListMultipartUploadsResult& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a list is truncated, this element specifies the value that should be
     * used for the <code>upload-id-marker</code> request parameter in a subsequent
     * request.</p>  <p>This functionality is not supported for directory
     * buckets.</p> 
     */
    inline const Aws::String& GetNextUploadIdMarker() const { return m_nextUploadIdMarker; }
    template<typename NextUploadIdMarkerT = Aws::String>
    void SetNextUploadIdMarker(NextUploadIdMarkerT&& value) { m_nextUploadIdMarkerHasBeenSet = true; m_nextUploadIdMarker = std::forward<NextUploadIdMarkerT>(value); }
    template<typename NextUploadIdMarkerT = Aws::String>
    ListMultipartUploadsResult& WithNextUploadIdMarker(NextUploadIdMarkerT&& value) { SetNextUploadIdMarker(std::forward<NextUploadIdMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of multipart uploads that could have been included in the
     * response.</p>
     */
    inline int GetMaxUploads() const { return m_maxUploads; }
    inline void SetMaxUploads(int value) { m_maxUploadsHasBeenSet = true; m_maxUploads = value; }
    inline ListMultipartUploadsResult& WithMaxUploads(int value) { SetMaxUploads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the returned list of multipart uploads is truncated. A
     * value of true indicates that the list was truncated. The list can be truncated
     * if the number of multipart uploads exceeds the limit allowed or specified by max
     * uploads.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListMultipartUploadsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for elements related to a particular multipart upload. A response
     * can contain zero or more <code>Upload</code> elements.</p>
     */
    inline const Aws::Vector<MultipartUpload>& GetUploads() const { return m_uploads; }
    template<typename UploadsT = Aws::Vector<MultipartUpload>>
    void SetUploads(UploadsT&& value) { m_uploadsHasBeenSet = true; m_uploads = std::forward<UploadsT>(value); }
    template<typename UploadsT = Aws::Vector<MultipartUpload>>
    ListMultipartUploadsResult& WithUploads(UploadsT&& value) { SetUploads(std::forward<UploadsT>(value)); return *this;}
    template<typename UploadsT = MultipartUpload>
    ListMultipartUploadsResult& AddUploads(UploadsT&& value) { m_uploadsHasBeenSet = true; m_uploads.emplace_back(std::forward<UploadsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you specify a delimiter in the request, then the result returns each
     * distinct key prefix containing the delimiter in a <code>CommonPrefixes</code>
     * element. The distinct key prefixes are returned in the <code>Prefix</code> child
     * element.</p>  <p> <b>Directory buckets</b> - For directory buckets, only
     * prefixes that end in a delimiter (<code>/</code>) are supported.</p> 
     */
    inline const Aws::Vector<CommonPrefix>& GetCommonPrefixes() const { return m_commonPrefixes; }
    template<typename CommonPrefixesT = Aws::Vector<CommonPrefix>>
    void SetCommonPrefixes(CommonPrefixesT&& value) { m_commonPrefixesHasBeenSet = true; m_commonPrefixes = std::forward<CommonPrefixesT>(value); }
    template<typename CommonPrefixesT = Aws::Vector<CommonPrefix>>
    ListMultipartUploadsResult& WithCommonPrefixes(CommonPrefixesT&& value) { SetCommonPrefixes(std::forward<CommonPrefixesT>(value)); return *this;}
    template<typename CommonPrefixesT = CommonPrefix>
    ListMultipartUploadsResult& AddCommonPrefixes(CommonPrefixesT&& value) { m_commonPrefixesHasBeenSet = true; m_commonPrefixes.emplace_back(std::forward<CommonPrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Encoding type used by Amazon S3 to encode object keys in the response.</p>
     * <p>If you specify the <code>encoding-type</code> request parameter, Amazon S3
     * includes this element in the response, and returns encoded key name values in
     * the following response elements:</p> <p> <code>Delimiter</code>,
     * <code>KeyMarker</code>, <code>Prefix</code>, <code>NextKeyMarker</code>,
     * <code>Key</code>.</p>
     */
    inline EncodingType GetEncodingType() const { return m_encodingType; }
    inline void SetEncodingType(EncodingType value) { m_encodingTypeHasBeenSet = true; m_encodingType = value; }
    inline ListMultipartUploadsResult& WithEncodingType(EncodingType value) { SetEncodingType(value); return *this;}
    ///@}

    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline ListMultipartUploadsResult& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMultipartUploadsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyMarker;
    bool m_keyMarkerHasBeenSet = false;

    Aws::String m_uploadIdMarker;
    bool m_uploadIdMarkerHasBeenSet = false;

    Aws::String m_nextKeyMarker;
    bool m_nextKeyMarkerHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    Aws::String m_nextUploadIdMarker;
    bool m_nextUploadIdMarkerHasBeenSet = false;

    int m_maxUploads{0};
    bool m_maxUploadsHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::Vector<MultipartUpload> m_uploads;
    bool m_uploadsHasBeenSet = false;

    Aws::Vector<CommonPrefix> m_commonPrefixes;
    bool m_commonPrefixesHasBeenSet = false;

    EncodingType m_encodingType{EncodingType::NOT_SET};
    bool m_encodingTypeHasBeenSet = false;

    RequestCharged m_requestCharged{RequestCharged::NOT_SET};
    bool m_requestChargedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
