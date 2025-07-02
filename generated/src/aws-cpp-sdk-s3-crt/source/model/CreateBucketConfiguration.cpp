/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/CreateBucketConfiguration.h>
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

CreateBucketConfiguration::CreateBucketConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CreateBucketConfiguration& CreateBucketConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode locationConstraintNode = resultNode.FirstChild("LocationConstraint");
    if(!locationConstraintNode.IsNull())
    {
      m_locationConstraint = BucketLocationConstraintMapper::GetBucketLocationConstraintForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(locationConstraintNode.GetText()).c_str()));
      m_locationConstraintHasBeenSet = true;
    }
    XmlNode locationNode = resultNode.FirstChild("Location");
    if(!locationNode.IsNull())
    {
      m_location = locationNode;
      m_locationHasBeenSet = true;
    }
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = bucketNode;
      m_bucketHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void CreateBucketConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_locationConstraintHasBeenSet)
  {
   XmlNode locationConstraintNode = parentNode.CreateChildElement("LocationConstraint");
   locationConstraintNode.SetText(BucketLocationConstraintMapper::GetNameForBucketLocationConstraint(m_locationConstraint));
  }

  if(m_locationHasBeenSet)
  {
   XmlNode locationNode = parentNode.CreateChildElement("Location");
   m_location.AddToNode(locationNode);
  }

  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   m_bucket.AddToNode(bucketNode);
  }

  if(m_tagsHasBeenSet)
  {
   XmlNode tagsParentNode = parentNode.CreateChildElement("Tags");
   for(const auto& item : m_tags)
   {
     XmlNode tagsNode = tagsParentNode.CreateChildElement("Tag");
     item.AddToNode(tagsNode);
   }
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
