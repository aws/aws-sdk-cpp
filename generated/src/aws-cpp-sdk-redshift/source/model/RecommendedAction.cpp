/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/RecommendedAction.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

RecommendedAction::RecommendedAction() : 
    m_textHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_type(RecommendedActionType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

RecommendedAction::RecommendedAction(const XmlNode& xmlNode) : 
    m_textHasBeenSet(false),
    m_databaseHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_type(RecommendedActionType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = xmlNode;
}

RecommendedAction& RecommendedAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode textNode = resultNode.FirstChild("Text");
    if(!textNode.IsNull())
    {
      m_text = Aws::Utils::Xml::DecodeEscapedXmlText(textNode.GetText());
      m_textHasBeenSet = true;
    }
    XmlNode databaseNode = resultNode.FirstChild("Database");
    if(!databaseNode.IsNull())
    {
      m_database = Aws::Utils::Xml::DecodeEscapedXmlText(databaseNode.GetText());
      m_databaseHasBeenSet = true;
    }
    XmlNode commandNode = resultNode.FirstChild("Command");
    if(!commandNode.IsNull())
    {
      m_command = Aws::Utils::Xml::DecodeEscapedXmlText(commandNode.GetText());
      m_commandHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = RecommendedActionTypeMapper::GetRecommendedActionTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()).c_str());
      m_typeHasBeenSet = true;
    }
  }

  return *this;
}

void RecommendedAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_textHasBeenSet)
  {
      oStream << location << index << locationValue << ".Text=" << StringUtils::URLEncode(m_text.c_str()) << "&";
  }

  if(m_databaseHasBeenSet)
  {
      oStream << location << index << locationValue << ".Database=" << StringUtils::URLEncode(m_database.c_str()) << "&";
  }

  if(m_commandHasBeenSet)
  {
      oStream << location << index << locationValue << ".Command=" << StringUtils::URLEncode(m_command.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << RecommendedActionTypeMapper::GetNameForRecommendedActionType(m_type) << "&";
  }

}

void RecommendedAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_textHasBeenSet)
  {
      oStream << location << ".Text=" << StringUtils::URLEncode(m_text.c_str()) << "&";
  }
  if(m_databaseHasBeenSet)
  {
      oStream << location << ".Database=" << StringUtils::URLEncode(m_database.c_str()) << "&";
  }
  if(m_commandHasBeenSet)
  {
      oStream << location << ".Command=" << StringUtils::URLEncode(m_command.c_str()) << "&";
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << RecommendedActionTypeMapper::GetNameForRecommendedActionType(m_type) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
