/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/Odb_EXPORTS.h>

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
 * <p>The Oracle Application Express (APEX) details for an Autonomous
 * Database.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/AutonomousDatabaseApex">AWS
 * API Reference</a></p>
 */
class AutonomousDatabaseApex {
 public:
  AWS_ODB_API AutonomousDatabaseApex() = default;
  AWS_ODB_API AutonomousDatabaseApex(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API AutonomousDatabaseApex& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Oracle Application Express (APEX) version of the Autonomous Database.</p>
   */
  inline const Aws::String& GetApexVersion() const { return m_apexVersion; }
  inline bool ApexVersionHasBeenSet() const { return m_apexVersionHasBeenSet; }
  template <typename ApexVersionT = Aws::String>
  void SetApexVersion(ApexVersionT&& value) {
    m_apexVersionHasBeenSet = true;
    m_apexVersion = std::forward<ApexVersionT>(value);
  }
  template <typename ApexVersionT = Aws::String>
  AutonomousDatabaseApex& WithApexVersion(ApexVersionT&& value) {
    SetApexVersion(std::forward<ApexVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Oracle REST Data Services (ORDS) version of the Autonomous Database.</p>
   */
  inline const Aws::String& GetOrdsVersion() const { return m_ordsVersion; }
  inline bool OrdsVersionHasBeenSet() const { return m_ordsVersionHasBeenSet; }
  template <typename OrdsVersionT = Aws::String>
  void SetOrdsVersion(OrdsVersionT&& value) {
    m_ordsVersionHasBeenSet = true;
    m_ordsVersion = std::forward<OrdsVersionT>(value);
  }
  template <typename OrdsVersionT = Aws::String>
  AutonomousDatabaseApex& WithOrdsVersion(OrdsVersionT&& value) {
    SetOrdsVersion(std::forward<OrdsVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_apexVersion;

  Aws::String m_ordsVersion;
  bool m_apexVersionHasBeenSet = false;
  bool m_ordsVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
