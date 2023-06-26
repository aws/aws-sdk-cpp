/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/HealthCheck.h>
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

HealthCheck::HealthCheck() : 
    m_idHasBeenSet(false),
    m_callerReferenceHasBeenSet(false),
    m_linkedServiceHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false),
    m_healthCheckVersion(0),
    m_healthCheckVersionHasBeenSet(false),
    m_cloudWatchAlarmConfigurationHasBeenSet(false)
{
}

HealthCheck::HealthCheck(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_callerReferenceHasBeenSet(false),
    m_linkedServiceHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false),
    m_healthCheckVersion(0),
    m_healthCheckVersionHasBeenSet(false),
    m_cloudWatchAlarmConfigurationHasBeenSet(false)
{
  *this = xmlNode;
}

HealthCheck& HealthCheck::operator =(const XmlNode& xmlNode)
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
    XmlNode callerReferenceNode = resultNode.FirstChild("CallerReference");
    if(!callerReferenceNode.IsNull())
    {
      m_callerReference = Aws::Utils::Xml::DecodeEscapedXmlText(callerReferenceNode.GetText());
      m_callerReferenceHasBeenSet = true;
    }
    XmlNode linkedServiceNode = resultNode.FirstChild("LinkedService");
    if(!linkedServiceNode.IsNull())
    {
      m_linkedService = linkedServiceNode;
      m_linkedServiceHasBeenSet = true;
    }
    XmlNode healthCheckConfigNode = resultNode.FirstChild("HealthCheckConfig");
    if(!healthCheckConfigNode.IsNull())
    {
      m_healthCheckConfig = healthCheckConfigNode;
      m_healthCheckConfigHasBeenSet = true;
    }
    XmlNode healthCheckVersionNode = resultNode.FirstChild("HealthCheckVersion");
    if(!healthCheckVersionNode.IsNull())
    {
      m_healthCheckVersion = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(healthCheckVersionNode.GetText()).c_str()).c_str());
      m_healthCheckVersionHasBeenSet = true;
    }
    XmlNode cloudWatchAlarmConfigurationNode = resultNode.FirstChild("CloudWatchAlarmConfiguration");
    if(!cloudWatchAlarmConfigurationNode.IsNull())
    {
      m_cloudWatchAlarmConfiguration = cloudWatchAlarmConfigurationNode;
      m_cloudWatchAlarmConfigurationHasBeenSet = true;
    }
  }

  return *this;
}

void HealthCheck::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

  if(m_linkedServiceHasBeenSet)
  {
   XmlNode linkedServiceNode = parentNode.CreateChildElement("LinkedService");
   m_linkedService.AddToNode(linkedServiceNode);
  }

  if(m_healthCheckConfigHasBeenSet)
  {
   XmlNode healthCheckConfigNode = parentNode.CreateChildElement("HealthCheckConfig");
   m_healthCheckConfig.AddToNode(healthCheckConfigNode);
  }

  if(m_healthCheckVersionHasBeenSet)
  {
   XmlNode healthCheckVersionNode = parentNode.CreateChildElement("HealthCheckVersion");
   ss << m_healthCheckVersion;
   healthCheckVersionNode.SetText(ss.str());
   ss.str("");
  }

  if(m_cloudWatchAlarmConfigurationHasBeenSet)
  {
   XmlNode cloudWatchAlarmConfigurationNode = parentNode.CreateChildElement("CloudWatchAlarmConfiguration");
   m_cloudWatchAlarmConfiguration.AddToNode(cloudWatchAlarmConfigurationNode);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
