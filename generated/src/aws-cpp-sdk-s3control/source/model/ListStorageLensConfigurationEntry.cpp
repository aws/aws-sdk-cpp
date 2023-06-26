/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListStorageLensConfigurationEntry.h>
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

ListStorageLensConfigurationEntry::ListStorageLensConfigurationEntry() : 
    m_idHasBeenSet(false),
    m_storageLensArnHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_isEnabled(false),
    m_isEnabledHasBeenSet(false)
{
}

ListStorageLensConfigurationEntry::ListStorageLensConfigurationEntry(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_storageLensArnHasBeenSet(false),
    m_homeRegionHasBeenSet(false),
    m_isEnabled(false),
    m_isEnabledHasBeenSet(false)
{
  *this = xmlNode;
}

ListStorageLensConfigurationEntry& ListStorageLensConfigurationEntry::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(!idNode.IsNull())
    {
      m_id = Aws::Utils::Xml::DecodeEscapedXmlText(idNode.GetText());
      m_idHasBeenSet = true;
    }
    XmlNode storageLensArnNode = resultNode.FirstChild("StorageLensArn");
    if(!storageLensArnNode.IsNull())
    {
      m_storageLensArn = Aws::Utils::Xml::DecodeEscapedXmlText(storageLensArnNode.GetText());
      m_storageLensArnHasBeenSet = true;
    }
    XmlNode homeRegionNode = resultNode.FirstChild("HomeRegion");
    if(!homeRegionNode.IsNull())
    {
      m_homeRegion = Aws::Utils::Xml::DecodeEscapedXmlText(homeRegionNode.GetText());
      m_homeRegionHasBeenSet = true;
    }
    XmlNode isEnabledNode = resultNode.FirstChild("IsEnabled");
    if(!isEnabledNode.IsNull())
    {
      m_isEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isEnabledNode.GetText()).c_str()).c_str());
      m_isEnabledHasBeenSet = true;
    }
  }

  return *this;
}

void ListStorageLensConfigurationEntry::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_storageLensArnHasBeenSet)
  {
   XmlNode storageLensArnNode = parentNode.CreateChildElement("StorageLensArn");
   storageLensArnNode.SetText(m_storageLensArn);
  }

  if(m_homeRegionHasBeenSet)
  {
   XmlNode homeRegionNode = parentNode.CreateChildElement("HomeRegion");
   homeRegionNode.SetText(m_homeRegion);
  }

  if(m_isEnabledHasBeenSet)
  {
   XmlNode isEnabledNode = parentNode.CreateChildElement("IsEnabled");
   ss << std::boolalpha << m_isEnabled;
   isEnabledNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
