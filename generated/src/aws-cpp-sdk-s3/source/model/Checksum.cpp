﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/Checksum.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

Checksum::Checksum(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Checksum& Checksum::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
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

  return *this;
}

void Checksum::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_checksumCRC32HasBeenSet)
  {
   XmlNode checksumCRC32Node = parentNode.CreateChildElement("ChecksumCRC32");
   checksumCRC32Node.SetText(m_checksumCRC32);
  }

  if(m_checksumCRC32CHasBeenSet)
  {
   XmlNode checksumCRC32CNode = parentNode.CreateChildElement("ChecksumCRC32C");
   checksumCRC32CNode.SetText(m_checksumCRC32C);
  }

  if(m_checksumCRC64NVMEHasBeenSet)
  {
   XmlNode checksumCRC64NVMENode = parentNode.CreateChildElement("ChecksumCRC64NVME");
   checksumCRC64NVMENode.SetText(m_checksumCRC64NVME);
  }

  if(m_checksumSHA1HasBeenSet)
  {
   XmlNode checksumSHA1Node = parentNode.CreateChildElement("ChecksumSHA1");
   checksumSHA1Node.SetText(m_checksumSHA1);
  }

  if(m_checksumSHA256HasBeenSet)
  {
   XmlNode checksumSHA256Node = parentNode.CreateChildElement("ChecksumSHA256");
   checksumSHA256Node.SetText(m_checksumSHA256);
  }

  if(m_checksumTypeHasBeenSet)
  {
   XmlNode checksumTypeNode = parentNode.CreateChildElement("ChecksumType");
   checksumTypeNode.SetText(ChecksumTypeMapper::GetNameForChecksumType(m_checksumType));
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
