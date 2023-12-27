/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/UpdateAccessGrantsLocationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

UpdateAccessGrantsLocationResult::UpdateAccessGrantsLocationResult()
{
}

UpdateAccessGrantsLocationResult::UpdateAccessGrantsLocationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

UpdateAccessGrantsLocationResult& UpdateAccessGrantsLocationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode createdAtNode = resultNode.FirstChild("CreatedAt");
    if(!createdAtNode.IsNull())
    {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode accessGrantsLocationIdNode = resultNode.FirstChild("AccessGrantsLocationId");
    if(!accessGrantsLocationIdNode.IsNull())
    {
      m_accessGrantsLocationId = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsLocationIdNode.GetText());
    }
    XmlNode accessGrantsLocationArnNode = resultNode.FirstChild("AccessGrantsLocationArn");
    if(!accessGrantsLocationArnNode.IsNull())
    {
      m_accessGrantsLocationArn = Aws::Utils::Xml::DecodeEscapedXmlText(accessGrantsLocationArnNode.GetText());
    }
    XmlNode locationScopeNode = resultNode.FirstChild("LocationScope");
    if(!locationScopeNode.IsNull())
    {
      m_locationScope = Aws::Utils::Xml::DecodeEscapedXmlText(locationScopeNode.GetText());
    }
    XmlNode iAMRoleArnNode = resultNode.FirstChild("IAMRoleArn");
    if(!iAMRoleArnNode.IsNull())
    {
      m_iAMRoleArn = Aws::Utils::Xml::DecodeEscapedXmlText(iAMRoleArnNode.GetText());
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
