/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/OrderableDBInstanceOption.h>
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

OrderableDBInstanceOption::OrderableDBInstanceOption() : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_availabilityZoneGroupHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_multiAZCapable(false),
    m_multiAZCapableHasBeenSet(false),
    m_readReplicaCapable(false),
    m_readReplicaCapableHasBeenSet(false),
    m_vpc(false),
    m_vpcHasBeenSet(false),
    m_supportsStorageEncryption(false),
    m_supportsStorageEncryptionHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_supportsIops(false),
    m_supportsIopsHasBeenSet(false),
    m_supportsEnhancedMonitoring(false),
    m_supportsEnhancedMonitoringHasBeenSet(false),
    m_supportsIAMDatabaseAuthentication(false),
    m_supportsIAMDatabaseAuthenticationHasBeenSet(false),
    m_supportsPerformanceInsights(false),
    m_supportsPerformanceInsightsHasBeenSet(false),
    m_minStorageSize(0),
    m_minStorageSizeHasBeenSet(false),
    m_maxStorageSize(0),
    m_maxStorageSizeHasBeenSet(false),
    m_minIopsPerDbInstance(0),
    m_minIopsPerDbInstanceHasBeenSet(false),
    m_maxIopsPerDbInstance(0),
    m_maxIopsPerDbInstanceHasBeenSet(false),
    m_minIopsPerGib(0.0),
    m_minIopsPerGibHasBeenSet(false),
    m_maxIopsPerGib(0.0),
    m_maxIopsPerGibHasBeenSet(false),
    m_availableProcessorFeaturesHasBeenSet(false),
    m_supportedEngineModesHasBeenSet(false),
    m_supportsStorageAutoscaling(false),
    m_supportsStorageAutoscalingHasBeenSet(false),
    m_supportsKerberosAuthentication(false),
    m_supportsKerberosAuthenticationHasBeenSet(false),
    m_outpostCapable(false),
    m_outpostCapableHasBeenSet(false),
    m_supportedActivityStreamModesHasBeenSet(false),
    m_supportsGlobalDatabases(false),
    m_supportsGlobalDatabasesHasBeenSet(false),
    m_supportsClusters(false),
    m_supportsClustersHasBeenSet(false),
    m_supportedNetworkTypesHasBeenSet(false),
    m_supportsStorageThroughput(false),
    m_supportsStorageThroughputHasBeenSet(false),
    m_minStorageThroughputPerDbInstance(0),
    m_minStorageThroughputPerDbInstanceHasBeenSet(false),
    m_maxStorageThroughputPerDbInstance(0),
    m_maxStorageThroughputPerDbInstanceHasBeenSet(false),
    m_minStorageThroughputPerIops(0.0),
    m_minStorageThroughputPerIopsHasBeenSet(false),
    m_maxStorageThroughputPerIops(0.0),
    m_maxStorageThroughputPerIopsHasBeenSet(false)
{
}

OrderableDBInstanceOption::OrderableDBInstanceOption(const XmlNode& xmlNode) : 
    m_engineHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_licenseModelHasBeenSet(false),
    m_availabilityZoneGroupHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_multiAZCapable(false),
    m_multiAZCapableHasBeenSet(false),
    m_readReplicaCapable(false),
    m_readReplicaCapableHasBeenSet(false),
    m_vpc(false),
    m_vpcHasBeenSet(false),
    m_supportsStorageEncryption(false),
    m_supportsStorageEncryptionHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_supportsIops(false),
    m_supportsIopsHasBeenSet(false),
    m_supportsEnhancedMonitoring(false),
    m_supportsEnhancedMonitoringHasBeenSet(false),
    m_supportsIAMDatabaseAuthentication(false),
    m_supportsIAMDatabaseAuthenticationHasBeenSet(false),
    m_supportsPerformanceInsights(false),
    m_supportsPerformanceInsightsHasBeenSet(false),
    m_minStorageSize(0),
    m_minStorageSizeHasBeenSet(false),
    m_maxStorageSize(0),
    m_maxStorageSizeHasBeenSet(false),
    m_minIopsPerDbInstance(0),
    m_minIopsPerDbInstanceHasBeenSet(false),
    m_maxIopsPerDbInstance(0),
    m_maxIopsPerDbInstanceHasBeenSet(false),
    m_minIopsPerGib(0.0),
    m_minIopsPerGibHasBeenSet(false),
    m_maxIopsPerGib(0.0),
    m_maxIopsPerGibHasBeenSet(false),
    m_availableProcessorFeaturesHasBeenSet(false),
    m_supportedEngineModesHasBeenSet(false),
    m_supportsStorageAutoscaling(false),
    m_supportsStorageAutoscalingHasBeenSet(false),
    m_supportsKerberosAuthentication(false),
    m_supportsKerberosAuthenticationHasBeenSet(false),
    m_outpostCapable(false),
    m_outpostCapableHasBeenSet(false),
    m_supportedActivityStreamModesHasBeenSet(false),
    m_supportsGlobalDatabases(false),
    m_supportsGlobalDatabasesHasBeenSet(false),
    m_supportsClusters(false),
    m_supportsClustersHasBeenSet(false),
    m_supportedNetworkTypesHasBeenSet(false),
    m_supportsStorageThroughput(false),
    m_supportsStorageThroughputHasBeenSet(false),
    m_minStorageThroughputPerDbInstance(0),
    m_minStorageThroughputPerDbInstanceHasBeenSet(false),
    m_maxStorageThroughputPerDbInstance(0),
    m_maxStorageThroughputPerDbInstanceHasBeenSet(false),
    m_minStorageThroughputPerIops(0.0),
    m_minStorageThroughputPerIopsHasBeenSet(false),
    m_maxStorageThroughputPerIops(0.0),
    m_maxStorageThroughputPerIopsHasBeenSet(false)
{
  *this = xmlNode;
}

OrderableDBInstanceOption& OrderableDBInstanceOption::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if(!engineNode.IsNull())
    {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if(!engineVersionNode.IsNull())
    {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode dBInstanceClassNode = resultNode.FirstChild("DBInstanceClass");
    if(!dBInstanceClassNode.IsNull())
    {
      m_dBInstanceClass = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceClassNode.GetText());
      m_dBInstanceClassHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if(!licenseModelNode.IsNull())
    {
      m_licenseModel = Aws::Utils::Xml::DecodeEscapedXmlText(licenseModelNode.GetText());
      m_licenseModelHasBeenSet = true;
    }
    XmlNode availabilityZoneGroupNode = resultNode.FirstChild("AvailabilityZoneGroup");
    if(!availabilityZoneGroupNode.IsNull())
    {
      m_availabilityZoneGroup = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneGroupNode.GetText());
      m_availabilityZoneGroupHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("AvailabilityZone");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember);
        availabilityZonesMember = availabilityZonesMember.NextNode("AvailabilityZone");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode multiAZCapableNode = resultNode.FirstChild("MultiAZCapable");
    if(!multiAZCapableNode.IsNull())
    {
      m_multiAZCapable = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(multiAZCapableNode.GetText()).c_str()).c_str());
      m_multiAZCapableHasBeenSet = true;
    }
    XmlNode readReplicaCapableNode = resultNode.FirstChild("ReadReplicaCapable");
    if(!readReplicaCapableNode.IsNull())
    {
      m_readReplicaCapable = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(readReplicaCapableNode.GetText()).c_str()).c_str());
      m_readReplicaCapableHasBeenSet = true;
    }
    XmlNode vpcNode = resultNode.FirstChild("Vpc");
    if(!vpcNode.IsNull())
    {
      m_vpc = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpcNode.GetText()).c_str()).c_str());
      m_vpcHasBeenSet = true;
    }
    XmlNode supportsStorageEncryptionNode = resultNode.FirstChild("SupportsStorageEncryption");
    if(!supportsStorageEncryptionNode.IsNull())
    {
      m_supportsStorageEncryption = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsStorageEncryptionNode.GetText()).c_str()).c_str());
      m_supportsStorageEncryptionHasBeenSet = true;
    }
    XmlNode storageTypeNode = resultNode.FirstChild("StorageType");
    if(!storageTypeNode.IsNull())
    {
      m_storageType = Aws::Utils::Xml::DecodeEscapedXmlText(storageTypeNode.GetText());
      m_storageTypeHasBeenSet = true;
    }
    XmlNode supportsIopsNode = resultNode.FirstChild("SupportsIops");
    if(!supportsIopsNode.IsNull())
    {
      m_supportsIops = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsIopsNode.GetText()).c_str()).c_str());
      m_supportsIopsHasBeenSet = true;
    }
    XmlNode supportsEnhancedMonitoringNode = resultNode.FirstChild("SupportsEnhancedMonitoring");
    if(!supportsEnhancedMonitoringNode.IsNull())
    {
      m_supportsEnhancedMonitoring = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsEnhancedMonitoringNode.GetText()).c_str()).c_str());
      m_supportsEnhancedMonitoringHasBeenSet = true;
    }
    XmlNode supportsIAMDatabaseAuthenticationNode = resultNode.FirstChild("SupportsIAMDatabaseAuthentication");
    if(!supportsIAMDatabaseAuthenticationNode.IsNull())
    {
      m_supportsIAMDatabaseAuthentication = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsIAMDatabaseAuthenticationNode.GetText()).c_str()).c_str());
      m_supportsIAMDatabaseAuthenticationHasBeenSet = true;
    }
    XmlNode supportsPerformanceInsightsNode = resultNode.FirstChild("SupportsPerformanceInsights");
    if(!supportsPerformanceInsightsNode.IsNull())
    {
      m_supportsPerformanceInsights = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsPerformanceInsightsNode.GetText()).c_str()).c_str());
      m_supportsPerformanceInsightsHasBeenSet = true;
    }
    XmlNode minStorageSizeNode = resultNode.FirstChild("MinStorageSize");
    if(!minStorageSizeNode.IsNull())
    {
      m_minStorageSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minStorageSizeNode.GetText()).c_str()).c_str());
      m_minStorageSizeHasBeenSet = true;
    }
    XmlNode maxStorageSizeNode = resultNode.FirstChild("MaxStorageSize");
    if(!maxStorageSizeNode.IsNull())
    {
      m_maxStorageSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxStorageSizeNode.GetText()).c_str()).c_str());
      m_maxStorageSizeHasBeenSet = true;
    }
    XmlNode minIopsPerDbInstanceNode = resultNode.FirstChild("MinIopsPerDbInstance");
    if(!minIopsPerDbInstanceNode.IsNull())
    {
      m_minIopsPerDbInstance = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minIopsPerDbInstanceNode.GetText()).c_str()).c_str());
      m_minIopsPerDbInstanceHasBeenSet = true;
    }
    XmlNode maxIopsPerDbInstanceNode = resultNode.FirstChild("MaxIopsPerDbInstance");
    if(!maxIopsPerDbInstanceNode.IsNull())
    {
      m_maxIopsPerDbInstance = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxIopsPerDbInstanceNode.GetText()).c_str()).c_str());
      m_maxIopsPerDbInstanceHasBeenSet = true;
    }
    XmlNode minIopsPerGibNode = resultNode.FirstChild("MinIopsPerGib");
    if(!minIopsPerGibNode.IsNull())
    {
      m_minIopsPerGib = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minIopsPerGibNode.GetText()).c_str()).c_str());
      m_minIopsPerGibHasBeenSet = true;
    }
    XmlNode maxIopsPerGibNode = resultNode.FirstChild("MaxIopsPerGib");
    if(!maxIopsPerGibNode.IsNull())
    {
      m_maxIopsPerGib = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxIopsPerGibNode.GetText()).c_str()).c_str());
      m_maxIopsPerGibHasBeenSet = true;
    }
    XmlNode availableProcessorFeaturesNode = resultNode.FirstChild("AvailableProcessorFeatures");
    if(!availableProcessorFeaturesNode.IsNull())
    {
      XmlNode availableProcessorFeaturesMember = availableProcessorFeaturesNode.FirstChild("AvailableProcessorFeature");
      while(!availableProcessorFeaturesMember.IsNull())
      {
        m_availableProcessorFeatures.push_back(availableProcessorFeaturesMember);
        availableProcessorFeaturesMember = availableProcessorFeaturesMember.NextNode("AvailableProcessorFeature");
      }

      m_availableProcessorFeaturesHasBeenSet = true;
    }
    XmlNode supportedEngineModesNode = resultNode.FirstChild("SupportedEngineModes");
    if(!supportedEngineModesNode.IsNull())
    {
      XmlNode supportedEngineModesMember = supportedEngineModesNode.FirstChild("member");
      while(!supportedEngineModesMember.IsNull())
      {
        m_supportedEngineModes.push_back(supportedEngineModesMember.GetText());
        supportedEngineModesMember = supportedEngineModesMember.NextNode("member");
      }

      m_supportedEngineModesHasBeenSet = true;
    }
    XmlNode supportsStorageAutoscalingNode = resultNode.FirstChild("SupportsStorageAutoscaling");
    if(!supportsStorageAutoscalingNode.IsNull())
    {
      m_supportsStorageAutoscaling = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsStorageAutoscalingNode.GetText()).c_str()).c_str());
      m_supportsStorageAutoscalingHasBeenSet = true;
    }
    XmlNode supportsKerberosAuthenticationNode = resultNode.FirstChild("SupportsKerberosAuthentication");
    if(!supportsKerberosAuthenticationNode.IsNull())
    {
      m_supportsKerberosAuthentication = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsKerberosAuthenticationNode.GetText()).c_str()).c_str());
      m_supportsKerberosAuthenticationHasBeenSet = true;
    }
    XmlNode outpostCapableNode = resultNode.FirstChild("OutpostCapable");
    if(!outpostCapableNode.IsNull())
    {
      m_outpostCapable = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(outpostCapableNode.GetText()).c_str()).c_str());
      m_outpostCapableHasBeenSet = true;
    }
    XmlNode supportedActivityStreamModesNode = resultNode.FirstChild("SupportedActivityStreamModes");
    if(!supportedActivityStreamModesNode.IsNull())
    {
      XmlNode supportedActivityStreamModesMember = supportedActivityStreamModesNode.FirstChild("member");
      while(!supportedActivityStreamModesMember.IsNull())
      {
        m_supportedActivityStreamModes.push_back(supportedActivityStreamModesMember.GetText());
        supportedActivityStreamModesMember = supportedActivityStreamModesMember.NextNode("member");
      }

      m_supportedActivityStreamModesHasBeenSet = true;
    }
    XmlNode supportsGlobalDatabasesNode = resultNode.FirstChild("SupportsGlobalDatabases");
    if(!supportsGlobalDatabasesNode.IsNull())
    {
      m_supportsGlobalDatabases = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsGlobalDatabasesNode.GetText()).c_str()).c_str());
      m_supportsGlobalDatabasesHasBeenSet = true;
    }
    XmlNode supportsClustersNode = resultNode.FirstChild("SupportsClusters");
    if(!supportsClustersNode.IsNull())
    {
      m_supportsClusters = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsClustersNode.GetText()).c_str()).c_str());
      m_supportsClustersHasBeenSet = true;
    }
    XmlNode supportedNetworkTypesNode = resultNode.FirstChild("SupportedNetworkTypes");
    if(!supportedNetworkTypesNode.IsNull())
    {
      XmlNode supportedNetworkTypesMember = supportedNetworkTypesNode.FirstChild("member");
      while(!supportedNetworkTypesMember.IsNull())
      {
        m_supportedNetworkTypes.push_back(supportedNetworkTypesMember.GetText());
        supportedNetworkTypesMember = supportedNetworkTypesMember.NextNode("member");
      }

      m_supportedNetworkTypesHasBeenSet = true;
    }
    XmlNode supportsStorageThroughputNode = resultNode.FirstChild("SupportsStorageThroughput");
    if(!supportsStorageThroughputNode.IsNull())
    {
      m_supportsStorageThroughput = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(supportsStorageThroughputNode.GetText()).c_str()).c_str());
      m_supportsStorageThroughputHasBeenSet = true;
    }
    XmlNode minStorageThroughputPerDbInstanceNode = resultNode.FirstChild("MinStorageThroughputPerDbInstance");
    if(!minStorageThroughputPerDbInstanceNode.IsNull())
    {
      m_minStorageThroughputPerDbInstance = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minStorageThroughputPerDbInstanceNode.GetText()).c_str()).c_str());
      m_minStorageThroughputPerDbInstanceHasBeenSet = true;
    }
    XmlNode maxStorageThroughputPerDbInstanceNode = resultNode.FirstChild("MaxStorageThroughputPerDbInstance");
    if(!maxStorageThroughputPerDbInstanceNode.IsNull())
    {
      m_maxStorageThroughputPerDbInstance = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxStorageThroughputPerDbInstanceNode.GetText()).c_str()).c_str());
      m_maxStorageThroughputPerDbInstanceHasBeenSet = true;
    }
    XmlNode minStorageThroughputPerIopsNode = resultNode.FirstChild("MinStorageThroughputPerIops");
    if(!minStorageThroughputPerIopsNode.IsNull())
    {
      m_minStorageThroughputPerIops = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minStorageThroughputPerIopsNode.GetText()).c_str()).c_str());
      m_minStorageThroughputPerIopsHasBeenSet = true;
    }
    XmlNode maxStorageThroughputPerIopsNode = resultNode.FirstChild("MaxStorageThroughputPerIops");
    if(!maxStorageThroughputPerIopsNode.IsNull())
    {
      m_maxStorageThroughputPerIops = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxStorageThroughputPerIopsNode.GetText()).c_str()).c_str());
      m_maxStorageThroughputPerIopsHasBeenSet = true;
    }
  }

  return *this;
}

void OrderableDBInstanceOption::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if(m_engineVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if(m_licenseModelHasBeenSet)
  {
      oStream << location << index << locationValue << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if(m_availabilityZoneGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZoneGroup=" << StringUtils::URLEncode(m_availabilityZoneGroup.c_str()) << "&";
  }

  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        Aws::StringStream availabilityZonesSs;
        availabilityZonesSs << location << index << locationValue << ".AvailabilityZone." << availabilityZonesIdx++;
        item.OutputToStream(oStream, availabilityZonesSs.str().c_str());
      }
  }

  if(m_multiAZCapableHasBeenSet)
  {
      oStream << location << index << locationValue << ".MultiAZCapable=" << std::boolalpha << m_multiAZCapable << "&";
  }

  if(m_readReplicaCapableHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReadReplicaCapable=" << std::boolalpha << m_readReplicaCapable << "&";
  }

  if(m_vpcHasBeenSet)
  {
      oStream << location << index << locationValue << ".Vpc=" << std::boolalpha << m_vpc << "&";
  }

  if(m_supportsStorageEncryptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsStorageEncryption=" << std::boolalpha << m_supportsStorageEncryption << "&";
  }

  if(m_storageTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }

  if(m_supportsIopsHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsIops=" << std::boolalpha << m_supportsIops << "&";
  }

  if(m_supportsEnhancedMonitoringHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsEnhancedMonitoring=" << std::boolalpha << m_supportsEnhancedMonitoring << "&";
  }

  if(m_supportsIAMDatabaseAuthenticationHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsIAMDatabaseAuthentication=" << std::boolalpha << m_supportsIAMDatabaseAuthentication << "&";
  }

  if(m_supportsPerformanceInsightsHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsPerformanceInsights=" << std::boolalpha << m_supportsPerformanceInsights << "&";
  }

  if(m_minStorageSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinStorageSize=" << m_minStorageSize << "&";
  }

  if(m_maxStorageSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxStorageSize=" << m_maxStorageSize << "&";
  }

  if(m_minIopsPerDbInstanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinIopsPerDbInstance=" << m_minIopsPerDbInstance << "&";
  }

  if(m_maxIopsPerDbInstanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxIopsPerDbInstance=" << m_maxIopsPerDbInstance << "&";
  }

  if(m_minIopsPerGibHasBeenSet)
  {
        oStream << location << index << locationValue << ".MinIopsPerGib=" << StringUtils::URLEncode(m_minIopsPerGib) << "&";
  }

  if(m_maxIopsPerGibHasBeenSet)
  {
        oStream << location << index << locationValue << ".MaxIopsPerGib=" << StringUtils::URLEncode(m_maxIopsPerGib) << "&";
  }

  if(m_availableProcessorFeaturesHasBeenSet)
  {
      unsigned availableProcessorFeaturesIdx = 1;
      for(auto& item : m_availableProcessorFeatures)
      {
        Aws::StringStream availableProcessorFeaturesSs;
        availableProcessorFeaturesSs << location << index << locationValue << ".AvailableProcessorFeature." << availableProcessorFeaturesIdx++;
        item.OutputToStream(oStream, availableProcessorFeaturesSs.str().c_str());
      }
  }

  if(m_supportedEngineModesHasBeenSet)
  {
      unsigned supportedEngineModesIdx = 1;
      for(auto& item : m_supportedEngineModes)
      {
        oStream << location << index << locationValue << ".SupportedEngineModes.member." << supportedEngineModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_supportsStorageAutoscalingHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsStorageAutoscaling=" << std::boolalpha << m_supportsStorageAutoscaling << "&";
  }

  if(m_supportsKerberosAuthenticationHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsKerberosAuthentication=" << std::boolalpha << m_supportsKerberosAuthentication << "&";
  }

  if(m_outpostCapableHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostCapable=" << std::boolalpha << m_outpostCapable << "&";
  }

  if(m_supportedActivityStreamModesHasBeenSet)
  {
      unsigned supportedActivityStreamModesIdx = 1;
      for(auto& item : m_supportedActivityStreamModes)
      {
        oStream << location << index << locationValue << ".SupportedActivityStreamModes.member." << supportedActivityStreamModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_supportsGlobalDatabasesHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsGlobalDatabases=" << std::boolalpha << m_supportsGlobalDatabases << "&";
  }

  if(m_supportsClustersHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsClusters=" << std::boolalpha << m_supportsClusters << "&";
  }

  if(m_supportedNetworkTypesHasBeenSet)
  {
      unsigned supportedNetworkTypesIdx = 1;
      for(auto& item : m_supportedNetworkTypes)
      {
        oStream << location << index << locationValue << ".SupportedNetworkTypes.member." << supportedNetworkTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_supportsStorageThroughputHasBeenSet)
  {
      oStream << location << index << locationValue << ".SupportsStorageThroughput=" << std::boolalpha << m_supportsStorageThroughput << "&";
  }

  if(m_minStorageThroughputPerDbInstanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinStorageThroughputPerDbInstance=" << m_minStorageThroughputPerDbInstance << "&";
  }

  if(m_maxStorageThroughputPerDbInstanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxStorageThroughputPerDbInstance=" << m_maxStorageThroughputPerDbInstance << "&";
  }

  if(m_minStorageThroughputPerIopsHasBeenSet)
  {
        oStream << location << index << locationValue << ".MinStorageThroughputPerIops=" << StringUtils::URLEncode(m_minStorageThroughputPerIops) << "&";
  }

  if(m_maxStorageThroughputPerIopsHasBeenSet)
  {
        oStream << location << index << locationValue << ".MaxStorageThroughputPerIops=" << StringUtils::URLEncode(m_maxStorageThroughputPerIops) << "&";
  }

}

void OrderableDBInstanceOption::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_engineHasBeenSet)
  {
      oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if(m_engineVersionHasBeenSet)
  {
      oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }
  if(m_licenseModelHasBeenSet)
  {
      oStream << location << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }
  if(m_availabilityZoneGroupHasBeenSet)
  {
      oStream << location << ".AvailabilityZoneGroup=" << StringUtils::URLEncode(m_availabilityZoneGroup.c_str()) << "&";
  }
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        Aws::StringStream availabilityZonesSs;
        availabilityZonesSs << location <<  ".AvailabilityZone." << availabilityZonesIdx++;
        item.OutputToStream(oStream, availabilityZonesSs.str().c_str());
      }
  }
  if(m_multiAZCapableHasBeenSet)
  {
      oStream << location << ".MultiAZCapable=" << std::boolalpha << m_multiAZCapable << "&";
  }
  if(m_readReplicaCapableHasBeenSet)
  {
      oStream << location << ".ReadReplicaCapable=" << std::boolalpha << m_readReplicaCapable << "&";
  }
  if(m_vpcHasBeenSet)
  {
      oStream << location << ".Vpc=" << std::boolalpha << m_vpc << "&";
  }
  if(m_supportsStorageEncryptionHasBeenSet)
  {
      oStream << location << ".SupportsStorageEncryption=" << std::boolalpha << m_supportsStorageEncryption << "&";
  }
  if(m_storageTypeHasBeenSet)
  {
      oStream << location << ".StorageType=" << StringUtils::URLEncode(m_storageType.c_str()) << "&";
  }
  if(m_supportsIopsHasBeenSet)
  {
      oStream << location << ".SupportsIops=" << std::boolalpha << m_supportsIops << "&";
  }
  if(m_supportsEnhancedMonitoringHasBeenSet)
  {
      oStream << location << ".SupportsEnhancedMonitoring=" << std::boolalpha << m_supportsEnhancedMonitoring << "&";
  }
  if(m_supportsIAMDatabaseAuthenticationHasBeenSet)
  {
      oStream << location << ".SupportsIAMDatabaseAuthentication=" << std::boolalpha << m_supportsIAMDatabaseAuthentication << "&";
  }
  if(m_supportsPerformanceInsightsHasBeenSet)
  {
      oStream << location << ".SupportsPerformanceInsights=" << std::boolalpha << m_supportsPerformanceInsights << "&";
  }
  if(m_minStorageSizeHasBeenSet)
  {
      oStream << location << ".MinStorageSize=" << m_minStorageSize << "&";
  }
  if(m_maxStorageSizeHasBeenSet)
  {
      oStream << location << ".MaxStorageSize=" << m_maxStorageSize << "&";
  }
  if(m_minIopsPerDbInstanceHasBeenSet)
  {
      oStream << location << ".MinIopsPerDbInstance=" << m_minIopsPerDbInstance << "&";
  }
  if(m_maxIopsPerDbInstanceHasBeenSet)
  {
      oStream << location << ".MaxIopsPerDbInstance=" << m_maxIopsPerDbInstance << "&";
  }
  if(m_minIopsPerGibHasBeenSet)
  {
        oStream << location << ".MinIopsPerGib=" << StringUtils::URLEncode(m_minIopsPerGib) << "&";
  }
  if(m_maxIopsPerGibHasBeenSet)
  {
        oStream << location << ".MaxIopsPerGib=" << StringUtils::URLEncode(m_maxIopsPerGib) << "&";
  }
  if(m_availableProcessorFeaturesHasBeenSet)
  {
      unsigned availableProcessorFeaturesIdx = 1;
      for(auto& item : m_availableProcessorFeatures)
      {
        Aws::StringStream availableProcessorFeaturesSs;
        availableProcessorFeaturesSs << location <<  ".AvailableProcessorFeature." << availableProcessorFeaturesIdx++;
        item.OutputToStream(oStream, availableProcessorFeaturesSs.str().c_str());
      }
  }
  if(m_supportedEngineModesHasBeenSet)
  {
      unsigned supportedEngineModesIdx = 1;
      for(auto& item : m_supportedEngineModes)
      {
        oStream << location << ".SupportedEngineModes.member." << supportedEngineModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_supportsStorageAutoscalingHasBeenSet)
  {
      oStream << location << ".SupportsStorageAutoscaling=" << std::boolalpha << m_supportsStorageAutoscaling << "&";
  }
  if(m_supportsKerberosAuthenticationHasBeenSet)
  {
      oStream << location << ".SupportsKerberosAuthentication=" << std::boolalpha << m_supportsKerberosAuthentication << "&";
  }
  if(m_outpostCapableHasBeenSet)
  {
      oStream << location << ".OutpostCapable=" << std::boolalpha << m_outpostCapable << "&";
  }
  if(m_supportedActivityStreamModesHasBeenSet)
  {
      unsigned supportedActivityStreamModesIdx = 1;
      for(auto& item : m_supportedActivityStreamModes)
      {
        oStream << location << ".SupportedActivityStreamModes.member." << supportedActivityStreamModesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_supportsGlobalDatabasesHasBeenSet)
  {
      oStream << location << ".SupportsGlobalDatabases=" << std::boolalpha << m_supportsGlobalDatabases << "&";
  }
  if(m_supportsClustersHasBeenSet)
  {
      oStream << location << ".SupportsClusters=" << std::boolalpha << m_supportsClusters << "&";
  }
  if(m_supportedNetworkTypesHasBeenSet)
  {
      unsigned supportedNetworkTypesIdx = 1;
      for(auto& item : m_supportedNetworkTypes)
      {
        oStream << location << ".SupportedNetworkTypes.member." << supportedNetworkTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_supportsStorageThroughputHasBeenSet)
  {
      oStream << location << ".SupportsStorageThroughput=" << std::boolalpha << m_supportsStorageThroughput << "&";
  }
  if(m_minStorageThroughputPerDbInstanceHasBeenSet)
  {
      oStream << location << ".MinStorageThroughputPerDbInstance=" << m_minStorageThroughputPerDbInstance << "&";
  }
  if(m_maxStorageThroughputPerDbInstanceHasBeenSet)
  {
      oStream << location << ".MaxStorageThroughputPerDbInstance=" << m_maxStorageThroughputPerDbInstance << "&";
  }
  if(m_minStorageThroughputPerIopsHasBeenSet)
  {
        oStream << location << ".MinStorageThroughputPerIops=" << StringUtils::URLEncode(m_minStorageThroughputPerIops) << "&";
  }
  if(m_maxStorageThroughputPerIopsHasBeenSet)
  {
        oStream << location << ".MaxStorageThroughputPerIops=" << StringUtils::URLEncode(m_maxStorageThroughputPerIops) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
