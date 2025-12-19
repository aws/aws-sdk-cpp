/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/WickrRequest.h>
#include <aws/wickr/Wickr_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Wickr {
namespace Model {

/**
 */
class GetBotRequest : public WickrRequest {
 public:
  AWS_WICKR_API GetBotRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetBot"; }

  AWS_WICKR_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the Wickr network containing the bot.</p>
   */
  inline const Aws::String& GetNetworkId() const { return m_networkId; }
  inline bool NetworkIdHasBeenSet() const { return m_networkIdHasBeenSet; }
  template <typename NetworkIdT = Aws::String>
  void SetNetworkId(NetworkIdT&& value) {
    m_networkIdHasBeenSet = true;
    m_networkId = std::forward<NetworkIdT>(value);
  }
  template <typename NetworkIdT = Aws::String>
  GetBotRequest& WithNetworkId(NetworkIdT&& value) {
    SetNetworkId(std::forward<NetworkIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the bot to retrieve.</p>
   */
  inline const Aws::String& GetBotId() const { return m_botId; }
  inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
  template <typename BotIdT = Aws::String>
  void SetBotId(BotIdT&& value) {
    m_botIdHasBeenSet = true;
    m_botId = std::forward<BotIdT>(value);
  }
  template <typename BotIdT = Aws::String>
  GetBotRequest& WithBotId(BotIdT&& value) {
    SetBotId(std::forward<BotIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_networkId;

  Aws::String m_botId;
  bool m_networkIdHasBeenSet = false;
  bool m_botIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
