﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateAccessPointForObjectLambdaResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CreateAccessPointForObjectLambdaResult::CreateAccessPointForObjectLambdaResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateAccessPointForObjectLambdaResult& CreateAccessPointForObjectLambdaResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode objectLambdaAccessPointArnNode = resultNode.FirstChild("ObjectLambdaAccessPointArn");
    if(!objectLambdaAccessPointArnNode.IsNull())
    {
      m_objectLambdaAccessPointArn = Aws::Utils::Xml::DecodeEscapedXmlText(objectLambdaAccessPointArnNode.GetText());
      m_objectLambdaAccessPointArnHasBeenSet = true;
    }
    XmlNode aliasNode = resultNode.FirstChild("Alias");
    if(!aliasNode.IsNull())
    {
      m_alias = aliasNode;
      m_aliasHasBeenSet = true;
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
