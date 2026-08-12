/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/odb/OdbRequest.h>
#include <aws/odb/Odb_EXPORTS.h>

#include <utility>

namespace Aws {
namespace odb {
namespace Model {

/**
 */
class CreateExascaleDbStorageVaultRequest : public OdbRequest {
 public:
  AWS_ODB_API CreateExascaleDbStorageVaultRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateExascaleDbStorageVault"; }

  AWS_ODB_API Aws::String SerializePayload() const override;

  AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A user-friendly name for the Exascale storage vault.</p>
   */
  inline const Aws::String& GetDisplayName() const { return m_displayName; }
  inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
  template <typename DisplayNameT = Aws::String>
  void SetDisplayName(DisplayNameT&& value) {
    m_displayNameHasBeenSet = true;
    m_displayName = std::forward<DisplayNameT>(value);
  }
  template <typename DisplayNameT = Aws::String>
  CreateExascaleDbStorageVaultRequest& WithDisplayName(DisplayNameT&& value) {
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
  inline CreateExascaleDbStorageVaultRequest& WithHighCapacityDatabaseStorageTotalSizeInGBs(int value) {
    SetHighCapacityDatabaseStorageTotalSizeInGBs(value);
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
  inline CreateExascaleDbStorageVaultRequest& WithAdditionalFlashCacheInPercent(int value) {
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
  inline CreateExascaleDbStorageVaultRequest& WithAutoscaleLimitInGBs(int value) {
    SetAutoscaleLimitInGBs(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone ID for the Exascale storage vault.</p>
   */
  inline const Aws::String& GetAvailabilityZoneId() const { return m_availabilityZoneId; }
  inline bool AvailabilityZoneIdHasBeenSet() const { return m_availabilityZoneIdHasBeenSet; }
  template <typename AvailabilityZoneIdT = Aws::String>
  void SetAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    m_availabilityZoneIdHasBeenSet = true;
    m_availabilityZoneId = std::forward<AvailabilityZoneIdT>(value);
  }
  template <typename AvailabilityZoneIdT = Aws::String>
  CreateExascaleDbStorageVaultRequest& WithAvailabilityZoneId(AvailabilityZoneIdT&& value) {
    SetAvailabilityZoneId(std::forward<AvailabilityZoneIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Availability Zone for the Exascale storage vault.</p>
   */
  inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
  inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
  template <typename AvailabilityZoneT = Aws::String>
  void SetAvailabilityZone(AvailabilityZoneT&& value) {
    m_availabilityZoneHasBeenSet = true;
    m_availabilityZone = std::forward<AvailabilityZoneT>(value);
  }
  template <typename AvailabilityZoneT = Aws::String>
  CreateExascaleDbStorageVaultRequest& WithAvailabilityZone(AvailabilityZoneT&& value) {
    SetAvailabilityZone(std::forward<AvailabilityZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the Exascale storage vault.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateExascaleDbStorageVaultRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  inline CreateExascaleDbStorageVaultRequest& WithIsAutoscaleEnabled(bool value) {
    SetIsAutoscaleEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of resource tags to apply to the Exascale storage vault.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateExascaleDbStorageVaultRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateExascaleDbStorageVaultRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time zone for the Exascale storage vault.</p>
   */
  inline const Aws::String& GetTimeZone() const { return m_timeZone; }
  inline bool TimeZoneHasBeenSet() const { return m_timeZoneHasBeenSet; }
  template <typename TimeZoneT = Aws::String>
  void SetTimeZone(TimeZoneT&& value) {
    m_timeZoneHasBeenSet = true;
    m_timeZone = std::forward<TimeZoneT>(value);
  }
  template <typename TimeZoneT = Aws::String>
  CreateExascaleDbStorageVaultRequest& WithTimeZone(TimeZoneT&& value) {
    SetTimeZone(std::forward<TimeZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If you don't specify a client token, the Amazon Web
   * Services SDK automatically generates one and uses it for the request to ensure
   * idempotency. The client token is valid for up to 24 hours after it's first
   * used.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateExascaleDbStorageVaultRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_displayName;

  int m_highCapacityDatabaseStorageTotalSizeInGBs{0};

  int m_additionalFlashCacheInPercent{0};

  int m_autoscaleLimitInGBs{0};

  Aws::String m_availabilityZoneId;

  Aws::String m_availabilityZone;

  Aws::String m_description;

  bool m_isAutoscaleEnabled{false};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_timeZone;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_displayNameHasBeenSet = false;
  bool m_highCapacityDatabaseStorageTotalSizeInGBsHasBeenSet = false;
  bool m_additionalFlashCacheInPercentHasBeenSet = false;
  bool m_autoscaleLimitInGBsHasBeenSet = false;
  bool m_availabilityZoneIdHasBeenSet = false;
  bool m_availabilityZoneHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_isAutoscaleEnabledHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_timeZoneHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace odb
}  // namespace Aws
