/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/SSEKMSFilter.h>
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

SSEKMSFilter::SSEKMSFilter(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

SSEKMSFilter& SSEKMSFilter::operator =(const XmlNode& xmlNode)
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
    XmlNode bucketKeyEnabledNode = resultNode.FirstChild("BucketKeyEnabled");
    if(!bucketKeyEnabledNode.IsNull())
    {
      m_bucketKeyEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bucketKeyEnabledNode.GetText()).c_str()).c_str());
      m_bucketKeyEnabledHasBeenSet = true;
    }
  }

  return *this;
}

void SSEKMSFilter::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_kmsKeyArnHasBeenSet)
  {
   XmlNode kmsKeyArnNode = parentNode.CreateChildElement("KmsKeyArn");
   kmsKeyArnNode.SetText(m_kmsKeyArn);
  }

  if(m_bucketKeyEnabledHasBeenSet)
  {
   XmlNode bucketKeyEnabledNode = parentNode.CreateChildElement("BucketKeyEnabled");
   ss << std::boolalpha << m_bucketKeyEnabled;
   bucketKeyEnabledNode.SetText(ss.str());
   ss.str("");
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
