/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/InsightRule.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

InsightRule::InsightRule() : 
    m_nameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_managedRule(false),
    m_managedRuleHasBeenSet(false)
{
}

InsightRule::InsightRule(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_schemaHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_managedRule(false),
    m_managedRuleHasBeenSet(false)
{
  *this = xmlNode;
}

InsightRule& InsightRule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
    XmlNode schemaNode = resultNode.FirstChild("Schema");
    if(!schemaNode.IsNull())
    {
      m_schema = Aws::Utils::Xml::DecodeEscapedXmlText(schemaNode.GetText());
      m_schemaHasBeenSet = true;
    }
    XmlNode definitionNode = resultNode.FirstChild("Definition");
    if(!definitionNode.IsNull())
    {
      m_definition = Aws::Utils::Xml::DecodeEscapedXmlText(definitionNode.GetText());
      m_definitionHasBeenSet = true;
    }
    XmlNode managedRuleNode = resultNode.FirstChild("ManagedRule");
    if(!managedRuleNode.IsNull())
    {
      m_managedRule = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedRuleNode.GetText()).c_str()).c_str());
      m_managedRuleHasBeenSet = true;
    }
  }

  return *this;
}

void InsightRule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

  if(m_schemaHasBeenSet)
  {
      oStream << location << index << locationValue << ".Schema=" << StringUtils::URLEncode(m_schema.c_str()) << "&";
  }

  if(m_definitionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Definition=" << StringUtils::URLEncode(m_definition.c_str()) << "&";
  }

  if(m_managedRuleHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManagedRule=" << std::boolalpha << m_managedRule << "&";
  }

}

void InsightRule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_schemaHasBeenSet)
  {
      oStream << location << ".Schema=" << StringUtils::URLEncode(m_schema.c_str()) << "&";
  }
  if(m_definitionHasBeenSet)
  {
      oStream << location << ".Definition=" << StringUtils::URLEncode(m_definition.c_str()) << "&";
  }
  if(m_managedRuleHasBeenSet)
  {
      oStream << location << ".ManagedRule=" << std::boolalpha << m_managedRule << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
