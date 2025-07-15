/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/DestinationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Crt
{
namespace Model
{

DestinationResult::DestinationResult(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DestinationResult& DestinationResult::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tableBucketTypeNode = resultNode.FirstChild("TableBucketType");
    if(!tableBucketTypeNode.IsNull())
    {
      m_tableBucketType = S3TablesBucketTypeMapper::GetS3TablesBucketTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tableBucketTypeNode.GetText()).c_str()));
      m_tableBucketTypeHasBeenSet = true;
    }
    XmlNode tableBucketArnNode = resultNode.FirstChild("TableBucketArn");
    if(!tableBucketArnNode.IsNull())
    {
      m_tableBucketArn = Aws::Utils::Xml::DecodeEscapedXmlText(tableBucketArnNode.GetText());
      m_tableBucketArnHasBeenSet = true;
    }
    XmlNode tableNamespaceNode = resultNode.FirstChild("TableNamespace");
    if(!tableNamespaceNode.IsNull())
    {
      m_tableNamespace = Aws::Utils::Xml::DecodeEscapedXmlText(tableNamespaceNode.GetText());
      m_tableNamespaceHasBeenSet = true;
    }
  }

  return *this;
}

void DestinationResult::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_tableBucketTypeHasBeenSet)
  {
   XmlNode tableBucketTypeNode = parentNode.CreateChildElement("TableBucketType");
   tableBucketTypeNode.SetText(S3TablesBucketTypeMapper::GetNameForS3TablesBucketType(m_tableBucketType));
  }

  if(m_tableBucketArnHasBeenSet)
  {
   XmlNode tableBucketArnNode = parentNode.CreateChildElement("TableBucketArn");
   tableBucketArnNode.SetText(m_tableBucketArn);
  }

  if(m_tableNamespaceHasBeenSet)
  {
   XmlNode tableNamespaceNode = parentNode.CreateChildElement("TableNamespace");
   tableNamespaceNode.SetText(m_tableNamespace);
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
