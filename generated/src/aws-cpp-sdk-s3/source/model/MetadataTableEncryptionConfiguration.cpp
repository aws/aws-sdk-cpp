/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3/model/MetadataTableEncryptionConfiguration.h>
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

MetadataTableEncryptionConfiguration::MetadataTableEncryptionConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MetadataTableEncryptionConfiguration& MetadataTableEncryptionConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sseAlgorithmNode = resultNode.FirstChild("SseAlgorithm");
    if(!sseAlgorithmNode.IsNull())
    {
      m_sseAlgorithm = TableSseAlgorithmMapper::GetTableSseAlgorithmForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sseAlgorithmNode.GetText()).c_str()));
      m_sseAlgorithmHasBeenSet = true;
    }
    XmlNode kmsKeyArnNode = resultNode.FirstChild("KmsKeyArn");
    if(!kmsKeyArnNode.IsNull())
    {
      m_kmsKeyArn = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyArnNode.GetText());
      m_kmsKeyArnHasBeenSet = true;
    }
  }

  return *this;
}

void MetadataTableEncryptionConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_sseAlgorithmHasBeenSet)
  {
   XmlNode sseAlgorithmNode = parentNode.CreateChildElement("SseAlgorithm");
   sseAlgorithmNode.SetText(TableSseAlgorithmMapper::GetNameForTableSseAlgorithm(m_sseAlgorithm));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   XmlNode kmsKeyArnNode = parentNode.CreateChildElement("KmsKeyArn");
   kmsKeyArnNode.SetText(m_kmsKeyArn);
  }

}

} // namespace Model
} // namespace S3
} // namespace Aws
