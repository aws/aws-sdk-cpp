/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/ObjectLambdaAccessPointAlias.h>
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

ObjectLambdaAccessPointAlias::ObjectLambdaAccessPointAlias() : 
    m_valueHasBeenSet(false),
    m_status(ObjectLambdaAccessPointAliasStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

ObjectLambdaAccessPointAlias::ObjectLambdaAccessPointAlias(const XmlNode& xmlNode) : 
    m_valueHasBeenSet(false),
    m_status(ObjectLambdaAccessPointAliasStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

ObjectLambdaAccessPointAlias& ObjectLambdaAccessPointAlias::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText());
      m_valueHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ObjectLambdaAccessPointAliasStatusMapper::GetObjectLambdaAccessPointAliasStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void ObjectLambdaAccessPointAlias::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_valueHasBeenSet)
  {
   XmlNode valueNode = parentNode.CreateChildElement("Value");
   valueNode.SetText(m_value);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(ObjectLambdaAccessPointAliasStatusMapper::GetNameForObjectLambdaAccessPointAliasStatus(m_status));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
