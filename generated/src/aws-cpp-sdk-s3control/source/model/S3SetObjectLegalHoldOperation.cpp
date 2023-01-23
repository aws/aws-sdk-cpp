/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3SetObjectLegalHoldOperation.h>
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

S3SetObjectLegalHoldOperation::S3SetObjectLegalHoldOperation() : 
    m_legalHoldHasBeenSet(false)
{
}

S3SetObjectLegalHoldOperation::S3SetObjectLegalHoldOperation(const XmlNode& xmlNode) : 
    m_legalHoldHasBeenSet(false)
{
  *this = xmlNode;
}

S3SetObjectLegalHoldOperation& S3SetObjectLegalHoldOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode legalHoldNode = resultNode.FirstChild("LegalHold");
    if(!legalHoldNode.IsNull())
    {
      m_legalHold = legalHoldNode;
      m_legalHoldHasBeenSet = true;
    }
  }

  return *this;
}

void S3SetObjectLegalHoldOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_legalHoldHasBeenSet)
  {
   XmlNode legalHoldNode = parentNode.CreateChildElement("LegalHold");
   m_legalHold.AddToNode(legalHoldNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
