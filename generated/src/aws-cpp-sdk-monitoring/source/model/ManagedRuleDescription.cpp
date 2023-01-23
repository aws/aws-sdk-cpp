/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/ManagedRuleDescription.h>
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

ManagedRuleDescription::ManagedRuleDescription() : 
    m_templateNameHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_ruleStateHasBeenSet(false)
{
}

ManagedRuleDescription::ManagedRuleDescription(const XmlNode& xmlNode) : 
    m_templateNameHasBeenSet(false),
    m_resourceARNHasBeenSet(false),
    m_ruleStateHasBeenSet(false)
{
  *this = xmlNode;
}

ManagedRuleDescription& ManagedRuleDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(!templateNameNode.IsNull())
    {
      m_templateName = Aws::Utils::Xml::DecodeEscapedXmlText(templateNameNode.GetText());
      m_templateNameHasBeenSet = true;
    }
    XmlNode resourceARNNode = resultNode.FirstChild("ResourceARN");
    if(!resourceARNNode.IsNull())
    {
      m_resourceARN = Aws::Utils::Xml::DecodeEscapedXmlText(resourceARNNode.GetText());
      m_resourceARNHasBeenSet = true;
    }
    XmlNode ruleStateNode = resultNode.FirstChild("RuleState");
    if(!ruleStateNode.IsNull())
    {
      m_ruleState = ruleStateNode;
      m_ruleStateHasBeenSet = true;
    }
  }

  return *this;
}

void ManagedRuleDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_templateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if(m_resourceARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceARN=" << StringUtils::URLEncode(m_resourceARN.c_str()) << "&";
  }

  if(m_ruleStateHasBeenSet)
  {
      Aws::StringStream ruleStateLocationAndMemberSs;
      ruleStateLocationAndMemberSs << location << index << locationValue << ".RuleState";
      m_ruleState.OutputToStream(oStream, ruleStateLocationAndMemberSs.str().c_str());
  }

}

void ManagedRuleDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_templateNameHasBeenSet)
  {
      oStream << location << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }
  if(m_resourceARNHasBeenSet)
  {
      oStream << location << ".ResourceARN=" << StringUtils::URLEncode(m_resourceARN.c_str()) << "&";
  }
  if(m_ruleStateHasBeenSet)
  {
      Aws::String ruleStateLocationAndMember(location);
      ruleStateLocationAndMember += ".RuleState";
      m_ruleState.OutputToStream(oStream, ruleStateLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
