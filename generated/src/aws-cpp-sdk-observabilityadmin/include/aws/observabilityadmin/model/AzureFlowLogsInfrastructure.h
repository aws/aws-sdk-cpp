/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureAwsManagedFlowLogs.h>
#include <aws/observabilityadmin/model/AzureCustomerManagedFlowLogs.h>

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
 * <p>The location of your Flow Logs: your existing Storage Accounts, or Storage
 * Accounts that the setup creates. Specify one.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/AzureFlowLogsInfrastructure">AWS
 * API Reference</a></p>
 */
class AzureFlowLogsInfrastructure {
 public:
  AWS_OBSERVABILITYADMIN_API AzureFlowLogsInfrastructure() = default;
  AWS_OBSERVABILITYADMIN_API AzureFlowLogsInfrastructure(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API AzureFlowLogsInfrastructure& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Use your existing Storage Accounts that already store Flow Logs.</p>
   */
  inline const AzureCustomerManagedFlowLogs& GetCustomerManaged() const { return m_customerManaged; }
  inline bool CustomerManagedHasBeenSet() const { return m_customerManagedHasBeenSet; }
  template <typename CustomerManagedT = AzureCustomerManagedFlowLogs>
  void SetCustomerManaged(CustomerManagedT&& value) {
    m_customerManagedHasBeenSet = true;
    m_customerManaged = std::forward<CustomerManagedT>(value);
  }
  template <typename CustomerManagedT = AzureCustomerManagedFlowLogs>
  AzureFlowLogsInfrastructure& WithCustomerManaged(CustomerManagedT&& value) {
    SetCustomerManaged(std::forward<CustomerManagedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Create one Storage Account in each Azure Region that ingests Flow Logs, in
   * the subscription specified by <code>SubscriptionId</code>.</p>
   */
  inline const AzureAwsManagedFlowLogs& GetAwsManaged() const { return m_awsManaged; }
  inline bool AwsManagedHasBeenSet() const { return m_awsManagedHasBeenSet; }
  template <typename AwsManagedT = AzureAwsManagedFlowLogs>
  void SetAwsManaged(AwsManagedT&& value) {
    m_awsManagedHasBeenSet = true;
    m_awsManaged = std::forward<AwsManagedT>(value);
  }
  template <typename AwsManagedT = AzureAwsManagedFlowLogs>
  AzureFlowLogsInfrastructure& WithAwsManaged(AwsManagedT&& value) {
    SetAwsManaged(std::forward<AwsManagedT>(value));
    return *this;
  }
  ///@}
 private:
  AzureCustomerManagedFlowLogs m_customerManaged;

  AzureAwsManagedFlowLogs m_awsManaged;
  bool m_customerManagedHasBeenSet = false;
  bool m_awsManagedHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
