/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ListAccessGrantsLocationsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListAccessGrantsLocationsResult::ListAccessGrantsLocationsResult()
{
}

ListAccessGrantsLocationsResult::ListAccessGrantsLocationsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListAccessGrantsLocationsResult& ListAccessGrantsLocationsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
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
    XmlNode accessGrantsLocationsListNode = resultNode.FirstChild("AccessGrantsLocationsList");
    if(!accessGrantsLocationsListNode.IsNull())
    {
      XmlNode accessGrantsLocationsListMember = accessGrantsLocationsListNode.FirstChild("AccessGrantsLocation");
      while(!accessGrantsLocationsListMember.IsNull())
      {
        m_accessGrantsLocationsList.push_back(accessGrantsLocationsListMember);
        accessGrantsLocationsListMember = accessGrantsLocationsListMember.NextNode("AccessGrantsLocation");
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
