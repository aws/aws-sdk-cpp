/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/AccessGrantsLocationConfiguration.h>
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

AccessGrantsLocationConfiguration::AccessGrantsLocationConfiguration() : 
    m_s3SubPrefixHasBeenSet(false)
{
}

AccessGrantsLocationConfiguration::AccessGrantsLocationConfiguration(const XmlNode& xmlNode) : 
    m_s3SubPrefixHasBeenSet(false)
{
  *this = xmlNode;
}

AccessGrantsLocationConfiguration& AccessGrantsLocationConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode s3SubPrefixNode = resultNode.FirstChild("S3SubPrefix");
    if(!s3SubPrefixNode.IsNull())
    {
      m_s3SubPrefix = Aws::Utils::Xml::DecodeEscapedXmlText(s3SubPrefixNode.GetText());
      m_s3SubPrefixHasBeenSet = true;
    }
  }

  return *this;
}

void AccessGrantsLocationConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_s3SubPrefixHasBeenSet)
  {
   XmlNode s3SubPrefixNode = parentNode.CreateChildElement("S3SubPrefix");
   s3SubPrefixNode.SetText(m_s3SubPrefix);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
