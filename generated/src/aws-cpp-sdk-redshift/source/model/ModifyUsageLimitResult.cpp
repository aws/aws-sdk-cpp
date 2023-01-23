/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyUsageLimitResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyUsageLimitResult::ModifyUsageLimitResult() : 
    m_featureType(UsageLimitFeatureType::NOT_SET),
    m_limitType(UsageLimitLimitType::NOT_SET),
    m_amount(0),
    m_period(UsageLimitPeriod::NOT_SET),
    m_breachAction(UsageLimitBreachAction::NOT_SET)
{
}

ModifyUsageLimitResult::ModifyUsageLimitResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_featureType(UsageLimitFeatureType::NOT_SET),
    m_limitType(UsageLimitLimitType::NOT_SET),
    m_amount(0),
    m_period(UsageLimitPeriod::NOT_SET),
    m_breachAction(UsageLimitBreachAction::NOT_SET)
{
  *this = result;
}

ModifyUsageLimitResult& ModifyUsageLimitResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyUsageLimitResult"))
  {
    resultNode = rootNode.FirstChild("ModifyUsageLimitResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode usageLimitIdNode = resultNode.FirstChild("UsageLimitId");
    if(!usageLimitIdNode.IsNull())
    {
      m_usageLimitId = Aws::Utils::Xml::DecodeEscapedXmlText(usageLimitIdNode.GetText());
    }
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
    }
    XmlNode featureTypeNode = resultNode.FirstChild("FeatureType");
    if(!featureTypeNode.IsNull())
    {
      m_featureType = UsageLimitFeatureTypeMapper::GetUsageLimitFeatureTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(featureTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode limitTypeNode = resultNode.FirstChild("LimitType");
    if(!limitTypeNode.IsNull())
    {
      m_limitType = UsageLimitLimitTypeMapper::GetUsageLimitLimitTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(limitTypeNode.GetText()).c_str()).c_str());
    }
    XmlNode amountNode = resultNode.FirstChild("Amount");
    if(!amountNode.IsNull())
    {
      m_amount = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amountNode.GetText()).c_str()).c_str());
    }
    XmlNode periodNode = resultNode.FirstChild("Period");
    if(!periodNode.IsNull())
    {
      m_period = UsageLimitPeriodMapper::GetUsageLimitPeriodForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(periodNode.GetText()).c_str()).c_str());
    }
    XmlNode breachActionNode = resultNode.FirstChild("BreachAction");
    if(!breachActionNode.IsNull())
    {
      m_breachAction = UsageLimitBreachActionMapper::GetUsageLimitBreachActionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(breachActionNode.GetText()).c_str()).c_str());
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::ModifyUsageLimitResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
