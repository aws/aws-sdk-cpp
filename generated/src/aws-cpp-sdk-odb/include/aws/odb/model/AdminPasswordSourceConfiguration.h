/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/CustomerManagedAwsSecretConfiguration.h>

#include <utility>

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
 * <p>The configuration of the admin password source. This is a union, so only one
 * of the following members can be specified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AdminPasswordSourceConfiguration">AWS
 * API Reference</a></p>
 */
class AdminPasswordSourceConfiguration {
 public:
  AWS_ODB_API AdminPasswordSourceConfiguration() = default;
  AWS_ODB_API AdminPasswordSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AdminPasswordSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a customer-managed Amazon Web Services Secrets Manager
   * secret used as the admin password source.</p>
   */
  inline const CustomerManagedAwsSecretConfiguration& GetCustomerManagedAwsSecret() const { return m_customerManagedAwsSecret; }
  inline bool CustomerManagedAwsSecretHasBeenSet() const { return m_customerManagedAwsSecretHasBeenSet; }
  template <typename CustomerManagedAwsSecretT = CustomerManagedAwsSecretConfiguration>
  void SetCustomerManagedAwsSecret(CustomerManagedAwsSecretT&& value) {
    m_customerManagedAwsSecretHasBeenSet = true;
    m_customerManagedAwsSecret = std::forward<CustomerManagedAwsSecretT>(value);
  }
  template <typename CustomerManagedAwsSecretT = CustomerManagedAwsSecretConfiguration>
  AdminPasswordSourceConfiguration& WithCustomerManagedAwsSecret(CustomerManagedAwsSecretT&& value) {
    SetCustomerManagedAwsSecret(std::forward<CustomerManagedAwsSecretT>(value));
    return *this;
  }
  ///@}
 private:
  CustomerManagedAwsSecretConfiguration m_customerManagedAwsSecret;
  bool m_customerManagedAwsSecretHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
