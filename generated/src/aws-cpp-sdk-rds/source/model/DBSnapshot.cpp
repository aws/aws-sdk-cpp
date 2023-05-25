/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DBSnapshot.h>
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

DBSnapshot::DBSnapshot() : 
    m_dBSnapshotIdentifierHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceDBSnapshotIdentifierHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dBSnapshotArnHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_originalSnapshotCreateTimeHasBeenSet(false),
    m_snapshotDatabaseTimeHasBeenSet(false),
    m_snapshotTargetHasBeenSet(false),
    m_storageThroughput(0),
    m_storageThroughputHasBeenSet(false)
{
}

DBSnapshot::DBSnapshot(const XmlNode& xmlNode) : 
    m_dBSnapshotIdentifierHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_snapshotCreateTimeHasBeenSet(false),
    m_engineHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_instanceCreateTimeHasBeenSet(false),
    m_masterUsernameHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_snapshotTypeHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_optionGroupNameHasBeenSet(false),
    m_percentProgress(0),
    m_percentProgressHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceDBSnapshotIdentifierHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_tdeCredentialArnHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_dBSnapshotArnHasBeenSet(false),
    m_timezoneHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_processorFeaturesHasBeenSet(false),
    m_dbiResourceIdHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_originalSnapshotCreateTimeHasBeenSet(false),
    m_snapshotDatabaseTimeHasBeenSet(false),
    m_snapshotTargetHasBeenSet(false),
    m_storageThroughput(0),
    m_storageThroughputHasBeenSet(false)
{
  *this = xmlNode;
}

DBSnapshot& DBSnapshot::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dBSnapshotIdentifierNode = resultNode.FirstChild("DBSnapshotIdentifier");
    if(!dBSnapshotIdentifierNode.IsNull())
    {
      m_dBSnapshotIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBSnapshotIdentifierNode.GetText());
      m_dBSnapshotIdentifierHasBeenSet = true;
    }
    XmlNode dBInstanceIdentifierNode = resultNode.FirstChild("DBInstanceIdentifier");
    if(!dBInstanceIdentifierNode.IsNull())
    {
      m_dBInstanceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceIdentifierNode.GetText());
      m_dBInstanceIdentifierHasBeenSet = true;
    }
    XmlNode snapshotCreateTimeNode = resultNode.FirstChild("SnapshotCreateTime");
    if(!snapshotCreateTimeNode.IsNull())
    {
      m_snapshotCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(snapshotCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_snapshotCreateTimeHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if(!allocatedStorageNode.IsNull())
    {
      m_allocatedStorage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocatedStorageNode.GetText()).c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("Port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode instanceCreateTimeNode = resultNode.FirstChild("InstanceCreateTime");
    if(!instanceCreateTimeNode.IsNull())
    {
      m_instanceCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_instanceCreateTimeHasBeenSet = true;
    }
    XmlNode masterUsernameNode = resultNode.FirstChild("MasterUsername");
    if(!masterUsernameNode.IsNull())
    {
      m_masterUsername = Aws::Utils::Xml::DecodeEscapedXmlText(masterUsernameNode.GetText());
      m_masterUsernameHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if(!licenseModelNode.IsNull())
    {
      m_licenseModel = Aws::Utils::Xml::DecodeEscapedXmlText(licenseModelNode.GetText());
      m_licenseModelHasBeenSet = true;
    }
    XmlNode snapshotTypeNode = resultNode.FirstChild("SnapshotType");
    if(!snapshotTypeNode.IsNull())
    {
      m_snapshotType = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotTypeNode.GetText());
      m_snapshotTypeHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("Iops");
    if(!iopsNode.IsNull())
    {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iopsNode.GetText()).c_str()).c_str());
      m_iopsHasBeenSet = true;
    }
    XmlNode optionGroupNameNode = resultNode.FirstChild("OptionGroupName");
    if(!optionGroupNameNode.IsNull())
    {
      m_optionGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(optionGroupNameNode.GetText());
      m_optionGroupNameHasBeenSet = true;
    }
    XmlNode percentProgressNode = resultNode.FirstChild("PercentProgress");
    if(!percentProgressNode.IsNull())
    {
      m_percentProgress = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(percentProgressNode.GetText()).c_str()).c_str());
      m_percentProgressHasBeenSet = true;
    }
    XmlNode sourceRegionNode = resultNode.FirstChild("SourceRegion");
    if(!sourceRegionNode.IsNull())
    {
      m_sourceRegion = Aws::Utils::Xml::DecodeEscapedXmlText(sourceRegionNode.GetText());
      m_sourceRegionHasBeenSet = true;
    }
    XmlNode sourceDBSnapshotIdentifierNode = resultNode.FirstChild("SourceDBSnapshotIdentifier");
    if(!sourceDBSnapshotIdentifierNode.IsNull())
    {
      m_sourceDBSnapshotIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(sourceDBSnapshotIdentifierNode.GetText());
      m_sourceDBSnapshotIdentifierHasBeenSet = true;
    }
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if(!storageTypeNode.IsNull())
    {
      m_storageType = Aws::Utils::Xml::DecodeEscapedXmlText(storageTypeNode.GetText());
      m_storageTypeHasBeenSet = true;
    }
    XmlNode tdeCredentialArnNode = resultNode.FirstChild("TdeCredentialArn");
    if(!tdeCredentialArnNode.IsNull())
    {
      m_tdeCredentialArn = Aws::Utils::Xml::DecodeEscapedXmlText(tdeCredentialArnNode.GetText());
      m_tdeCredentialArnHasBeenSet = true;
    }
    XmlNode encryptedNode = resultNode.FirstChild("Encrypted");
    if(!encryptedNode.IsNull())
    {
      m_encrypted = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(encryptedNode.GetText()).c_str()).c_str());
      m_encryptedHasBeenSet = true;
    }
    XmlNode kmsKeyIdNode = resultNode.FirstChild("KmsKeyId");
    if(!kmsKeyIdNode.IsNull())
    {
      m_kmsKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kmsKeyIdNode.GetText());
      m_kmsKeyIdHasBeenSet = true;
    }
    XmlNode dBSnapshotArnNode = resultNode.FirstChild("DBSnapshotArn");
    if(!dBSnapshotArnNode.IsNull())
    {
      m_dBSnapshotArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBSnapshotArnNode.GetText());
      m_dBSnapshotArnHasBeenSet = true;
    }
    XmlNode timezoneNode = resultNode.FirstChild("Timezone");
    if(!timezoneNode.IsNull())
    {
      m_timezone = Aws::Utils::Xml::DecodeEscapedXmlText(timezoneNode.GetText());
      m_timezoneHasBeenSet = true;
    }
    XmlNode iAMDatabaseAuthenticationEnabledNode = resultNode.FirstChild("IAMDatabaseAuthenticationEnabled");
    if(!iAMDatabaseAuthenticationEnabledNode.IsNull())
    {
      m_iAMDatabaseAuthenticationEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iAMDatabaseAuthenticationEnabledNode.GetText()).c_str()).c_str());
      m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
    }
    XmlNode processorFeaturesNode = resultNode.FirstChild("ProcessorFeatures");
    if(!processorFeaturesNode.IsNull())
    {
      XmlNode processorFeaturesMember = processorFeaturesNode.FirstChild("ProcessorFeature");
      while(!processorFeaturesMember.IsNull())
      {
        m_processorFeatures.push_back(processorFeaturesMember);
        processorFeaturesMember = processorFeaturesMember.NextNode("ProcessorFeature");
      }

      m_processorFeaturesHasBeenSet = true;
    }
    XmlNode dbiResourceIdNode = resultNode.FirstChild("DbiResourceId");
    if(!dbiResourceIdNode.IsNull())
    {
      m_dbiResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(dbiResourceIdNode.GetText());
      m_dbiResourceIdHasBeenSet = true;
    }
    XmlNode tagListNode = resultNode.FirstChild("TagList");
    if(!tagListNode.IsNull())
    {
      XmlNode tagListMember = tagListNode.FirstChild("Tag");
      while(!tagListMember.IsNull())
      {
        m_tagList.push_back(tagListMember);
        tagListMember = tagListMember.NextNode("Tag");
      }

      m_tagListHasBeenSet = true;
    }
    XmlNode originalSnapshotCreateTimeNode = resultNode.FirstChild("OriginalSnapshotCreateTime");
    if(!originalSnapshotCreateTimeNode.IsNull())
    {
      m_originalSnapshotCreateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(originalSnapshotCreateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_originalSnapshotCreateTimeHasBeenSet = true;
    }
    XmlNode snapshotDatabaseTimeNode = resultNode.FirstChild("SnapshotDatabaseTime");
    if(!snapshotDatabaseTimeNode.IsNull())
    {
      m_snapshotDatabaseTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(snapshotDatabaseTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_snapshotDatabaseTimeHasBeenSet = true;
    }
    XmlNode snapshotTargetNode = resultNode.FirstChild("SnapshotTarget");
    if(!snapshotTargetNode.IsNull())
    {
      m_snapshotTarget = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotTargetNode.GetText());
      m_snapshotTargetHasBeenSet = true;
    }
    XmlNode storageThroughputNode = resultNode.FirstChild("StorageThroughput");
    if(!storageThroughputNode.IsNull())
    {
      m_storageThroughput = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageThroughputNode.GetText()).c_str()).c_str());
      m_storageThroughputHasBeenSet = true;
    }
  }

  return *this;
}

void DBSnapshot::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dBSnapshotIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotCreateTime=" << StringUtils::URLEncode(m_snapshotCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_instanceCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceCreateTime=" << StringUtils::URLEncode(m_instanceCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_licenseModelHasBeenSet)
  {
      oStream << location << index << locationValue << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }

  if(m_iopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Iops=" << m_iops << "&";
  }

  if(m_optionGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_percentProgressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PercentProgress=" << m_percentProgress << "&";
  }

  if(m_sourceRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceRegion=" << StringUtils::URLEncode(m_sourceRegion.c_str()) << "&";
  }

  if(m_sourceDBSnapshotIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceDBSnapshotIdentifier=" << StringUtils::URLEncode(m_sourceDBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_storageTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_tdeCredentialArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".TdeCredentialArn=" << StringUtils::URLEncode(m_tdeCredentialArn.c_str()) << "&";
  }

  if(m_encryptedHasBeenSet)
  {
      oStream << location << index << locationValue << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_dBSnapshotArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBSnapshotArn=" << StringUtils::URLEncode(m_dBSnapshotArn.c_str()) << "&";
  }

  if(m_timezoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timezone=" << StringUtils::URLEncode(m_timezone.c_str()) << "&";
  }

  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }

  if(m_processorFeaturesHasBeenSet)
  {
      unsigned processorFeaturesIdx = 1;
      for(auto& item : m_processorFeatures)
      {
        Aws::StringStream processorFeaturesSs;
        processorFeaturesSs << location << index << locationValue << ".ProcessorFeature." << processorFeaturesIdx++;
        item.OutputToStream(oStream, processorFeaturesSs.str().c_str());
      }
  }

  if(m_dbiResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }

  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location << index << locationValue << ".Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }

  if(m_originalSnapshotCreateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".OriginalSnapshotCreateTime=" << StringUtils::URLEncode(m_originalSnapshotCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_snapshotDatabaseTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotDatabaseTime=" << StringUtils::URLEncode(m_snapshotDatabaseTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_snapshotTargetHasBeenSet)
  {
      oStream << location << index << locationValue << ".SnapshotTarget=" << StringUtils::URLEncode(m_snapshotTarget.c_str()) << "&";
  }

  if(m_storageThroughputHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageThroughput=" << m_storageThroughput << "&";
  }

}

void DBSnapshot::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dBSnapshotIdentifierHasBeenSet)
  {
      oStream << location << ".DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }
  if(m_dBInstanceIdentifierHasBeenSet)
  {
      oStream << location << ".DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }
  if(m_snapshotCreateTimeHasBeenSet)
  {
      oStream << location << ".SnapshotCreateTime=" << StringUtils::URLEncode(m_snapshotCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_instanceCreateTimeHasBeenSet)
  {
      oStream << location << ".InstanceCreateTime=" << StringUtils::URLEncode(m_instanceCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_masterUsernameHasBeenSet)
  {
      oStream << location << ".MasterUsername=" << StringUtils::URLEncode(m_masterUsername.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_licenseModelHasBeenSet)
  {
      oStream << location << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }
  if(m_snapshotTypeHasBeenSet)
  {
      oStream << location << ".SnapshotType=" << StringUtils::URLEncode(m_snapshotType.c_str()) << "&";
  }
  if(m_iopsHasBeenSet)
  {
      oStream << location << ".Iops=" << m_iops << "&";
  }
  if(m_optionGroupNameHasBeenSet)
  {
      oStream << location << ".OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }
  if(m_percentProgressHasBeenSet)
  {
      oStream << location << ".PercentProgress=" << m_percentProgress << "&";
  }
  if(m_sourceRegionHasBeenSet)
  {
      oStream << location << ".SourceRegion=" << StringUtils::URLEncode(m_sourceRegion.c_str()) << "&";
  }
  if(m_sourceDBSnapshotIdentifierHasBeenSet)
  {
      oStream << location << ".SourceDBSnapshotIdentifier=" << StringUtils::URLEncode(m_sourceDBSnapshotIdentifier.c_str()) << "&";
  }
  if(m_storageTypeHasBeenSet)
  {
      oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if(m_tdeCredentialArnHasBeenSet)
  {
      oStream << location << ".TdeCredentialArn=" << StringUtils::URLEncode(m_tdeCredentialArn.c_str()) << "&";
  }
  if(m_encryptedHasBeenSet)
  {
      oStream << location << ".Encrypted=" << std::boolalpha << m_encrypted << "&";
  }
  if(m_kmsKeyIdHasBeenSet)
  {
      oStream << location << ".KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }
  if(m_dBSnapshotArnHasBeenSet)
  {
      oStream << location << ".DBSnapshotArn=" << StringUtils::URLEncode(m_dBSnapshotArn.c_str()) << "&";
  }
  if(m_timezoneHasBeenSet)
  {
      oStream << location << ".Timezone=" << StringUtils::URLEncode(m_timezone.c_str()) << "&";
  }
  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }
  if(m_processorFeaturesHasBeenSet)
  {
      unsigned processorFeaturesIdx = 1;
      for(auto& item : m_processorFeatures)
      {
        Aws::StringStream processorFeaturesSs;
        processorFeaturesSs << location <<  ".ProcessorFeature." << processorFeaturesIdx++;
        item.OutputToStream(oStream, processorFeaturesSs.str().c_str());
      }
  }
  if(m_dbiResourceIdHasBeenSet)
  {
      oStream << location << ".DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }
  if(m_tagListHasBeenSet)
  {
      unsigned tagListIdx = 1;
      for(auto& item : m_tagList)
      {
        Aws::StringStream tagListSs;
        tagListSs << location <<  ".Tag." << tagListIdx++;
        item.OutputToStream(oStream, tagListSs.str().c_str());
      }
  }
  if(m_originalSnapshotCreateTimeHasBeenSet)
  {
      oStream << location << ".OriginalSnapshotCreateTime=" << StringUtils::URLEncode(m_originalSnapshotCreateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_snapshotDatabaseTimeHasBeenSet)
  {
      oStream << location << ".SnapshotDatabaseTime=" << StringUtils::URLEncode(m_snapshotDatabaseTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_snapshotTargetHasBeenSet)
  {
      oStream << location << ".SnapshotTarget=" << StringUtils::URLEncode(m_snapshotTarget.c_str()) << "&";
  }
  if(m_storageThroughputHasBeenSet)
  {
      oStream << location << ".StorageThroughput=" << m_storageThroughput << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
