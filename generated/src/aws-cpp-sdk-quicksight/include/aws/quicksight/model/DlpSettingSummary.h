/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DlpProviderType.h>
#include <aws/quicksight/model/DlpSettingStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A summary of a DLP setting returned by list operations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DlpSettingSummary">AWS
 * API Reference</a></p>
 */
class DlpSettingSummary {
 public:
  AWS_QUICKSIGHT_API DlpSettingSummary() = default;
  AWS_QUICKSIGHT_API DlpSettingSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DlpSettingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the DLP setting.</p>
   */
  inline const Aws::String& GetDlpSettingId() const { return m_dlpSettingId; }
  inline bool DlpSettingIdHasBeenSet() const { return m_dlpSettingIdHasBeenSet; }
  template <typename DlpSettingIdT = Aws::String>
  void SetDlpSettingId(DlpSettingIdT&& value) {
    m_dlpSettingIdHasBeenSet = true;
    m_dlpSettingId = std::forward<DlpSettingIdT>(value);
  }
  template <typename DlpSettingIdT = Aws::String>
  DlpSettingSummary& WithDlpSettingId(DlpSettingIdT&& value) {
    SetDlpSettingId(std::forward<DlpSettingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the DLP setting.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DlpSettingSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the DLP setting.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DlpSettingSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the DLP setting. Valid values are <code>ACTIVE</code> and
   * <code>INACTIVE</code>.</p>
   */
  inline DlpSettingStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DlpSettingStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DlpSettingSummary& WithStatus(DlpSettingStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of external DLP provider used for sensitivity label
   * classification.</p>
   */
  inline DlpProviderType GetProviderType() const { return m_providerType; }
  inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
  inline void SetProviderType(DlpProviderType value) {
    m_providerTypeHasBeenSet = true;
    m_providerType = value;
  }
  inline DlpSettingSummary& WithProviderType(DlpProviderType value) {
    SetProviderType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the DLP setting was created, in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DlpSettingSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the DLP setting was most recently updated, in ISO 8601
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DlpSettingSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dlpSettingId;

  Aws::String m_name;

  Aws::String m_arn;

  DlpSettingStatus m_status{DlpSettingStatus::NOT_SET};

  DlpProviderType m_providerType{DlpProviderType::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_dlpSettingIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_providerTypeHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
