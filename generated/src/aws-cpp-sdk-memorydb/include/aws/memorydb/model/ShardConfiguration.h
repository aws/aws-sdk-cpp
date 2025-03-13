/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Shard configuration options. Each shard configuration has the following:
   * Slots and ReplicaCount.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ShardConfiguration">AWS
   * API Reference</a></p>
   */
  class ShardConfiguration
  {
  public:
    AWS_MEMORYDB_API ShardConfiguration() = default;
    AWS_MEMORYDB_API ShardConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ShardConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string that specifies the keyspace for a particular node group. Keyspaces
     * range from 0 to 16,383. The string is in the format startkey-endkey.</p>
     */
    inline const Aws::String& GetSlots() const { return m_slots; }
    inline bool SlotsHasBeenSet() const { return m_slotsHasBeenSet; }
    template<typename SlotsT = Aws::String>
    void SetSlots(SlotsT&& value) { m_slotsHasBeenSet = true; m_slots = std::forward<SlotsT>(value); }
    template<typename SlotsT = Aws::String>
    ShardConfiguration& WithSlots(SlotsT&& value) { SetSlots(std::forward<SlotsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of read replica nodes in this shard.</p>
     */
    inline int GetReplicaCount() const { return m_replicaCount; }
    inline bool ReplicaCountHasBeenSet() const { return m_replicaCountHasBeenSet; }
    inline void SetReplicaCount(int value) { m_replicaCountHasBeenSet = true; m_replicaCount = value; }
    inline ShardConfiguration& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}
    ///@}
  private:

    Aws::String m_slots;
    bool m_slotsHasBeenSet = false;

    int m_replicaCount{0};
    bool m_replicaCountHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
