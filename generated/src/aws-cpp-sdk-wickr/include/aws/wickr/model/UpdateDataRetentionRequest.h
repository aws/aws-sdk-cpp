/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/DataRetentionActionType.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class UpdateDataRetentionRequest : public WickrRequest {
 public:
  AWS_WICKR_API UpdateDataRetentionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDataRetention"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network containing the data retention bot.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  UpdateDataRetentionRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to perform. Valid values are 'ENABLE' (to enable the data
   * retention service), 'DISABLE' (to disable the service), or 'PUBKEY_MSG_ACK' (to
   * acknowledge the public key message).</p>
   */
  inline DataRetentionActionType GetActionType() const { return m_actionType; }
  inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
  inline void SetActionType(DataRetentionActionType value) {
    m_actionTypeHasBeenSet = true;
    m_actionType = value;
  }
  inline UpdateDataRetentionRequest& WithActionType(DataRetentionActionType value) {
    SetActionType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  DataRetentionActionType m_actionType{DataRetentionActionType::NOT_SET};
  bool m_networkIdHasBeenSet = false;
  bool m_actionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
