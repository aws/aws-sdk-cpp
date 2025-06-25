/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetAccessPointResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetAccessPointResult::GetAccessPointResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetAccessPointResult& GetAccessPointResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode networkOriginNode = resultNode.FirstChild("NetworkOrigin");
    if(!networkOriginNode.IsNull())
    {
      m_networkOrigin = NetworkOriginMapper::GetNetworkOriginForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkOriginNode.GetText()).c_str()));
      m_networkOriginHasBeenSet = true;
    }
    XmlNode vpcConfigurationNode = resultNode.FirstChild("VpcConfiguration");
    if(!vpcConfigurationNode.IsNull())
    {
      m_vpcConfiguration = vpcConfigurationNode;
      m_vpcConfigurationHasBeenSet = true;
    }
    XmlNode publicAccessBlockConfigurationNode = resultNode.FirstChild("PublicAccessBlockConfiguration");
    if(!publicAccessBlockConfigurationNode.IsNull())
    {
      m_publicAccessBlockConfiguration = publicAccessBlockConfigurationNode;
      m_publicAccessBlockConfigurationHasBeenSet = true;
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationDateHasBeenSet = true;
    }
    XmlNode aliasNode = resultNode.FirstChild("Alias");
    if(!aliasNode.IsNull())
    {
      m_alias = Aws::Utils::Xml::DecodeEscapedXmlText(aliasNode.GetText());
      m_aliasHasBeenSet = true;
    }
    XmlNode accessPointArnNode = resultNode.FirstChild("AccessPointArn");
    if(!accessPointArnNode.IsNull())
    {
      m_accessPointArn = Aws::Utils::Xml::DecodeEscapedXmlText(accessPointArnNode.GetText());
      m_accessPointArnHasBeenSet = true;
    }
    XmlNode endpointsNode = resultNode.FirstChild("Endpoints");

    if(!endpointsNode.IsNull())
    {
      XmlNode endpointsEntry = endpointsNode.FirstChild("entry");
      m_endpointsHasBeenSet = !endpointsEntry.IsNull();
      while(!endpointsEntry.IsNull())
      {
        XmlNode keyNode = endpointsEntry.FirstChild("key");
        XmlNode valueNode = endpointsEntry.FirstChild("value");
        m_endpoints[keyNode.GetText()] =
            valueNode.GetText();
        endpointsEntry = endpointsEntry.NextNode("entry");
      }

      m_endpointsHasBeenSet = true;
    }
    XmlNode bucketAccountIdNode = resultNode.FirstChild("BucketAccountId");
    if(!bucketAccountIdNode.IsNull())
    {
      m_bucketAccountId = Aws::Utils::Xml::DecodeEscapedXmlText(bucketAccountIdNode.GetText());
      m_bucketAccountIdHasBeenSet = true;
    }
    XmlNode dataSourceIdNode = resultNode.FirstChild("DataSourceId");
    if(!dataSourceIdNode.IsNull())
    {
      m_dataSourceId = Aws::Utils::Xml::DecodeEscapedXmlText(dataSourceIdNode.GetText());
      m_dataSourceIdHasBeenSet = true;
    }
    XmlNode dataSourceTypeNode = resultNode.FirstChild("DataSourceType");
    if(!dataSourceTypeNode.IsNull())
    {
      m_dataSourceType = Aws::Utils::Xml::DecodeEscapedXmlText(dataSourceTypeNode.GetText());
      m_dataSourceTypeHasBeenSet = true;
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
