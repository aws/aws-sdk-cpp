/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ValidDBInstanceModificationsMessage.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

ValidDBInstanceModificationsMessage::ValidDBInstanceModificationsMessage() : 
    m_storageHasBeenSet(false),
    m_validProcessorFeaturesHasBeenSet(false)
{
}

ValidDBInstanceModificationsMessage::ValidDBInstanceModificationsMessage(const XmlNode& xmlNode) : 
    m_storageHasBeenSet(false),
    m_validProcessorFeaturesHasBeenSet(false)
{
  *this = xmlNode;
}

ValidDBInstanceModificationsMessage& ValidDBInstanceModificationsMessage::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode storageNode = resultNode.FirstChild("Storage");
    if(!storageNode.IsNull())
    {
      XmlNode storageMember = storageNode.FirstChild("ValidStorageOptions");
      while(!storageMember.IsNull())
      {
        m_storage.push_back(storageMember);
        storageMember = storageMember.NextNode("ValidStorageOptions");
      }

      m_storageHasBeenSet = true;
    }
    XmlNode validProcessorFeaturesNode = resultNode.FirstChild("ValidProcessorFeatures");
    if(!validProcessorFeaturesNode.IsNull())
    {
      XmlNode validProcessorFeaturesMember = validProcessorFeaturesNode.FirstChild("AvailableProcessorFeature");
      while(!validProcessorFeaturesMember.IsNull())
      {
        m_validProcessorFeatures.push_back(validProcessorFeaturesMember);
        validProcessorFeaturesMember = validProcessorFeaturesMember.NextNode("AvailableProcessorFeature");
      }

      m_validProcessorFeaturesHasBeenSet = true;
    }
  }

  return *this;
}

void ValidDBInstanceModificationsMessage::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_storageHasBeenSet)
  {
      unsigned storageIdx = 1;
      for(auto& item : m_storage)
      {
        Aws::StringStream storageSs;
        storageSs << location << index << locationValue << ".ValidStorageOptions." << storageIdx++;
        item.OutputToStream(oStream, storageSs.str().c_str());
      }
  }

  if(m_validProcessorFeaturesHasBeenSet)
  {
      unsigned validProcessorFeaturesIdx = 1;
      for(auto& item : m_validProcessorFeatures)
      {
        Aws::StringStream validProcessorFeaturesSs;
        validProcessorFeaturesSs << location << index << locationValue << ".AvailableProcessorFeature." << validProcessorFeaturesIdx++;
        item.OutputToStream(oStream, validProcessorFeaturesSs.str().c_str());
      }
  }

}

void ValidDBInstanceModificationsMessage::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_storageHasBeenSet)
  {
      unsigned storageIdx = 1;
      for(auto& item : m_storage)
      {
        Aws::StringStream storageSs;
        storageSs << location <<  ".ValidStorageOptions." << storageIdx++;
        item.OutputToStream(oStream, storageSs.str().c_str());
      }
  }
  if(m_validProcessorFeaturesHasBeenSet)
  {
      unsigned validProcessorFeaturesIdx = 1;
      for(auto& item : m_validProcessorFeatures)
      {
        Aws::StringStream validProcessorFeaturesSs;
        validProcessorFeaturesSs << location <<  ".AvailableProcessorFeature." << validProcessorFeaturesIdx++;
        item.OutputToStream(oStream, validProcessorFeaturesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
