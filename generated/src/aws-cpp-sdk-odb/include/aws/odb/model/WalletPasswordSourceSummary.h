/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/WalletPasswordSource.h>
#include <aws/odb/model/WalletPasswordSourceConfiguration.h>

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
 * <p>A summary of the password source configuration for an Autonomous Database
 * wallet.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/WalletPasswordSourceSummary">AWS
 * API Reference</a></p>
 */
class WalletPasswordSourceSummary {
 public:
  AWS_ODB_API WalletPasswordSourceSummary() = default;
  AWS_ODB_API WalletPasswordSourceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API WalletPasswordSourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source of the password for the Autonomous Database wallet.</p>
   */
  inline WalletPasswordSource GetPasswordSource() const { return m_passwordSource; }
  inline bool PasswordSourceHasBeenSet() const { return m_passwordSourceHasBeenSet; }
  inline void SetPasswordSource(WalletPasswordSource value) {
    m_passwordSourceHasBeenSet = true;
    m_passwordSource = value;
  }
  inline WalletPasswordSourceSummary& WithPasswordSource(WalletPasswordSource value) {
    SetPasswordSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the password source for the Autonomous Database
   * wallet.</p>
   */
  inline const WalletPasswordSourceConfiguration& GetPasswordSourceConfiguration() const { return m_passwordSourceConfiguration; }
  inline bool PasswordSourceConfigurationHasBeenSet() const { return m_passwordSourceConfigurationHasBeenSet; }
  template <typename PasswordSourceConfigurationT = WalletPasswordSourceConfiguration>
  void SetPasswordSourceConfiguration(PasswordSourceConfigurationT&& value) {
    m_passwordSourceConfigurationHasBeenSet = true;
    m_passwordSourceConfiguration = std::forward<PasswordSourceConfigurationT>(value);
  }
  template <typename PasswordSourceConfigurationT = WalletPasswordSourceConfiguration>
  WalletPasswordSourceSummary& WithPasswordSourceConfiguration(PasswordSourceConfigurationT&& value) {
    SetPasswordSourceConfiguration(std::forward<PasswordSourceConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  WalletPasswordSource m_passwordSource{WalletPasswordSource::NOT_SET};

  WalletPasswordSourceConfiguration m_passwordSourceConfiguration;
  bool m_passwordSourceHasBeenSet = false;
  bool m_passwordSourceConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
