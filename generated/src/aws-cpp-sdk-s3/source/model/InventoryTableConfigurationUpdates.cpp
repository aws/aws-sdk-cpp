/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/InventoryTableConfigurationUpdates.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

InventoryTableConfigurationUpdates::InventoryTableConfigurationUpdates(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InventoryTableConfigurationUpdates& InventoryTableConfigurationUpdates::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode configurationStateNode = resultNode.FirstChild("ConfigurationState");
    if(!configurationStateNode.IsNull())
    {
      m_configurationState = InventoryConfigurationStateMapper::GetInventoryConfigurationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(configurationStateNode.GetText()).c_str()));
      m_configurationStateHasBeenSet = true;
    }
    XmlNode encryptionConfigurationNode = resultNode.FirstChild("EncryptionConfiguration");
    if(!encryptionConfigurationNode.IsNull())
    {
      m_encryptionConfiguration = encryptionConfigurationNode;
      m_encryptionConfigurationHasBeenSet = true;
    }
  }

  return *this;
}

void InventoryTableConfigurationUpdates::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_configurationStateHasBeenSet)
  {
   XmlNode configurationStateNode = parentNode.CreateChildElement("ConfigurationState");
   configurationStateNode.SetText(InventoryConfigurationStateMapper::GetNameForInventoryConfigurationState(m_configurationState));
  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   XmlNode encryptionConfigurationNode = parentNode.CreateChildElement("EncryptionConfiguration");
   m_encryptionConfiguration.AddToNode(encryptionConfigurationNode);
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
