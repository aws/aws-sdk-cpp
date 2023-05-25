/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/S3SetObjectRetentionOperation.h>
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

S3SetObjectRetentionOperation::S3SetObjectRetentionOperation() : 
    m_bypassGovernanceRetention(false),
    m_bypassGovernanceRetentionHasBeenSet(false),
    m_retentionHasBeenSet(false)
{
}

S3SetObjectRetentionOperation::S3SetObjectRetentionOperation(const XmlNode& xmlNode) : 
    m_bypassGovernanceRetention(false),
    m_bypassGovernanceRetentionHasBeenSet(false),
    m_retentionHasBeenSet(false)
{
  *this = xmlNode;
}

S3SetObjectRetentionOperation& S3SetObjectRetentionOperation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bypassGovernanceRetentionNode = resultNode.FirstChild("BypassGovernanceRetention");
    if(!bypassGovernanceRetentionNode.IsNull())
    {
      m_bypassGovernanceRetention = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bypassGovernanceRetentionNode.GetText()).c_str()).c_str());
      m_bypassGovernanceRetentionHasBeenSet = true;
    }
    XmlNode retentionNode = resultNode.FirstChild("Retention");
    if(!retentionNode.IsNull())
    {
      m_retention = retentionNode;
      m_retentionHasBeenSet = true;
    }
  }

  return *this;
}

void S3SetObjectRetentionOperation::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_bypassGovernanceRetentionHasBeenSet)
  {
   XmlNode bypassGovernanceRetentionNode = parentNode.CreateChildElement("BypassGovernanceRetention");
   ss << std::boolalpha << m_bypassGovernanceRetention;
   bypassGovernanceRetentionNode.SetText(ss.str());
   ss.str("");
  }

  if(m_retentionHasBeenSet)
  {
   XmlNode retentionNode = parentNode.CreateChildElement("Retention");
   m_retention.AddToNode(retentionNode);
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
