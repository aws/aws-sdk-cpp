/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DBParameterGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

DBParameterGroup::DBParameterGroup() : 
    m_dBParameterGroupNameHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dBParameterGroupArnHasBeenSet(false)
{
}

DBParameterGroup::DBParameterGroup(const XmlNode& xmlNode) : 
    m_dBParameterGroupNameHasBeenSet(false),
    m_dBParameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_dBParameterGroupArnHasBeenSet(false)
{
  *this = xmlNode;
}

DBParameterGroup& DBParameterGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBParameterGroupNameNode = resultNode.FirstChild("DBParameterGroupName");
    if(!dBParameterGroupNameNode.IsNull())
    {
      m_dBParameterGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(dBParameterGroupNameNode.GetText());
      m_dBParameterGroupNameHasBeenSet = true;
    }
    XmlNode dBParameterGroupFamilyNode = resultNode.FirstChild("DBParameterGroupFamily");
    if(!dBParameterGroupFamilyNode.IsNull())
    {
      m_dBParameterGroupFamily = Aws::Utils::Xml::DecodeEscapedXmlText(dBParameterGroupFamilyNode.GetText());
      m_dBParameterGroupFamilyHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode dBParameterGroupArnNode = resultNode.FirstChild("DBParameterGroupArn");
    if(!dBParameterGroupArnNode.IsNull())
    {
      m_dBParameterGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBParameterGroupArnNode.GetText());
      m_dBParameterGroupArnHasBeenSet = true;
    }
  }

  return *this;
}

void DBParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBParameterGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }

  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_dBParameterGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBParameterGroupArn=" << StringUtils::URLEncode(m_dBParameterGroupArn.c_str()) << "&";
  }

}

void DBParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBParameterGroupNameHasBeenSet)
  {
      oStream << location << ".DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }
  if(m_dBParameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_dBParameterGroupArnHasBeenSet)
  {
      oStream << location << ".DBParameterGroupArn=" << StringUtils::URLEncode(m_dBParameterGroupArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
