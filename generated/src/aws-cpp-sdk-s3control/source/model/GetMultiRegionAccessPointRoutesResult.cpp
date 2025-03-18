/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetMultiRegionAccessPointRoutesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetMultiRegionAccessPointRoutesResult::GetMultiRegionAccessPointRoutesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetMultiRegionAccessPointRoutesResult& GetMultiRegionAccessPointRoutesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode mrapNode = resultNode.FirstChild("Mrap");
    if(!mrapNode.IsNull())
    {
      m_mrap = Aws::Utils::Xml::DecodeEscapedXmlText(mrapNode.GetText());
      m_mrapHasBeenSet = true;
    }
    XmlNode routesNode = resultNode.FirstChild("Routes");
    if(!routesNode.IsNull())
    {
      XmlNode routesMember = routesNode.FirstChild("Route");
      m_routesHasBeenSet = !routesMember.IsNull();
      while(!routesMember.IsNull())
      {
        m_routes.push_back(routesMember);
        routesMember = routesMember.NextNode("Route");
      }

      m_routesHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  const auto& hostIdIter = headers.find("x-amz-id-2");
  if(hostIdIter != headers.end())
  {
    m_hostId = hostIdIter->second;
    m_hostIdHasBeenSet = true;
  }

  return *this;
}
