/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/LastKnownCheckStatus.h>
#include <aws/mgn/model/LastKnownCheckType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Last known check performed on a launched instance.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LastKnownCheck">AWS
 * API Reference</a></p>
 */
class LastKnownCheck {
 public:
  AWS_MGN_API LastKnownCheck() = default;
  AWS_MGN_API LastKnownCheck(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API LastKnownCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Last known check type.</p>
   */
  inline LastKnownCheckType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(LastKnownCheckType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline LastKnownCheck& WithType(LastKnownCheckType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last known check name.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  LastKnownCheck& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last known check status.</p>
   */
  inline LastKnownCheckStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(LastKnownCheckStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline LastKnownCheck& WithStatus(LastKnownCheckStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last known check error.</p>
   */
  inline const Aws::String& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = Aws::String>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = Aws::String>
  LastKnownCheck& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last known check timestamp.</p>
   */
  inline const Aws::Utils::DateTime& GetCheckedAt() const { return m_checkedAt; }
  inline bool CheckedAtHasBeenSet() const { return m_checkedAtHasBeenSet; }
  template <typename CheckedAtT = Aws::Utils::DateTime>
  void SetCheckedAt(CheckedAtT&& value) {
    m_checkedAtHasBeenSet = true;
    m_checkedAt = std::forward<CheckedAtT>(value);
  }
  template <typename CheckedAtT = Aws::Utils::DateTime>
  LastKnownCheck& WithCheckedAt(CheckedAtT&& value) {
    SetCheckedAt(std::forward<CheckedAtT>(value));
    return *this;
  }
  ///@}
 private:
  LastKnownCheckType m_type{LastKnownCheckType::NOT_SET};

  Aws::String m_name;

  LastKnownCheckStatus m_status{LastKnownCheckStatus::NOT_SET};

  Aws::String m_error;

  Aws::Utils::DateTime m_checkedAt{};
  bool m_typeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_checkedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
