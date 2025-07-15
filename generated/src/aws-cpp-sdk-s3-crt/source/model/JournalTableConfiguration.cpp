/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/JournalTableConfiguration.h>
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

JournalTableConfiguration::JournalTableConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

JournalTableConfiguration& JournalTableConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode recordExpirationNode = resultNode.FirstChild("RecordExpiration");
    if(!recordExpirationNode.IsNull())
    {
      m_recordExpiration = recordExpirationNode;
      m_recordExpirationHasBeenSet = true;
    }
    XmlNode encryptionConfigurationNode = resultNode.FirstChild("EncryptionConfiguration");
    if(!encryptionConfigurationNode.IsNull())
    {
      m_encryptionConfiguration = encryptionConfigurationNode;
      m_encryptionConfigurationHasBeenSet = true;
    }
  }

  return *this;
}

void JournalTableConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_recordExpirationHasBeenSet)
  {
   XmlNode recordExpirationNode = parentNode.CreateChildElement("RecordExpiration");
   m_recordExpiration.AddToNode(recordExpirationNode);
  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   XmlNode encryptionConfigurationNode = parentNode.CreateChildElement("EncryptionConfiguration");
   m_encryptionConfiguration.AddToNode(encryptionConfigurationNode);
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
