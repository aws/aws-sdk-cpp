/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/RequestCharged.h>
#include <aws/s3/model/Checksum.h>
#include <aws/s3/model/GetObjectAttributesParts.h>
#include <aws/s3/model/StorageClass.h>
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
  class GetObjectAttributesResult
  {
  public:
    AWS_S3_API GetObjectAttributesResult() = default;
    AWS_S3_API GetObjectAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3_API GetObjectAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Specifies whether the object retrieved was (<code>true</code>) or was not
     * (<code>false</code>) a delete marker. If <code>false</code>, this response
     * header does not appear in the response. To learn more about delete markers, see
     * <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/DeleteMarker.html">Working
     * with delete markers</a>.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline bool GetDeleteMarker() const { return m_deleteMarker; }
    inline void SetDeleteMarker(bool value) { m_deleteMarkerHasBeenSet = true; m_deleteMarker = value; }
    inline GetObjectAttributesResult& WithDeleteMarker(bool value) { SetDeleteMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time when the object was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    GetObjectAttributesResult& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version ID of the object.</p>  <p>This functionality is not
     * supported for directory buckets.</p> 
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    GetObjectAttributesResult& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
    inline void SetRequestCharged(RequestCharged value) { m_requestChargedHasBeenSet = true; m_requestCharged = value; }
    inline GetObjectAttributesResult& WithRequestCharged(RequestCharged value) { SetRequestCharged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ETag is an opaque identifier assigned by a web server to a specific
     * version of a resource found at a URL.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    GetObjectAttributesResult& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The checksum or digest of the object.</p>
     */
    inline const Checksum& GetChecksum() const { return m_checksum; }
    template<typename ChecksumT = Checksum>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Checksum>
    GetObjectAttributesResult& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of parts associated with a multipart upload.</p>
     */
    inline const GetObjectAttributesParts& GetObjectParts() const { return m_objectParts; }
    template<typename ObjectPartsT = GetObjectAttributesParts>
    void SetObjectParts(ObjectPartsT&& value) { m_objectPartsHasBeenSet = true; m_objectParts = std::forward<ObjectPartsT>(value); }
    template<typename ObjectPartsT = GetObjectAttributesParts>
    GetObjectAttributesResult& WithObjectParts(ObjectPartsT&& value) { SetObjectParts(std::forward<ObjectPartsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the storage class information of the object. Amazon S3 returns this
     * header for all objects except for S3 Standard storage class objects.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/storage-class-intro.html">Storage
     * Classes</a>.</p>  <p> <b>Directory buckets</b> - Directory buckets only
     * support <code>EXPRESS_ONEZONE</code> (the S3 Express One Zone storage class) in
     * Availability Zones and <code>ONEZONE_IA</code> (the S3 One Zone-Infrequent
     * Access storage class) in Dedicated Local Zones.</p> 
     */
    inline StorageClass GetStorageClass() const { return m_storageClass; }
    inline void SetStorageClass(StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline GetObjectAttributesResult& WithStorageClass(StorageClass value) { SetStorageClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the object in bytes.</p>
     */
    inline long long GetObjectSize() const { return m_objectSize; }
    inline void SetObjectSize(long long value) { m_objectSizeHasBeenSet = true; m_objectSize = value; }
    inline GetObjectAttributesResult& WithObjectSize(long long value) { SetObjectSize(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetObjectAttributesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_deleteMarker{false};
    bool m_deleteMarkerHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    RequestCharged m_requestCharged{RequestCharged::NOT_SET};
    bool m_requestChargedHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    Checksum m_checksum;
    bool m_checksumHasBeenSet = false;

    GetObjectAttributesParts m_objectParts;
    bool m_objectPartsHasBeenSet = false;

    StorageClass m_storageClass{StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;

    long long m_objectSize{0};
    bool m_objectSizeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
