/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/DataLakeEncryptionConfiguration.h>
#include <aws/securitylake/model/DataLakeLifecycleConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/model/DataLakeReplicationConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Provides details of Amazon Security Lake object.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeConfiguration">AWS
   * API Reference</a></p>
   */
  class DataLakeConfiguration
  {
  public:
    AWS_SECURITYLAKE_API DataLakeConfiguration() = default;
    AWS_SECURITYLAKE_API DataLakeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline const DataLakeEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
    template<typename EncryptionConfigurationT = DataLakeEncryptionConfiguration>
    void SetEncryptionConfiguration(EncryptionConfigurationT&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value); }
    template<typename EncryptionConfigurationT = DataLakeEncryptionConfiguration>
    DataLakeConfiguration& WithEncryptionConfiguration(EncryptionConfigurationT&& value) { SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline const DataLakeLifecycleConfiguration& GetLifecycleConfiguration() const { return m_lifecycleConfiguration; }
    inline bool LifecycleConfigurationHasBeenSet() const { return m_lifecycleConfigurationHasBeenSet; }
    template<typename LifecycleConfigurationT = DataLakeLifecycleConfiguration>
    void SetLifecycleConfiguration(LifecycleConfigurationT&& value) { m_lifecycleConfigurationHasBeenSet = true; m_lifecycleConfiguration = std::forward<LifecycleConfigurationT>(value); }
    template<typename LifecycleConfigurationT = DataLakeLifecycleConfiguration>
    DataLakeConfiguration& WithLifecycleConfiguration(LifecycleConfigurationT&& value) { SetLifecycleConfiguration(std::forward<LifecycleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    DataLakeConfiguration& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline const DataLakeReplicationConfiguration& GetReplicationConfiguration() const { return m_replicationConfiguration; }
    inline bool ReplicationConfigurationHasBeenSet() const { return m_replicationConfigurationHasBeenSet; }
    template<typename ReplicationConfigurationT = DataLakeReplicationConfiguration>
    void SetReplicationConfiguration(ReplicationConfigurationT&& value) { m_replicationConfigurationHasBeenSet = true; m_replicationConfiguration = std::forward<ReplicationConfigurationT>(value); }
    template<typename ReplicationConfigurationT = DataLakeReplicationConfiguration>
    DataLakeConfiguration& WithReplicationConfiguration(ReplicationConfigurationT&& value) { SetReplicationConfiguration(std::forward<ReplicationConfigurationT>(value)); return *this;}
    ///@}
  private:

    DataLakeEncryptionConfiguration m_encryptionConfiguration;
    bool m_encryptionConfigurationHasBeenSet = false;

    DataLakeLifecycleConfiguration m_lifecycleConfiguration;
    bool m_lifecycleConfigurationHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    DataLakeReplicationConfiguration m_replicationConfiguration;
    bool m_replicationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
