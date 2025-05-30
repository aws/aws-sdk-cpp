﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListTagsForResourcesResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListTagsForResourcesResult::ListTagsForResourcesResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListTagsForResourcesResult& ListTagsForResourcesResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode resourceTagSetsNode = resultNode.FirstChild("ResourceTagSets");
    if(!resourceTagSetsNode.IsNull())
    {
      XmlNode resourceTagSetsMember = resourceTagSetsNode.FirstChild("ResourceTagSet");
      m_resourceTagSetsHasBeenSet = !resourceTagSetsMember.IsNull();
      while(!resourceTagSetsMember.IsNull())
      {
        m_resourceTagSets.push_back(resourceTagSetsMember);
        resourceTagSetsMember = resourceTagSetsMember.NextNode("ResourceTagSet");
      }

      m_resourceTagSetsHasBeenSet = true;
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
