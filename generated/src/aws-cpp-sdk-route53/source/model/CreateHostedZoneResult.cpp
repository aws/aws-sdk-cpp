/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CreateHostedZoneResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CreateHostedZoneResult::CreateHostedZoneResult()
{
}

CreateHostedZoneResult::CreateHostedZoneResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateHostedZoneResult& CreateHostedZoneResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode hostedZoneNode = resultNode.FirstChild("HostedZone");
    if(!hostedZoneNode.IsNull())
    {
      m_hostedZone = hostedZoneNode;
    }
    XmlNode changeInfoNode = resultNode.FirstChild("ChangeInfo");
    if(!changeInfoNode.IsNull())
    {
      m_changeInfo = changeInfoNode;
    }
    XmlNode delegationSetNode = resultNode.FirstChild("DelegationSet");
    if(!delegationSetNode.IsNull())
    {
      m_delegationSet = delegationSetNode;
    }
    XmlNode vPCNode = resultNode.FirstChild("VPC");
    if(!vPCNode.IsNull())
    {
      m_vPC = vPCNode;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& locationIter = headers.find("location");
  if(locationIter != headers.end())
  {
    m_location = locationIter->second;
  }

  return *this;
}
