/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/JobManifest.h>
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

JobManifest::JobManifest() : 
    m_specHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

JobManifest::JobManifest(const XmlNode& xmlNode) : 
    m_specHasBeenSet(false),
    m_locationHasBeenSet(false)
{
  *this = xmlNode;
}

JobManifest& JobManifest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode specNode = resultNode.FirstChild("Spec");
    if(!specNode.IsNull())
    {
      m_spec = specNode;
      m_specHasBeenSet = true;
    }
    XmlNode locationNode = resultNode.FirstChild("Location");
    if(!locationNode.IsNull())
    {
      m_location = locationNode;
      m_locationHasBeenSet = true;
    }
  }

  return *this;
}

void JobManifest::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_specHasBeenSet)
  {
   XmlNode specNode = parentNode.CreateChildElement("Spec");
   m_spec.AddToNode(specNode);
  }

  if(m_locationHasBeenSet)
  {
   XmlNode locationNode = parentNode.CreateChildElement("Location");
   m_location.AddToNode(locationNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
