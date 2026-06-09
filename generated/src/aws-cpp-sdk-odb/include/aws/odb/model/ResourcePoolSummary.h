/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace odb {
namespace Model {

/**
 * <p>The configuration of a resource pool for an Autonomous
 * Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/ResourcePoolSummary">AWS
 * API Reference</a></p>
 */
class ResourcePoolSummary {
 public:
  AWS_ODB_API ResourcePoolSummary() = default;
  AWS_ODB_API ResourcePoolSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API ResourcePoolSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether the resource pool is disabled.</p>
   */
  inline bool GetIsDisabled() const { return m_isDisabled; }
  inline bool IsDisabledHasBeenSet() const { return m_isDisabledHasBeenSet; }
  inline void SetIsDisabled(bool value) {
    m_isDisabledHasBeenSet = true;
    m_isDisabled = value;
  }
  inline ResourcePoolSummary& WithIsDisabled(bool value) {
    SetIsDisabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of Autonomous Databases that the resource pool can contain.</p>
   */
  inline int GetPoolSize() const { return m_poolSize; }
  inline bool PoolSizeHasBeenSet() const { return m_poolSizeHasBeenSet; }
  inline void SetPoolSize(int value) {
    m_poolSizeHasBeenSet = true;
    m_poolSize = value;
  }
  inline ResourcePoolSummary& WithPoolSize(int value) {
    SetPoolSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total storage size of the resource pool, in terabytes (TB).</p>
   */
  inline int GetPoolStorageSizeInTBs() const { return m_poolStorageSizeInTBs; }
  inline bool PoolStorageSizeInTBsHasBeenSet() const { return m_poolStorageSizeInTBsHasBeenSet; }
  inline void SetPoolStorageSizeInTBs(int value) {
    m_poolStorageSizeInTBsHasBeenSet = true;
    m_poolStorageSizeInTBs = value;
  }
  inline ResourcePoolSummary& WithPoolStorageSizeInTBs(int value) {
    SetPoolStorageSizeInTBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The available storage capacity in the resource pool, in TB.</p>
   */
  inline double GetAvailableStorageCapacityInTBs() const { return m_availableStorageCapacityInTBs; }
  inline bool AvailableStorageCapacityInTBsHasBeenSet() const { return m_availableStorageCapacityInTBsHasBeenSet; }
  inline void SetAvailableStorageCapacityInTBs(double value) {
    m_availableStorageCapacityInTBsHasBeenSet = true;
    m_availableStorageCapacityInTBs = value;
  }
  inline ResourcePoolSummary& WithAvailableStorageCapacityInTBs(double value) {
    SetAvailableStorageCapacityInTBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total compute capacity of the resource pool.</p>
   */
  inline int GetTotalComputeCapacity() const { return m_totalComputeCapacity; }
  inline bool TotalComputeCapacityHasBeenSet() const { return m_totalComputeCapacityHasBeenSet; }
  inline void SetTotalComputeCapacity(int value) {
    m_totalComputeCapacityHasBeenSet = true;
    m_totalComputeCapacity = value;
  }
  inline ResourcePoolSummary& WithTotalComputeCapacity(int value) {
    SetTotalComputeCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The available compute capacity in the resource pool.</p>
   */
  inline int GetAvailableComputeCapacity() const { return m_availableComputeCapacity; }
  inline bool AvailableComputeCapacityHasBeenSet() const { return m_availableComputeCapacityHasBeenSet; }
  inline void SetAvailableComputeCapacity(int value) {
    m_availableComputeCapacityHasBeenSet = true;
    m_availableComputeCapacity = value;
  }
  inline ResourcePoolSummary& WithAvailableComputeCapacity(int value) {
    SetAvailableComputeCapacity(value);
    return *this;
  }
  ///@}
 private:
  bool m_isDisabled{false};

  int m_poolSize{0};

  int m_poolStorageSizeInTBs{0};

  double m_availableStorageCapacityInTBs{0.0};

  int m_totalComputeCapacity{0};

  int m_availableComputeCapacity{0};
  bool m_isDisabledHasBeenSet = false;
  bool m_poolSizeHasBeenSet = false;
  bool m_poolStorageSizeInTBsHasBeenSet = false;
  bool m_availableStorageCapacityInTBsHasBeenSet = false;
  bool m_totalComputeCapacityHasBeenSet = false;
  bool m_availableComputeCapacityHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
