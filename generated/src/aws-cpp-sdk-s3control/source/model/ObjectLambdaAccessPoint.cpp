/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ObjectLambdaAccessPoint.h>
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

ObjectLambdaAccessPoint::ObjectLambdaAccessPoint() : 
    m_nameHasBeenSet(false),
    m_objectLambdaAccessPointArnHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

ObjectLambdaAccessPoint::ObjectLambdaAccessPoint(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_objectLambdaAccessPointArnHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
  *this = xmlNode;
}

ObjectLambdaAccessPoint& ObjectLambdaAccessPoint::operator =(const XmlNode& xmlNode)
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

  return *this;
}

void ObjectLambdaAccessPoint::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_objectLambdaAccessPointArnHasBeenSet)
  {
   XmlNode objectLambdaAccessPointArnNode = parentNode.CreateChildElement("ObjectLambdaAccessPointArn");
   objectLambdaAccessPointArnNode.SetText(m_objectLambdaAccessPointArn);
  }

  if(m_aliasHasBeenSet)
  {
   XmlNode aliasNode = parentNode.CreateChildElement("Alias");
   m_alias.AddToNode(aliasNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
