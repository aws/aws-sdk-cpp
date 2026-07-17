/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/AdminPasswordSource.h>
#include <aws/odb/model/AdminPasswordSourceConfiguration.h>

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
 * <p>A summary of the admin password source configuration for an Autonomous
 * Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AdminPasswordSourceSummary">AWS
 * API Reference</a></p>
 */
class AdminPasswordSourceSummary {
 public:
  AWS_ODB_API AdminPasswordSourceSummary() = default;
  AWS_ODB_API AdminPasswordSourceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AdminPasswordSourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source of the admin password for the Autonomous Database.</p>
   */
  inline AdminPasswordSource GetAdminPasswordSource() const { return m_adminPasswordSource; }
  inline bool AdminPasswordSourceHasBeenSet() const { return m_adminPasswordSourceHasBeenSet; }
  inline void SetAdminPasswordSource(AdminPasswordSource value) {
    m_adminPasswordSourceHasBeenSet = true;
    m_adminPasswordSource = value;
  }
  inline AdminPasswordSourceSummary& WithAdminPasswordSource(AdminPasswordSource value) {
    SetAdminPasswordSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the admin password source for the Autonomous
   * Database.</p>
   */
  inline const AdminPasswordSourceConfiguration& GetAdminPasswordSourceConfiguration() const { return m_adminPasswordSourceConfiguration; }
  inline bool AdminPasswordSourceConfigurationHasBeenSet() const { return m_adminPasswordSourceConfigurationHasBeenSet; }
  template <typename AdminPasswordSourceConfigurationT = AdminPasswordSourceConfiguration>
  void SetAdminPasswordSourceConfiguration(AdminPasswordSourceConfigurationT&& value) {
    m_adminPasswordSourceConfigurationHasBeenSet = true;
    m_adminPasswordSourceConfiguration = std::forward<AdminPasswordSourceConfigurationT>(value);
  }
  template <typename AdminPasswordSourceConfigurationT = AdminPasswordSourceConfiguration>
  AdminPasswordSourceSummary& WithAdminPasswordSourceConfiguration(AdminPasswordSourceConfigurationT&& value) {
    SetAdminPasswordSourceConfiguration(std::forward<AdminPasswordSourceConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  AdminPasswordSource m_adminPasswordSource{AdminPasswordSource::NOT_SET};

  AdminPasswordSourceConfiguration m_adminPasswordSourceConfiguration;
  bool m_adminPasswordSourceHasBeenSet = false;
  bool m_adminPasswordSourceConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
