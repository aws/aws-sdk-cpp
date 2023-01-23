/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/QueryLoggingConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

QueryLoggingConfig::QueryLoggingConfig() : 
    m_idHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_cloudWatchLogsLogGroupArnHasBeenSet(false)
{
}

QueryLoggingConfig::QueryLoggingConfig(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_hostedZoneIdHasBeenSet(false),
    m_cloudWatchLogsLogGroupArnHasBeenSet(false)
{
  *this = xmlNode;
}

QueryLoggingConfig& QueryLoggingConfig::operator =(const XmlNode& xmlNode)
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
    XmlNode hostedZoneIdNode = resultNode.FirstChild("HostedZoneId");
    if(!hostedZoneIdNode.IsNull())
    {
      m_hostedZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(hostedZoneIdNode.GetText());
      m_hostedZoneIdHasBeenSet = true;
    }
    XmlNode cloudWatchLogsLogGroupArnNode = resultNode.FirstChild("CloudWatchLogsLogGroupArn");
    if(!cloudWatchLogsLogGroupArnNode.IsNull())
    {
      m_cloudWatchLogsLogGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(cloudWatchLogsLogGroupArnNode.GetText());
      m_cloudWatchLogsLogGroupArnHasBeenSet = true;
    }
  }

  return *this;
}

void QueryLoggingConfig::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_hostedZoneIdHasBeenSet)
  {
   XmlNode hostedZoneIdNode = parentNode.CreateChildElement("HostedZoneId");
   hostedZoneIdNode.SetText(m_hostedZoneId);
  }

  if(m_cloudWatchLogsLogGroupArnHasBeenSet)
  {
   XmlNode cloudWatchLogsLogGroupArnNode = parentNode.CreateChildElement("CloudWatchLogsLogGroupArn");
   cloudWatchLogsLogGroupArnNode.SetText(m_cloudWatchLogsLogGroupArn);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
