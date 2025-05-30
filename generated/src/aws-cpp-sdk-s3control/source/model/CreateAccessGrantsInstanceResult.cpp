﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/CreateAccessGrantsInstanceResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

CreateAccessGrantsInstanceResult::CreateAccessGrantsInstanceResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

CreateAccessGrantsInstanceResult& CreateAccessGrantsInstanceResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode createdAtNode = resultNode.FirstChild("CreatedAt");
    if(!createdAtNode.IsNull())
    {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createdAtHasBeenSet = true;
    }
    XmlNode accessGrantsInstanceIdNode = resultNode.FirstChild("AccessGrantsInstanceId");
    if(!accessGrantsInstanceIdNode.IsNull())
    {
      m_accessGrantsInstanceId = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsInstanceIdNode.GetText());
      m_accessGrantsInstanceIdHasBeenSet = true;
    }
    XmlNode accessGrantsInstanceArnNode = resultNode.FirstChild("AccessGrantsInstanceArn");
    if(!accessGrantsInstanceArnNode.IsNull())
    {
      m_accessGrantsInstanceArn = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsInstanceArnNode.GetText());
      m_accessGrantsInstanceArnHasBeenSet = true;
    }
    XmlNode identityCenterInstanceArnNode = resultNode.FirstChild("IdentityCenterInstanceArn");
    if(!identityCenterInstanceArnNode.IsNull())
    {
      m_identityCenterInstanceArn = Aws::Utils::Xml::DecodeEscapedXmlText(identityCenterInstanceArnNode.GetText());
      m_identityCenterInstanceArnHasBeenSet = true;
    }
    XmlNode identityCenterApplicationArnNode = resultNode.FirstChild("IdentityCenterApplicationArn");
    if(!identityCenterApplicationArnNode.IsNull())
    {
      m_identityCenterApplicationArn = Aws::Utils::Xml::DecodeEscapedXmlText(identityCenterApplicationArnNode.GetText());
      m_identityCenterApplicationArnHasBeenSet = true;
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
