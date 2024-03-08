/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListAccessGrantsInstancesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListAccessGrantsInstancesResult::ListAccessGrantsInstancesResult()
{
}

ListAccessGrantsInstancesResult::ListAccessGrantsInstancesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListAccessGrantsInstancesResult& ListAccessGrantsInstancesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
    }
    XmlNode accessGrantsInstancesListNode = resultNode.FirstChild("AccessGrantsInstancesList");
    if(!accessGrantsInstancesListNode.IsNull())
    {
      XmlNode accessGrantsInstancesListMember = accessGrantsInstancesListNode.FirstChild("AccessGrantsInstance");
      while(!accessGrantsInstancesListMember.IsNull())
      {
        m_accessGrantsInstancesList.push_back(accessGrantsInstancesListMember);
        accessGrantsInstancesListMember = accessGrantsInstancesListMember.NextNode("AccessGrantsInstance");
      }

    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  return *this;
}
