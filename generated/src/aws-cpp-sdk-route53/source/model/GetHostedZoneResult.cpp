/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetHostedZoneResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetHostedZoneResult::GetHostedZoneResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetHostedZoneResult& GetHostedZoneResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode hostedZoneNode = resultNode.FirstChild("HostedZone");
    if(!hostedZoneNode.IsNull())
    {
      m_hostedZone = hostedZoneNode;
      m_hostedZoneHasBeenSet = true;
    }
    XmlNode delegationSetNode = resultNode.FirstChild("DelegationSet");
    if(!delegationSetNode.IsNull())
    {
      m_delegationSet = delegationSetNode;
      m_delegationSetHasBeenSet = true;
    }
    XmlNode vPCsNode = resultNode.FirstChild("VPCs");
    if(!vPCsNode.IsNull())
    {
      XmlNode vPCsMember = vPCsNode.FirstChild("VPC");
      m_vPCsHasBeenSet = !vPCsMember.IsNull();
      while(!vPCsMember.IsNull())
      {
        m_vPCs.push_back(vPCsMember);
        vPCsMember = vPCsMember.NextNode("VPC");
      }

      m_vPCsHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
