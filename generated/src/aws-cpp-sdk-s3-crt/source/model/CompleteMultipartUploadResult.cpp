/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/CompleteMultipartUploadResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CompleteMultipartUploadResult::CompleteMultipartUploadResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CompleteMultipartUploadResult& CompleteMultipartUploadResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode locationNode = resultNode.FirstChild("Location");
    if(!locationNode.IsNull())
    {
      m_location = Aws::Utils::Xml::DecodeEscapedXmlText(locationNode.GetText());
      m_locationHasBeenSet = true;
    }
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode keyNode = resultNode.FirstChild("Key");
    if(!keyNode.IsNull())
    {
      m_key = Aws::Utils::Xml::DecodeEscapedXmlText(keyNode.GetText());
      m_keyHasBeenSet = true;
    }
    XmlNode eTagNode = resultNode.FirstChild("ETag");
    if(!eTagNode.IsNull())
    {
      m_eTag = Aws::Utils::Xml::DecodeEscapedXmlText(eTagNode.GetText());
      m_eTagHasBeenSet = true;
    }
    XmlNode checksumCRC32Node = resultNode.FirstChild("ChecksumCRC32");
    if(!checksumCRC32Node.IsNull())
    {
      m_checksumCRC32 = Aws::Utils::Xml::DecodeEscapedXmlText(checksumCRC32Node.GetText());
      m_checksumCRC32HasBeenSet = true;
    }
    XmlNode checksumCRC32CNode = resultNode.FirstChild("ChecksumCRC32C");
    if(!checksumCRC32CNode.IsNull())
    {
      m_checksumCRC32C = Aws::Utils::Xml::DecodeEscapedXmlText(checksumCRC32CNode.GetText());
      m_checksumCRC32CHasBeenSet = true;
    }
    XmlNode checksumCRC64NVMENode = resultNode.FirstChild("ChecksumCRC64NVME");
    if(!checksumCRC64NVMENode.IsNull())
    {
      m_checksumCRC64NVME = Aws::Utils::Xml::DecodeEscapedXmlText(checksumCRC64NVMENode.GetText());
      m_checksumCRC64NVMEHasBeenSet = true;
    }
    XmlNode checksumSHA1Node = resultNode.FirstChild("ChecksumSHA1");
    if(!checksumSHA1Node.IsNull())
    {
      m_checksumSHA1 = Aws::Utils::Xml::DecodeEscapedXmlText(checksumSHA1Node.GetText());
      m_checksumSHA1HasBeenSet = true;
    }
    XmlNode checksumSHA256Node = resultNode.FirstChild("ChecksumSHA256");
    if(!checksumSHA256Node.IsNull())
    {
      m_checksumSHA256 = Aws::Utils::Xml::DecodeEscapedXmlText(checksumSHA256Node.GetText());
      m_checksumSHA256HasBeenSet = true;
    }
    XmlNode checksumTypeNode = resultNode.FirstChild("ChecksumType");
    if(!checksumTypeNode.IsNull())
    {
      m_checksumType = ChecksumTypeMapper::GetChecksumTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(checksumTypeNode.GetText()).c_str()));
      m_checksumTypeHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& expirationIter = headers.find("x-amz-expiration");
  if(expirationIter != headers.end())
  {
    m_expiration = expirationIter->second;
    m_expirationHasBeenSet = true;
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
