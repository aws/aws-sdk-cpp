/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/MetadataTableConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Crt
{
namespace Model
{

MetadataTableConfiguration::MetadataTableConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MetadataTableConfiguration& MetadataTableConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode s3TablesDestinationNode = resultNode.FirstChild("S3TablesDestination");
    if(!s3TablesDestinationNode.IsNull())
    {
      m_s3TablesDestination = s3TablesDestinationNode;
      m_s3TablesDestinationHasBeenSet = true;
    }
  }

  return *this;
}

void MetadataTableConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_s3TablesDestinationHasBeenSet)
  {
   XmlNode s3TablesDestinationNode = parentNode.CreateChildElement("S3TablesDestination");
   m_s3TablesDestination.AddToNode(s3TablesDestinationNode);
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
