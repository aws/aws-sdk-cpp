/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3control/model/Destination.h>
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

Destination::Destination() : 
    m_accountHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_replicationTimeHasBeenSet(false),
    m_accessControlTranslationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_storageClass(ReplicationStorageClass::NOT_SET),
    m_storageClassHasBeenSet(false)
{
}

Destination::Destination(const XmlNode& xmlNode) : 
    m_accountHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_replicationTimeHasBeenSet(false),
    m_accessControlTranslationHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_storageClass(ReplicationStorageClass::NOT_SET),
    m_storageClassHasBeenSet(false)
{
  *this = xmlNode;
}

Destination& Destination::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode accountNode = resultNode.FirstChild("Account");
    if(!accountNode.IsNull())
    {
      m_account = Aws::Utils::Xml::DecodeEscapedXmlText(accountNode.GetText());
      m_accountHasBeenSet = true;
    }
    XmlNode bucketNode = resultNode.FirstChild("Bucket");
    if(!bucketNode.IsNull())
    {
      m_bucket = Aws::Utils::Xml::DecodeEscapedXmlText(bucketNode.GetText());
      m_bucketHasBeenSet = true;
    }
    XmlNode replicationTimeNode = resultNode.FirstChild("ReplicationTime");
    if(!replicationTimeNode.IsNull())
    {
      m_replicationTime = replicationTimeNode;
      m_replicationTimeHasBeenSet = true;
    }
    XmlNode accessControlTranslationNode = resultNode.FirstChild("AccessControlTranslation");
    if(!accessControlTranslationNode.IsNull())
    {
      m_accessControlTranslation = accessControlTranslationNode;
      m_accessControlTranslationHasBeenSet = true;
    }
    XmlNode encryptionConfigurationNode = resultNode.FirstChild("EncryptionConfiguration");
    if(!encryptionConfigurationNode.IsNull())
    {
      m_encryptionConfiguration = encryptionConfigurationNode;
      m_encryptionConfigurationHasBeenSet = true;
    }
    XmlNode metricsNode = resultNode.FirstChild("Metrics");
    if(!metricsNode.IsNull())
    {
      m_metrics = metricsNode;
      m_metricsHasBeenSet = true;
    }
    XmlNode storageClassNode = resultNode.FirstChild("StorageClass");
    if(!storageClassNode.IsNull())
    {
      m_storageClass = ReplicationStorageClassMapper::GetReplicationStorageClassForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageClassNode.GetText()).c_str()).c_str());
      m_storageClassHasBeenSet = true;
    }
  }

  return *this;
}

void Destination::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_accountHasBeenSet)
  {
   XmlNode accountNode = parentNode.CreateChildElement("Account");
   accountNode.SetText(m_account);
  }

  if(m_bucketHasBeenSet)
  {
   XmlNode bucketNode = parentNode.CreateChildElement("Bucket");
   bucketNode.SetText(m_bucket);
  }

  if(m_replicationTimeHasBeenSet)
  {
   XmlNode replicationTimeNode = parentNode.CreateChildElement("ReplicationTime");
   m_replicationTime.AddToNode(replicationTimeNode);
  }

  if(m_accessControlTranslationHasBeenSet)
  {
   XmlNode accessControlTranslationNode = parentNode.CreateChildElement("AccessControlTranslation");
   m_accessControlTranslation.AddToNode(accessControlTranslationNode);
  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   XmlNode encryptionConfigurationNode = parentNode.CreateChildElement("EncryptionConfiguration");
   m_encryptionConfiguration.AddToNode(encryptionConfigurationNode);
  }

  if(m_metricsHasBeenSet)
  {
   XmlNode metricsNode = parentNode.CreateChildElement("Metrics");
   m_metrics.AddToNode(metricsNode);
  }

  if(m_storageClassHasBeenSet)
  {
   XmlNode storageClassNode = parentNode.CreateChildElement("StorageClass");
   storageClassNode.SetText(ReplicationStorageClassMapper::GetNameForReplicationStorageClass(m_storageClass));
  }

}

} // namespace Model
} // namespace S3Control
} // namespace Aws
