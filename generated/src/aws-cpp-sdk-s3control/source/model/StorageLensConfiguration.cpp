/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/StorageLensConfiguration.h>
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

StorageLensConfiguration::StorageLensConfiguration() : 
    m_idHasBeenSet(false),
    m_accountLevelHasBeenSet(false),
    m_includeHasBeenSet(false),
    m_excludeHasBeenSet(false),
    m_dataExportHasBeenSet(false),
    m_isEnabled(false),
    m_isEnabledHasBeenSet(false),
    m_awsOrgHasBeenSet(false),
    m_storageLensArnHasBeenSet(false)
{
}

StorageLensConfiguration::StorageLensConfiguration(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_accountLevelHasBeenSet(false),
    m_includeHasBeenSet(false),
    m_excludeHasBeenSet(false),
    m_dataExportHasBeenSet(false),
    m_isEnabled(false),
    m_isEnabledHasBeenSet(false),
    m_awsOrgHasBeenSet(false),
    m_storageLensArnHasBeenSet(false)
{
  *this = xmlNode;
}

StorageLensConfiguration& StorageLensConfiguration::operator =(const XmlNode& xmlNode)
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
    XmlNode accountLevelNode = resultNode.FirstChild("AccountLevel");
    if(!accountLevelNode.IsNull())
    {
      m_accountLevel = accountLevelNode;
      m_accountLevelHasBeenSet = true;
    }
    XmlNode includeNode = resultNode.FirstChild("Include");
    if(!includeNode.IsNull())
    {
      m_include = includeNode;
      m_includeHasBeenSet = true;
    }
    XmlNode excludeNode = resultNode.FirstChild("Exclude");
    if(!excludeNode.IsNull())
    {
      m_exclude = excludeNode;
      m_excludeHasBeenSet = true;
    }
    XmlNode dataExportNode = resultNode.FirstChild("DataExport");
    if(!dataExportNode.IsNull())
    {
      m_dataExport = dataExportNode;
      m_dataExportHasBeenSet = true;
    }
    XmlNode isEnabledNode = resultNode.FirstChild("IsEnabled");
    if(!isEnabledNode.IsNull())
    {
      m_isEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isEnabledNode.GetText()).c_str()).c_str());
      m_isEnabledHasBeenSet = true;
    }
    XmlNode awsOrgNode = resultNode.FirstChild("AwsOrg");
    if(!awsOrgNode.IsNull())
    {
      m_awsOrg = awsOrgNode;
      m_awsOrgHasBeenSet = true;
    }
    XmlNode storageLensArnNode = resultNode.FirstChild("StorageLensArn");
    if(!storageLensArnNode.IsNull())
    {
      m_storageLensArn = Aws::Utils::Xml::DecodeEscapedXmlText(storageLensArnNode.GetText());
      m_storageLensArnHasBeenSet = true;
    }
  }

  return *this;
}

void StorageLensConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_accountLevelHasBeenSet)
  {
   XmlNode accountLevelNode = parentNode.CreateChildElement("AccountLevel");
   m_accountLevel.AddToNode(accountLevelNode);
  }

  if(m_includeHasBeenSet)
  {
   XmlNode includeNode = parentNode.CreateChildElement("Include");
   m_include.AddToNode(includeNode);
  }

  if(m_excludeHasBeenSet)
  {
   XmlNode excludeNode = parentNode.CreateChildElement("Exclude");
   m_exclude.AddToNode(excludeNode);
  }

  if(m_dataExportHasBeenSet)
  {
   XmlNode dataExportNode = parentNode.CreateChildElement("DataExport");
   m_dataExport.AddToNode(dataExportNode);
  }

  if(m_isEnabledHasBeenSet)
  {
   XmlNode isEnabledNode = parentNode.CreateChildElement("IsEnabled");
   ss << std::boolalpha << m_isEnabled;
   isEnabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_awsOrgHasBeenSet)
  {
   XmlNode awsOrgNode = parentNode.CreateChildElement("AwsOrg");
   m_awsOrg.AddToNode(awsOrgNode);
  }

  if(m_storageLensArnHasBeenSet)
  {
   XmlNode storageLensArnNode = parentNode.CreateChildElement("StorageLensArn");
   storageLensArnNode.SetText(m_storageLensArn);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
