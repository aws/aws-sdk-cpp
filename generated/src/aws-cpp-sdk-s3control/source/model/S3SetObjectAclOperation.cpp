/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3SetObjectAclOperation.h>
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

S3SetObjectAclOperation::S3SetObjectAclOperation() : 
    m_accessControlPolicyHasBeenSet(false)
{
}

S3SetObjectAclOperation::S3SetObjectAclOperation(const XmlNode& xmlNode) : 
    m_accessControlPolicyHasBeenSet(false)
{
  *this = xmlNode;
}

S3SetObjectAclOperation& S3SetObjectAclOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accessControlPolicyNode = resultNode.FirstChild("AccessControlPolicy");
    if(!accessControlPolicyNode.IsNull())
    {
      m_accessControlPolicy = accessControlPolicyNode;
      m_accessControlPolicyHasBeenSet = true;
    }
  }

  return *this;
}

void S3SetObjectAclOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_accessControlPolicyHasBeenSet)
  {
   XmlNode accessControlPolicyNode = parentNode.CreateChildElement("AccessControlPolicy");
   m_accessControlPolicy.AddToNode(accessControlPolicyNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
