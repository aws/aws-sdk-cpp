﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/Include.h>
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

Include::Include(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Include& Include::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bucketsNode = resultNode.FirstChild("Buckets");
    if(!bucketsNode.IsNull())
    {
      XmlNode bucketsMember = bucketsNode.FirstChild("Arn");
      m_bucketsHasBeenSet = !bucketsMember.IsNull();
      while(!bucketsMember.IsNull())
      {
        m_buckets.push_back(bucketsMember.GetText());
        bucketsMember = bucketsMember.NextNode("Arn");
      }

      m_bucketsHasBeenSet = true;
    }
    XmlNode regionsNode = resultNode.FirstChild("Regions");
    if(!regionsNode.IsNull())
    {
      XmlNode regionsMember = regionsNode.FirstChild("Region");
      m_regionsHasBeenSet = !regionsMember.IsNull();
      while(!regionsMember.IsNull())
      {
        m_regions.push_back(regionsMember.GetText());
        regionsMember = regionsMember.NextNode("Region");
      }

      m_regionsHasBeenSet = true;
    }
  }

  return *this;
}

void Include::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_bucketsHasBeenSet)
  {
   XmlNode bucketsParentNode = parentNode.CreateChildElement("Buckets");
   for(const auto& item : m_buckets)
   {
     XmlNode bucketsNode = bucketsParentNode.CreateChildElement("Arn");
     bucketsNode.SetText(item);
   }
  }

  if(m_regionsHasBeenSet)
  {
   XmlNode regionsParentNode = parentNode.CreateChildElement("Regions");
   for(const auto& item : m_regions)
   {
     XmlNode regionsNode = regionsParentNode.CreateChildElement("Region");
     regionsNode.SetText(item);
   }
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
