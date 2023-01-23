/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3BucketDestination.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

S3BucketDestination::S3BucketDestination() : 
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_outputSchemaVersion(OutputSchemaVersion::NOT_SET),
    m_outputSchemaVersionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
}

S3BucketDestination::S3BucketDestination(const XmlNode& xmlNode) : 
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false),
    m_outputSchemaVersion(OutputSchemaVersion::NOT_SET),
    m_outputSchemaVersionHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_prefixHasBeenSet(false),
    m_encryptionHasBeenSet(false)
{
  *this = xmlNode;
}

S3BucketDestination& S3BucketDestination::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode formatNode = resultNode.FirstChild("Format");
    if(!formatNode.IsNull())
    {
      m_format = FormatMapper::GetFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(formatNode.GetText()).c_str()).c_str());
      m_formatHasBeenSet = true;
    }
    XmlNode outputSchemaVersionNode = resultNode.FirstChild("OutputSchemaVersion");
    if(!outputSchemaVersionNode.IsNull())
    {
      m_outputSchemaVersion = OutputSchemaVersionMapper::GetOutputSchemaVersionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(outputSchemaVersionNode.GetText()).c_str()).c_str());
      m_outputSchemaVersionHasBeenSet = true;
    }
    XmlNode accountIdNode = resultNode.FirstChild("AccountId");
    if(!accountIdNode.IsNull())
    {
      m_accountId = Aws::Utils::Xml::DecodeEscapedXmlText(accountIdNode.GetText());
      m_accountIdHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if(!arnNode.IsNull())
    {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
    XmlNode prefixNode = resultNode.FirstChild("Prefix");
    if(!prefixNode.IsNull())
    {
      m_prefix = Aws::Utils::Xml::DecodeEscapedXmlText(prefixNode.GetText());
      m_prefixHasBeenSet = true;
    }
    XmlNode encryptionNode = resultNode.FirstChild("Encryption");
    if(!encryptionNode.IsNull())
    {
      m_encryption = encryptionNode;
      m_encryptionHasBeenSet = true;
    }
  }

  return *this;
}

void S3BucketDestination::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_formatHasBeenSet)
  {
   XmlNode formatNode = parentNode.CreateChildElement("Format");
   formatNode.SetText(FormatMapper::GetNameForFormat(m_format));
  }

  if(m_outputSchemaVersionHasBeenSet)
  {
   XmlNode outputSchemaVersionNode = parentNode.CreateChildElement("OutputSchemaVersion");
   outputSchemaVersionNode.SetText(OutputSchemaVersionMapper::GetNameForOutputSchemaVersion(m_outputSchemaVersion));
  }

  if(m_accountIdHasBeenSet)
  {
   XmlNode accountIdNode = parentNode.CreateChildElement("AccountId");
   accountIdNode.SetText(m_accountId);
  }

  if(m_arnHasBeenSet)
  {
   XmlNode arnNode = parentNode.CreateChildElement("Arn");
   arnNode.SetText(m_arn);
  }

  if(m_prefixHasBeenSet)
  {
   XmlNode prefixNode = parentNode.CreateChildElement("Prefix");
   prefixNode.SetText(m_prefix);
  }

  if(m_encryptionHasBeenSet)
  {
   XmlNode encryptionNode = parentNode.CreateChildElement("Encryption");
   m_encryption.AddToNode(encryptionNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
