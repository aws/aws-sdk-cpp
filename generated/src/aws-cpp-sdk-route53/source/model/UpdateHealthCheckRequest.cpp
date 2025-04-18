﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/UpdateHealthCheckRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;


Aws::String UpdateHealthCheckRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("UpdateHealthCheckRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_healthCheckVersionHasBeenSet)
  {
   XmlNode healthCheckVersionNode = parentNode.CreateChildElement("HealthCheckVersion");
   ss << m_healthCheckVersion;
   healthCheckVersionNode.SetText(ss.str());
   ss.str("");
  }

  if(m_iPAddressHasBeenSet)
  {
   XmlNode iPAddressNode = parentNode.CreateChildElement("IPAddress");
   iPAddressNode.SetText(m_iPAddress);
  }

  if(m_portHasBeenSet)
  {
   XmlNode portNode = parentNode.CreateChildElement("Port");
   ss << m_port;
   portNode.SetText(ss.str());
   ss.str("");
  }

  if(m_resourcePathHasBeenSet)
  {
   XmlNode resourcePathNode = parentNode.CreateChildElement("ResourcePath");
   resourcePathNode.SetText(m_resourcePath);
  }

  if(m_fullyQualifiedDomainNameHasBeenSet)
  {
   XmlNode fullyQualifiedDomainNameNode = parentNode.CreateChildElement("FullyQualifiedDomainName");
   fullyQualifiedDomainNameNode.SetText(m_fullyQualifiedDomainName);
  }

  if(m_searchStringHasBeenSet)
  {
   XmlNode searchStringNode = parentNode.CreateChildElement("SearchString");
   searchStringNode.SetText(m_searchString);
  }

  if(m_failureThresholdHasBeenSet)
  {
   XmlNode failureThresholdNode = parentNode.CreateChildElement("FailureThreshold");
   ss << m_failureThreshold;
   failureThresholdNode.SetText(ss.str());
   ss.str("");
  }

  if(m_invertedHasBeenSet)
  {
   XmlNode invertedNode = parentNode.CreateChildElement("Inverted");
   ss << std::boolalpha << m_inverted;
   invertedNode.SetText(ss.str());
   ss.str("");
  }

  if(m_disabledHasBeenSet)
  {
   XmlNode disabledNode = parentNode.CreateChildElement("Disabled");
   ss << std::boolalpha << m_disabled;
   disabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_healthThresholdHasBeenSet)
  {
   XmlNode healthThresholdNode = parentNode.CreateChildElement("HealthThreshold");
   ss << m_healthThreshold;
   healthThresholdNode.SetText(ss.str());
   ss.str("");
  }

  if(m_childHealthChecksHasBeenSet)
  {
   XmlNode childHealthChecksParentNode = parentNode.CreateChildElement("ChildHealthChecks");
   for(const auto& item : m_childHealthChecks)
   {
     XmlNode childHealthChecksNode = childHealthChecksParentNode.CreateChildElement("ChildHealthCheck");
     childHealthChecksNode.SetText(item);
   }
  }

  if(m_enableSNIHasBeenSet)
  {
   XmlNode enableSNINode = parentNode.CreateChildElement("EnableSNI");
   ss << std::boolalpha << m_enableSNI;
   enableSNINode.SetText(ss.str());
   ss.str("");
  }

  if(m_regionsHasBeenSet)
  {
   XmlNode regionsParentNode = parentNode.CreateChildElement("Regions");
   for(const auto& item : m_regions)
   {
     XmlNode regionsNode = regionsParentNode.CreateChildElement("Region");
     regionsNode.SetText(HealthCheckRegionMapper::GetNameForHealthCheckRegion(item));
   }
  }

  if(m_alarmIdentifierHasBeenSet)
  {
   XmlNode alarmIdentifierNode = parentNode.CreateChildElement("AlarmIdentifier");
   m_alarmIdentifier.AddToNode(alarmIdentifierNode);
  }

  if(m_insufficientDataHealthStatusHasBeenSet)
  {
   XmlNode insufficientDataHealthStatusNode = parentNode.CreateChildElement("InsufficientDataHealthStatus");
   insufficientDataHealthStatusNode.SetText(InsufficientDataHealthStatusMapper::GetNameForInsufficientDataHealthStatus(m_insufficientDataHealthStatus));
  }

  if(m_resetElementsHasBeenSet)
  {
   XmlNode resetElementsParentNode = parentNode.CreateChildElement("ResetElements");
   for(const auto& item : m_resetElements)
   {
     XmlNode resetElementsNode = resetElementsParentNode.CreateChildElement("ResettableElementName");
     resetElementsNode.SetText(ResettableElementNameMapper::GetNameForResettableElementName(item));
   }
  }

  return payloadDoc.ConvertToString();
}


