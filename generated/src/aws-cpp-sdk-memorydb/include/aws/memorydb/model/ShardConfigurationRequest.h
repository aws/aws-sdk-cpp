/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/memorydb/MemoryDB_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace MemoryDB {
namespace Model {

/**
 * <p>A request to configure the sharding properties of a cluster</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ShardConfigurationRequest">AWS
 * API Reference</a></p>
 */
class ShardConfigurationRequest {
 public:
  AWS_MEMORYDB_API ShardConfigurationRequest() = default;
  AWS_MEMORYDB_API ShardConfigurationRequest(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MEMORYDB_API ShardConfigurationRequest& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MEMORYDB_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The number of shards in the cluster</p>
   */
  inline int64_t GetShardCount() const { return m_shardCount; }
  inline bool ShardCountHasBeenSet() const { return m_shardCountHasBeenSet; }
  inline void SetShardCount(int64_t value) {
    m_shardCountHasBeenSet = true;
    m_shardCount = value;
  }
  inline ShardConfigurationRequest& WithShardCount(int64_t value) {
    SetShardCount(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_shardCount{0};
  bool m_shardCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace MemoryDB
}  // namespace Aws
