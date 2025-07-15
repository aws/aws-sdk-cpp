/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/MetadataConfigurationResult.h>
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

MetadataConfigurationResult::MetadataConfigurationResult(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MetadataConfigurationResult& MetadataConfigurationResult::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode destinationResultNode = resultNode.FirstChild("DestinationResult");
    if(!destinationResultNode.IsNull())
    {
      m_destinationResult = destinationResultNode;
      m_destinationResultHasBeenSet = true;
    }
    XmlNode journalTableConfigurationResultNode = resultNode.FirstChild("JournalTableConfigurationResult");
    if(!journalTableConfigurationResultNode.IsNull())
    {
      m_journalTableConfigurationResult = journalTableConfigurationResultNode;
      m_journalTableConfigurationResultHasBeenSet = true;
    }
    XmlNode inventoryTableConfigurationResultNode = resultNode.FirstChild("InventoryTableConfigurationResult");
    if(!inventoryTableConfigurationResultNode.IsNull())
    {
      m_inventoryTableConfigurationResult = inventoryTableConfigurationResultNode;
      m_inventoryTableConfigurationResultHasBeenSet = true;
    }
  }

  return *this;
}

void MetadataConfigurationResult::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_destinationResultHasBeenSet)
  {
   XmlNode destinationResultNode = parentNode.CreateChildElement("DestinationResult");
   m_destinationResult.AddToNode(destinationResultNode);
  }

  if(m_journalTableConfigurationResultHasBeenSet)
  {
   XmlNode journalTableConfigurationResultNode = parentNode.CreateChildElement("JournalTableConfigurationResult");
   m_journalTableConfigurationResult.AddToNode(journalTableConfigurationResultNode);
  }

  if(m_inventoryTableConfigurationResultHasBeenSet)
  {
   XmlNode inventoryTableConfigurationResultNode = parentNode.CreateChildElement("InventoryTableConfigurationResult");
   m_inventoryTableConfigurationResult.AddToNode(inventoryTableConfigurationResultNode);
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
