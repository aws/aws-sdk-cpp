/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/EstablishedMultiRegionAccessPointPolicy.h>
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

EstablishedMultiRegionAccessPointPolicy::EstablishedMultiRegionAccessPointPolicy() : 
    m_policyHasBeenSet(false)
{
}

EstablishedMultiRegionAccessPointPolicy::EstablishedMultiRegionAccessPointPolicy(const XmlNode& xmlNode) : 
    m_policyHasBeenSet(false)
{
  *this = xmlNode;
}

EstablishedMultiRegionAccessPointPolicy& EstablishedMultiRegionAccessPointPolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode policyNode = resultNode.FirstChild("Policy");
    if(!policyNode.IsNull())
    {
      m_policy = Aws::Utils::Xml::DecodeEscapedXmlText(policyNode.GetText());
      m_policyHasBeenSet = true;
    }
  }

  return *this;
}

void EstablishedMultiRegionAccessPointPolicy::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_policyHasBeenSet)
  {
   XmlNode policyNode = parentNode.CreateChildElement("Policy");
   policyNode.SetText(m_policy);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
