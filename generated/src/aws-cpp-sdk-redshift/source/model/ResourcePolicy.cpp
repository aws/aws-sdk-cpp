/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ResourcePolicy.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ResourcePolicy::ResourcePolicy() : 
    m_resourceArnHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

ResourcePolicy::ResourcePolicy(const XmlNode& xmlNode) : 
    m_resourceArnHasBeenSet(false),
    m_policyHasBeenSet(false)
{
  *this = xmlNode;
}

ResourcePolicy& ResourcePolicy::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceArnNode = resultNode.FirstChild("ResourceArn");
    if(!resourceArnNode.IsNull())
    {
      m_resourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(resourceArnNode.GetText());
      m_resourceArnHasBeenSet = true;
    }
    XmlNode policyNode = resultNode.FirstChild("Policy");
    if(!policyNode.IsNull())
    {
      m_policy = Aws::Utils::Xml::DecodeEscapedXmlText(policyNode.GetText());
      m_policyHasBeenSet = true;
    }
  }

  return *this;
}

void ResourcePolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  if(m_policyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Policy=" << StringUtils::URLEncode(m_policy.c_str()) << "&";
  }

}

void ResourcePolicy::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceArnHasBeenSet)
  {
      oStream << location << ".ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }
  if(m_policyHasBeenSet)
  {
      oStream << location << ".Policy=" << StringUtils::URLEncode(m_policy.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
