/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/GetObjectAttributesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetObjectAttributesResult::GetObjectAttributesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetObjectAttributesResult& GetObjectAttributesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode eTagNode = resultNode.FirstChild("ETag");
    if(!eTagNode.IsNull())
    {
      m_eTag = Aws::Utils::Xml::DecodeEscapedXmlText(eTagNode.GetText());
      m_eTagHasBeenSet = true;
    }
    XmlNode checksumNode = resultNode.FirstChild("Checksum");
    if(!checksumNode.IsNull())
    {
      m_checksum = checksumNode;
      m_checksumHasBeenSet = true;
    }
    XmlNode objectPartsNode = resultNode.FirstChild("ObjectParts");
    if(!objectPartsNode.IsNull())
    {
      m_objectParts = objectPartsNode;
      m_objectPartsHasBeenSet = true;
    }
    XmlNode storageClassNode = resultNode.FirstChild("StorageClass");
    if(!storageClassNode.IsNull())
    {
      m_storageClass = StorageClassMapper::GetStorageClassForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageClassNode.GetText()).c_str()));
      m_storageClassHasBeenSet = true;
    }
    XmlNode objectSizeNode = resultNode.FirstChild("ObjectSize");
    if(!objectSizeNode.IsNull())
    {
      m_objectSize = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(objectSizeNode.GetText()).c_str()).c_str());
      m_objectSizeHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& deleteMarkerIter = headers.find("x-amz-delete-marker");
  if(deleteMarkerIter != headers.end())
  {
    m_deleteMarker = StringUtils::ConvertToBool(deleteMarkerIter->second.c_str());
    m_deleteMarkerHasBeenSet = true;
  }

  const auto& lastModifiedIter = headers.find("last-modified");
  if(lastModifiedIter != headers.end())
  {
    m_lastModified = DateTime(lastModifiedIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
    if(!m_lastModified.WasParseSuccessful())
    {
      AWS_LOGSTREAM_WARN("S3Crt::GetObjectAttributesResult", "Failed to parse lastModified header as an RFC822 timestamp: " << lastModifiedIter->second.c_str());
    }
    m_lastModifiedHasBeenSet = true;
  }

  const auto& versionIdIter = headers.find("x-amz-version-id");
  if(versionIdIter != headers.end())
  {
    m_versionId = versionIdIter->second;
    m_versionIdHasBeenSet = true;
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
