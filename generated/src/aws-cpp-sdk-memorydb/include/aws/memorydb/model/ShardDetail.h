/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/memorydb/model/ShardConfiguration.h>
#include <aws/core/utils/DateTime.h>
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
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>Provides details of a shard in a snapshot</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ShardDetail">AWS
   * API Reference</a></p>
   */
  class ShardDetail
  {
  public:
    AWS_MEMORYDB_API ShardDetail() = default;
    AWS_MEMORYDB_API ShardDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ShardDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the shard</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ShardDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details of the shard</p>
     */
    inline const ShardConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = ShardConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = ShardConfiguration>
    ShardDetail& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the shard's snapshot</p>
     */
    inline const Aws::String& GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    template<typename SizeT = Aws::String>
    void SetSize(SizeT&& value) { m_sizeHasBeenSet = true; m_size = std::forward<SizeT>(value); }
    template<typename SizeT = Aws::String>
    ShardDetail& WithSize(SizeT&& value) { SetSize(std::forward<SizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the shard's snapshot was created</p>
     */
    inline const Aws::Utils::DateTime& GetSnapshotCreationTime() const { return m_snapshotCreationTime; }
    inline bool SnapshotCreationTimeHasBeenSet() const { return m_snapshotCreationTimeHasBeenSet; }
    template<typename SnapshotCreationTimeT = Aws::Utils::DateTime>
    void SetSnapshotCreationTime(SnapshotCreationTimeT&& value) { m_snapshotCreationTimeHasBeenSet = true; m_snapshotCreationTime = std::forward<SnapshotCreationTimeT>(value); }
    template<typename SnapshotCreationTimeT = Aws::Utils::DateTime>
    ShardDetail& WithSnapshotCreationTime(SnapshotCreationTimeT&& value) { SetSnapshotCreationTime(std::forward<SnapshotCreationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ShardConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_size;
    bool m_sizeHasBeenSet = false;

    Aws::Utils::DateTime m_snapshotCreationTime{};
    bool m_snapshotCreationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
