/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/MetadataConfiguration.h>
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

MetadataConfiguration::MetadataConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MetadataConfiguration& MetadataConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode journalTableConfigurationNode = resultNode.FirstChild("JournalTableConfiguration");
    if(!journalTableConfigurationNode.IsNull())
    {
      m_journalTableConfiguration = journalTableConfigurationNode;
      m_journalTableConfigurationHasBeenSet = true;
    }
    XmlNode inventoryTableConfigurationNode = resultNode.FirstChild("InventoryTableConfiguration");
    if(!inventoryTableConfigurationNode.IsNull())
    {
      m_inventoryTableConfiguration = inventoryTableConfigurationNode;
      m_inventoryTableConfigurationHasBeenSet = true;
    }
  }

  return *this;
}

void MetadataConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_journalTableConfigurationHasBeenSet)
  {
   XmlNode journalTableConfigurationNode = parentNode.CreateChildElement("JournalTableConfiguration");
   m_journalTableConfiguration.AddToNode(journalTableConfigurationNode);
  }

  if(m_inventoryTableConfigurationHasBeenSet)
  {
   XmlNode inventoryTableConfigurationNode = parentNode.CreateChildElement("InventoryTableConfiguration");
   m_inventoryTableConfiguration.AddToNode(inventoryTableConfigurationNode);
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
