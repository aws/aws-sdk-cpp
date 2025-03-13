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
#include <aws/s3/model/Object.h>
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
  class ListObjectsResult
  {
  public:
    AWS_S3_API ListObjectsResult() = default;
    AWS_S3_API ListObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API ListObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A flag that indicates whether Amazon S3 returned all of the results that
     * satisfied the search criteria.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListObjectsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates where in the bucket listing begins. Marker is included in the
     * response if it was sent with the request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListObjectsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the response is truncated (the <code>IsTruncated</code> element value in
     * the response is <code>true</code>), you can use the key name in this field as
     * the <code>marker</code> parameter in the subsequent request to get the next set
     * of objects. Amazon S3 lists objects in alphabetical order. </p>  <p>This
     * element is returned only if you have the <code>delimiter</code> request
     * parameter specified. If the response does not include the
     * <code>NextMarker</code> element and it is truncated, you can use the value of
     * the last <code>Key</code> element in the response as the <code>marker</code>
     * parameter in the subsequent request to get the next set of object keys.</p>
     * 
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListObjectsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata about each object returned.</p>
     */
    inline const Aws::Vector<Object>& GetContents() const { return m_contents; }
    template<typename ContentsT = Aws::Vector<Object>>
    void SetContents(ContentsT&& value) { m_contentsHasBeenSet = true; m_contents = std::forward<ContentsT>(value); }
    template<typename ContentsT = Aws::Vector<Object>>
    ListObjectsResult& WithContents(ContentsT&& value) { SetContents(std::forward<ContentsT>(value)); return *this;}
    template<typename ContentsT = Object>
    ListObjectsResult& AddContents(ContentsT&& value) { m_contentsHasBeenSet = true; m_contents.emplace_back(std::forward<ContentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The bucket name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListObjectsResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Keys that begin with the indicated prefix.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    ListObjectsResult& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Causes keys that contain the same string between the prefix and the first
     * occurrence of the delimiter to be rolled up into a single result element in the
     * <code>CommonPrefixes</code> collection. These rolled-up keys are not returned
     * elsewhere in the response. Each rolled-up result counts as only one return
     * against the <code>MaxKeys</code> value.</p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    ListObjectsResult& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of keys returned in the response body.</p>
     */
    inline int GetMaxKeys() const { return m_maxKeys; }
    inline void SetMaxKeys(int value) { m_maxKeysHasBeenSet = true; m_maxKeys = value; }
    inline ListObjectsResult& WithMaxKeys(int value) { SetMaxKeys(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>All of the keys (up to 1,000) rolled up in a common prefix count as a single
     * return when calculating the number of returns. </p> <p>A response can contain
     * <code>CommonPrefixes</code> only if you specify a delimiter.</p> <p>
     * <code>CommonPrefixes</code> contains all (if there are any) keys between
     * <code>Prefix</code> and the next occurrence of the string specified by the
     * delimiter.</p> <p> <code>CommonPrefixes</code> lists keys that act like
     * subdirectories in the directory specified by <code>Prefix</code>.</p> <p>For
     * example, if the prefix is <code>notes/</code> and the delimiter is a slash
     * (<code>/</code>), as in <code>notes/summer/july</code>, the common prefix is
     * <code>notes/summer/</code>. All of the keys that roll up into a common prefix
     * count as a single return when calculating the number of returns.</p>
     */
    inline const Aws::Vector<CommonPrefix>& GetCommonPrefixes() const { return m_commonPrefixes; }
    template<typename CommonPrefixesT = Aws::Vector<CommonPrefix>>
    void SetCommonPrefixes(CommonPrefixesT&& value) { m_commonPrefixesHasBeenSet = true; m_commonPrefixes = std::forward<CommonPrefixesT>(value); }
    template<typename CommonPrefixesT = Aws::Vector<CommonPrefix>>
    ListObjectsResult& WithCommonPrefixes(CommonPrefixesT&& value) { SetCommonPrefixes(std::forward<CommonPrefixesT>(value)); return *this;}
    template<typename CommonPrefixesT = CommonPrefix>
    ListObjectsResult& AddCommonPrefixes(CommonPrefixesT&& value) { m_commonPrefixesHasBeenSet = true; m_commonPrefixes.emplace_back(std::forward<CommonPrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Encoding type used by Amazon S3 to encode the <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html">object
     * keys</a> in the response. Responses are encoded only in UTF-8. An object key can
     * contain any Unicode character. However, the XML 1.0 parser can't parse certain
     * characters, such as characters with an ASCII value from 0 to 10. For characters
     * that aren't supported in XML 1.0, you can add this parameter to request that
     * Amazon S3 encode the keys in the response. For more information about characters
     * to avoid in object key names, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/object-keys.html#object-key-guidelines">Object
     * key naming guidelines</a>.</p>  <p>When using the URL encoding type,
     * non-ASCII characters that are used in an object's key name will be
     * percent-encoded according to UTF-8 code values. For example, the object
     * <code>test_file(3).png</code> will appear as
     * <code>test_file%283%29.png</code>.</p> 
     */
    inline EncodingType GetEncodingType() const { return m_encodingType; }
    inline void SetEncodingType(EncodingType value) { m_encodingTypeHasBeenSet = true; m_encodingType = value; }
    inline ListObjectsResult& WithEncodingType(EncodingType value) { SetEncodingType(value); return *this;}
    ///@}

    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline ListObjectsResult& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListObjectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<Object> m_contents;
    bool m_contentsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;

    int m_maxKeys{0};
    bool m_maxKeysHasBeenSet = false;

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
