/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/Recommendation.h>
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

Recommendation::Recommendation() : 
    m_idHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_namespaceArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_recommendationTypeHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_observationHasBeenSet(false),
    m_impactRanking(ImpactRankingType::NOT_SET),
    m_impactRankingHasBeenSet(false),
    m_recommendationTextHasBeenSet(false),
    m_recommendedActionsHasBeenSet(false),
    m_referenceLinksHasBeenSet(false)
{
}

Recommendation::Recommendation(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_namespaceArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_recommendationTypeHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_observationHasBeenSet(false),
    m_impactRanking(ImpactRankingType::NOT_SET),
    m_impactRankingHasBeenSet(false),
    m_recommendationTextHasBeenSet(false),
    m_recommendedActionsHasBeenSet(false),
    m_referenceLinksHasBeenSet(false)
{
  *this = xmlNode;
}

Recommendation& Recommendation::operator =(const XmlNode& xmlNode)
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
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode namespaceArnNode = resultNode.FirstChild("NamespaceArn");
    if(!namespaceArnNode.IsNull())
    {
      m_namespaceArn = Aws::Utils::Xml::DecodeEscapedXmlText(namespaceArnNode.GetText());
      m_namespaceArnHasBeenSet = true;
    }
    XmlNode createdAtNode = resultNode.FirstChild("CreatedAt");
    if(!createdAtNode.IsNull())
    {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdAtHasBeenSet = true;
    }
    XmlNode recommendationTypeNode = resultNode.FirstChild("RecommendationType");
    if(!recommendationTypeNode.IsNull())
    {
      m_recommendationType = Aws::Utils::Xml::DecodeEscapedXmlText(recommendationTypeNode.GetText());
      m_recommendationTypeHasBeenSet = true;
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
    XmlNode observationNode = resultNode.FirstChild("Observation");
    if(!observationNode.IsNull())
    {
      m_observation = Aws::Utils::Xml::DecodeEscapedXmlText(observationNode.GetText());
      m_observationHasBeenSet = true;
    }
    XmlNode impactRankingNode = resultNode.FirstChild("ImpactRanking");
    if(!impactRankingNode.IsNull())
    {
      m_impactRanking = ImpactRankingTypeMapper::GetImpactRankingTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(impactRankingNode.GetText()).c_str()).c_str());
      m_impactRankingHasBeenSet = true;
    }
    XmlNode recommendationTextNode = resultNode.FirstChild("RecommendationText");
    if(!recommendationTextNode.IsNull())
    {
      m_recommendationText = Aws::Utils::Xml::DecodeEscapedXmlText(recommendationTextNode.GetText());
      m_recommendationTextHasBeenSet = true;
    }
    XmlNode recommendedActionsNode = resultNode.FirstChild("RecommendedActions");
    if(!recommendedActionsNode.IsNull())
    {
      XmlNode recommendedActionsMember = recommendedActionsNode.FirstChild("RecommendedAction");
      while(!recommendedActionsMember.IsNull())
      {
        m_recommendedActions.push_back(recommendedActionsMember);
        recommendedActionsMember = recommendedActionsMember.NextNode("RecommendedAction");
      }

      m_recommendedActionsHasBeenSet = true;
    }
    XmlNode referenceLinksNode = resultNode.FirstChild("ReferenceLinks");
    if(!referenceLinksNode.IsNull())
    {
      XmlNode referenceLinksMember = referenceLinksNode.FirstChild("ReferenceLink");
      while(!referenceLinksMember.IsNull())
      {
        m_referenceLinks.push_back(referenceLinksMember);
        referenceLinksMember = referenceLinksMember.NextNode("ReferenceLink");
      }

      m_referenceLinksHasBeenSet = true;
    }
  }

  return *this;
}

void Recommendation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << index << locationValue << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_namespaceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".NamespaceArn=" << StringUtils::URLEncode(m_namespaceArn.c_str()) << "&";
  }

  if(m_createdAtHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedAt=" << StringUtils::URLEncode(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_recommendationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RecommendationType=" << StringUtils::URLEncode(m_recommendationType.c_str()) << "&";
  }

  if(m_titleHasBeenSet)
  {
      oStream << location << index << locationValue << ".Title=" << StringUtils::URLEncode(m_title.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_observationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Observation=" << StringUtils::URLEncode(m_observation.c_str()) << "&";
  }

  if(m_impactRankingHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImpactRanking=" << ImpactRankingTypeMapper::GetNameForImpactRankingType(m_impactRanking) << "&";
  }

  if(m_recommendationTextHasBeenSet)
  {
      oStream << location << index << locationValue << ".RecommendationText=" << StringUtils::URLEncode(m_recommendationText.c_str()) << "&";
  }

  if(m_recommendedActionsHasBeenSet)
  {
      unsigned recommendedActionsIdx = 1;
      for(auto& item : m_recommendedActions)
      {
        Aws::StringStream recommendedActionsSs;
        recommendedActionsSs << location << index << locationValue << ".RecommendedAction." << recommendedActionsIdx++;
        item.OutputToStream(oStream, recommendedActionsSs.str().c_str());
      }
  }

  if(m_referenceLinksHasBeenSet)
  {
      unsigned referenceLinksIdx = 1;
      for(auto& item : m_referenceLinks)
      {
        Aws::StringStream referenceLinksSs;
        referenceLinksSs << location << index << locationValue << ".ReferenceLink." << referenceLinksIdx++;
        item.OutputToStream(oStream, referenceLinksSs.str().c_str());
      }
  }

}

void Recommendation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_idHasBeenSet)
  {
      oStream << location << ".Id=" << StringUtils::URLEncode(m_id.c_str()) << "&";
  }
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }
  if(m_namespaceArnHasBeenSet)
  {
      oStream << location << ".NamespaceArn=" << StringUtils::URLEncode(m_namespaceArn.c_str()) << "&";
  }
  if(m_createdAtHasBeenSet)
  {
      oStream << location << ".CreatedAt=" << StringUtils::URLEncode(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_recommendationTypeHasBeenSet)
  {
      oStream << location << ".RecommendationType=" << StringUtils::URLEncode(m_recommendationType.c_str()) << "&";
  }
  if(m_titleHasBeenSet)
  {
      oStream << location << ".Title=" << StringUtils::URLEncode(m_title.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_observationHasBeenSet)
  {
      oStream << location << ".Observation=" << StringUtils::URLEncode(m_observation.c_str()) << "&";
  }
  if(m_impactRankingHasBeenSet)
  {
      oStream << location << ".ImpactRanking=" << ImpactRankingTypeMapper::GetNameForImpactRankingType(m_impactRanking) << "&";
  }
  if(m_recommendationTextHasBeenSet)
  {
      oStream << location << ".RecommendationText=" << StringUtils::URLEncode(m_recommendationText.c_str()) << "&";
  }
  if(m_recommendedActionsHasBeenSet)
  {
      unsigned recommendedActionsIdx = 1;
      for(auto& item : m_recommendedActions)
      {
        Aws::StringStream recommendedActionsSs;
        recommendedActionsSs << location <<  ".RecommendedAction." << recommendedActionsIdx++;
        item.OutputToStream(oStream, recommendedActionsSs.str().c_str());
      }
  }
  if(m_referenceLinksHasBeenSet)
  {
      unsigned referenceLinksIdx = 1;
      for(auto& item : m_referenceLinks)
      {
        Aws::StringStream referenceLinksSs;
        referenceLinksSs << location <<  ".ReferenceLink." << referenceLinksIdx++;
        item.OutputToStream(oStream, referenceLinksSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
