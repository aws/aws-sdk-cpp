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
class DeleteRemoteSourceActionRequest : public MgnRequest {
 public:
  AWS_MGN_API DeleteRemoteSourceActionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteRemoteSourceAction"; }

  AWS_MGN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the source action to delete.</p>
   */
  inline const Aws::String& GetRemoteSourceActionID() const { return m_remoteSourceActionID; }
  inline bool RemoteSourceActionIDHasBeenSet() const { return m_remoteSourceActionIDHasBeenSet; }
  template <typename RemoteSourceActionIDT = Aws::String>
  void SetRemoteSourceActionID(RemoteSourceActionIDT&& value) {
    m_remoteSourceActionIDHasBeenSet = true;
    m_remoteSourceActionID = std::forward<RemoteSourceActionIDT>(value);
  }
  template <typename RemoteSourceActionIDT = Aws::String>
  DeleteRemoteSourceActionRequest& WithRemoteSourceActionID(RemoteSourceActionIDT&& value) {
    SetRemoteSourceActionID(std::forward<RemoteSourceActionIDT>(value));
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
  DeleteRemoteSourceActionRequest& WithAccountID(AccountIDT&& value) {
    SetAccountID(std::forward<AccountIDT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_remoteSourceActionID;

  Aws::String m_accountID;
  bool m_remoteSourceActionIDHasBeenSet = false;
  bool m_accountIDHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
