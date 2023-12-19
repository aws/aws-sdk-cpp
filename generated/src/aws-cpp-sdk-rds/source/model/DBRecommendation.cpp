/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBRecommendation.h>
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

DBRecommendation::DBRecommendation() : 
    m_recommendationIdHasBeenSet(false),
    m_typeIdHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_detectionHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_recommendedActionsHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_typeDetectionHasBeenSet(false),
    m_typeRecommendationHasBeenSet(false),
    m_impactHasBeenSet(false),
    m_additionalInfoHasBeenSet(false),
    m_linksHasBeenSet(false),
    m_issueDetailsHasBeenSet(false)
{
}

DBRecommendation::DBRecommendation(const XmlNode& xmlNode) : 
    m_recommendationIdHasBeenSet(false),
    m_typeIdHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_resourceArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_detectionHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_recommendedActionsHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_typeDetectionHasBeenSet(false),
    m_typeRecommendationHasBeenSet(false),
    m_impactHasBeenSet(false),
    m_additionalInfoHasBeenSet(false),
    m_linksHasBeenSet(false),
    m_issueDetailsHasBeenSet(false)
{
  *this = xmlNode;
}

DBRecommendation& DBRecommendation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode recommendationIdNode = resultNode.FirstChild("RecommendationId");
    if(!recommendationIdNode.IsNull())
    {
      m_recommendationId = Aws::Utils::Xml::DecodeEscapedXmlText(recommendationIdNode.GetText());
      m_recommendationIdHasBeenSet = true;
    }
    XmlNode typeIdNode = resultNode.FirstChild("TypeId");
    if(!typeIdNode.IsNull())
    {
      m_typeId = Aws::Utils::Xml::DecodeEscapedXmlText(typeIdNode.GetText());
      m_typeIdHasBeenSet = true;
    }
    XmlNode severityNode = resultNode.FirstChild("Severity");
    if(!severityNode.IsNull())
    {
      m_severity = Aws::Utils::Xml::DecodeEscapedXmlText(severityNode.GetText());
      m_severityHasBeenSet = true;
    }
    XmlNode resourceArnNode = resultNode.FirstChild("ResourceArn");
    if(!resourceArnNode.IsNull())
    {
      m_resourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(resourceArnNode.GetText());
      m_resourceArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if(!createdTimeNode.IsNull())
    {
      m_createdTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdTimeHasBeenSet = true;
    }
    XmlNode updatedTimeNode = resultNode.FirstChild("UpdatedTime");
    if(!updatedTimeNode.IsNull())
    {
      m_updatedTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updatedTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_updatedTimeHasBeenSet = true;
    }
    XmlNode detectionNode = resultNode.FirstChild("Detection");
    if(!detectionNode.IsNull())
    {
      m_detection = Aws::Utils::Xml::DecodeEscapedXmlText(detectionNode.GetText());
      m_detectionHasBeenSet = true;
    }
    XmlNode recommendationNode = resultNode.FirstChild("Recommendation");
    if(!recommendationNode.IsNull())
    {
      m_recommendation = Aws::Utils::Xml::DecodeEscapedXmlText(recommendationNode.GetText());
      m_recommendationHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode reasonNode = resultNode.FirstChild("Reason");
    if(!reasonNode.IsNull())
    {
      m_reason = Aws::Utils::Xml::DecodeEscapedXmlText(reasonNode.GetText());
      m_reasonHasBeenSet = true;
    }
    XmlNode recommendedActionsNode = resultNode.FirstChild("RecommendedActions");
    if(!recommendedActionsNode.IsNull())
    {
      XmlNode recommendedActionsMember = recommendedActionsNode.FirstChild("member");
      while(!recommendedActionsMember.IsNull())
      {
        m_recommendedActions.push_back(recommendedActionsMember);
        recommendedActionsMember = recommendedActionsMember.NextNode("member");
      }

      m_recommendedActionsHasBeenSet = true;
    }
    XmlNode categoryNode = resultNode.FirstChild("Category");
    if(!categoryNode.IsNull())
    {
      m_category = Aws::Utils::Xml::DecodeEscapedXmlText(categoryNode.GetText());
      m_categoryHasBeenSet = true;
    }
    XmlNode sourceNode = resultNode.FirstChild("Source");
    if(!sourceNode.IsNull())
    {
      m_source = Aws::Utils::Xml::DecodeEscapedXmlText(sourceNode.GetText());
      m_sourceHasBeenSet = true;
    }
    XmlNode typeDetectionNode = resultNode.FirstChild("TypeDetection");
    if(!typeDetectionNode.IsNull())
    {
      m_typeDetection = Aws::Utils::Xml::DecodeEscapedXmlText(typeDetectionNode.GetText());
      m_typeDetectionHasBeenSet = true;
    }
    XmlNode typeRecommendationNode = resultNode.FirstChild("TypeRecommendation");
    if(!typeRecommendationNode.IsNull())
    {
      m_typeRecommendation = Aws::Utils::Xml::DecodeEscapedXmlText(typeRecommendationNode.GetText());
      m_typeRecommendationHasBeenSet = true;
    }
    XmlNode impactNode = resultNode.FirstChild("Impact");
    if(!impactNode.IsNull())
    {
      m_impact = Aws::Utils::Xml::DecodeEscapedXmlText(impactNode.GetText());
      m_impactHasBeenSet = true;
    }
    XmlNode additionalInfoNode = resultNode.FirstChild("AdditionalInfo");
    if(!additionalInfoNode.IsNull())
    {
      m_additionalInfo = Aws::Utils::Xml::DecodeEscapedXmlText(additionalInfoNode.GetText());
      m_additionalInfoHasBeenSet = true;
    }
    XmlNode linksNode = resultNode.FirstChild("Links");
    if(!linksNode.IsNull())
    {
      XmlNode linksMember = linksNode.FirstChild("member");
      while(!linksMember.IsNull())
      {
        m_links.push_back(linksMember);
        linksMember = linksMember.NextNode("member");
      }

      m_linksHasBeenSet = true;
    }
    XmlNode issueDetailsNode = resultNode.FirstChild("IssueDetails");
    if(!issueDetailsNode.IsNull())
    {
      m_issueDetails = issueDetailsNode;
      m_issueDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void DBRecommendation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_recommendationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RecommendationId=" << StringUtils::URLEncode(m_recommendationId.c_str()) << "&";
  }

  if(m_typeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeId=" << StringUtils::URLEncode(m_typeId.c_str()) << "&";
  }

  if(m_severityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Severity=" << StringUtils::URLEncode(m_severity.c_str()) << "&";
  }

  if(m_resourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_createdTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_updatedTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpdatedTime=" << StringUtils::URLEncode(m_updatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_detectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Detection=" << StringUtils::URLEncode(m_detection.c_str()) << "&";
  }

  if(m_recommendationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Recommendation=" << StringUtils::URLEncode(m_recommendation.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_reasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".Reason=" << StringUtils::URLEncode(m_reason.c_str()) << "&";
  }

  if(m_recommendedActionsHasBeenSet)
  {
      unsigned recommendedActionsIdx = 1;
      for(auto& item : m_recommendedActions)
      {
        Aws::StringStream recommendedActionsSs;
        recommendedActionsSs << location << index << locationValue << ".RecommendedActions.member." << recommendedActionsIdx++;
        item.OutputToStream(oStream, recommendedActionsSs.str().c_str());
      }
  }

  if(m_categoryHasBeenSet)
  {
      oStream << location << index << locationValue << ".Category=" << StringUtils::URLEncode(m_category.c_str()) << "&";
  }

  if(m_sourceHasBeenSet)
  {
      oStream << location << index << locationValue << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }

  if(m_typeDetectionHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeDetection=" << StringUtils::URLEncode(m_typeDetection.c_str()) << "&";
  }

  if(m_typeRecommendationHasBeenSet)
  {
      oStream << location << index << locationValue << ".TypeRecommendation=" << StringUtils::URLEncode(m_typeRecommendation.c_str()) << "&";
  }

  if(m_impactHasBeenSet)
  {
      oStream << location << index << locationValue << ".Impact=" << StringUtils::URLEncode(m_impact.c_str()) << "&";
  }

  if(m_additionalInfoHasBeenSet)
  {
      oStream << location << index << locationValue << ".AdditionalInfo=" << StringUtils::URLEncode(m_additionalInfo.c_str()) << "&";
  }

  if(m_linksHasBeenSet)
  {
      unsigned linksIdx = 1;
      for(auto& item : m_links)
      {
        Aws::StringStream linksSs;
        linksSs << location << index << locationValue << ".Links.member." << linksIdx++;
        item.OutputToStream(oStream, linksSs.str().c_str());
      }
  }

  if(m_issueDetailsHasBeenSet)
  {
      Aws::StringStream issueDetailsLocationAndMemberSs;
      issueDetailsLocationAndMemberSs << location << index << locationValue << ".IssueDetails";
      m_issueDetails.OutputToStream(oStream, issueDetailsLocationAndMemberSs.str().c_str());
  }

}

void DBRecommendation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_recommendationIdHasBeenSet)
  {
      oStream << location << ".RecommendationId=" << StringUtils::URLEncode(m_recommendationId.c_str()) << "&";
  }
  if(m_typeIdHasBeenSet)
  {
      oStream << location << ".TypeId=" << StringUtils::URLEncode(m_typeId.c_str()) << "&";
  }
  if(m_severityHasBeenSet)
  {
      oStream << location << ".Severity=" << StringUtils::URLEncode(m_severity.c_str()) << "&";
  }
  if(m_resourceArnHasBeenSet)
  {
      oStream << location << ".ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_createdTimeHasBeenSet)
  {
      oStream << location << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_updatedTimeHasBeenSet)
  {
      oStream << location << ".UpdatedTime=" << StringUtils::URLEncode(m_updatedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_detectionHasBeenSet)
  {
      oStream << location << ".Detection=" << StringUtils::URLEncode(m_detection.c_str()) << "&";
  }
  if(m_recommendationHasBeenSet)
  {
      oStream << location << ".Recommendation=" << StringUtils::URLEncode(m_recommendation.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_reasonHasBeenSet)
  {
      oStream << location << ".Reason=" << StringUtils::URLEncode(m_reason.c_str()) << "&";
  }
  if(m_recommendedActionsHasBeenSet)
  {
      unsigned recommendedActionsIdx = 1;
      for(auto& item : m_recommendedActions)
      {
        Aws::StringStream recommendedActionsSs;
        recommendedActionsSs << location <<  ".RecommendedActions.member." << recommendedActionsIdx++;
        item.OutputToStream(oStream, recommendedActionsSs.str().c_str());
      }
  }
  if(m_categoryHasBeenSet)
  {
      oStream << location << ".Category=" << StringUtils::URLEncode(m_category.c_str()) << "&";
  }
  if(m_sourceHasBeenSet)
  {
      oStream << location << ".Source=" << StringUtils::URLEncode(m_source.c_str()) << "&";
  }
  if(m_typeDetectionHasBeenSet)
  {
      oStream << location << ".TypeDetection=" << StringUtils::URLEncode(m_typeDetection.c_str()) << "&";
  }
  if(m_typeRecommendationHasBeenSet)
  {
      oStream << location << ".TypeRecommendation=" << StringUtils::URLEncode(m_typeRecommendation.c_str()) << "&";
  }
  if(m_impactHasBeenSet)
  {
      oStream << location << ".Impact=" << StringUtils::URLEncode(m_impact.c_str()) << "&";
  }
  if(m_additionalInfoHasBeenSet)
  {
      oStream << location << ".AdditionalInfo=" << StringUtils::URLEncode(m_additionalInfo.c_str()) << "&";
  }
  if(m_linksHasBeenSet)
  {
      unsigned linksIdx = 1;
      for(auto& item : m_links)
      {
        Aws::StringStream linksSs;
        linksSs << location <<  ".Links.member." << linksIdx++;
        item.OutputToStream(oStream, linksSs.str().c_str());
      }
  }
  if(m_issueDetailsHasBeenSet)
  {
      Aws::String issueDetailsLocationAndMember(location);
      issueDetailsLocationAndMember += ".IssueDetails";
      m_issueDetails.OutputToStream(oStream, issueDetailsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
