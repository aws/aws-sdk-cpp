/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/InventoryTableConfigurationResult.h>
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

InventoryTableConfigurationResult::InventoryTableConfigurationResult(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InventoryTableConfigurationResult& InventoryTableConfigurationResult::operator =(const XmlNode& xmlNode)
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
    XmlNode tableStatusNode = resultNode.FirstChild("TableStatus");
    if(!tableStatusNode.IsNull())
    {
      m_tableStatus = Aws::Utils::Xml::DecodeEscapedXmlText(tableStatusNode.GetText());
      m_tableStatusHasBeenSet = true;
    }
    XmlNode errorNode = resultNode.FirstChild("Error");
    if(!errorNode.IsNull())
    {
      m_error = errorNode;
      m_errorHasBeenSet = true;
    }
    XmlNode tableNameNode = resultNode.FirstChild("TableName");
    if(!tableNameNode.IsNull())
    {
      m_tableName = Aws::Utils::Xml::DecodeEscapedXmlText(tableNameNode.GetText());
      m_tableNameHasBeenSet = true;
    }
    XmlNode tableArnNode = resultNode.FirstChild("TableArn");
    if(!tableArnNode.IsNull())
    {
      m_tableArn = Aws::Utils::Xml::DecodeEscapedXmlText(tableArnNode.GetText());
      m_tableArnHasBeenSet = true;
    }
  }

  return *this;
}

void InventoryTableConfigurationResult::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_configurationStateHasBeenSet)
  {
   XmlNode configurationStateNode = parentNode.CreateChildElement("ConfigurationState");
   configurationStateNode.SetText(InventoryConfigurationStateMapper::GetNameForInventoryConfigurationState(m_configurationState));
  }

  if(m_tableStatusHasBeenSet)
  {
   XmlNode tableStatusNode = parentNode.CreateChildElement("TableStatus");
   tableStatusNode.SetText(m_tableStatus);
  }

  if(m_errorHasBeenSet)
  {
   XmlNode errorNode = parentNode.CreateChildElement("Error");
   m_error.AddToNode(errorNode);
  }

  if(m_tableNameHasBeenSet)
  {
   XmlNode tableNameNode = parentNode.CreateChildElement("TableName");
   tableNameNode.SetText(m_tableName);
  }

  if(m_tableArnHasBeenSet)
  {
   XmlNode tableArnNode = parentNode.CreateChildElement("TableArn");
   tableArnNode.SetText(m_tableArn);
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
