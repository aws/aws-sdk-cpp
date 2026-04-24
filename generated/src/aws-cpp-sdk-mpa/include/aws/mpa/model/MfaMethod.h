/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/model/MfaSyncStatus.h>
#include <aws/mpa/model/MfaType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MPA {
namespace Model {

/**
 * <p>MFA configuration and sycnronization status for an approver</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/MfaMethod">AWS API
 * Reference</a></p>
 */
class MfaMethod {
 public:
  AWS_MPA_API MfaMethod() = default;
  AWS_MPA_API MfaMethod(Aws::Utils::Json::JsonView jsonValue);
  AWS_MPA_API MfaMethod& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of MFA configuration used by the approver</p>
   */
  inline MfaType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MfaType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline MfaMethod& WithType(MfaType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates if the approver's MFA device is in-sync with the Identity
   * Source</p>
   */
  inline MfaSyncStatus GetSyncStatus() const { return m_syncStatus; }
  inline bool SyncStatusHasBeenSet() const { return m_syncStatusHasBeenSet; }
  inline void SetSyncStatus(MfaSyncStatus value) {
    m_syncStatusHasBeenSet = true;
    m_syncStatus = value;
  }
  inline MfaMethod& WithSyncStatus(MfaSyncStatus value) {
    SetSyncStatus(value);
    return *this;
  }
  ///@}
 private:
  MfaType m_type{MfaType::NOT_SET};

  MfaSyncStatus m_syncStatus{MfaSyncStatus::NOT_SET};
  bool m_typeHasBeenSet = false;
  bool m_syncStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace MPA
}  // namespace Aws
