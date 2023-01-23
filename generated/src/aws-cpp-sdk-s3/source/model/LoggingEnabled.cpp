﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/LoggingEnabled.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3
{
namespace Model
{

LoggingEnabled::LoggingEnabled() : 
    m_targetBucketHasBeenSet(false),
    m_targetGrantsHasBeenSet(false),
    m_targetPrefixHasBeenSet(false)
{
}

LoggingEnabled::LoggingEnabled(const XmlNode& xmlNode) : 
    m_targetBucketHasBeenSet(false),
    m_targetGrantsHasBeenSet(false),
    m_targetPrefixHasBeenSet(false)
{
  *this = xmlNode;
}

LoggingEnabled& LoggingEnabled::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetBucketNode = resultNode.FirstChild("TargetBucket");
    if(!targetBucketNode.IsNull())
    {
      m_targetBucket = Aws::Utils::Xml::DecodeEscapedXmlText(targetBucketNode.GetText());
      m_targetBucketHasBeenSet = true;
    }
    XmlNode targetGrantsNode = resultNode.FirstChild("TargetGrants");
    if(!targetGrantsNode.IsNull())
    {
      XmlNode targetGrantsMember = targetGrantsNode.FirstChild("Grant");
      while(!targetGrantsMember.IsNull())
      {
        m_targetGrants.push_back(targetGrantsMember);
        targetGrantsMember = targetGrantsMember.NextNode("Grant");
      }

      m_targetGrantsHasBeenSet = true;
    }
    XmlNode targetPrefixNode = resultNode.FirstChild("TargetPrefix");
    if(!targetPrefixNode.IsNull())
    {
      m_targetPrefix = Aws::Utils::Xml::DecodeEscapedXmlText(targetPrefixNode.GetText());
      m_targetPrefixHasBeenSet = true;
    }
  }

  return *this;
}

void LoggingEnabled::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_targetBucketHasBeenSet)
  {
   XmlNode targetBucketNode = parentNode.CreateChildElement("TargetBucket");
   targetBucketNode.SetText(m_targetBucket);
  }

  if(m_targetGrantsHasBeenSet)
  {
   XmlNode targetGrantsParentNode = parentNode.CreateChildElement("TargetGrants");
   for(const auto& item : m_targetGrants)
   {
     XmlNode targetGrantsNode = targetGrantsParentNode.CreateChildElement("Grant");
     item.AddToNode(targetGrantsNode);
   }
  }

  if(m_targetPrefixHasBeenSet)
  {
   XmlNode targetPrefixNode = parentNode.CreateChildElement("TargetPrefix");
   targetPrefixNode.SetText(m_targetPrefix);
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
