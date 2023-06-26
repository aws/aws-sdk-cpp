/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/ManagedRuleState.h>
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

ManagedRuleState::ManagedRuleState() : 
    m_ruleNameHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

ManagedRuleState::ManagedRuleState(const XmlNode& xmlNode) : 
    m_ruleNameHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = xmlNode;
}

ManagedRuleState& ManagedRuleState::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ruleNameNode = resultNode.FirstChild("RuleName");
    if(!ruleNameNode.IsNull())
    {
      m_ruleName = Aws::Utils::Xml::DecodeEscapedXmlText(ruleNameNode.GetText());
      m_ruleNameHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void ManagedRuleState::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ruleNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".RuleName=" << StringUtils::URLEncode(m_ruleName.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

}

void ManagedRuleState::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ruleNameHasBeenSet)
  {
      oStream << location << ".RuleName=" << StringUtils::URLEncode(m_ruleName.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
