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
class CreateLimitsProfileRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API CreateLimitsProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateLimitsProfile"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

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
  CreateLimitsProfileRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A display name for the limits profile.</p>
   */
  inline const Aws::String& GetProfileName() const { return m_profileName; }
  inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
  template <typename ProfileNameT = Aws::String>
  void SetProfileName(ProfileNameT&& value) {
    m_profileNameHasBeenSet = true;
    m_profileName = std::forward<ProfileNameT>(value);
  }
  template <typename ProfileNameT = Aws::String>
  CreateLimitsProfileRequest& WithProfileName(ProfileNameT&& value) {
    SetProfileName(std::forward<ProfileNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description for the limits profile.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateLimitsProfileRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of resource types to their limit values for this profile.</p>
   */
  inline const Aws::Map<ResourceType, ProfileLimitValue>& GetResourceLimits() const { return m_resourceLimits; }
  inline bool ResourceLimitsHasBeenSet() const { return m_resourceLimitsHasBeenSet; }
  template <typename ResourceLimitsT = Aws::Map<ResourceType, ProfileLimitValue>>
  void SetResourceLimits(ResourceLimitsT&& value) {
    m_resourceLimitsHasBeenSet = true;
    m_resourceLimits = std::forward<ResourceLimitsT>(value);
  }
  template <typename ResourceLimitsT = Aws::Map<ResourceType, ProfileLimitValue>>
  CreateLimitsProfileRequest& WithResourceLimits(ResourceLimitsT&& value) {
    SetResourceLimits(std::forward<ResourceLimitsT>(value));
    return *this;
  }
  inline CreateLimitsProfileRequest& AddResourceLimits(ResourceType key, ProfileLimitValue value) {
    m_resourceLimitsHasBeenSet = true;
    m_resourceLimits.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, the service
   * ignores the request, but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateLimitsProfileRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_profileName;

  Aws::String m_description;

  Aws::Map<ResourceType, ProfileLimitValue> m_resourceLimits;

  Aws::String m_clientToken;
  bool m_accountIdHasBeenSet = false;
  bool m_profileNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_resourceLimitsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
