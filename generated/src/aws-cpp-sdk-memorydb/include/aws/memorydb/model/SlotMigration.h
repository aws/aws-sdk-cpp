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
 * <p>Represents the progress of an online resharding operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/SlotMigration">AWS
 * API Reference</a></p>
 */
class SlotMigration {
 public:
  AWS_MEMORYDB_API SlotMigration() = default;
  AWS_MEMORYDB_API SlotMigration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MEMORYDB_API SlotMigration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MEMORYDB_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The percentage of the slot migration that is complete.</p>
   */
  inline double GetProgressPercentage() const { return m_progressPercentage; }
  inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }
  inline void SetProgressPercentage(double value) {
    m_progressPercentageHasBeenSet = true;
    m_progressPercentage = value;
  }
  inline SlotMigration& WithProgressPercentage(double value) {
    SetProgressPercentage(value);
    return *this;
  }
  ///@}
 private:
  double m_progressPercentage{0.0};
  bool m_progressPercentageHasBeenSet = false;
};

}  // namespace Model
}  // namespace MemoryDB
}  // namespace Aws
