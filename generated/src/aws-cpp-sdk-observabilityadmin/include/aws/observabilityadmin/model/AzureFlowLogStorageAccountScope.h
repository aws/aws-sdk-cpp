/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>The Azure Storage Accounts in one Azure Region that store Flow
 * Logs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureFlowLogStorageAccountScope">AWS
 * API Reference</a></p>
 */
class AzureFlowLogStorageAccountScope {
 public:
  AWS_OBSERVABILITYADMIN_API AzureFlowLogStorageAccountScope() = default;
  AWS_OBSERVABILITYADMIN_API AzureFlowLogStorageAccountScope(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureFlowLogStorageAccountScope& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure Region of the Storage Accounts, for example
   * <code>eastus</code>.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  AzureFlowLogStorageAccountScope& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Azure Resource Manager IDs of the Storage Accounts.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStorageAccountIds() const { return m_storageAccountIds; }
  inline bool StorageAccountIdsHasBeenSet() const { return m_storageAccountIdsHasBeenSet; }
  template <typename StorageAccountIdsT = Aws::Vector<Aws::String>>
  void SetStorageAccountIds(StorageAccountIdsT&& value) {
    m_storageAccountIdsHasBeenSet = true;
    m_storageAccountIds = std::forward<StorageAccountIdsT>(value);
  }
  template <typename StorageAccountIdsT = Aws::Vector<Aws::String>>
  AzureFlowLogStorageAccountScope& WithStorageAccountIds(StorageAccountIdsT&& value) {
    SetStorageAccountIds(std::forward<StorageAccountIdsT>(value));
    return *this;
  }
  template <typename StorageAccountIdsT = Aws::String>
  AzureFlowLogStorageAccountScope& AddStorageAccountIds(StorageAccountIdsT&& value) {
    m_storageAccountIdsHasBeenSet = true;
    m_storageAccountIds.emplace_back(std::forward<StorageAccountIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_region;

  Aws::Vector<Aws::String> m_storageAccountIds;
  bool m_regionHasBeenSet = false;
  bool m_storageAccountIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
