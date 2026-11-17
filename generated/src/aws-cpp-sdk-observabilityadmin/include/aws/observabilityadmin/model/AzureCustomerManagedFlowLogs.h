/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureFlowLogStorageAccountScope.h>

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
 * <p>Configuration for existing Azure Storage Accounts that already receive your
 * Flow Logs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureCustomerManagedFlowLogs">AWS
 * API Reference</a></p>
 */
class AzureCustomerManagedFlowLogs {
 public:
  AWS_OBSERVABILITYADMIN_API AzureCustomerManagedFlowLogs() = default;
  AWS_OBSERVABILITYADMIN_API AzureCustomerManagedFlowLogs(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureCustomerManagedFlowLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Storage Accounts that store your Flow Logs, listed by Azure Region. Each
   * Region can appear only once, and each Storage Account can appear only once
   * across all Regions.</p>
   */
  inline const Aws::Vector<AzureFlowLogStorageAccountScope>& GetStorageAccounts() const { return m_storageAccounts; }
  inline bool StorageAccountsHasBeenSet() const { return m_storageAccountsHasBeenSet; }
  template <typename StorageAccountsT = Aws::Vector<AzureFlowLogStorageAccountScope>>
  void SetStorageAccounts(StorageAccountsT&& value) {
    m_storageAccountsHasBeenSet = true;
    m_storageAccounts = std::forward<StorageAccountsT>(value);
  }
  template <typename StorageAccountsT = Aws::Vector<AzureFlowLogStorageAccountScope>>
  AzureCustomerManagedFlowLogs& WithStorageAccounts(StorageAccountsT&& value) {
    SetStorageAccounts(std::forward<StorageAccountsT>(value));
    return *this;
  }
  template <typename StorageAccountsT = AzureFlowLogStorageAccountScope>
  AzureCustomerManagedFlowLogs& AddStorageAccounts(StorageAccountsT&& value) {
    m_storageAccountsHasBeenSet = true;
    m_storageAccounts.emplace_back(std::forward<StorageAccountsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AzureFlowLogStorageAccountScope> m_storageAccounts;
  bool m_storageAccountsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
