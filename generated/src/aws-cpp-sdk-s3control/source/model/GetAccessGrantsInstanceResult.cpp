/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetAccessGrantsInstanceResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetAccessGrantsInstanceResult::GetAccessGrantsInstanceResult()
{
}

GetAccessGrantsInstanceResult::GetAccessGrantsInstanceResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetAccessGrantsInstanceResult& GetAccessGrantsInstanceResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode accessGrantsInstanceArnNode = resultNode.FirstChild("AccessGrantsInstanceArn");
    if(!accessGrantsInstanceArnNode.IsNull())
    {
      m_accessGrantsInstanceArn = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsInstanceArnNode.GetText());
    }
    XmlNode accessGrantsInstanceIdNode = resultNode.FirstChild("AccessGrantsInstanceId");
    if(!accessGrantsInstanceIdNode.IsNull())
    {
      m_accessGrantsInstanceId = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsInstanceIdNode.GetText());
    }
    XmlNode identityCenterArnNode = resultNode.FirstChild("IdentityCenterArn");
    if(!identityCenterArnNode.IsNull())
    {
      m_identityCenterArn = Aws::Utils::Xml::DecodeEscapedXmlText(identityCenterArnNode.GetText());
    }
    XmlNode createdAtNode = resultNode.FirstChild("CreatedAt");
    if(!createdAtNode.IsNull())
    {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
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
