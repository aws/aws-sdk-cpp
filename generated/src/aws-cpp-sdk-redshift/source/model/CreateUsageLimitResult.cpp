/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CreateUsageLimitResult.h>
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

CreateUsageLimitResult::CreateUsageLimitResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateUsageLimitResult& CreateUsageLimitResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "CreateUsageLimitResult"))
  {
    resultNode = rootNode.FirstChild("CreateUsageLimitResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode usageLimitIdNode = resultNode.FirstChild("UsageLimitId");
    if(!usageLimitIdNode.IsNull())
    {
      m_usageLimitId = Aws::Utils::Xml::DecodeEscapedXmlText(usageLimitIdNode.GetText());
      m_usageLimitIdHasBeenSet = true;
    }
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode featureTypeNode = resultNode.FirstChild("FeatureType");
    if(!featureTypeNode.IsNull())
    {
      m_featureType = UsageLimitFeatureTypeMapper::GetUsageLimitFeatureTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(featureTypeNode.GetText()).c_str()));
      m_featureTypeHasBeenSet = true;
    }
    XmlNode limitTypeNode = resultNode.FirstChild("LimitType");
    if(!limitTypeNode.IsNull())
    {
      m_limitType = UsageLimitLimitTypeMapper::GetUsageLimitLimitTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(limitTypeNode.GetText()).c_str()));
      m_limitTypeHasBeenSet = true;
    }
    XmlNode amountNode = resultNode.FirstChild("Amount");
    if(!amountNode.IsNull())
    {
      m_amount = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amountNode.GetText()).c_str()).c_str());
      m_amountHasBeenSet = true;
    }
    XmlNode periodNode = resultNode.FirstChild("Period");
    if(!periodNode.IsNull())
    {
      m_period = UsageLimitPeriodMapper::GetUsageLimitPeriodForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(periodNode.GetText()).c_str()));
      m_periodHasBeenSet = true;
    }
    XmlNode breachActionNode = resultNode.FirstChild("BreachAction");
    if(!breachActionNode.IsNull())
    {
      m_breachAction = UsageLimitBreachActionMapper::GetUsageLimitBreachActionForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(breachActionNode.GetText()).c_str()));
      m_breachActionHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    m_responseMetadataHasBeenSet = true;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::CreateUsageLimitResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
