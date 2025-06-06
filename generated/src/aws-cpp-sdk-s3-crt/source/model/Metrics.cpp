﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/Metrics.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Crt
{
namespace Model
{

Metrics::Metrics(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Metrics& Metrics::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = MetricsStatusMapper::GetMetricsStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode eventThresholdNode = resultNode.FirstChild("EventThreshold");
    if(!eventThresholdNode.IsNull())
    {
      m_eventThreshold = eventThresholdNode;
      m_eventThresholdHasBeenSet = true;
    }
  }

  return *this;
}

void Metrics::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(MetricsStatusMapper::GetNameForMetricsStatus(m_status));
  }

  if(m_eventThresholdHasBeenSet)
  {
   XmlNode eventThresholdNode = parentNode.CreateChildElement("EventThreshold");
   m_eventThreshold.AddToNode(eventThresholdNode);
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
