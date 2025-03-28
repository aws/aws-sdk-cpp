﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListQueryLoggingConfigsResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListQueryLoggingConfigsResult::ListQueryLoggingConfigsResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListQueryLoggingConfigsResult& ListQueryLoggingConfigsResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode queryLoggingConfigsNode = resultNode.FirstChild("QueryLoggingConfigs");
    if(!queryLoggingConfigsNode.IsNull())
    {
      XmlNode queryLoggingConfigsMember = queryLoggingConfigsNode.FirstChild("QueryLoggingConfig");
      m_queryLoggingConfigsHasBeenSet = !queryLoggingConfigsMember.IsNull();
      while(!queryLoggingConfigsMember.IsNull())
      {
        m_queryLoggingConfigs.push_back(queryLoggingConfigsMember);
        queryLoggingConfigsMember = queryLoggingConfigsMember.NextNode("QueryLoggingConfig");
      }

      m_queryLoggingConfigsHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("NextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
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
