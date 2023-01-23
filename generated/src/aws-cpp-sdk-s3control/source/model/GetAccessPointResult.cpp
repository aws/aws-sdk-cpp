/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/GetAccessPointResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetAccessPointResult::GetAccessPointResult() : 
    m_networkOrigin(NetworkOrigin::NOT_SET)
{
}

GetAccessPointResult::GetAccessPointResult(const Aws::AmazonWebServiceResult<XmlDocument>& result) : 
    m_networkOrigin(NetworkOrigin::NOT_SET)
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
    }
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
    }
    XmlNode networkOriginNode = resultNode.FirstChild("NetworkOrigin");
    if(!networkOriginNode.IsNull())
    {
      m_networkOrigin = NetworkOriginMapper::GetNetworkOriginForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkOriginNode.GetText()).c_str()).c_str());
    }
    XmlNode vpcConfigurationNode = resultNode.FirstChild("VpcConfiguration");
    if(!vpcConfigurationNode.IsNull())
    {
      m_vpcConfiguration = vpcConfigurationNode;
    }
    XmlNode publicAccessBlockConfigurationNode = resultNode.FirstChild("PublicAccessBlockConfiguration");
    if(!publicAccessBlockConfigurationNode.IsNull())
    {
      m_publicAccessBlockConfiguration = publicAccessBlockConfigurationNode;
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(!creationDateNode.IsNull())
    {
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode aliasNode = resultNode.FirstChild("Alias");
    if(!aliasNode.IsNull())
    {
      m_alias = Aws::Utils::Xml::DecodeEscapedXmlText(aliasNode.GetText());
    }
    XmlNode accessPointArnNode = resultNode.FirstChild("AccessPointArn");
    if(!accessPointArnNode.IsNull())
    {
      m_accessPointArn = Aws::Utils::Xml::DecodeEscapedXmlText(accessPointArnNode.GetText());
    }
    XmlNode endpointsNode = resultNode.FirstChild("Endpoints");

    if(!endpointsNode.IsNull())
    {
      XmlNode endpointsEntry = endpointsNode.FirstChild("entry");
      while(!endpointsEntry.IsNull())
      {
        XmlNode keyNode = endpointsEntry.FirstChild("key");
        XmlNode valueNode = endpointsEntry.FirstChild("value");
        m_endpoints[keyNode.GetText()] =
            valueNode.GetText();
        endpointsEntry = endpointsEntry.NextNode("entry");
      }

    }
    XmlNode bucketAccountIdNode = resultNode.FirstChild("BucketAccountId");
    if(!bucketAccountIdNode.IsNull())
    {
      m_bucketAccountId = Aws::Utils::Xml::DecodeEscapedXmlText(bucketAccountIdNode.GetText());
    }
  }

  return *this;
}
