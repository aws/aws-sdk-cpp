/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/shield/Shield_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Shield {
namespace Model {

/**
 * <p>A contributor to the attack and their contribution. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Contributor">AWS
 * API Reference</a></p>
 */
class Contributor {
 public:
  AWS_SHIELD_API Contributor() = default;
  AWS_SHIELD_API Contributor(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SHIELD_API Contributor& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SHIELD_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of the contributor. The type of name that you'll find here depends
   * on the <code>AttackPropertyIdentifier</code> setting in the
   * <code>AttackProperty</code> where this contributor is defined. For example, if
   * the <code>AttackPropertyIdentifier</code> is <code>SOURCE_COUNTRY</code>, the
   * <code>Name</code> could be <code>United States</code>.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Contributor& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The contribution of this contributor expressed in <a>Protection</a> units.
   * For example <code>10,000</code>.</p>
   */
  inline long long GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(long long value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline Contributor& WithValue(long long value) {
    SetValue(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  long long m_value{0};
  bool m_nameHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Shield
}  // namespace Aws
