/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/AvailabilityZone.h>
#include <aws/rds/model/AvailableProcessorFeature.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains a list of available options for a DB instance.</p> <p>This data type
   * is used as a response element in the
   * <code>DescribeOrderableDBInstanceOptions</code> action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OrderableDBInstanceOption">AWS
   * API Reference</a></p>
   */
  class OrderableDBInstanceOption
  {
  public:
    AWS_RDS_API OrderableDBInstanceOption() = default;
    AWS_RDS_API OrderableDBInstanceOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OrderableDBInstanceOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The engine type of a DB instance.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    OrderableDBInstanceOption& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version of a DB instance.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    OrderableDBInstanceOption& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB instance class for a DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const { return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    template<typename DBInstanceClassT = Aws::String>
    void SetDBInstanceClass(DBInstanceClassT&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::forward<DBInstanceClassT>(value); }
    template<typename DBInstanceClassT = Aws::String>
    OrderableDBInstanceOption& WithDBInstanceClass(DBInstanceClassT&& value) { SetDBInstanceClass(std::forward<DBInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model for a DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const { return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    template<typename LicenseModelT = Aws::String>
    void SetLicenseModel(LicenseModelT&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::forward<LicenseModelT>(value); }
    template<typename LicenseModelT = Aws::String>
    OrderableDBInstanceOption& WithLicenseModel(LicenseModelT&& value) { SetLicenseModel(std::forward<LicenseModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone group for a DB instance.</p>
     */
    inline const Aws::String& GetAvailabilityZoneGroup() const { return m_availabilityZoneGroup; }
    inline bool AvailabilityZoneGroupHasBeenSet() const { return m_availabilityZoneGroupHasBeenSet; }
    template<typename AvailabilityZoneGroupT = Aws::String>
    void SetAvailabilityZoneGroup(AvailabilityZoneGroupT&& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = std::forward<AvailabilityZoneGroupT>(value); }
    template<typename AvailabilityZoneGroupT = Aws::String>
    OrderableDBInstanceOption& WithAvailabilityZoneGroup(AvailabilityZoneGroupT&& value) { SetAvailabilityZoneGroup(std::forward<AvailabilityZoneGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Availability Zones for a DB instance.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<AvailabilityZone>>
    OrderableDBInstanceOption& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = AvailabilityZone>
    OrderableDBInstanceOption& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance is Multi-AZ capable.</p>
     */
    inline bool GetMultiAZCapable() const { return m_multiAZCapable; }
    inline bool MultiAZCapableHasBeenSet() const { return m_multiAZCapableHasBeenSet; }
    inline void SetMultiAZCapable(bool value) { m_multiAZCapableHasBeenSet = true; m_multiAZCapable = value; }
    inline OrderableDBInstanceOption& WithMultiAZCapable(bool value) { SetMultiAZCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance can have a read replica.</p>
     */
    inline bool GetReadReplicaCapable() const { return m_readReplicaCapable; }
    inline bool ReadReplicaCapableHasBeenSet() const { return m_readReplicaCapableHasBeenSet; }
    inline void SetReadReplicaCapable(bool value) { m_readReplicaCapableHasBeenSet = true; m_readReplicaCapable = value; }
    inline OrderableDBInstanceOption& WithReadReplicaCapable(bool value) { SetReadReplicaCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance is in a VPC.</p>
     */
    inline bool GetVpc() const { return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(bool value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline OrderableDBInstanceOption& WithVpc(bool value) { SetVpc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports encrypted storage.</p>
     */
    inline bool GetSupportsStorageEncryption() const { return m_supportsStorageEncryption; }
    inline bool SupportsStorageEncryptionHasBeenSet() const { return m_supportsStorageEncryptionHasBeenSet; }
    inline void SetSupportsStorageEncryption(bool value) { m_supportsStorageEncryptionHasBeenSet = true; m_supportsStorageEncryption = value; }
    inline OrderableDBInstanceOption& WithSupportsStorageEncryption(bool value) { SetSupportsStorageEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type for a DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    OrderableDBInstanceOption& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports provisioned IOPS.</p>
     */
    inline bool GetSupportsIops() const { return m_supportsIops; }
    inline bool SupportsIopsHasBeenSet() const { return m_supportsIopsHasBeenSet; }
    inline void SetSupportsIops(bool value) { m_supportsIopsHasBeenSet = true; m_supportsIops = value; }
    inline OrderableDBInstanceOption& WithSupportsIops(bool value) { SetSupportsIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports Enhanced Monitoring at intervals
     * from 1 to 60 seconds.</p>
     */
    inline bool GetSupportsEnhancedMonitoring() const { return m_supportsEnhancedMonitoring; }
    inline bool SupportsEnhancedMonitoringHasBeenSet() const { return m_supportsEnhancedMonitoringHasBeenSet; }
    inline void SetSupportsEnhancedMonitoring(bool value) { m_supportsEnhancedMonitoringHasBeenSet = true; m_supportsEnhancedMonitoring = value; }
    inline OrderableDBInstanceOption& WithSupportsEnhancedMonitoring(bool value) { SetSupportsEnhancedMonitoring(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports IAM database authentication.</p>
     */
    inline bool GetSupportsIAMDatabaseAuthentication() const { return m_supportsIAMDatabaseAuthentication; }
    inline bool SupportsIAMDatabaseAuthenticationHasBeenSet() const { return m_supportsIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetSupportsIAMDatabaseAuthentication(bool value) { m_supportsIAMDatabaseAuthenticationHasBeenSet = true; m_supportsIAMDatabaseAuthentication = value; }
    inline OrderableDBInstanceOption& WithSupportsIAMDatabaseAuthentication(bool value) { SetSupportsIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports Performance Insights.</p>
     */
    inline bool GetSupportsPerformanceInsights() const { return m_supportsPerformanceInsights; }
    inline bool SupportsPerformanceInsightsHasBeenSet() const { return m_supportsPerformanceInsightsHasBeenSet; }
    inline void SetSupportsPerformanceInsights(bool value) { m_supportsPerformanceInsightsHasBeenSet = true; m_supportsPerformanceInsights = value; }
    inline OrderableDBInstanceOption& WithSupportsPerformanceInsights(bool value) { SetSupportsPerformanceInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum storage size for a DB instance.</p>
     */
    inline int GetMinStorageSize() const { return m_minStorageSize; }
    inline bool MinStorageSizeHasBeenSet() const { return m_minStorageSizeHasBeenSet; }
    inline void SetMinStorageSize(int value) { m_minStorageSizeHasBeenSet = true; m_minStorageSize = value; }
    inline OrderableDBInstanceOption& WithMinStorageSize(int value) { SetMinStorageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum storage size for a DB instance.</p>
     */
    inline int GetMaxStorageSize() const { return m_maxStorageSize; }
    inline bool MaxStorageSizeHasBeenSet() const { return m_maxStorageSizeHasBeenSet; }
    inline void SetMaxStorageSize(int value) { m_maxStorageSizeHasBeenSet = true; m_maxStorageSize = value; }
    inline OrderableDBInstanceOption& WithMaxStorageSize(int value) { SetMaxStorageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum total provisioned IOPS for a DB instance.</p>
     */
    inline int GetMinIopsPerDbInstance() const { return m_minIopsPerDbInstance; }
    inline bool MinIopsPerDbInstanceHasBeenSet() const { return m_minIopsPerDbInstanceHasBeenSet; }
    inline void SetMinIopsPerDbInstance(int value) { m_minIopsPerDbInstanceHasBeenSet = true; m_minIopsPerDbInstance = value; }
    inline OrderableDBInstanceOption& WithMinIopsPerDbInstance(int value) { SetMinIopsPerDbInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum total provisioned IOPS for a DB instance.</p>
     */
    inline int GetMaxIopsPerDbInstance() const { return m_maxIopsPerDbInstance; }
    inline bool MaxIopsPerDbInstanceHasBeenSet() const { return m_maxIopsPerDbInstanceHasBeenSet; }
    inline void SetMaxIopsPerDbInstance(int value) { m_maxIopsPerDbInstanceHasBeenSet = true; m_maxIopsPerDbInstance = value; }
    inline OrderableDBInstanceOption& WithMaxIopsPerDbInstance(int value) { SetMaxIopsPerDbInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline double GetMinIopsPerGib() const { return m_minIopsPerGib; }
    inline bool MinIopsPerGibHasBeenSet() const { return m_minIopsPerGibHasBeenSet; }
    inline void SetMinIopsPerGib(double value) { m_minIopsPerGibHasBeenSet = true; m_minIopsPerGib = value; }
    inline OrderableDBInstanceOption& WithMinIopsPerGib(double value) { SetMinIopsPerGib(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline double GetMaxIopsPerGib() const { return m_maxIopsPerGib; }
    inline bool MaxIopsPerGibHasBeenSet() const { return m_maxIopsPerGibHasBeenSet; }
    inline void SetMaxIopsPerGib(double value) { m_maxIopsPerGibHasBeenSet = true; m_maxIopsPerGib = value; }
    inline OrderableDBInstanceOption& WithMaxIopsPerGib(double value) { SetMaxIopsPerGib(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the available processor features for the DB instance class of a DB
     * instance.</p>
     */
    inline const Aws::Vector<AvailableProcessorFeature>& GetAvailableProcessorFeatures() const { return m_availableProcessorFeatures; }
    inline bool AvailableProcessorFeaturesHasBeenSet() const { return m_availableProcessorFeaturesHasBeenSet; }
    template<typename AvailableProcessorFeaturesT = Aws::Vector<AvailableProcessorFeature>>
    void SetAvailableProcessorFeatures(AvailableProcessorFeaturesT&& value) { m_availableProcessorFeaturesHasBeenSet = true; m_availableProcessorFeatures = std::forward<AvailableProcessorFeaturesT>(value); }
    template<typename AvailableProcessorFeaturesT = Aws::Vector<AvailableProcessorFeature>>
    OrderableDBInstanceOption& WithAvailableProcessorFeatures(AvailableProcessorFeaturesT&& value) { SetAvailableProcessorFeatures(std::forward<AvailableProcessorFeaturesT>(value)); return *this;}
    template<typename AvailableProcessorFeaturesT = AvailableProcessorFeature>
    OrderableDBInstanceOption& AddAvailableProcessorFeatures(AvailableProcessorFeaturesT&& value) { m_availableProcessorFeaturesHasBeenSet = true; m_availableProcessorFeatures.emplace_back(std::forward<AvailableProcessorFeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineModes() const { return m_supportedEngineModes; }
    inline bool SupportedEngineModesHasBeenSet() const { return m_supportedEngineModesHasBeenSet; }
    template<typename SupportedEngineModesT = Aws::Vector<Aws::String>>
    void SetSupportedEngineModes(SupportedEngineModesT&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = std::forward<SupportedEngineModesT>(value); }
    template<typename SupportedEngineModesT = Aws::Vector<Aws::String>>
    OrderableDBInstanceOption& WithSupportedEngineModes(SupportedEngineModesT&& value) { SetSupportedEngineModes(std::forward<SupportedEngineModesT>(value)); return *this;}
    template<typename SupportedEngineModesT = Aws::String>
    OrderableDBInstanceOption& AddSupportedEngineModes(SupportedEngineModesT&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.emplace_back(std::forward<SupportedEngineModesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon RDS can automatically scale storage for DB instances
     * that use the specified DB instance class.</p>
     */
    inline bool GetSupportsStorageAutoscaling() const { return m_supportsStorageAutoscaling; }
    inline bool SupportsStorageAutoscalingHasBeenSet() const { return m_supportsStorageAutoscalingHasBeenSet; }
    inline void SetSupportsStorageAutoscaling(bool value) { m_supportsStorageAutoscalingHasBeenSet = true; m_supportsStorageAutoscaling = value; }
    inline OrderableDBInstanceOption& WithSupportsStorageAutoscaling(bool value) { SetSupportsStorageAutoscaling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports Kerberos Authentication.</p>
     */
    inline bool GetSupportsKerberosAuthentication() const { return m_supportsKerberosAuthentication; }
    inline bool SupportsKerberosAuthenticationHasBeenSet() const { return m_supportsKerberosAuthenticationHasBeenSet; }
    inline void SetSupportsKerberosAuthentication(bool value) { m_supportsKerberosAuthenticationHasBeenSet = true; m_supportsKerberosAuthentication = value; }
    inline OrderableDBInstanceOption& WithSupportsKerberosAuthentication(bool value) { SetSupportsKerberosAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports RDS on Outposts.</p> <p>For more
     * information about RDS on Outposts, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/rds-on-outposts.html">Amazon
     * RDS on Amazon Web Services Outposts</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline bool GetOutpostCapable() const { return m_outpostCapable; }
    inline bool OutpostCapableHasBeenSet() const { return m_outpostCapableHasBeenSet; }
    inline void SetOutpostCapable(bool value) { m_outpostCapableHasBeenSet = true; m_outpostCapable = value; }
    inline OrderableDBInstanceOption& WithOutpostCapable(bool value) { SetOutpostCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of supported modes for Database Activity Streams. Aurora PostgreSQL
     * returns the value <code>[sync, async]</code>. Aurora MySQL and RDS for Oracle
     * return <code>[async]</code> only. If Database Activity Streams isn't supported,
     * the return value is an empty list.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedActivityStreamModes() const { return m_supportedActivityStreamModes; }
    inline bool SupportedActivityStreamModesHasBeenSet() const { return m_supportedActivityStreamModesHasBeenSet; }
    template<typename SupportedActivityStreamModesT = Aws::Vector<Aws::String>>
    void SetSupportedActivityStreamModes(SupportedActivityStreamModesT&& value) { m_supportedActivityStreamModesHasBeenSet = true; m_supportedActivityStreamModes = std::forward<SupportedActivityStreamModesT>(value); }
    template<typename SupportedActivityStreamModesT = Aws::Vector<Aws::String>>
    OrderableDBInstanceOption& WithSupportedActivityStreamModes(SupportedActivityStreamModesT&& value) { SetSupportedActivityStreamModes(std::forward<SupportedActivityStreamModesT>(value)); return *this;}
    template<typename SupportedActivityStreamModesT = Aws::String>
    OrderableDBInstanceOption& AddSupportedActivityStreamModes(SupportedActivityStreamModesT&& value) { m_supportedActivityStreamModesHasBeenSet = true; m_supportedActivityStreamModes.emplace_back(std::forward<SupportedActivityStreamModesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can use Aurora global databases with a specific
     * combination of other DB engine attributes.</p>
     */
    inline bool GetSupportsGlobalDatabases() const { return m_supportsGlobalDatabases; }
    inline bool SupportsGlobalDatabasesHasBeenSet() const { return m_supportsGlobalDatabasesHasBeenSet; }
    inline void SetSupportsGlobalDatabases(bool value) { m_supportsGlobalDatabasesHasBeenSet = true; m_supportsGlobalDatabases = value; }
    inline OrderableDBInstanceOption& WithSupportsGlobalDatabases(bool value) { SetSupportsGlobalDatabases(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DB instances can be configured as a Multi-AZ DB
     * cluster.</p> <p>For more information on Multi-AZ DB clusters, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/multi-az-db-clusters-concepts.html">
     * Multi-AZ deployments with two readable standby DB instances</a> in the <i>Amazon
     * RDS User Guide.</i> </p>
     */
    inline bool GetSupportsClusters() const { return m_supportsClusters; }
    inline bool SupportsClustersHasBeenSet() const { return m_supportsClustersHasBeenSet; }
    inline void SetSupportsClusters(bool value) { m_supportsClustersHasBeenSet = true; m_supportsClusters = value; }
    inline OrderableDBInstanceOption& WithSupportsClusters(bool value) { SetSupportsClusters(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network types supported by the DB instance (<code>IPV4</code> or
     * <code>DUAL</code>).</p> <p>A DB instance can support only the IPv4 protocol or
     * the IPv4 and the IPv6 protocols (<code>DUAL</code>).</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_VPC.WorkingWithRDSInstanceinaVPC.html">
     * Working with a DB instance in a VPC</a> in the <i>Amazon RDS User Guide.</i>
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedNetworkTypes() const { return m_supportedNetworkTypes; }
    inline bool SupportedNetworkTypesHasBeenSet() const { return m_supportedNetworkTypesHasBeenSet; }
    template<typename SupportedNetworkTypesT = Aws::Vector<Aws::String>>
    void SetSupportedNetworkTypes(SupportedNetworkTypesT&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = std::forward<SupportedNetworkTypesT>(value); }
    template<typename SupportedNetworkTypesT = Aws::Vector<Aws::String>>
    OrderableDBInstanceOption& WithSupportedNetworkTypes(SupportedNetworkTypesT&& value) { SetSupportedNetworkTypes(std::forward<SupportedNetworkTypesT>(value)); return *this;}
    template<typename SupportedNetworkTypesT = Aws::String>
    OrderableDBInstanceOption& AddSupportedNetworkTypes(SupportedNetworkTypesT&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.emplace_back(std::forward<SupportedNetworkTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports storage throughput.</p>
     */
    inline bool GetSupportsStorageThroughput() const { return m_supportsStorageThroughput; }
    inline bool SupportsStorageThroughputHasBeenSet() const { return m_supportsStorageThroughputHasBeenSet; }
    inline void SetSupportsStorageThroughput(bool value) { m_supportsStorageThroughputHasBeenSet = true; m_supportsStorageThroughput = value; }
    inline OrderableDBInstanceOption& WithSupportsStorageThroughput(bool value) { SetSupportsStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum storage throughput for a DB instance.</p>
     */
    inline int GetMinStorageThroughputPerDbInstance() const { return m_minStorageThroughputPerDbInstance; }
    inline bool MinStorageThroughputPerDbInstanceHasBeenSet() const { return m_minStorageThroughputPerDbInstanceHasBeenSet; }
    inline void SetMinStorageThroughputPerDbInstance(int value) { m_minStorageThroughputPerDbInstanceHasBeenSet = true; m_minStorageThroughputPerDbInstance = value; }
    inline OrderableDBInstanceOption& WithMinStorageThroughputPerDbInstance(int value) { SetMinStorageThroughputPerDbInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum storage throughput for a DB instance.</p>
     */
    inline int GetMaxStorageThroughputPerDbInstance() const { return m_maxStorageThroughputPerDbInstance; }
    inline bool MaxStorageThroughputPerDbInstanceHasBeenSet() const { return m_maxStorageThroughputPerDbInstanceHasBeenSet; }
    inline void SetMaxStorageThroughputPerDbInstance(int value) { m_maxStorageThroughputPerDbInstanceHasBeenSet = true; m_maxStorageThroughputPerDbInstance = value; }
    inline OrderableDBInstanceOption& WithMaxStorageThroughputPerDbInstance(int value) { SetMaxStorageThroughputPerDbInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum storage throughput to provisioned IOPS ratio for a DB instance.</p>
     */
    inline double GetMinStorageThroughputPerIops() const { return m_minStorageThroughputPerIops; }
    inline bool MinStorageThroughputPerIopsHasBeenSet() const { return m_minStorageThroughputPerIopsHasBeenSet; }
    inline void SetMinStorageThroughputPerIops(double value) { m_minStorageThroughputPerIopsHasBeenSet = true; m_minStorageThroughputPerIops = value; }
    inline OrderableDBInstanceOption& WithMinStorageThroughputPerIops(double value) { SetMinStorageThroughputPerIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum storage throughput to provisioned IOPS ratio for a DB instance.</p>
     */
    inline double GetMaxStorageThroughputPerIops() const { return m_maxStorageThroughputPerIops; }
    inline bool MaxStorageThroughputPerIopsHasBeenSet() const { return m_maxStorageThroughputPerIopsHasBeenSet; }
    inline void SetMaxStorageThroughputPerIops(double value) { m_maxStorageThroughputPerIopsHasBeenSet = true; m_maxStorageThroughputPerIops = value; }
    inline OrderableDBInstanceOption& WithMaxStorageThroughputPerIops(double value) { SetMaxStorageThroughputPerIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports using a dedicated log volume
     * (DLV).</p>
     */
    inline bool GetSupportsDedicatedLogVolume() const { return m_supportsDedicatedLogVolume; }
    inline bool SupportsDedicatedLogVolumeHasBeenSet() const { return m_supportsDedicatedLogVolumeHasBeenSet; }
    inline void SetSupportsDedicatedLogVolume(bool value) { m_supportsDedicatedLogVolumeHasBeenSet = true; m_supportsDedicatedLogVolume = value; }
    inline OrderableDBInstanceOption& WithSupportsDedicatedLogVolume(bool value) { SetSupportsDedicatedLogVolume(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports HTTP endpoints.</p>
     */
    inline bool GetSupportsHttpEndpoint() const { return m_supportsHttpEndpoint; }
    inline bool SupportsHttpEndpointHasBeenSet() const { return m_supportsHttpEndpointHasBeenSet; }
    inline void SetSupportsHttpEndpoint(bool value) { m_supportsHttpEndpointHasBeenSet = true; m_supportsHttpEndpoint = value; }
    inline OrderableDBInstanceOption& WithSupportsHttpEndpoint(bool value) { SetSupportsHttpEndpoint(value); return *this;}
    ///@}
  private:

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_licenseModel;
    bool m_licenseModelHasBeenSet = false;

    Aws::String m_availabilityZoneGroup;
    bool m_availabilityZoneGroupHasBeenSet = false;

    Aws::Vector<AvailabilityZone> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    bool m_multiAZCapable{false};
    bool m_multiAZCapableHasBeenSet = false;

    bool m_readReplicaCapable{false};
    bool m_readReplicaCapableHasBeenSet = false;

    bool m_vpc{false};
    bool m_vpcHasBeenSet = false;

    bool m_supportsStorageEncryption{false};
    bool m_supportsStorageEncryptionHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    bool m_supportsIops{false};
    bool m_supportsIopsHasBeenSet = false;

    bool m_supportsEnhancedMonitoring{false};
    bool m_supportsEnhancedMonitoringHasBeenSet = false;

    bool m_supportsIAMDatabaseAuthentication{false};
    bool m_supportsIAMDatabaseAuthenticationHasBeenSet = false;

    bool m_supportsPerformanceInsights{false};
    bool m_supportsPerformanceInsightsHasBeenSet = false;

    int m_minStorageSize{0};
    bool m_minStorageSizeHasBeenSet = false;

    int m_maxStorageSize{0};
    bool m_maxStorageSizeHasBeenSet = false;

    int m_minIopsPerDbInstance{0};
    bool m_minIopsPerDbInstanceHasBeenSet = false;

    int m_maxIopsPerDbInstance{0};
    bool m_maxIopsPerDbInstanceHasBeenSet = false;

    double m_minIopsPerGib{0.0};
    bool m_minIopsPerGibHasBeenSet = false;

    double m_maxIopsPerGib{0.0};
    bool m_maxIopsPerGibHasBeenSet = false;

    Aws::Vector<AvailableProcessorFeature> m_availableProcessorFeatures;
    bool m_availableProcessorFeaturesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedEngineModes;
    bool m_supportedEngineModesHasBeenSet = false;

    bool m_supportsStorageAutoscaling{false};
    bool m_supportsStorageAutoscalingHasBeenSet = false;

    bool m_supportsKerberosAuthentication{false};
    bool m_supportsKerberosAuthenticationHasBeenSet = false;

    bool m_outpostCapable{false};
    bool m_outpostCapableHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedActivityStreamModes;
    bool m_supportedActivityStreamModesHasBeenSet = false;

    bool m_supportsGlobalDatabases{false};
    bool m_supportsGlobalDatabasesHasBeenSet = false;

    bool m_supportsClusters{false};
    bool m_supportsClustersHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedNetworkTypes;
    bool m_supportedNetworkTypesHasBeenSet = false;

    bool m_supportsStorageThroughput{false};
    bool m_supportsStorageThroughputHasBeenSet = false;

    int m_minStorageThroughputPerDbInstance{0};
    bool m_minStorageThroughputPerDbInstanceHasBeenSet = false;

    int m_maxStorageThroughputPerDbInstance{0};
    bool m_maxStorageThroughputPerDbInstanceHasBeenSet = false;

    double m_minStorageThroughputPerIops{0.0};
    bool m_minStorageThroughputPerIopsHasBeenSet = false;

    double m_maxStorageThroughputPerIops{0.0};
    bool m_maxStorageThroughputPerIopsHasBeenSet = false;

    bool m_supportsDedicatedLogVolume{false};
    bool m_supportsDedicatedLogVolumeHasBeenSet = false;

    bool m_supportsHttpEndpoint{false};
    bool m_supportsHttpEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
