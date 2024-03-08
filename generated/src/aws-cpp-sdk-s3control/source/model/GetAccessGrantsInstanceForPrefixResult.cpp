/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetAccessGrantsInstanceForPrefixResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetAccessGrantsInstanceForPrefixResult::GetAccessGrantsInstanceForPrefixResult()
{
}

GetAccessGrantsInstanceForPrefixResult::GetAccessGrantsInstanceForPrefixResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetAccessGrantsInstanceForPrefixResult& GetAccessGrantsInstanceForPrefixResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
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
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

  return *this;
}
