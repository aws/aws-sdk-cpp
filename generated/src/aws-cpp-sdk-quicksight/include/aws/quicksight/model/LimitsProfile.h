/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ProfileLimitValue.h>
#include <aws/quicksight/model/ResourceType.h>

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
 * <p>A limits profile that defines resource usage limits for Amazon Quick Sight
 * users. Limits profiles can be assigned to users, groups, or roles to control
 * resource consumption.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LimitsProfile">AWS
 * API Reference</a></p>
 */
class LimitsProfile {
 public:
  AWS_QUICKSIGHT_API LimitsProfile() = default;
  AWS_QUICKSIGHT_API LimitsProfile(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API LimitsProfile& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the limits profile.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  LimitsProfile& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the limits profile.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  LimitsProfile& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
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
  LimitsProfile& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the limits profile.</p>
   */
  inline const Aws::String& GetProfileName() const { return m_profileName; }
  inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
  template <typename ProfileNameT = Aws::String>
  void SetProfileName(ProfileNameT&& value) {
    m_profileNameHasBeenSet = true;
    m_profileName = std::forward<ProfileNameT>(value);
  }
  template <typename ProfileNameT = Aws::String>
  LimitsProfile& WithProfileName(ProfileNameT&& value) {
    SetProfileName(std::forward<ProfileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the limits profile.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  LimitsProfile& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of resource types to their limit values.</p>
   */
  inline const Aws::Map<ResourceType, ProfileLimitValue>& GetResourceLimits() const { return m_resourceLimits; }
  inline bool ResourceLimitsHasBeenSet() const { return m_resourceLimitsHasBeenSet; }
  template <typename ResourceLimitsT = Aws::Map<ResourceType, ProfileLimitValue>>
  void SetResourceLimits(ResourceLimitsT&& value) {
    m_resourceLimitsHasBeenSet = true;
    m_resourceLimits = std::forward<ResourceLimitsT>(value);
  }
  template <typename ResourceLimitsT = Aws::Map<ResourceType, ProfileLimitValue>>
  LimitsProfile& WithResourceLimits(ResourceLimitsT&& value) {
    SetResourceLimits(std::forward<ResourceLimitsT>(value));
    return *this;
  }
  inline LimitsProfile& AddResourceLimits(ResourceType key, ProfileLimitValue value) {
    m_resourceLimitsHasBeenSet = true;
    m_resourceLimits.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the limits profile was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  LimitsProfile& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the limits profile was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  LimitsProfile& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileId;

  Aws::String m_arn;

  Aws::String m_accountId;

  Aws::String m_profileName;

  Aws::String m_description;

  Aws::Map<ResourceType, ProfileLimitValue> m_resourceLimits;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_profileIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_profileNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_resourceLimitsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
