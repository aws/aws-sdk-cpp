/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace VPCLattice {
namespace Model {

/**
 * <p> Configuration for TXT record-based domain verification method.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/TxtMethodConfig">AWS
 * API Reference</a></p>
 */
class TxtMethodConfig {
 public:
  AWS_VPCLATTICE_API TxtMethodConfig() = default;
  AWS_VPCLATTICE_API TxtMethodConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_VPCLATTICE_API TxtMethodConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The value that must be added to the TXT record for domain verification. </p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  TxtMethodConfig& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the TXT record that must be created for domain verification.
   * </p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  TxtMethodConfig& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;
  bool m_valueHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
