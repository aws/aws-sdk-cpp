/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobManifestGenerator.h>
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

JobManifestGenerator::JobManifestGenerator() : 
    m_s3JobManifestGeneratorHasBeenSet(false)
{
}

JobManifestGenerator::JobManifestGenerator(const XmlNode& xmlNode) : 
    m_s3JobManifestGeneratorHasBeenSet(false)
{
  *this = xmlNode;
}

JobManifestGenerator& JobManifestGenerator::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode s3JobManifestGeneratorNode = resultNode.FirstChild("S3JobManifestGenerator");
    if(!s3JobManifestGeneratorNode.IsNull())
    {
      m_s3JobManifestGenerator = s3JobManifestGeneratorNode;
      m_s3JobManifestGeneratorHasBeenSet = true;
    }
  }

  return *this;
}

void JobManifestGenerator::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_s3JobManifestGeneratorHasBeenSet)
  {
   XmlNode s3JobManifestGeneratorNode = parentNode.CreateChildElement("S3JobManifestGenerator");
   m_s3JobManifestGenerator.AddToNode(s3JobManifestGeneratorNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
