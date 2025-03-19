/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListObjectsV2Result
  {
  public:
    AWS_S3_API ListObjectsV2Result() = default;
    AWS_S3_API ListObjectsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API ListObjectsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Set to <code>false</code> if all of the results were returned. Set to
     * <code>true</code> if more keys are available to return. If the number of results
     * exceeds that specified by <code>MaxKeys</code>, all of the results might not be
     * returned.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListObjectsV2Result& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata about each object returned.</p>
     */
    inline const Aws::Vector<Object>& GetContents() const { return m_contents; }
    template<typename ContentsT = Aws::Vector<Object>>
    void SetContents(ContentsT&& value) { m_contentsHasBeenSet = true; m_contents = std::forward<ContentsT>(value); }
    template<typename ContentsT = Aws::Vector<Object>>
    ListObjectsV2Result& WithContents(ContentsT&& value) { SetContents(std::forward<ContentsT>(value)); return *this;}
    template<typename ContentsT = Object>
    ListObjectsV2Result& AddContents(ContentsT&& value) { m_contentsHasBeenSet = true; m_contents.emplace_back(std::forward<ContentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The bucket name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListObjectsV2Result& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Keys that begin with the indicated prefix.</p>  <p> <b>Directory
     * buckets</b> - For directory buckets, only prefixes that end in a delimiter
     * (<code>/</code>) are supported.</p> 
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    ListObjectsV2Result& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Causes keys that contain the same string between the <code>prefix</code> and
     * the first occurrence of the delimiter to be rolled up into a single result
     * element in the <code>CommonPrefixes</code> collection. These rolled-up keys are
     * not returned elsewhere in the response. Each rolled-up result counts as only one
     * return against the <code>MaxKeys</code> value.</p>  <p> <b>Directory
     * buckets</b> - For directory buckets, <code>/</code> is the only supported
     * delimiter.</p> 
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    ListObjectsV2Result& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the maximum number of keys returned in the response. By default, the
     * action returns up to 1,000 key names. The response might contain fewer keys but
     * will never contain more.</p>
     */
    inline int GetMaxKeys() const { return m_maxKeys; }
    inline void SetMaxKeys(int value) { m_maxKeysHasBeenSet = true; m_maxKeys = value; }
    inline ListObjectsV2Result& WithMaxKeys(int value) { SetMaxKeys(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>All of the keys (up to 1,000) that share the same prefix are grouped
     * together. When counting the total numbers of returns by this API operation, this
     * group of keys is considered as one item.</p> <p>A response can contain
     * <code>CommonPrefixes</code> only if you specify a delimiter.</p> <p>
     * <code>CommonPrefixes</code> contains all (if there are any) keys between
     * <code>Prefix</code> and the next occurrence of the string specified by a
     * delimiter.</p> <p> <code>CommonPrefixes</code> lists keys that act like
     * subdirectories in the directory specified by <code>Prefix</code>.</p> <p>For
     * example, if the prefix is <code>notes/</code> and the delimiter is a slash
     * (<code>/</code>) as in <code>notes/summer/july</code>, the common prefix is
     * <code>notes/summer/</code>. All of the keys that roll up into a common prefix
     * count as a single return when calculating the number of returns. </p> 
     * <ul> <li> <p> <b>Directory buckets</b> - For directory buckets, only prefixes
     * that end in a delimiter (<code>/</code>) are supported.</p> </li> <li> <p>
     * <b>Directory buckets </b> - When you query <code>ListObjectsV2</code> with a
     * delimiter during in-progress multipart uploads, the <code>CommonPrefixes</code>
     * response parameter contains the prefixes that are associated with the
     * in-progress multipart uploads. For more information about multipart uploads, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/mpuoverview.html">Multipart
     * Upload Overview</a> in the <i>Amazon S3 User Guide</i>.</p> </li> </ul> 
     */
    inline const Aws::Vector<CommonPrefix>& GetCommonPrefixes() const { return m_commonPrefixes; }
    template<typename CommonPrefixesT = Aws::Vector<CommonPrefix>>
    void SetCommonPrefixes(CommonPrefixesT&& value) { m_commonPrefixesHasBeenSet = true; m_commonPrefixes = std::forward<CommonPrefixesT>(value); }
    template<typename CommonPrefixesT = Aws::Vector<CommonPrefix>>
    ListObjectsV2Result& WithCommonPrefixes(CommonPrefixesT&& value) { SetCommonPrefixes(std::forward<CommonPrefixesT>(value)); return *this;}
    template<typename CommonPrefixesT = CommonPrefix>
    ListObjectsV2Result& AddCommonPrefixes(CommonPrefixesT&& value) { m_commonPrefixesHasBeenSet = true; m_commonPrefixes.emplace_back(std::forward<CommonPrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Encoding type used by Amazon S3 to encode object key names in the XML
     * response.</p> <p>If you specify the <code>encoding-type</code> request
     * parameter, Amazon S3 includes this element in the response, and returns encoded
     * key name values in the following response elements:</p> <p> <code>Delimiter,
     * Prefix, Key,</code> and <code>StartAfter</code>.</p>
     */
    inline EncodingType GetEncodingType() const { return m_encodingType; }
    inline void SetEncodingType(EncodingType value) { m_encodingTypeHasBeenSet = true; m_encodingType = value; }
    inline ListObjectsV2Result& WithEncodingType(EncodingType value) { SetEncodingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>KeyCount</code> is the number of keys returned with this request.
     * <code>KeyCount</code> will always be less than or equal to the
     * <code>MaxKeys</code> field. For example, if you ask for 50 keys, your result
     * will include 50 keys or fewer.</p>
     */
    inline int GetKeyCount() const { return m_keyCount; }
    inline void SetKeyCount(int value) { m_keyCountHasBeenSet = true; m_keyCount = value; }
    inline ListObjectsV2Result& WithKeyCount(int value) { SetKeyCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If <code>ContinuationToken</code> was sent with the request, it is included
     * in the response. You can use the returned <code>ContinuationToken</code> for
     * pagination of the list response. You can use this <code>ContinuationToken</code>
     * for pagination of the list results. </p>
     */
    inline const Aws::String& GetContinuationToken() const { return m_continuationToken; }
    template<typename ContinuationTokenT = Aws::String>
    void SetContinuationToken(ContinuationTokenT&& value) { m_continuationTokenHasBeenSet = true; m_continuationToken = std::forward<ContinuationTokenT>(value); }
    template<typename ContinuationTokenT = Aws::String>
    ListObjectsV2Result& WithContinuationToken(ContinuationTokenT&& value) { SetContinuationToken(std::forward<ContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>NextContinuationToken</code> is sent when <code>isTruncated</code> is
     * true, which means there are more keys in the bucket that can be listed. The next
     * list requests to Amazon S3 can be continued with this
     * <code>NextContinuationToken</code>. <code>NextContinuationToken</code> is
     * obfuscated and is not a real key</p>
     */
    inline const Aws::String& GetNextContinuationToken() const { return m_nextContinuationToken; }
    template<typename NextContinuationTokenT = Aws::String>
    void SetNextContinuationToken(NextContinuationTokenT&& value) { m_nextContinuationTokenHasBeenSet = true; m_nextContinuationToken = std::forward<NextContinuationTokenT>(value); }
    template<typename NextContinuationTokenT = Aws::String>
    ListObjectsV2Result& WithNextContinuationToken(NextContinuationTokenT&& value) { SetNextContinuationToken(std::forward<NextContinuationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If StartAfter was sent with the request, it is included in the response.</p>
     *  <p>This functionality is not supported for directory buckets.</p> 
     */
    inline const Aws::String& GetStartAfter() const { return m_startAfter; }
    template<typename StartAfterT = Aws::String>
    void SetStartAfter(StartAfterT&& value) { m_startAfterHasBeenSet = true; m_startAfter = std::forward<StartAfterT>(value); }
    template<typename StartAfterT = Aws::String>
    ListObjectsV2Result& WithStartAfter(StartAfterT&& value) { SetStartAfter(std::forward<StartAfterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline ListObjectsV2Result& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListObjectsV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

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

    int m_keyCount{0};
    bool m_keyCountHasBeenSet = false;

    Aws::String m_continuationToken;
    bool m_continuationTokenHasBeenSet = false;

    Aws::String m_nextContinuationToken;
    bool m_nextContinuationTokenHasBeenSet = false;

    Aws::String m_startAfter;
    bool m_startAfterHasBeenSet = false;

    RequestCharged m_requestCharged{RequestCharged::NOT_SET};
    bool m_requestChargedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
