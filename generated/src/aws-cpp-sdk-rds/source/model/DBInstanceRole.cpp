/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBInstanceRole.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DBInstanceRole::DBInstanceRole() : 
    m_roleArnHasBeenSet(false),
    m_featureNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

DBInstanceRole::DBInstanceRole(const XmlNode& xmlNode) : 
    m_roleArnHasBeenSet(false),
    m_featureNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

DBInstanceRole& DBInstanceRole::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode roleArnNode = resultNode.FirstChild("RoleArn");
    if(!roleArnNode.IsNull())
    {
      m_roleArn = Aws::Utils::Xml::DecodeEscapedXmlText(roleArnNode.GetText());
      m_roleArnHasBeenSet = true;
    }
    XmlNode featureNameNode = resultNode.FirstChild("FeatureName");
    if(!featureNameNode.IsNull())
    {
      m_featureName = Aws::Utils::Xml::DecodeEscapedXmlText(featureNameNode.GetText());
      m_featureNameHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void DBInstanceRole::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_roleArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_featureNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".FeatureName=" << StringUtils::URLEncode(m_featureName.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

}

void DBInstanceRole::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_roleArnHasBeenSet)
  {
      oStream << location << ".RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }
  if(m_featureNameHasBeenSet)
  {
      oStream << location << ".FeatureName=" << StringUtils::URLEncode(m_featureName.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
