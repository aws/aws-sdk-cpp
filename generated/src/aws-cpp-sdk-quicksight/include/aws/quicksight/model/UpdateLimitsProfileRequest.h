/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ProfileLimitValue.h>
#include <aws/quicksight/model/ResourceType.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class UpdateLimitsProfileRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API UpdateLimitsProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateLimitsProfile"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the limits profile to update.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  UpdateLimitsProfileRequest& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that contains the limits
   * profile.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  UpdateLimitsProfileRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new display name for the limits profile.</p>
   */
  inline const Aws::String& GetProfileName() const { return m_profileName; }
  inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
  template <typename ProfileNameT = Aws::String>
  void SetProfileName(ProfileNameT&& value) {
    m_profileNameHasBeenSet = true;
    m_profileName = std::forward<ProfileNameT>(value);
  }
  template <typename ProfileNameT = Aws::String>
  UpdateLimitsProfileRequest& WithProfileName(ProfileNameT&& value) {
    SetProfileName(std::forward<ProfileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description for the limits profile.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateLimitsProfileRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of resource types to their updated limit values.</p>
   */
  inline const Aws::Map<ResourceType, ProfileLimitValue>& GetResourceLimits() const { return m_resourceLimits; }
  inline bool ResourceLimitsHasBeenSet() const { return m_resourceLimitsHasBeenSet; }
  template <typename ResourceLimitsT = Aws::Map<ResourceType, ProfileLimitValue>>
  void SetResourceLimits(ResourceLimitsT&& value) {
    m_resourceLimitsHasBeenSet = true;
    m_resourceLimits = std::forward<ResourceLimitsT>(value);
  }
  template <typename ResourceLimitsT = Aws::Map<ResourceType, ProfileLimitValue>>
  UpdateLimitsProfileRequest& WithResourceLimits(ResourceLimitsT&& value) {
    SetResourceLimits(std::forward<ResourceLimitsT>(value));
    return *this;
  }
  inline UpdateLimitsProfileRequest& AddResourceLimits(ResourceType key, ProfileLimitValue value) {
    m_resourceLimitsHasBeenSet = true;
    m_resourceLimits.emplace(key, value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileId;

  Aws::String m_accountId;

  Aws::String m_profileName;

  Aws::String m_description;

  Aws::Map<ResourceType, ProfileLimitValue> m_resourceLimits;
  bool m_profileIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_profileNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_resourceLimitsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
