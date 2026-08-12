/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace QuickSight {
namespace Model {

/**
 */
class DescribeLimitsProfileRequest : public QuickSightRequest {
 public:
  AWS_QUICKSIGHT_API DescribeLimitsProfileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeLimitsProfile"; }

  AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

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
  DescribeLimitsProfileRequest& WithProfileId(ProfileIdT&& value) {
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
  DescribeLimitsProfileRequest& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileId;

  Aws::String m_accountId;
  bool m_profileIdHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
