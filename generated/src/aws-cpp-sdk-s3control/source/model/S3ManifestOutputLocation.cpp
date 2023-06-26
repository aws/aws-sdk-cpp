/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3ManifestOutputLocation.h>
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

S3ManifestOutputLocation::S3ManifestOutputLocation() : 
    m_expectedManifestBucketOwnerHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_manifestPrefixHasBeenSet(false),
    m_manifestEncryptionHasBeenSet(false),
    m_manifestFormat(GeneratedManifestFormat::NOT_SET),
    m_manifestFormatHasBeenSet(false)
{
}

S3ManifestOutputLocation::S3ManifestOutputLocation(const XmlNode& xmlNode) : 
    m_expectedManifestBucketOwnerHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_manifestPrefixHasBeenSet(false),
    m_manifestEncryptionHasBeenSet(false),
    m_manifestFormat(GeneratedManifestFormat::NOT_SET),
    m_manifestFormatHasBeenSet(false)
{
  *this = xmlNode;
}

S3ManifestOutputLocation& S3ManifestOutputLocation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode expectedManifestBucketOwnerNode = resultNode.FirstChild("ExpectedManifestBucketOwner");
    if(!expectedManifestBucketOwnerNode.IsNull())
    {
      m_expectedManifestBucketOwner = Aws::Utils::Xml::DecodeEscapedXmlText(expectedManifestBucketOwnerNode.GetText());
      m_expectedManifestBucketOwnerHasBeenSet = true;
    }
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode manifestPrefixNode = resultNode.FirstChild("ManifestPrefix");
    if(!manifestPrefixNode.IsNull())
    {
      m_manifestPrefix = Aws::Utils::Xml::DecodeEscapedXmlText(manifestPrefixNode.GetText());
      m_manifestPrefixHasBeenSet = true;
    }
    XmlNode manifestEncryptionNode = resultNode.FirstChild("ManifestEncryption");
    if(!manifestEncryptionNode.IsNull())
    {
      m_manifestEncryption = manifestEncryptionNode;
      m_manifestEncryptionHasBeenSet = true;
    }
    XmlNode manifestFormatNode = resultNode.FirstChild("ManifestFormat");
    if(!manifestFormatNode.IsNull())
    {
      m_manifestFormat = GeneratedManifestFormatMapper::GetGeneratedManifestFormatForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(manifestFormatNode.GetText()).c_str()).c_str());
      m_manifestFormatHasBeenSet = true;
    }
  }

  return *this;
}

void S3ManifestOutputLocation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_expectedManifestBucketOwnerHasBeenSet)
  {
   XmlNode expectedManifestBucketOwnerNode = parentNode.CreateChildElement("ExpectedManifestBucketOwner");
   expectedManifestBucketOwnerNode.SetText(m_expectedManifestBucketOwner);
  }

  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   bucketNode.SetText(m_bucket);
  }

  if(m_manifestPrefixHasBeenSet)
  {
   XmlNode manifestPrefixNode = parentNode.CreateChildElement("ManifestPrefix");
   manifestPrefixNode.SetText(m_manifestPrefix);
  }

  if(m_manifestEncryptionHasBeenSet)
  {
   XmlNode manifestEncryptionNode = parentNode.CreateChildElement("ManifestEncryption");
   m_manifestEncryption.AddToNode(manifestEncryptionNode);
  }

  if(m_manifestFormatHasBeenSet)
  {
   XmlNode manifestFormatNode = parentNode.CreateChildElement("ManifestFormat");
   manifestFormatNode.SetText(GeneratedManifestFormatMapper::GetNameForGeneratedManifestFormat(m_manifestFormat));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
