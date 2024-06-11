/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/AvailabilityZone.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Contains a list of available options for a DB instance.</p> <p> This data
   * type is used as a response element in the
   * <a>DescribeOrderableDBInstanceOptions</a> action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/OrderableDBInstanceOption">AWS
   * API Reference</a></p>
   */
  class OrderableDBInstanceOption
  {
  public:
    AWS_NEPTUNE_API OrderableDBInstanceOption();
    AWS_NEPTUNE_API OrderableDBInstanceOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API OrderableDBInstanceOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>Indicates whether a DB instance can have a Read Replica.</p>
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
     * <p>Indicates the storage type for a DB instance.</p>
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
     * <p> <i>(Not supported by Neptune)</i> </p>
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
     * <p>A value that indicates whether you can use Neptune global databases with a
     * specific combination of other DB engine attributes.</p>
     */
    inline bool GetSupportsGlobalDatabases() const{ return m_supportsGlobalDatabases; }
    inline bool SupportsGlobalDatabasesHasBeenSet() const { return m_supportsGlobalDatabasesHasBeenSet; }
    inline void SetSupportsGlobalDatabases(bool value) { m_supportsGlobalDatabasesHasBeenSet = true; m_supportsGlobalDatabases = value; }
    inline OrderableDBInstanceOption& WithSupportsGlobalDatabases(bool value) { SetSupportsGlobalDatabases(value); return *this;}
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

    bool m_supportsGlobalDatabases;
    bool m_supportsGlobalDatabasesHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
