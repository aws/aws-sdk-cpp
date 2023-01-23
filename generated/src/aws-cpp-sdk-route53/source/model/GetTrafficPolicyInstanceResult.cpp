/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetTrafficPolicyInstanceResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetTrafficPolicyInstanceResult::GetTrafficPolicyInstanceResult()
{
}

GetTrafficPolicyInstanceResult::GetTrafficPolicyInstanceResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetTrafficPolicyInstanceResult& GetTrafficPolicyInstanceResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode trafficPolicyInstanceNode = resultNode.FirstChild("TrafficPolicyInstance");
    if(!trafficPolicyInstanceNode.IsNull())
    {
      m_trafficPolicyInstance = trafficPolicyInstanceNode;
    }
  }

  return *this;
}
