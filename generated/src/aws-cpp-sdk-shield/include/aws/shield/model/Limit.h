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
 * <p>Specifies how many protections of a given type you can create.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/shield-2016-06-02/Limit">AWS API
 * Reference</a></p>
 */
class Limit {
 public:
  AWS_SHIELD_API Limit() = default;
  AWS_SHIELD_API Limit(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SHIELD_API Limit& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_SHIELD_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The type of protection.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  Limit& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of protections that can be created for the specified
   * <code>Type</code>.</p>
   */
  inline long long GetMax() const { return m_max; }
  inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
  inline void SetMax(long long value) {
    m_maxHasBeenSet = true;
    m_max = value;
  }
  inline Limit& WithMax(long long value) {
    SetMax(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;

  long long m_max{0};
  bool m_typeHasBeenSet = false;
  bool m_maxHasBeenSet = false;
};

}  // namespace Model
}  // namespace Shield
}  // namespace Aws
