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
#include <aws/s3/model/ObjectVersion.h>
#include <aws/s3/model/DeleteMarkerEntry.h>
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
  class ListObjectVersionsResult
  {
  public:
    AWS_S3_API ListObjectVersionsResult() = default;
    AWS_S3_API ListObjectVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API ListObjectVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A flag that indicates whether Amazon S3 returned all of the results that
     * satisfied the search criteria. If your results were truncated, you can make a
     * follow-up paginated request by using the <code>NextKeyMarker</code> and
     * <code>NextVersionIdMarker</code> response parameters as a starting place in
     * another request to return the rest of the results.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListObjectVersionsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Marks the last key returned in a truncated response.</p>
     */
    inline const Aws::String& GetKeyMarker() const { return m_keyMarker; }
    template<typename KeyMarkerT = Aws::String>
    void SetKeyMarker(KeyMarkerT&& value) { m_keyMarkerHasBeenSet = true; m_keyMarker = std::forward<KeyMarkerT>(value); }
    template<typename KeyMarkerT = Aws::String>
    ListObjectVersionsResult& WithKeyMarker(KeyMarkerT&& value) { SetKeyMarker(std::forward<KeyMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Marks the last version of the key returned in a truncated response.</p>
     */
    inline const Aws::String& GetVersionIdMarker() const { return m_versionIdMarker; }
    template<typename VersionIdMarkerT = Aws::String>
    void SetVersionIdMarker(VersionIdMarkerT&& value) { m_versionIdMarkerHasBeenSet = true; m_versionIdMarker = std::forward<VersionIdMarkerT>(value); }
    template<typename VersionIdMarkerT = Aws::String>
    ListObjectVersionsResult& WithVersionIdMarker(VersionIdMarkerT&& value) { SetVersionIdMarker(std::forward<VersionIdMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of responses exceeds the value of <code>MaxKeys</code>,
     * <code>NextKeyMarker</code> specifies the first key not returned that satisfies
     * the search criteria. Use this value for the key-marker request parameter in a
     * subsequent request.</p>
     */
    inline const Aws::String& GetNextKeyMarker() const { return m_nextKeyMarker; }
    template<typename NextKeyMarkerT = Aws::String>
    void SetNextKeyMarker(NextKeyMarkerT&& value) { m_nextKeyMarkerHasBeenSet = true; m_nextKeyMarker = std::forward<NextKeyMarkerT>(value); }
    template<typename NextKeyMarkerT = Aws::String>
    ListObjectVersionsResult& WithNextKeyMarker(NextKeyMarkerT&& value) { SetNextKeyMarker(std::forward<NextKeyMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the number of responses exceeds the value of <code>MaxKeys</code>,
     * <code>NextVersionIdMarker</code> specifies the first object version not returned
     * that satisfies the search criteria. Use this value for the
     * <code>version-id-marker</code> request parameter in a subsequent request.</p>
     */
    inline const Aws::String& GetNextVersionIdMarker() const { return m_nextVersionIdMarker; }
    template<typename NextVersionIdMarkerT = Aws::String>
    void SetNextVersionIdMarker(NextVersionIdMarkerT&& value) { m_nextVersionIdMarkerHasBeenSet = true; m_nextVersionIdMarker = std::forward<NextVersionIdMarkerT>(value); }
    template<typename NextVersionIdMarkerT = Aws::String>
    ListObjectVersionsResult& WithNextVersionIdMarker(NextVersionIdMarkerT&& value) { SetNextVersionIdMarker(std::forward<NextVersionIdMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for version information.</p>
     */
    inline const Aws::Vector<ObjectVersion>& GetVersions() const { return m_versions; }
    template<typename VersionsT = Aws::Vector<ObjectVersion>>
    void SetVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions = std::forward<VersionsT>(value); }
    template<typename VersionsT = Aws::Vector<ObjectVersion>>
    ListObjectVersionsResult& WithVersions(VersionsT&& value) { SetVersions(std::forward<VersionsT>(value)); return *this;}
    template<typename VersionsT = ObjectVersion>
    ListObjectVersionsResult& AddVersions(VersionsT&& value) { m_versionsHasBeenSet = true; m_versions.emplace_back(std::forward<VersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Container for an object that is a delete marker. To learn more about delete
     * markers, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/DeleteMarker.html">Working
     * with delete markers</a>.</p>
     */
    inline const Aws::Vector<DeleteMarkerEntry>& GetDeleteMarkers() const { return m_deleteMarkers; }
    template<typename DeleteMarkersT = Aws::Vector<DeleteMarkerEntry>>
    void SetDeleteMarkers(DeleteMarkersT&& value) { m_deleteMarkersHasBeenSet = true; m_deleteMarkers = std::forward<DeleteMarkersT>(value); }
    template<typename DeleteMarkersT = Aws::Vector<DeleteMarkerEntry>>
    ListObjectVersionsResult& WithDeleteMarkers(DeleteMarkersT&& value) { SetDeleteMarkers(std::forward<DeleteMarkersT>(value)); return *this;}
    template<typename DeleteMarkersT = DeleteMarkerEntry>
    ListObjectVersionsResult& AddDeleteMarkers(DeleteMarkersT&& value) { m_deleteMarkersHasBeenSet = true; m_deleteMarkers.emplace_back(std::forward<DeleteMarkersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The bucket name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListObjectVersionsResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selects objects that start with the value supplied by this parameter.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    ListObjectVersionsResult& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delimiter grouping the included keys. A delimiter is a character that you
     * specify to group keys. All keys that contain the same string between the prefix
     * and the first occurrence of the delimiter are grouped under a single result
     * element in <code>CommonPrefixes</code>. These groups are counted as one result
     * against the <code>max-keys</code> limitation. These keys are not returned
     * elsewhere in the response.</p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    ListObjectVersionsResult& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of objects to return.</p>
     */
    inline int GetMaxKeys() const { return m_maxKeys; }
    inline void SetMaxKeys(int value) { m_maxKeysHasBeenSet = true; m_maxKeys = value; }
    inline ListObjectVersionsResult& WithMaxKeys(int value) { SetMaxKeys(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>All of the keys rolled up into a common prefix count as a single return when
     * calculating the number of returns.</p>
     */
    inline const Aws::Vector<CommonPrefix>& GetCommonPrefixes() const { return m_commonPrefixes; }
    template<typename CommonPrefixesT = Aws::Vector<CommonPrefix>>
    void SetCommonPrefixes(CommonPrefixesT&& value) { m_commonPrefixesHasBeenSet = true; m_commonPrefixes = std::forward<CommonPrefixesT>(value); }
    template<typename CommonPrefixesT = Aws::Vector<CommonPrefix>>
    ListObjectVersionsResult& WithCommonPrefixes(CommonPrefixesT&& value) { SetCommonPrefixes(std::forward<CommonPrefixesT>(value)); return *this;}
    template<typename CommonPrefixesT = CommonPrefix>
    ListObjectVersionsResult& AddCommonPrefixes(CommonPrefixesT&& value) { m_commonPrefixesHasBeenSet = true; m_commonPrefixes.emplace_back(std::forward<CommonPrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Encoding type used by Amazon S3 to encode object key names in the XML
     * response.</p> <p>If you specify the <code>encoding-type</code> request
     * parameter, Amazon S3 includes this element in the response, and returns encoded
     * key name values in the following response elements:</p> <p> <code>KeyMarker,
     * NextKeyMarker, Prefix, Key</code>, and <code>Delimiter</code>.</p>
     */
    inline EncodingType GetEncodingType() const { return m_encodingType; }
    inline void SetEncodingType(EncodingType value) { m_encodingTypeHasBeenSet = true; m_encodingType = value; }
    inline ListObjectVersionsResult& WithEncodingType(EncodingType value) { SetEncodingType(value); return *this;}
    ///@}

    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline ListObjectVersionsResult& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListObjectVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_keyMarker;
    bool m_keyMarkerHasBeenSet = false;

    Aws::String m_versionIdMarker;
    bool m_versionIdMarkerHasBeenSet = false;

    Aws::String m_nextKeyMarker;
    bool m_nextKeyMarkerHasBeenSet = false;

    Aws::String m_nextVersionIdMarker;
    bool m_nextVersionIdMarkerHasBeenSet = false;

    Aws::Vector<ObjectVersion> m_versions;
    bool m_versionsHasBeenSet = false;

    Aws::Vector<DeleteMarkerEntry> m_deleteMarkers;
    bool m_deleteMarkersHasBeenSet = false;

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
