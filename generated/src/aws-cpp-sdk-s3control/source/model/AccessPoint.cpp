/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/AccessPoint.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Control
{
namespace Model
{

AccessPoint::AccessPoint() : 
    m_nameHasBeenSet(false),
    m_networkOrigin(NetworkOrigin::NOT_SET),
    m_networkOriginHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_accessPointArnHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_bucketAccountIdHasBeenSet(false)
{
}

AccessPoint::AccessPoint(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_networkOrigin(NetworkOrigin::NOT_SET),
    m_networkOriginHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_accessPointArnHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_bucketAccountIdHasBeenSet(false)
{
  *this = xmlNode;
}

AccessPoint& AccessPoint::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode networkOriginNode = resultNode.FirstChild("NetworkOrigin");
    if(!networkOriginNode.IsNull())
    {
      m_networkOrigin = NetworkOriginMapper::GetNetworkOriginForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkOriginNode.GetText()).c_str()).c_str());
      m_networkOriginHasBeenSet = true;
    }
    XmlNode vpcConfigurationNode = resultNode.FirstChild("VpcConfiguration");
    if(!vpcConfigurationNode.IsNull())
    {
      m_vpcConfiguration = vpcConfigurationNode;
      m_vpcConfigurationHasBeenSet = true;
    }
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode accessPointArnNode = resultNode.FirstChild("AccessPointArn");
    if(!accessPointArnNode.IsNull())
    {
      m_accessPointArn = Aws::Utils::Xml::DecodeEscapedXmlText(accessPointArnNode.GetText());
      m_accessPointArnHasBeenSet = true;
    }
    XmlNode aliasNode = resultNode.FirstChild("Alias");
    if(!aliasNode.IsNull())
    {
      m_alias = Aws::Utils::Xml::DecodeEscapedXmlText(aliasNode.GetText());
      m_aliasHasBeenSet = true;
    }
    XmlNode bucketAccountIdNode = resultNode.FirstChild("BucketAccountId");
    if(!bucketAccountIdNode.IsNull())
    {
      m_bucketAccountId = Aws::Utils::Xml::DecodeEscapedXmlText(bucketAccountIdNode.GetText());
      m_bucketAccountIdHasBeenSet = true;
    }
  }

  return *this;
}

void AccessPoint::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_networkOriginHasBeenSet)
  {
   XmlNode networkOriginNode = parentNode.CreateChildElement("NetworkOrigin");
   networkOriginNode.SetText(NetworkOriginMapper::GetNameForNetworkOrigin(m_networkOrigin));
  }

  if(m_vpcConfigurationHasBeenSet)
  {
   XmlNode vpcConfigurationNode = parentNode.CreateChildElement("VpcConfiguration");
   m_vpcConfiguration.AddToNode(vpcConfigurationNode);
  }

  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   bucketNode.SetText(m_bucket);
  }

  if(m_accessPointArnHasBeenSet)
  {
   XmlNode accessPointArnNode = parentNode.CreateChildElement("AccessPointArn");
   accessPointArnNode.SetText(m_accessPointArn);
  }

  if(m_aliasHasBeenSet)
  {
   XmlNode aliasNode = parentNode.CreateChildElement("Alias");
   aliasNode.SetText(m_alias);
  }

  if(m_bucketAccountIdHasBeenSet)
  {
   XmlNode bucketAccountIdNode = parentNode.CreateChildElement("BucketAccountId");
   bucketAccountIdNode.SetText(m_bucketAccountId);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
