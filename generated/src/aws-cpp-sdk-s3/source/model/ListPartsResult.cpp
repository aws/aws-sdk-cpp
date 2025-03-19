/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/ListPartsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListPartsResult::ListPartsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListPartsResult& ListPartsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
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
    XmlNode uploadIdNode = resultNode.FirstChild("UploadId");
    if(!uploadIdNode.IsNull())
    {
      m_uploadId = Aws::Utils::Xml::DecodeEscapedXmlText(uploadIdNode.GetText());
      m_uploadIdHasBeenSet = true;
    }
    XmlNode partNumberMarkerNode = resultNode.FirstChild("PartNumberMarker");
    if(!partNumberMarkerNode.IsNull())
    {
      m_partNumberMarker = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(partNumberMarkerNode.GetText()).c_str()).c_str());
      m_partNumberMarkerHasBeenSet = true;
    }
    XmlNode nextPartNumberMarkerNode = resultNode.FirstChild("NextPartNumberMarker");
    if(!nextPartNumberMarkerNode.IsNull())
    {
      m_nextPartNumberMarker = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(nextPartNumberMarkerNode.GetText()).c_str()).c_str());
      m_nextPartNumberMarkerHasBeenSet = true;
    }
    XmlNode maxPartsNode = resultNode.FirstChild("MaxParts");
    if(!maxPartsNode.IsNull())
    {
      m_maxParts = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxPartsNode.GetText()).c_str()).c_str());
      m_maxPartsHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode partsNode = resultNode.FirstChild("Part");
    if(!partsNode.IsNull())
    {
      XmlNode partMember = partsNode;
      m_partsHasBeenSet = !partMember.IsNull();
      while(!partMember.IsNull())
      {
        m_parts.push_back(partMember);
        partMember = partMember.NextNode("Part");
      }

      m_partsHasBeenSet = true;
    }
    XmlNode initiatorNode = resultNode.FirstChild("Initiator");
    if(!initiatorNode.IsNull())
    {
      m_initiator = initiatorNode;
      m_initiatorHasBeenSet = true;
    }
    XmlNode ownerNode = resultNode.FirstChild("Owner");
    if(!ownerNode.IsNull())
    {
      m_owner = ownerNode;
      m_ownerHasBeenSet = true;
    }
    XmlNode storageClassNode = resultNode.FirstChild("StorageClass");
    if(!storageClassNode.IsNull())
    {
      m_storageClass = StorageClassMapper::GetStorageClassForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageClassNode.GetText()).c_str()));
      m_storageClassHasBeenSet = true;
    }
    XmlNode checksumAlgorithmNode = resultNode.FirstChild("ChecksumAlgorithm");
    if(!checksumAlgorithmNode.IsNull())
    {
      m_checksumAlgorithm = ChecksumAlgorithmMapper::GetChecksumAlgorithmForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(checksumAlgorithmNode.GetText()).c_str()));
      m_checksumAlgorithmHasBeenSet = true;
    }
    XmlNode checksumTypeNode = resultNode.FirstChild("ChecksumType");
    if(!checksumTypeNode.IsNull())
    {
      m_checksumType = ChecksumTypeMapper::GetChecksumTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(checksumTypeNode.GetText()).c_str()));
      m_checksumTypeHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& abortDateIter = headers.find("x-amz-abort-date");
  if(abortDateIter != headers.end())
  {
    m_abortDate = DateTime(abortDateIter->second.c_str(), Aws::Utils::DateFormat::RFC822);
    if(!m_abortDate.WasParseSuccessful())
    {
      AWS_LOGSTREAM_WARN("S3::ListPartsResult", "Failed to parse abortDate header as an RFC822 timestamp: " << abortDateIter->second.c_str());
    }
    m_abortDateHasBeenSet = true;
  }

  const auto& abortRuleIdIter = headers.find("x-amz-abort-rule-id");
  if(abortRuleIdIter != headers.end())
  {
    m_abortRuleId = abortRuleIdIter->second;
    m_abortRuleIdHasBeenSet = true;
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
