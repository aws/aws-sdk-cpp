/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class UpdateSystemRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API UpdateSystemRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateSystem"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetSystemArn() const { return m_systemArn; }
  inline bool SystemArnHasBeenSet() const { return m_systemArnHasBeenSet; }
  template <typename SystemArnT = Aws::String>
  void SetSystemArn(SystemArnT&& value) {
    m_systemArnHasBeenSet = true;
    m_systemArn = std::forward<SystemArnT>(value);
  }
  template <typename SystemArnT = Aws::String>
  UpdateSystemRequest& WithSystemArn(SystemArnT&& value) {
    SetSystemArn(std::forward<SystemArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateSystemRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether cross-account sharing is enabled for the system.</p>
   */
  inline bool GetSharingEnabled() const { return m_sharingEnabled; }
  inline bool SharingEnabledHasBeenSet() const { return m_sharingEnabledHasBeenSet; }
  inline void SetSharingEnabled(bool value) {
    m_sharingEnabledHasBeenSet = true;
    m_sharingEnabled = value;
  }
  inline UpdateSystemRequest& WithSharingEnabled(bool value) {
    SetSharingEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_systemArn;

  Aws::String m_description;

  bool m_sharingEnabled{false};
  bool m_systemArnHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_sharingEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
