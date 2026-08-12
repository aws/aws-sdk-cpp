/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class UpdateExascaleDbStorageVaultRequest : public OdbRequest {
 public:
  AWS_ODB_API UpdateExascaleDbStorageVaultRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateExascaleDbStorageVault"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the Exascale storage vault to update.</p>
   */
  inline const Aws::String& GetExascaleDbStorageVaultId() const { return m_exascaleDbStorageVaultId; }
  inline bool ExascaleDbStorageVaultIdHasBeenSet() const { return m_exascaleDbStorageVaultIdHasBeenSet; }
  template <typename ExascaleDbStorageVaultIdT = Aws::String>
  void SetExascaleDbStorageVaultId(ExascaleDbStorageVaultIdT&& value) {
    m_exascaleDbStorageVaultIdHasBeenSet = true;
    m_exascaleDbStorageVaultId = std::forward<ExascaleDbStorageVaultIdT>(value);
  }
  template <typename ExascaleDbStorageVaultIdT = Aws::String>
  UpdateExascaleDbStorageVaultRequest& WithExascaleDbStorageVaultId(ExascaleDbStorageVaultIdT&& value) {
    SetExascaleDbStorageVaultId(std::forward<ExascaleDbStorageVaultIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The additional flash cache percentage for the Exascale storage vault.</p>
   */
  inline int GetAdditionalFlashCacheInPercent() const { return m_additionalFlashCacheInPercent; }
  inline bool AdditionalFlashCacheInPercentHasBeenSet() const { return m_additionalFlashCacheInPercentHasBeenSet; }
  inline void SetAdditionalFlashCacheInPercent(int value) {
    m_additionalFlashCacheInPercentHasBeenSet = true;
    m_additionalFlashCacheInPercent = value;
  }
  inline UpdateExascaleDbStorageVaultRequest& WithAdditionalFlashCacheInPercent(int value) {
    SetAdditionalFlashCacheInPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The autoscale limit in gigabytes (GB) for the Exascale storage vault.</p>
   */
  inline int GetAutoscaleLimitInGBs() const { return m_autoscaleLimitInGBs; }
  inline bool AutoscaleLimitInGBsHasBeenSet() const { return m_autoscaleLimitInGBsHasBeenSet; }
  inline void SetAutoscaleLimitInGBs(int value) {
    m_autoscaleLimitInGBsHasBeenSet = true;
    m_autoscaleLimitInGBs = value;
  }
  inline UpdateExascaleDbStorageVaultRequest& WithAutoscaleLimitInGBs(int value) {
    SetAutoscaleLimitInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description for the Exascale storage vault.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateExascaleDbStorageVaultRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new user-friendly name for the Exascale storage vault.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  UpdateExascaleDbStorageVaultRequest& WithDisplayName(DisplayNameT&& value) {
    SetDisplayName(std::forward<DisplayNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total size of the high-capacity database storage, in gigabytes (GB), for
   * the Exascale storage vault.</p>
   */
  inline int GetHighCapacityDatabaseStorageTotalSizeInGBs() const { return m_highCapacityDatabaseStorageTotalSizeInGBs; }
  inline bool HighCapacityDatabaseStorageTotalSizeInGBsHasBeenSet() const { return m_highCapacityDatabaseStorageTotalSizeInGBsHasBeenSet; }
  inline void SetHighCapacityDatabaseStorageTotalSizeInGBs(int value) {
    m_highCapacityDatabaseStorageTotalSizeInGBsHasBeenSet = true;
    m_highCapacityDatabaseStorageTotalSizeInGBs = value;
  }
  inline UpdateExascaleDbStorageVaultRequest& WithHighCapacityDatabaseStorageTotalSizeInGBs(int value) {
    SetHighCapacityDatabaseStorageTotalSizeInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether autoscaling is enabled for the Exascale storage vault.</p>
   */
  inline bool GetIsAutoscaleEnabled() const { return m_isAutoscaleEnabled; }
  inline bool IsAutoscaleEnabledHasBeenSet() const { return m_isAutoscaleEnabledHasBeenSet; }
  inline void SetIsAutoscaleEnabled(bool value) {
    m_isAutoscaleEnabledHasBeenSet = true;
    m_isAutoscaleEnabled = value;
  }
  inline UpdateExascaleDbStorageVaultRequest& WithIsAutoscaleEnabled(bool value) {
    SetIsAutoscaleEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_exascaleDbStorageVaultId;

  int m_additionalFlashCacheInPercent{0};

  int m_autoscaleLimitInGBs{0};

  Aws::String m_description;

  Aws::String m_displayName;

  int m_highCapacityDatabaseStorageTotalSizeInGBs{0};

  bool m_isAutoscaleEnabled{false};
  bool m_exascaleDbStorageVaultIdHasBeenSet = false;
  bool m_additionalFlashCacheInPercentHasBeenSet = false;
  bool m_autoscaleLimitInGBsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_displayNameHasBeenSet = false;
  bool m_highCapacityDatabaseStorageTotalSizeInGBsHasBeenSet = false;
  bool m_isAutoscaleEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
