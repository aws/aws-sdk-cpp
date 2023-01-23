/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetHealthCheckCountResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetHealthCheckCountResult::GetHealthCheckCountResult() : 
    m_healthCheckCount(0)
{
}

GetHealthCheckCountResult::GetHealthCheckCountResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_healthCheckCount(0)
{
  *this = result;
}

GetHealthCheckCountResult& GetHealthCheckCountResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode healthCheckCountNode = resultNode.FirstChild("HealthCheckCount");
    if(!healthCheckCountNode.IsNull())
    {
      m_healthCheckCount = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(healthCheckCountNode.GetText()).c_str()).c_str());
    }
  }

  return *this;
}
