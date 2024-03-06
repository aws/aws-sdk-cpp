/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ClusterPendingModifiedValues.h>
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

ClusterPendingModifiedValues::ClusterPendingModifiedValues() : 
    m_pendingCloudwatchLogsExportsHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_rdsCustomClusterConfigurationHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_certificateDetailsHasBeenSet(false)
{
}

ClusterPendingModifiedValues::ClusterPendingModifiedValues(const XmlNode& xmlNode) : 
    m_pendingCloudwatchLogsExportsHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_masterUserPasswordHasBeenSet(false),
    m_iAMDatabaseAuthenticationEnabled(false),
    m_iAMDatabaseAuthenticationEnabledHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_rdsCustomClusterConfigurationHasBeenSet(false),
    m_iops(0),
    m_iopsHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_certificateDetailsHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterPendingModifiedValues& ClusterPendingModifiedValues::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode pendingCloudwatchLogsExportsNode = resultNode.FirstChild("PendingCloudwatchLogsExports");
    if(!pendingCloudwatchLogsExportsNode.IsNull())
    {
      m_pendingCloudwatchLogsExports = pendingCloudwatchLogsExportsNode;
      m_pendingCloudwatchLogsExportsHasBeenSet = true;
    }
    XmlNode dBClusterIdentifierNode = resultNode.FirstChild("DBClusterIdentifier");
    if(!dBClusterIdentifierNode.IsNull())
    {
      m_dBClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBClusterIdentifierNode.GetText());
      m_dBClusterIdentifierHasBeenSet = true;
    }
    XmlNode masterUserPasswordNode = resultNode.FirstChild("MasterUserPassword");
    if(!masterUserPasswordNode.IsNull())
    {
      m_masterUserPassword = Aws::Utils::Xml::DecodeEscapedXmlText(masterUserPasswordNode.GetText());
      m_masterUserPasswordHasBeenSet = true;
    }
    XmlNode iAMDatabaseAuthenticationEnabledNode = resultNode.FirstChild("IAMDatabaseAuthenticationEnabled");
    if(!iAMDatabaseAuthenticationEnabledNode.IsNull())
    {
      m_iAMDatabaseAuthenticationEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iAMDatabaseAuthenticationEnabledNode.GetText()).c_str()).c_str());
      m_iAMDatabaseAuthenticationEnabledHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode backupRetentionPeriodNode = resultNode.FirstChild("BackupRetentionPeriod");
    if(!backupRetentionPeriodNode.IsNull())
    {
      m_backupRetentionPeriod = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(backupRetentionPeriodNode.GetText()).c_str()).c_str());
      m_backupRetentionPeriodHasBeenSet = true;
    }
    XmlNode allocatedStorageNode = resultNode.FirstChild("AllocatedStorage");
    if(!allocatedStorageNode.IsNull())
    {
      m_allocatedStorage = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocatedStorageNode.GetText()).c_str()).c_str());
      m_allocatedStorageHasBeenSet = true;
    }
    XmlNode rdsCustomClusterConfigurationNode = resultNode.FirstChild("RdsCustomClusterConfiguration");
    if(!rdsCustomClusterConfigurationNode.IsNull())
    {
      m_rdsCustomClusterConfiguration = rdsCustomClusterConfigurationNode;
      m_rdsCustomClusterConfigurationHasBeenSet = true;
    }
    XmlNode iopsNode = resultNode.FirstChild("Iops");
    if(!iopsNode.IsNull())
    {
      m_iops = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(iopsNode.GetText()).c_str()).c_str());
      m_iopsHasBeenSet = true;
    }
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if(!storageTypeNode.IsNull())
    {
      m_storageType = Aws::Utils::Xml::DecodeEscapedXmlText(storageTypeNode.GetText());
      m_storageTypeHasBeenSet = true;
    }
    XmlNode certificateDetailsNode = resultNode.FirstChild("CertificateDetails");
    if(!certificateDetailsNode.IsNull())
    {
      m_certificateDetails = certificateDetailsNode;
      m_certificateDetailsHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterPendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_pendingCloudwatchLogsExportsHasBeenSet)
  {
      Aws::StringStream pendingCloudwatchLogsExportsLocationAndMemberSs;
      pendingCloudwatchLogsExportsLocationAndMemberSs << location << index << locationValue << ".PendingCloudwatchLogsExports";
      m_pendingCloudwatchLogsExports.OutputToStream(oStream, pendingCloudwatchLogsExportsLocationAndMemberSs.str().c_str());
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_masterUserPasswordHasBeenSet)
  {
      oStream << location << index << locationValue << ".MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }

  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }

  if(m_rdsCustomClusterConfigurationHasBeenSet)
  {
      Aws::StringStream rdsCustomClusterConfigurationLocationAndMemberSs;
      rdsCustomClusterConfigurationLocationAndMemberSs << location << index << locationValue << ".RdsCustomClusterConfiguration";
      m_rdsCustomClusterConfiguration.OutputToStream(oStream, rdsCustomClusterConfigurationLocationAndMemberSs.str().c_str());
  }

  if(m_iopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Iops=" << m_iops << "&";
  }

  if(m_storageTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_certificateDetailsHasBeenSet)
  {
      Aws::StringStream certificateDetailsLocationAndMemberSs;
      certificateDetailsLocationAndMemberSs << location << index << locationValue << ".CertificateDetails";
      m_certificateDetails.OutputToStream(oStream, certificateDetailsLocationAndMemberSs.str().c_str());
  }

}

void ClusterPendingModifiedValues::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_pendingCloudwatchLogsExportsHasBeenSet)
  {
      Aws::String pendingCloudwatchLogsExportsLocationAndMember(location);
      pendingCloudwatchLogsExportsLocationAndMember += ".PendingCloudwatchLogsExports";
      m_pendingCloudwatchLogsExports.OutputToStream(oStream, pendingCloudwatchLogsExportsLocationAndMember.c_str());
  }
  if(m_dBClusterIdentifierHasBeenSet)
  {
      oStream << location << ".DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }
  if(m_masterUserPasswordHasBeenSet)
  {
      oStream << location << ".MasterUserPassword=" << StringUtils::URLEncode(m_masterUserPassword.c_str()) << "&";
  }
  if(m_iAMDatabaseAuthenticationEnabledHasBeenSet)
  {
      oStream << location << ".IAMDatabaseAuthenticationEnabled=" << std::boolalpha << m_iAMDatabaseAuthenticationEnabled << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_backupRetentionPeriodHasBeenSet)
  {
      oStream << location << ".BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }
  if(m_allocatedStorageHasBeenSet)
  {
      oStream << location << ".AllocatedStorage=" << m_allocatedStorage << "&";
  }
  if(m_rdsCustomClusterConfigurationHasBeenSet)
  {
      Aws::String rdsCustomClusterConfigurationLocationAndMember(location);
      rdsCustomClusterConfigurationLocationAndMember += ".RdsCustomClusterConfiguration";
      m_rdsCustomClusterConfiguration.OutputToStream(oStream, rdsCustomClusterConfigurationLocationAndMember.c_str());
  }
  if(m_iopsHasBeenSet)
  {
      oStream << location << ".Iops=" << m_iops << "&";
  }
  if(m_storageTypeHasBeenSet)
  {
      oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if(m_certificateDetailsHasBeenSet)
  {
      Aws::String certificateDetailsLocationAndMember(location);
      certificateDetailsLocationAndMember += ".CertificateDetails";
      m_certificateDetails.OutputToStream(oStream, certificateDetailsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
