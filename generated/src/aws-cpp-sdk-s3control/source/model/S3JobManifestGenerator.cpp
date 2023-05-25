/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3JobManifestGenerator.h>
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

S3JobManifestGenerator::S3JobManifestGenerator() : 
    m_expectedBucketOwnerHasBeenSet(false),
    m_sourceBucketHasBeenSet(false),
    m_manifestOutputLocationHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_enableManifestOutput(false),
    m_enableManifestOutputHasBeenSet(false)
{
}

S3JobManifestGenerator::S3JobManifestGenerator(const XmlNode& xmlNode) : 
    m_expectedBucketOwnerHasBeenSet(false),
    m_sourceBucketHasBeenSet(false),
    m_manifestOutputLocationHasBeenSet(false),
    m_filterHasBeenSet(false),
    m_enableManifestOutput(false),
    m_enableManifestOutputHasBeenSet(false)
{
  *this = xmlNode;
}

S3JobManifestGenerator& S3JobManifestGenerator::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode expectedBucketOwnerNode = resultNode.FirstChild("ExpectedBucketOwner");
    if(!expectedBucketOwnerNode.IsNull())
    {
      m_expectedBucketOwner = Aws::Utils::Xml::DecodeEscapedXmlText(expectedBucketOwnerNode.GetText());
      m_expectedBucketOwnerHasBeenSet = true;
    }
    XmlNode sourceBucketNode = resultNode.FirstChild("SourceBucket");
    if(!sourceBucketNode.IsNull())
    {
      m_sourceBucket = Aws::Utils::Xml::DecodeEscapedXmlText(sourceBucketNode.GetText());
      m_sourceBucketHasBeenSet = true;
    }
    XmlNode manifestOutputLocationNode = resultNode.FirstChild("ManifestOutputLocation");
    if(!manifestOutputLocationNode.IsNull())
    {
      m_manifestOutputLocation = manifestOutputLocationNode;
      m_manifestOutputLocationHasBeenSet = true;
    }
    XmlNode filterNode = resultNode.FirstChild("Filter");
    if(!filterNode.IsNull())
    {
      m_filter = filterNode;
      m_filterHasBeenSet = true;
    }
    XmlNode enableManifestOutputNode = resultNode.FirstChild("EnableManifestOutput");
    if(!enableManifestOutputNode.IsNull())
    {
      m_enableManifestOutput = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enableManifestOutputNode.GetText()).c_str()).c_str());
      m_enableManifestOutputHasBeenSet = true;
    }
  }

  return *this;
}

void S3JobManifestGenerator::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_expectedBucketOwnerHasBeenSet)
  {
   XmlNode expectedBucketOwnerNode = parentNode.CreateChildElement("ExpectedBucketOwner");
   expectedBucketOwnerNode.SetText(m_expectedBucketOwner);
  }

  if(m_sourceBucketHasBeenSet)
  {
   XmlNode sourceBucketNode = parentNode.CreateChildElement("SourceBucket");
   sourceBucketNode.SetText(m_sourceBucket);
  }

  if(m_manifestOutputLocationHasBeenSet)
  {
   XmlNode manifestOutputLocationNode = parentNode.CreateChildElement("ManifestOutputLocation");
   m_manifestOutputLocation.AddToNode(manifestOutputLocationNode);
  }

  if(m_filterHasBeenSet)
  {
   XmlNode filterNode = parentNode.CreateChildElement("Filter");
   m_filter.AddToNode(filterNode);
  }

  if(m_enableManifestOutputHasBeenSet)
  {
   XmlNode enableManifestOutputNode = parentNode.CreateChildElement("EnableManifestOutput");
   ss << std::boolalpha << m_enableManifestOutput;
   enableManifestOutputNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
