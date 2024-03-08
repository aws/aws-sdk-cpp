/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/RecommendedAction.h>
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

RecommendedAction::RecommendedAction() : 
    m_actionIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_applyModesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_issueDetailsHasBeenSet(false),
    m_contextAttributesHasBeenSet(false)
{
}

RecommendedAction::RecommendedAction(const XmlNode& xmlNode) : 
    m_actionIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_applyModesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_issueDetailsHasBeenSet(false),
    m_contextAttributesHasBeenSet(false)
{
  *this = xmlNode;
}

RecommendedAction& RecommendedAction::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode actionIdNode = resultNode.FirstChild("ActionId");
    if(!actionIdNode.IsNull())
    {
      m_actionId = Aws::Utils::Xml::DecodeEscapedXmlText(actionIdNode.GetText());
      m_actionIdHasBeenSet = true;
    }
    XmlNode titleNode = resultNode.FirstChild("Title");
    if(!titleNode.IsNull())
    {
      m_title = Aws::Utils::Xml::DecodeEscapedXmlText(titleNode.GetText());
      m_titleHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode operationNode = resultNode.FirstChild("Operation");
    if(!operationNode.IsNull())
    {
      m_operation = Aws::Utils::Xml::DecodeEscapedXmlText(operationNode.GetText());
      m_operationHasBeenSet = true;
    }
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if(!parametersNode.IsNull())
    {
      XmlNode parametersMember = parametersNode.FirstChild("member");
      while(!parametersMember.IsNull())
      {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("member");
      }

      m_parametersHasBeenSet = true;
    }
    XmlNode applyModesNode = resultNode.FirstChild("ApplyModes");
    if(!applyModesNode.IsNull())
    {
      XmlNode applyModesMember = applyModesNode.FirstChild("member");
      while(!applyModesMember.IsNull())
      {
        m_applyModes.push_back(applyModesMember.GetText());
        applyModesMember = applyModesMember.NextNode("member");
      }

      m_applyModesHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode issueDetailsNode = resultNode.FirstChild("IssueDetails");
    if(!issueDetailsNode.IsNull())
    {
      m_issueDetails = issueDetailsNode;
      m_issueDetailsHasBeenSet = true;
    }
    XmlNode contextAttributesNode = resultNode.FirstChild("ContextAttributes");
    if(!contextAttributesNode.IsNull())
    {
      XmlNode contextAttributesMember = contextAttributesNode.FirstChild("member");
      while(!contextAttributesMember.IsNull())
      {
        m_contextAttributes.push_back(contextAttributesMember);
        contextAttributesMember = contextAttributesMember.NextNode("member");
      }

      m_contextAttributesHasBeenSet = true;
    }
  }

  return *this;
}

void RecommendedAction::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_actionIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActionId=" << StringUtils::URLEncode(m_actionId.c_str()) << "&";
  }

  if(m_titleHasBeenSet)
  {
      oStream << location << index << locationValue << ".Title=" << StringUtils::URLEncode(m_title.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_operationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Operation=" << StringUtils::URLEncode(m_operation.c_str()) << "&";
  }

  if(m_parametersHasBeenSet)
  {
      unsigned parametersIdx = 1;
      for(auto& item : m_parameters)
      {
        Aws::StringStream parametersSs;
        parametersSs << location << index << locationValue << ".Parameters.member." << parametersIdx++;
        item.OutputToStream(oStream, parametersSs.str().c_str());
      }
  }

  if(m_applyModesHasBeenSet)
  {
      unsigned applyModesIdx = 1;
      for(auto& item : m_applyModes)
      {
        oStream << location << index << locationValue << ".ApplyModes.member." << applyModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_issueDetailsHasBeenSet)
  {
      Aws::StringStream issueDetailsLocationAndMemberSs;
      issueDetailsLocationAndMemberSs << location << index << locationValue << ".IssueDetails";
      m_issueDetails.OutputToStream(oStream, issueDetailsLocationAndMemberSs.str().c_str());
  }

  if(m_contextAttributesHasBeenSet)
  {
      unsigned contextAttributesIdx = 1;
      for(auto& item : m_contextAttributes)
      {
        Aws::StringStream contextAttributesSs;
        contextAttributesSs << location << index << locationValue << ".ContextAttributes.member." << contextAttributesIdx++;
        item.OutputToStream(oStream, contextAttributesSs.str().c_str());
      }
  }

}

void RecommendedAction::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_actionIdHasBeenSet)
  {
      oStream << location << ".ActionId=" << StringUtils::URLEncode(m_actionId.c_str()) << "&";
  }
  if(m_titleHasBeenSet)
  {
      oStream << location << ".Title=" << StringUtils::URLEncode(m_title.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_operationHasBeenSet)
  {
      oStream << location << ".Operation=" << StringUtils::URLEncode(m_operation.c_str()) << "&";
  }
  if(m_parametersHasBeenSet)
  {
      unsigned parametersIdx = 1;
      for(auto& item : m_parameters)
      {
        Aws::StringStream parametersSs;
        parametersSs << location <<  ".Parameters.member." << parametersIdx++;
        item.OutputToStream(oStream, parametersSs.str().c_str());
      }
  }
  if(m_applyModesHasBeenSet)
  {
      unsigned applyModesIdx = 1;
      for(auto& item : m_applyModes)
      {
        oStream << location << ".ApplyModes.member." << applyModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_issueDetailsHasBeenSet)
  {
      Aws::String issueDetailsLocationAndMember(location);
      issueDetailsLocationAndMember += ".IssueDetails";
      m_issueDetails.OutputToStream(oStream, issueDetailsLocationAndMember.c_str());
  }
  if(m_contextAttributesHasBeenSet)
  {
      unsigned contextAttributesIdx = 1;
      for(auto& item : m_contextAttributes)
      {
        Aws::StringStream contextAttributesSs;
        contextAttributesSs << location <<  ".ContextAttributes.member." << contextAttributesIdx++;
        item.OutputToStream(oStream, contextAttributesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
