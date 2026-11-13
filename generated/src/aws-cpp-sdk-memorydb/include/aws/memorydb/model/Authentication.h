/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/AuthenticationType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace MemoryDB {
namespace Model {

/**
 * <p>Denotes the user's authentication properties, such as whether it requires a
 * password to authenticate. Used in output responses.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/Authentication">AWS
 * API Reference</a></p>
 */
class Authentication {
 public:
  AWS_MEMORYDB_API Authentication() = default;
  AWS_MEMORYDB_API Authentication(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MEMORYDB_API Authentication& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MEMORYDB_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Indicates whether the user requires a password to authenticate.</p>
   */
  inline AuthenticationType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AuthenticationType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Authentication& WithType(AuthenticationType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of passwords belonging to the user. The maximum is two.</p>
   */
  inline int64_t GetPasswordCount() const { return m_passwordCount; }
  inline bool PasswordCountHasBeenSet() const { return m_passwordCountHasBeenSet; }
  inline void SetPasswordCount(int64_t value) {
    m_passwordCountHasBeenSet = true;
    m_passwordCount = value;
  }
  inline Authentication& WithPasswordCount(int64_t value) {
    SetPasswordCount(value);
    return *this;
  }
  ///@}
 private:
  AuthenticationType m_type{AuthenticationType::NOT_SET};

  int64_t m_passwordCount{0};
  bool m_typeHasBeenSet = false;
  bool m_passwordCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace MemoryDB
}  // namespace Aws
