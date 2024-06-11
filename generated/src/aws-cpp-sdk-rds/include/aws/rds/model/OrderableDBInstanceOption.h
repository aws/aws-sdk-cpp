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
    AWS_RDS_API OrderableDBInstanceOption();
    AWS_RDS_API OrderableDBInstanceOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OrderableDBInstanceOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The engine type of a DB instance.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline OrderableDBInstanceOption& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline OrderableDBInstanceOption& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline OrderableDBInstanceOption& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The engine version of a DB instance.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline OrderableDBInstanceOption& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline OrderableDBInstanceOption& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline OrderableDBInstanceOption& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB instance class for a DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }
    inline OrderableDBInstanceOption& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}
    inline OrderableDBInstanceOption& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}
    inline OrderableDBInstanceOption& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The license model for a DB instance.</p>
     */
    inline const Aws::String& GetLicenseModel() const{ return m_licenseModel; }
    inline bool LicenseModelHasBeenSet() const { return m_licenseModelHasBeenSet; }
    inline void SetLicenseModel(const Aws::String& value) { m_licenseModelHasBeenSet = true; m_licenseModel = value; }
    inline void SetLicenseModel(Aws::String&& value) { m_licenseModelHasBeenSet = true; m_licenseModel = std::move(value); }
    inline void SetLicenseModel(const char* value) { m_licenseModelHasBeenSet = true; m_licenseModel.assign(value); }
    inline OrderableDBInstanceOption& WithLicenseModel(const Aws::String& value) { SetLicenseModel(value); return *this;}
    inline OrderableDBInstanceOption& WithLicenseModel(Aws::String&& value) { SetLicenseModel(std::move(value)); return *this;}
    inline OrderableDBInstanceOption& WithLicenseModel(const char* value) { SetLicenseModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone group for a DB instance.</p>
     */
    inline const Aws::String& GetAvailabilityZoneGroup() const{ return m_availabilityZoneGroup; }
    inline bool AvailabilityZoneGroupHasBeenSet() const { return m_availabilityZoneGroupHasBeenSet; }
    inline void SetAvailabilityZoneGroup(const Aws::String& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = value; }
    inline void SetAvailabilityZoneGroup(Aws::String&& value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup = std::move(value); }
    inline void SetAvailabilityZoneGroup(const char* value) { m_availabilityZoneGroupHasBeenSet = true; m_availabilityZoneGroup.assign(value); }
    inline OrderableDBInstanceOption& WithAvailabilityZoneGroup(const Aws::String& value) { SetAvailabilityZoneGroup(value); return *this;}
    inline OrderableDBInstanceOption& WithAvailabilityZoneGroup(Aws::String&& value) { SetAvailabilityZoneGroup(std::move(value)); return *this;}
    inline OrderableDBInstanceOption& WithAvailabilityZoneGroup(const char* value) { SetAvailabilityZoneGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Availability Zones for a DB instance.</p>
     */
    inline const Aws::Vector<AvailabilityZone>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline OrderableDBInstanceOption& WithAvailabilityZones(const Aws::Vector<AvailabilityZone>& value) { SetAvailabilityZones(value); return *this;}
    inline OrderableDBInstanceOption& WithAvailabilityZones(Aws::Vector<AvailabilityZone>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline OrderableDBInstanceOption& AddAvailabilityZones(const AvailabilityZone& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline OrderableDBInstanceOption& AddAvailabilityZones(AvailabilityZone&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance is Multi-AZ capable.</p>
     */
    inline bool GetMultiAZCapable() const{ return m_multiAZCapable; }
    inline bool MultiAZCapableHasBeenSet() const { return m_multiAZCapableHasBeenSet; }
    inline void SetMultiAZCapable(bool value) { m_multiAZCapableHasBeenSet = true; m_multiAZCapable = value; }
    inline OrderableDBInstanceOption& WithMultiAZCapable(bool value) { SetMultiAZCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance can have a read replica.</p>
     */
    inline bool GetReadReplicaCapable() const{ return m_readReplicaCapable; }
    inline bool ReadReplicaCapableHasBeenSet() const { return m_readReplicaCapableHasBeenSet; }
    inline void SetReadReplicaCapable(bool value) { m_readReplicaCapableHasBeenSet = true; m_readReplicaCapable = value; }
    inline OrderableDBInstanceOption& WithReadReplicaCapable(bool value) { SetReadReplicaCapable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance is in a VPC.</p>
     */
    inline bool GetVpc() const{ return m_vpc; }
    inline bool VpcHasBeenSet() const { return m_vpcHasBeenSet; }
    inline void SetVpc(bool value) { m_vpcHasBeenSet = true; m_vpc = value; }
    inline OrderableDBInstanceOption& WithVpc(bool value) { SetVpc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports encrypted storage.</p>
     */
    inline bool GetSupportsStorageEncryption() const{ return m_supportsStorageEncryption; }
    inline bool SupportsStorageEncryptionHasBeenSet() const { return m_supportsStorageEncryptionHasBeenSet; }
    inline void SetSupportsStorageEncryption(bool value) { m_supportsStorageEncryptionHasBeenSet = true; m_supportsStorageEncryption = value; }
    inline OrderableDBInstanceOption& WithSupportsStorageEncryption(bool value) { SetSupportsStorageEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage type for a DB instance.</p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }
    inline OrderableDBInstanceOption& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}
    inline OrderableDBInstanceOption& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}
    inline OrderableDBInstanceOption& WithStorageType(const char* value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports provisioned IOPS.</p>
     */
    inline bool GetSupportsIops() const{ return m_supportsIops; }
    inline bool SupportsIopsHasBeenSet() const { return m_supportsIopsHasBeenSet; }
    inline void SetSupportsIops(bool value) { m_supportsIopsHasBeenSet = true; m_supportsIops = value; }
    inline OrderableDBInstanceOption& WithSupportsIops(bool value) { SetSupportsIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports Enhanced Monitoring at intervals
     * from 1 to 60 seconds.</p>
     */
    inline bool GetSupportsEnhancedMonitoring() const{ return m_supportsEnhancedMonitoring; }
    inline bool SupportsEnhancedMonitoringHasBeenSet() const { return m_supportsEnhancedMonitoringHasBeenSet; }
    inline void SetSupportsEnhancedMonitoring(bool value) { m_supportsEnhancedMonitoringHasBeenSet = true; m_supportsEnhancedMonitoring = value; }
    inline OrderableDBInstanceOption& WithSupportsEnhancedMonitoring(bool value) { SetSupportsEnhancedMonitoring(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports IAM database authentication.</p>
     */
    inline bool GetSupportsIAMDatabaseAuthentication() const{ return m_supportsIAMDatabaseAuthentication; }
    inline bool SupportsIAMDatabaseAuthenticationHasBeenSet() const { return m_supportsIAMDatabaseAuthenticationHasBeenSet; }
    inline void SetSupportsIAMDatabaseAuthentication(bool value) { m_supportsIAMDatabaseAuthenticationHasBeenSet = true; m_supportsIAMDatabaseAuthentication = value; }
    inline OrderableDBInstanceOption& WithSupportsIAMDatabaseAuthentication(bool value) { SetSupportsIAMDatabaseAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports Performance Insights.</p>
     */
    inline bool GetSupportsPerformanceInsights() const{ return m_supportsPerformanceInsights; }
    inline bool SupportsPerformanceInsightsHasBeenSet() const { return m_supportsPerformanceInsightsHasBeenSet; }
    inline void SetSupportsPerformanceInsights(bool value) { m_supportsPerformanceInsightsHasBeenSet = true; m_supportsPerformanceInsights = value; }
    inline OrderableDBInstanceOption& WithSupportsPerformanceInsights(bool value) { SetSupportsPerformanceInsights(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum storage size for a DB instance.</p>
     */
    inline int GetMinStorageSize() const{ return m_minStorageSize; }
    inline bool MinStorageSizeHasBeenSet() const { return m_minStorageSizeHasBeenSet; }
    inline void SetMinStorageSize(int value) { m_minStorageSizeHasBeenSet = true; m_minStorageSize = value; }
    inline OrderableDBInstanceOption& WithMinStorageSize(int value) { SetMinStorageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum storage size for a DB instance.</p>
     */
    inline int GetMaxStorageSize() const{ return m_maxStorageSize; }
    inline bool MaxStorageSizeHasBeenSet() const { return m_maxStorageSizeHasBeenSet; }
    inline void SetMaxStorageSize(int value) { m_maxStorageSizeHasBeenSet = true; m_maxStorageSize = value; }
    inline OrderableDBInstanceOption& WithMaxStorageSize(int value) { SetMaxStorageSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum total provisioned IOPS for a DB instance.</p>
     */
    inline int GetMinIopsPerDbInstance() const{ return m_minIopsPerDbInstance; }
    inline bool MinIopsPerDbInstanceHasBeenSet() const { return m_minIopsPerDbInstanceHasBeenSet; }
    inline void SetMinIopsPerDbInstance(int value) { m_minIopsPerDbInstanceHasBeenSet = true; m_minIopsPerDbInstance = value; }
    inline OrderableDBInstanceOption& WithMinIopsPerDbInstance(int value) { SetMinIopsPerDbInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum total provisioned IOPS for a DB instance.</p>
     */
    inline int GetMaxIopsPerDbInstance() const{ return m_maxIopsPerDbInstance; }
    inline bool MaxIopsPerDbInstanceHasBeenSet() const { return m_maxIopsPerDbInstanceHasBeenSet; }
    inline void SetMaxIopsPerDbInstance(int value) { m_maxIopsPerDbInstanceHasBeenSet = true; m_maxIopsPerDbInstance = value; }
    inline OrderableDBInstanceOption& WithMaxIopsPerDbInstance(int value) { SetMaxIopsPerDbInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline double GetMinIopsPerGib() const{ return m_minIopsPerGib; }
    inline bool MinIopsPerGibHasBeenSet() const { return m_minIopsPerGibHasBeenSet; }
    inline void SetMinIopsPerGib(double value) { m_minIopsPerGibHasBeenSet = true; m_minIopsPerGib = value; }
    inline OrderableDBInstanceOption& WithMinIopsPerGib(double value) { SetMinIopsPerGib(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum provisioned IOPS per GiB for a DB instance.</p>
     */
    inline double GetMaxIopsPerGib() const{ return m_maxIopsPerGib; }
    inline bool MaxIopsPerGibHasBeenSet() const { return m_maxIopsPerGibHasBeenSet; }
    inline void SetMaxIopsPerGib(double value) { m_maxIopsPerGibHasBeenSet = true; m_maxIopsPerGib = value; }
    inline OrderableDBInstanceOption& WithMaxIopsPerGib(double value) { SetMaxIopsPerGib(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the available processor features for the DB instance class of a DB
     * instance.</p>
     */
    inline const Aws::Vector<AvailableProcessorFeature>& GetAvailableProcessorFeatures() const{ return m_availableProcessorFeatures; }
    inline bool AvailableProcessorFeaturesHasBeenSet() const { return m_availableProcessorFeaturesHasBeenSet; }
    inline void SetAvailableProcessorFeatures(const Aws::Vector<AvailableProcessorFeature>& value) { m_availableProcessorFeaturesHasBeenSet = true; m_availableProcessorFeatures = value; }
    inline void SetAvailableProcessorFeatures(Aws::Vector<AvailableProcessorFeature>&& value) { m_availableProcessorFeaturesHasBeenSet = true; m_availableProcessorFeatures = std::move(value); }
    inline OrderableDBInstanceOption& WithAvailableProcessorFeatures(const Aws::Vector<AvailableProcessorFeature>& value) { SetAvailableProcessorFeatures(value); return *this;}
    inline OrderableDBInstanceOption& WithAvailableProcessorFeatures(Aws::Vector<AvailableProcessorFeature>&& value) { SetAvailableProcessorFeatures(std::move(value)); return *this;}
    inline OrderableDBInstanceOption& AddAvailableProcessorFeatures(const AvailableProcessorFeature& value) { m_availableProcessorFeaturesHasBeenSet = true; m_availableProcessorFeatures.push_back(value); return *this; }
    inline OrderableDBInstanceOption& AddAvailableProcessorFeatures(AvailableProcessorFeature&& value) { m_availableProcessorFeaturesHasBeenSet = true; m_availableProcessorFeatures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the supported DB engine modes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedEngineModes() const{ return m_supportedEngineModes; }
    inline bool SupportedEngineModesHasBeenSet() const { return m_supportedEngineModesHasBeenSet; }
    inline void SetSupportedEngineModes(const Aws::Vector<Aws::String>& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = value; }
    inline void SetSupportedEngineModes(Aws::Vector<Aws::String>&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes = std::move(value); }
    inline OrderableDBInstanceOption& WithSupportedEngineModes(const Aws::Vector<Aws::String>& value) { SetSupportedEngineModes(value); return *this;}
    inline OrderableDBInstanceOption& WithSupportedEngineModes(Aws::Vector<Aws::String>&& value) { SetSupportedEngineModes(std::move(value)); return *this;}
    inline OrderableDBInstanceOption& AddSupportedEngineModes(const Aws::String& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }
    inline OrderableDBInstanceOption& AddSupportedEngineModes(Aws::String&& value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(std::move(value)); return *this; }
    inline OrderableDBInstanceOption& AddSupportedEngineModes(const char* value) { m_supportedEngineModesHasBeenSet = true; m_supportedEngineModes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon RDS can automatically scale storage for DB instances
     * that use the specified DB instance class.</p>
     */
    inline bool GetSupportsStorageAutoscaling() const{ return m_supportsStorageAutoscaling; }
    inline bool SupportsStorageAutoscalingHasBeenSet() const { return m_supportsStorageAutoscalingHasBeenSet; }
    inline void SetSupportsStorageAutoscaling(bool value) { m_supportsStorageAutoscalingHasBeenSet = true; m_supportsStorageAutoscaling = value; }
    inline OrderableDBInstanceOption& WithSupportsStorageAutoscaling(bool value) { SetSupportsStorageAutoscaling(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports Kerberos Authentication.</p>
     */
    inline bool GetSupportsKerberosAuthentication() const{ return m_supportsKerberosAuthentication; }
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
    inline bool GetOutpostCapable() const{ return m_outpostCapable; }
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
    inline const Aws::Vector<Aws::String>& GetSupportedActivityStreamModes() const{ return m_supportedActivityStreamModes; }
    inline bool SupportedActivityStreamModesHasBeenSet() const { return m_supportedActivityStreamModesHasBeenSet; }
    inline void SetSupportedActivityStreamModes(const Aws::Vector<Aws::String>& value) { m_supportedActivityStreamModesHasBeenSet = true; m_supportedActivityStreamModes = value; }
    inline void SetSupportedActivityStreamModes(Aws::Vector<Aws::String>&& value) { m_supportedActivityStreamModesHasBeenSet = true; m_supportedActivityStreamModes = std::move(value); }
    inline OrderableDBInstanceOption& WithSupportedActivityStreamModes(const Aws::Vector<Aws::String>& value) { SetSupportedActivityStreamModes(value); return *this;}
    inline OrderableDBInstanceOption& WithSupportedActivityStreamModes(Aws::Vector<Aws::String>&& value) { SetSupportedActivityStreamModes(std::move(value)); return *this;}
    inline OrderableDBInstanceOption& AddSupportedActivityStreamModes(const Aws::String& value) { m_supportedActivityStreamModesHasBeenSet = true; m_supportedActivityStreamModes.push_back(value); return *this; }
    inline OrderableDBInstanceOption& AddSupportedActivityStreamModes(Aws::String&& value) { m_supportedActivityStreamModesHasBeenSet = true; m_supportedActivityStreamModes.push_back(std::move(value)); return *this; }
    inline OrderableDBInstanceOption& AddSupportedActivityStreamModes(const char* value) { m_supportedActivityStreamModesHasBeenSet = true; m_supportedActivityStreamModes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether you can use Aurora global databases with a specific
     * combination of other DB engine attributes.</p>
     */
    inline bool GetSupportsGlobalDatabases() const{ return m_supportsGlobalDatabases; }
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
    inline bool GetSupportsClusters() const{ return m_supportsClusters; }
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
    inline const Aws::Vector<Aws::String>& GetSupportedNetworkTypes() const{ return m_supportedNetworkTypes; }
    inline bool SupportedNetworkTypesHasBeenSet() const { return m_supportedNetworkTypesHasBeenSet; }
    inline void SetSupportedNetworkTypes(const Aws::Vector<Aws::String>& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = value; }
    inline void SetSupportedNetworkTypes(Aws::Vector<Aws::String>&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes = std::move(value); }
    inline OrderableDBInstanceOption& WithSupportedNetworkTypes(const Aws::Vector<Aws::String>& value) { SetSupportedNetworkTypes(value); return *this;}
    inline OrderableDBInstanceOption& WithSupportedNetworkTypes(Aws::Vector<Aws::String>&& value) { SetSupportedNetworkTypes(std::move(value)); return *this;}
    inline OrderableDBInstanceOption& AddSupportedNetworkTypes(const Aws::String& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(value); return *this; }
    inline OrderableDBInstanceOption& AddSupportedNetworkTypes(Aws::String&& value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(std::move(value)); return *this; }
    inline OrderableDBInstanceOption& AddSupportedNetworkTypes(const char* value) { m_supportedNetworkTypesHasBeenSet = true; m_supportedNetworkTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports storage throughput.</p>
     */
    inline bool GetSupportsStorageThroughput() const{ return m_supportsStorageThroughput; }
    inline bool SupportsStorageThroughputHasBeenSet() const { return m_supportsStorageThroughputHasBeenSet; }
    inline void SetSupportsStorageThroughput(bool value) { m_supportsStorageThroughputHasBeenSet = true; m_supportsStorageThroughput = value; }
    inline OrderableDBInstanceOption& WithSupportsStorageThroughput(bool value) { SetSupportsStorageThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum storage throughput for a DB instance.</p>
     */
    inline int GetMinStorageThroughputPerDbInstance() const{ return m_minStorageThroughputPerDbInstance; }
    inline bool MinStorageThroughputPerDbInstanceHasBeenSet() const { return m_minStorageThroughputPerDbInstanceHasBeenSet; }
    inline void SetMinStorageThroughputPerDbInstance(int value) { m_minStorageThroughputPerDbInstanceHasBeenSet = true; m_minStorageThroughputPerDbInstance = value; }
    inline OrderableDBInstanceOption& WithMinStorageThroughputPerDbInstance(int value) { SetMinStorageThroughputPerDbInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum storage throughput for a DB instance.</p>
     */
    inline int GetMaxStorageThroughputPerDbInstance() const{ return m_maxStorageThroughputPerDbInstance; }
    inline bool MaxStorageThroughputPerDbInstanceHasBeenSet() const { return m_maxStorageThroughputPerDbInstanceHasBeenSet; }
    inline void SetMaxStorageThroughputPerDbInstance(int value) { m_maxStorageThroughputPerDbInstanceHasBeenSet = true; m_maxStorageThroughputPerDbInstance = value; }
    inline OrderableDBInstanceOption& WithMaxStorageThroughputPerDbInstance(int value) { SetMaxStorageThroughputPerDbInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Minimum storage throughput to provisioned IOPS ratio for a DB instance.</p>
     */
    inline double GetMinStorageThroughputPerIops() const{ return m_minStorageThroughputPerIops; }
    inline bool MinStorageThroughputPerIopsHasBeenSet() const { return m_minStorageThroughputPerIopsHasBeenSet; }
    inline void SetMinStorageThroughputPerIops(double value) { m_minStorageThroughputPerIopsHasBeenSet = true; m_minStorageThroughputPerIops = value; }
    inline OrderableDBInstanceOption& WithMinStorageThroughputPerIops(double value) { SetMinStorageThroughputPerIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum storage throughput to provisioned IOPS ratio for a DB instance.</p>
     */
    inline double GetMaxStorageThroughputPerIops() const{ return m_maxStorageThroughputPerIops; }
    inline bool MaxStorageThroughputPerIopsHasBeenSet() const { return m_maxStorageThroughputPerIopsHasBeenSet; }
    inline void SetMaxStorageThroughputPerIops(double value) { m_maxStorageThroughputPerIopsHasBeenSet = true; m_maxStorageThroughputPerIops = value; }
    inline OrderableDBInstanceOption& WithMaxStorageThroughputPerIops(double value) { SetMaxStorageThroughputPerIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a DB instance supports using a dedicated log volume
     * (DLV).</p>
     */
    inline bool GetSupportsDedicatedLogVolume() const{ return m_supportsDedicatedLogVolume; }
    inline bool SupportsDedicatedLogVolumeHasBeenSet() const { return m_supportsDedicatedLogVolumeHasBeenSet; }
    inline void SetSupportsDedicatedLogVolume(bool value) { m_supportsDedicatedLogVolumeHasBeenSet = true; m_supportsDedicatedLogVolume = value; }
    inline OrderableDBInstanceOption& WithSupportsDedicatedLogVolume(bool value) { SetSupportsDedicatedLogVolume(value); return *this;}
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

    bool m_multiAZCapable;
    bool m_multiAZCapableHasBeenSet = false;

    bool m_readReplicaCapable;
    bool m_readReplicaCapableHasBeenSet = false;

    bool m_vpc;
    bool m_vpcHasBeenSet = false;

    bool m_supportsStorageEncryption;
    bool m_supportsStorageEncryptionHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    bool m_supportsIops;
    bool m_supportsIopsHasBeenSet = false;

    bool m_supportsEnhancedMonitoring;
    bool m_supportsEnhancedMonitoringHasBeenSet = false;

    bool m_supportsIAMDatabaseAuthentication;
    bool m_supportsIAMDatabaseAuthenticationHasBeenSet = false;

    bool m_supportsPerformanceInsights;
    bool m_supportsPerformanceInsightsHasBeenSet = false;

    int m_minStorageSize;
    bool m_minStorageSizeHasBeenSet = false;

    int m_maxStorageSize;
    bool m_maxStorageSizeHasBeenSet = false;

    int m_minIopsPerDbInstance;
    bool m_minIopsPerDbInstanceHasBeenSet = false;

    int m_maxIopsPerDbInstance;
    bool m_maxIopsPerDbInstanceHasBeenSet = false;

    double m_minIopsPerGib;
    bool m_minIopsPerGibHasBeenSet = false;

    double m_maxIopsPerGib;
    bool m_maxIopsPerGibHasBeenSet = false;

    Aws::Vector<AvailableProcessorFeature> m_availableProcessorFeatures;
    bool m_availableProcessorFeaturesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedEngineModes;
    bool m_supportedEngineModesHasBeenSet = false;

    bool m_supportsStorageAutoscaling;
    bool m_supportsStorageAutoscalingHasBeenSet = false;

    bool m_supportsKerberosAuthentication;
    bool m_supportsKerberosAuthenticationHasBeenSet = false;

    bool m_outpostCapable;
    bool m_outpostCapableHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedActivityStreamModes;
    bool m_supportedActivityStreamModesHasBeenSet = false;

    bool m_supportsGlobalDatabases;
    bool m_supportsGlobalDatabasesHasBeenSet = false;

    bool m_supportsClusters;
    bool m_supportsClustersHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedNetworkTypes;
    bool m_supportedNetworkTypesHasBeenSet = false;

    bool m_supportsStorageThroughput;
    bool m_supportsStorageThroughputHasBeenSet = false;

    int m_minStorageThroughputPerDbInstance;
    bool m_minStorageThroughputPerDbInstanceHasBeenSet = false;

    int m_maxStorageThroughputPerDbInstance;
    bool m_maxStorageThroughputPerDbInstanceHasBeenSet = false;

    double m_minStorageThroughputPerIops;
    bool m_minStorageThroughputPerIopsHasBeenSet = false;

    double m_maxStorageThroughputPerIops;
    bool m_maxStorageThroughputPerIopsHasBeenSet = false;

    bool m_supportsDedicatedLogVolume;
    bool m_supportsDedicatedLogVolumeHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
