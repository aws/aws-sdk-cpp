/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace WorkSpaces {
namespace Model {

/**
 * <p>Describes the user capacity for a pool of WorkSpaces.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/Capacity">AWS
 * API Reference</a></p>
 */
class Capacity {
 public:
  AWS_WORKSPACES_API Capacity() = default;
  AWS_WORKSPACES_API Capacity(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACES_API Capacity& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The desired number of user sessions for the WorkSpaces in the pool.</p>
   */
  inline int64_t GetDesiredUserSessions() const { return m_desiredUserSessions; }
  inline bool DesiredUserSessionsHasBeenSet() const { return m_desiredUserSessionsHasBeenSet; }
  inline void SetDesiredUserSessions(int64_t value) {
    m_desiredUserSessionsHasBeenSet = true;
    m_desiredUserSessions = value;
  }
  inline Capacity& WithDesiredUserSessions(int64_t value) {
    SetDesiredUserSessions(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_desiredUserSessions{0};
  bool m_desiredUserSessionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
