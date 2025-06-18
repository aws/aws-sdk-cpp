/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/HeadObjectResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

HeadObjectResult::HeadObjectResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

HeadObjectResult& HeadObjectResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& deleteMarkerIter = headers.find("x-amz-delete-marker");
  if(deleteMarkerIter != headers.end())
  {
    m_deleteMarker = StringUtils::ConvertToBool(deleteMarkerIter->second.c_str());
    m_deleteMarkerHasBeenSet = true;
  }

  const auto& acceptRangesIter = headers.find("accept-ranges");
  if(acceptRangesIter != headers.end())
  {
    m_acceptRanges = acceptRangesIter->second;
    m_acceptRangesHasBeenSet = true;
  }

  const auto& expirationIter = headers.find("x-amz-expiration");
  if(expirationIter != headers.end())
  {
    m_expiration = expirationIter->second;
    m_expirationHasBeenSet = true;
  }

  const auto& restoreIter = headers.find("x-amz-restore");
  if(restoreIter != headers.end())
  {
    m_restore = restoreIter->second;
    m_restoreHasBeenSet = true;
  }

  const auto& archiveStatusIter = headers.find("x-amz-archive-status");
  if(archiveStatusIter != headers.end())
  {
    m_archiveStatus = ArchiveStatusMapper::GetArchiveStatusForName(archiveStatusIter->second);
    m_archiveStatusHasBeenSet = true;
  }

  const auto& lastModifiedIter = headers.find("last-modified");
  if(lastModifiedIter != headers.end())
  {
    m_lastModified = DateTime(lastModifiedIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
    if(!m_lastModified.WasParseSuccessful())
    {
      AWS_LOGSTREAM_WARN("S3::HeadObjectResult", "Failed to parse lastModified header as an RFC822 timestamp: " << lastModifiedIter->second.c_str());
    }
    m_lastModifiedHasBeenSet = true;
  }

  const auto& contentLengthIter = headers.find("content-length");
  if(contentLengthIter != headers.end())
  {
    m_contentLength = StringUtils::ConvertToInt64(contentLengthIter->second.c_str());
    m_contentLengthHasBeenSet = true;
  }

  const auto& checksumCRC32Iter = headers.find("x-amz-checksum-crc32");
  if(checksumCRC32Iter != headers.end())
  {
    m_checksumCRC32 = checksumCRC32Iter->second;
    m_checksumCRC32HasBeenSet = true;
  }

  const auto& checksumCRC32CIter = headers.find("x-amz-checksum-crc32c");
  if(checksumCRC32CIter != headers.end())
  {
    m_checksumCRC32C = checksumCRC32CIter->second;
    m_checksumCRC32CHasBeenSet = true;
  }

  const auto& checksumCRC64NVMEIter = headers.find("x-amz-checksum-crc64nvme");
  if(checksumCRC64NVMEIter != headers.end())
  {
    m_checksumCRC64NVME = checksumCRC64NVMEIter->second;
    m_checksumCRC64NVMEHasBeenSet = true;
  }

  const auto& checksumSHA1Iter = headers.find("x-amz-checksum-sha1");
  if(checksumSHA1Iter != headers.end())
  {
    m_checksumSHA1 = checksumSHA1Iter->second;
    m_checksumSHA1HasBeenSet = true;
  }

  const auto& checksumSHA256Iter = headers.find("x-amz-checksum-sha256");
  if(checksumSHA256Iter != headers.end())
  {
    m_checksumSHA256 = checksumSHA256Iter->second;
    m_checksumSHA256HasBeenSet = true;
  }

  const auto& checksumTypeIter = headers.find("x-amz-checksum-type");
  if(checksumTypeIter != headers.end())
  {
    m_checksumType = ChecksumTypeMapper::GetChecksumTypeForName(checksumTypeIter->second);
    m_checksumTypeHasBeenSet = true;
  }

  const auto& eTagIter = headers.find("etag");
  if(eTagIter != headers.end())
  {
    m_eTag = eTagIter->second;
    m_eTagHasBeenSet = true;
  }

  const auto& missingMetaIter = headers.find("x-amz-missing-meta");
  if(missingMetaIter != headers.end())
  {
    m_missingMeta = StringUtils::ConvertToInt32(missingMetaIter->second.c_str());
    m_missingMetaHasBeenSet = true;
  }

  const auto& versionIdIter = headers.find("x-amz-version-id");
  if(versionIdIter != headers.end())
  {
    m_versionId = versionIdIter->second;
    m_versionIdHasBeenSet = true;
  }

  const auto& cacheControlIter = headers.find("cache-control");
  if(cacheControlIter != headers.end())
  {
    m_cacheControl = cacheControlIter->second;
    m_cacheControlHasBeenSet = true;
  }

  const auto& contentDispositionIter = headers.find("content-disposition");
  if(contentDispositionIter != headers.end())
  {
    m_contentDisposition = contentDispositionIter->second;
    m_contentDispositionHasBeenSet = true;
  }

  const auto& contentEncodingIter = headers.find("content-encoding");
  if(contentEncodingIter != headers.end())
  {
    m_contentEncoding = contentEncodingIter->second;
    m_contentEncodingHasBeenSet = true;
  }

  const auto& contentLanguageIter = headers.find("content-language");
  if(contentLanguageIter != headers.end())
  {
    m_contentLanguage = contentLanguageIter->second;
    m_contentLanguageHasBeenSet = true;
  }

  const auto& contentTypeIter = headers.find("content-type");
  if(contentTypeIter != headers.end())
  {
    m_contentType = contentTypeIter->second;
    m_contentTypeHasBeenSet = true;
  }

  const auto& contentRangeIter = headers.find("content-range");
  if(contentRangeIter != headers.end())
  {
    m_contentRange = contentRangeIter->second;
    m_contentRangeHasBeenSet = true;
  }

  const auto& expiresIter = headers.find("expires");
  if(expiresIter != headers.end())
  {
    m_expires = DateTime(expiresIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
    if(!m_expires.WasParseSuccessful())
    {
      AWS_LOGSTREAM_WARN("S3::HeadObjectResult", "Failed to parse expires header as an RFC822 timestamp: " << expiresIter->second.c_str());
    }
    m_expiresHasBeenSet = true;
  }

  const auto& websiteRedirectLocationIter = headers.find("x-amz-website-redirect-location");
  if(websiteRedirectLocationIter != headers.end())
  {
    m_websiteRedirectLocation = websiteRedirectLocationIter->second;
    m_websiteRedirectLocationHasBeenSet = true;
  }

  const auto& serverSideEncryptionIter = headers.find("x-amz-server-side-encryption");
  if(serverSideEncryptionIter != headers.end())
  {
    m_serverSideEncryption = ServerSideEncryptionMapper::GetServerSideEncryptionForName(serverSideEncryptionIter->second);
    m_serverSideEncryptionHasBeenSet = true;
  }

  std::size_t prefixSize = sizeof("x-amz-meta-") - 1; //subtract the NULL terminator out
  for(const auto& item : headers)
  {
    std::size_t foundPrefix = item.first.find("x-amz-meta-");

    if(foundPrefix != std::string::npos)
    {
      m_metadata[item.first.substr(prefixSize)] = item.second;
      m_metadataHasBeenSet = true;
    }
  }

  const auto& sSECustomerAlgorithmIter = headers.find("x-amz-server-side-encryption-customer-algorithm");
  if(sSECustomerAlgorithmIter != headers.end())
  {
    m_sSECustomerAlgorithm = sSECustomerAlgorithmIter->second;
    m_sSECustomerAlgorithmHasBeenSet = true;
  }

  const auto& sSECustomerKeyMD5Iter = headers.find("x-amz-server-side-encryption-customer-key-md5");
  if(sSECustomerKeyMD5Iter != headers.end())
  {
    m_sSECustomerKeyMD5 = sSECustomerKeyMD5Iter->second;
    m_sSECustomerKeyMD5HasBeenSet = true;
  }

  const auto& sSEKMSKeyIdIter = headers.find("x-amz-server-side-encryption-aws-kms-key-id");
  if(sSEKMSKeyIdIter != headers.end())
  {
    m_sSEKMSKeyId = sSEKMSKeyIdIter->second;
    m_sSEKMSKeyIdHasBeenSet = true;
  }

  const auto& bucketKeyEnabledIter = headers.find("x-amz-server-side-encryption-bucket-key-enabled");
  if(bucketKeyEnabledIter != headers.end())
  {
    m_bucketKeyEnabled = StringUtils::ConvertToBool(bucketKeyEnabledIter->second.c_str());
    m_bucketKeyEnabledHasBeenSet = true;
  }

  const auto& storageClassIter = headers.find("x-amz-storage-class");
  if(storageClassIter != headers.end())
  {
    m_storageClass = StorageClassMapper::GetStorageClassForName(storageClassIter->second);
    m_storageClassHasBeenSet = true;
  }

  const auto& requestChargedIter = headers.find("x-amz-request-charged");
  if(requestChargedIter != headers.end())
  {
    m_requestCharged = RequestChargedMapper::GetRequestChargedForName(requestChargedIter->second);
    m_requestChargedHasBeenSet = true;
  }

  const auto& replicationStatusIter = headers.find("x-amz-replication-status");
  if(replicationStatusIter != headers.end())
  {
    m_replicationStatus = ReplicationStatusMapper::GetReplicationStatusForName(replicationStatusIter->second);
    m_replicationStatusHasBeenSet = true;
  }

  const auto& partsCountIter = headers.find("x-amz-mp-parts-count");
  if(partsCountIter != headers.end())
  {
    m_partsCount = StringUtils::ConvertToInt32(partsCountIter->second.c_str());
    m_partsCountHasBeenSet = true;
  }

  const auto& tagCountIter = headers.find("x-amz-tagging-count");
  if(tagCountIter != headers.end())
  {
    m_tagCount = StringUtils::ConvertToInt32(tagCountIter->second.c_str());
    m_tagCountHasBeenSet = true;
  }

  const auto& objectLockModeIter = headers.find("x-amz-object-lock-mode");
  if(objectLockModeIter != headers.end())
  {
    m_objectLockMode = ObjectLockModeMapper::GetObjectLockModeForName(objectLockModeIter->second);
    m_objectLockModeHasBeenSet = true;
  }

  const auto& objectLockRetainUntilDateIter = headers.find("x-amz-object-lock-retain-until-date");
  if(objectLockRetainUntilDateIter != headers.end())
  {
    m_objectLockRetainUntilDate = DateTime(objectLockRetainUntilDateIter->second.c_str(), Aws::Utils::DateFormat::ISO_8601);
    if(!m_objectLockRetainUntilDate.WasParseSuccessful())
    {
      AWS_LOGSTREAM_WARN("S3::HeadObjectResult", "Failed to parse objectLockRetainUntilDate header as an ISO_8601 timestamp: " << objectLockRetainUntilDateIter->second.c_str());
    }
    m_objectLockRetainUntilDateHasBeenSet = true;
  }

  const auto& objectLockLegalHoldStatusIter = headers.find("x-amz-object-lock-legal-hold");
  if(objectLockLegalHoldStatusIter != headers.end())
  {
    m_objectLockLegalHoldStatus = ObjectLockLegalHoldStatusMapper::GetObjectLockLegalHoldStatusForName(objectLockLegalHoldStatusIter->second);
    m_objectLockLegalHoldStatusHasBeenSet = true;
  }

  const auto& expiresStringIter = headers.find("expires");
  if(expiresStringIter != headers.end())
  {
    m_expiresString = expiresStringIter->second;
    m_expiresStringHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
