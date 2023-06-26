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
    AWS_SECURITYLAKE_API DataLakeConfiguration();
    AWS_SECURITYLAKE_API DataLakeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline const DataLakeEncryptionConfiguration& GetEncryptionConfiguration() const{ return m_encryptionConfiguration; }

    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }

    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline void SetEncryptionConfiguration(const DataLakeEncryptionConfiguration& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = value; }

    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline void SetEncryptionConfiguration(DataLakeEncryptionConfiguration&& value) { m_encryptionConfigurationHasBeenSet = true; m_encryptionConfiguration = std::move(value); }

    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline DataLakeConfiguration& WithEncryptionConfiguration(const DataLakeEncryptionConfiguration& value) { SetEncryptionConfiguration(value); return *this;}

    /**
     * <p>Provides encryption details of Amazon Security Lake object.</p>
     */
    inline DataLakeConfiguration& WithEncryptionConfiguration(DataLakeEncryptionConfiguration&& value) { SetEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline const DataLakeLifecycleConfiguration& GetLifecycleConfiguration() const{ return m_lifecycleConfiguration; }

    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline bool LifecycleConfigurationHasBeenSet() const { return m_lifecycleConfigurationHasBeenSet; }

    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline void SetLifecycleConfiguration(const DataLakeLifecycleConfiguration& value) { m_lifecycleConfigurationHasBeenSet = true; m_lifecycleConfiguration = value; }

    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline void SetLifecycleConfiguration(DataLakeLifecycleConfiguration&& value) { m_lifecycleConfigurationHasBeenSet = true; m_lifecycleConfiguration = std::move(value); }

    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline DataLakeConfiguration& WithLifecycleConfiguration(const DataLakeLifecycleConfiguration& value) { SetLifecycleConfiguration(value); return *this;}

    /**
     * <p>Provides lifecycle details of Amazon Security Lake object.</p>
     */
    inline DataLakeConfiguration& WithLifecycleConfiguration(DataLakeLifecycleConfiguration&& value) { SetLifecycleConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline DataLakeConfiguration& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline DataLakeConfiguration& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Regions where Security Lake is automatically
     * enabled.</p>
     */
    inline DataLakeConfiguration& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline const DataLakeReplicationConfiguration& GetReplicationConfiguration() const{ return m_replicationConfiguration; }

    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline bool ReplicationConfigurationHasBeenSet() const { return m_replicationConfigurationHasBeenSet; }

    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline void SetReplicationConfiguration(const DataLakeReplicationConfiguration& value) { m_replicationConfigurationHasBeenSet = true; m_replicationConfiguration = value; }

    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline void SetReplicationConfiguration(DataLakeReplicationConfiguration&& value) { m_replicationConfigurationHasBeenSet = true; m_replicationConfiguration = std::move(value); }

    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline DataLakeConfiguration& WithReplicationConfiguration(const DataLakeReplicationConfiguration& value) { SetReplicationConfiguration(value); return *this;}

    /**
     * <p>Provides replication details of Amazon Security Lake object.</p>
     */
    inline DataLakeConfiguration& WithReplicationConfiguration(DataLakeReplicationConfiguration&& value) { SetReplicationConfiguration(std::move(value)); return *this;}

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
