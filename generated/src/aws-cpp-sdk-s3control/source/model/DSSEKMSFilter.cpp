/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/DSSEKMSFilter.h>
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

DSSEKMSFilter::DSSEKMSFilter(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DSSEKMSFilter& DSSEKMSFilter::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode kmsKeyArnNode = resultNode.FirstChild("KmsKeyArn");
    if(!kmsKeyArnNode.IsNull())
    {
      m_kmsKeyArn = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyArnNode.GetText());
      m_kmsKeyArnHasBeenSet = true;
    }
  }

  return *this;
}

void DSSEKMSFilter::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_kmsKeyArnHasBeenSet)
  {
   XmlNode kmsKeyArnNode = parentNode.CreateChildElement("KmsKeyArn");
   kmsKeyArnNode.SetText(m_kmsKeyArn);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
