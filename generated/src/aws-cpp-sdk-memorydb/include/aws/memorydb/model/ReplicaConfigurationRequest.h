/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>

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
   * <p>A request to configure the number of replicas in a shard</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ReplicaConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class ReplicaConfigurationRequest
  {
  public:
    AWS_MEMORYDB_API ReplicaConfigurationRequest();
    AWS_MEMORYDB_API ReplicaConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ReplicaConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of replicas to scale up or down to</p>
     */
    inline int GetReplicaCount() const{ return m_replicaCount; }

    /**
     * <p>The number of replicas to scale up or down to</p>
     */
    inline bool ReplicaCountHasBeenSet() const { return m_replicaCountHasBeenSet; }

    /**
     * <p>The number of replicas to scale up or down to</p>
     */
    inline void SetReplicaCount(int value) { m_replicaCountHasBeenSet = true; m_replicaCount = value; }

    /**
     * <p>The number of replicas to scale up or down to</p>
     */
    inline ReplicaConfigurationRequest& WithReplicaCount(int value) { SetReplicaCount(value); return *this;}

  private:

    int m_replicaCount;
    bool m_replicaCountHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
