/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/PutObjectResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

PutObjectResult::PutObjectResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

PutObjectResult& PutObjectResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& expirationIter = headers.find("x-amz-expiration");
  if(expirationIter != headers.end())
  {
    m_expiration = expirationIter->second;
    m_expirationHasBeenSet = true;
  }

  const auto& eTagIter = headers.find("etag");
  if(eTagIter != headers.end())
  {
    m_eTag = eTagIter->second;
    m_eTagHasBeenSet = true;
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

  const auto& serverSideEncryptionIter = headers.find("x-amz-server-side-encryption");
  if(serverSideEncryptionIter != headers.end())
  {
    m_serverSideEncryption = ServerSideEncryptionMapper::GetServerSideEncryptionForName(serverSideEncryptionIter->second);
    m_serverSideEncryptionHasBeenSet = true;
  }

  const auto& versionIdIter = headers.find("x-amz-version-id");
  if(versionIdIter != headers.end())
  {
    m_versionId = versionIdIter->second;
    m_versionIdHasBeenSet = true;
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

  const auto& sSEKMSEncryptionContextIter = headers.find("x-amz-server-side-encryption-context");
  if(sSEKMSEncryptionContextIter != headers.end())
  {
    m_sSEKMSEncryptionContext = sSEKMSEncryptionContextIter->second;
    m_sSEKMSEncryptionContextHasBeenSet = true;
  }

  const auto& bucketKeyEnabledIter = headers.find("x-amz-server-side-encryption-bucket-key-enabled");
  if(bucketKeyEnabledIter != headers.end())
  {
    m_bucketKeyEnabled = StringUtils::ConvertToBool(bucketKeyEnabledIter->second.c_str());
    m_bucketKeyEnabledHasBeenSet = true;
  }

  const auto& sizeIter = headers.find("x-amz-object-size");
  if(sizeIter != headers.end())
  {
    m_size = StringUtils::ConvertToInt64(sizeIter->second.c_str());
    m_sizeHasBeenSet = true;
  }

  const auto& requestChargedIter = headers.find("x-amz-request-charged");
  if(requestChargedIter != headers.end())
  {
    m_requestCharged = RequestChargedMapper::GetRequestChargedForName(requestChargedIter->second);
    m_requestChargedHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
