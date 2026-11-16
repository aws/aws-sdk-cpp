/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/PreferenceKey.h>
#include <aws/wellarchitected/model/PreferenceStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WellArchitected {
namespace Model {

/**
 * <p>A single Well-Architected Agent preference and its current
 * state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/PreferenceEntry">AWS
 * API Reference</a></p>
 */
class PreferenceEntry {
 public:
  AWS_WELLARCHITECTED_API PreferenceEntry() = default;
  AWS_WELLARCHITECTED_API PreferenceEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API PreferenceEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Which preference this entry describes.</p>
   */
  inline PreferenceKey GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  inline void SetKey(PreferenceKey value) {
    m_keyHasBeenSet = true;
    m_key = value;
  }
  inline PreferenceEntry& WithKey(PreferenceKey value) {
    SetKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current state of the preference. ENABLED and DISABLED reflect the result of
   * the most recent successful change. FAILED reflects a stored failure surfaced on
   * a read and is accompanied by a detail message.</p>
   */
  inline PreferenceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PreferenceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline PreferenceEntry& WithStatus(PreferenceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable explanation present only when status is FAILED, describing
   * what went wrong and how to recover.</p>
   */
  inline const Aws::String& GetDetail() const { return m_detail; }
  inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
  template <typename DetailT = Aws::String>
  void SetDetail(DetailT&& value) {
    m_detailHasBeenSet = true;
    m_detail = std::forward<DetailT>(value);
  }
  template <typename DetailT = Aws::String>
  PreferenceEntry& WithDetail(DetailT&& value) {
    SetDetail(std::forward<DetailT>(value));
    return *this;
  }
  ///@}
 private:
  PreferenceKey m_key{PreferenceKey::NOT_SET};

  PreferenceStatus m_status{PreferenceStatus::NOT_SET};

  Aws::String m_detail;
  bool m_keyHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_detailHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
