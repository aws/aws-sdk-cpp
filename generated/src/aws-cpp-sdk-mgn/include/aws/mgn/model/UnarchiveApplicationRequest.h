/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/Mgn_EXPORTS.h>

#include <utility>

namespace Aws {
namespace mgn {
namespace Model {

/**
 */
class UnarchiveApplicationRequest : public MgnRequest {
 public:
  AWS_MGN_API UnarchiveApplicationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UnarchiveApplication"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Application ID.</p>
   */
  inline const Aws::String& GetApplicationID() const { return m_applicationID; }
  inline bool ApplicationIDHasBeenSet() const { return m_applicationIDHasBeenSet; }
  template <typename ApplicationIDT = Aws::String>
  void SetApplicationID(ApplicationIDT&& value) {
    m_applicationIDHasBeenSet = true;
    m_applicationID = std::forward<ApplicationIDT>(value);
  }
  template <typename ApplicationIDT = Aws::String>
  UnarchiveApplicationRequest& WithApplicationID(ApplicationIDT&& value) {
    SetApplicationID(std::forward<ApplicationIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Account ID.</p>
   */
  inline const Aws::String& GetAccountID() const { return m_accountID; }
  inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
  template <typename AccountIDT = Aws::String>
  void SetAccountID(AccountIDT&& value) {
    m_accountIDHasBeenSet = true;
    m_accountID = std::forward<AccountIDT>(value);
  }
  template <typename AccountIDT = Aws::String>
  UnarchiveApplicationRequest& WithAccountID(AccountIDT&& value) {
    SetAccountID(std::forward<AccountIDT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_applicationID;

  Aws::String m_accountID;
  bool m_applicationIDHasBeenSet = false;
  bool m_accountIDHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
