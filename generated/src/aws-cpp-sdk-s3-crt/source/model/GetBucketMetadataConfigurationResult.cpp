/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/GetBucketMetadataConfigurationResult.h>
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

GetBucketMetadataConfigurationResult::GetBucketMetadataConfigurationResult(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

GetBucketMetadataConfigurationResult& GetBucketMetadataConfigurationResult::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode metadataConfigurationResultNode = resultNode.FirstChild("MetadataConfigurationResult");
    if(!metadataConfigurationResultNode.IsNull())
    {
      m_metadataConfigurationResult = metadataConfigurationResultNode;
      m_metadataConfigurationResultHasBeenSet = true;
    }
  }

  return *this;
}

void GetBucketMetadataConfigurationResult::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_metadataConfigurationResultHasBeenSet)
  {
   XmlNode metadataConfigurationResultNode = parentNode.CreateChildElement("MetadataConfigurationResult");
   m_metadataConfigurationResult.AddToNode(metadataConfigurationResultNode);
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
