/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetMultiRegionAccessPointRoutesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetMultiRegionAccessPointRoutesResult::GetMultiRegionAccessPointRoutesResult()
{
}

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
    }
    XmlNode routesNode = resultNode.FirstChild("Routes");
    if(!routesNode.IsNull())
    {
      XmlNode routesMember = routesNode.FirstChild("Route");
      while(!routesMember.IsNull())
      {
        m_routes.push_back(routesMember);
        routesMember = routesMember.NextNode("Route");
      }

    }
  }

  return *this;
}
