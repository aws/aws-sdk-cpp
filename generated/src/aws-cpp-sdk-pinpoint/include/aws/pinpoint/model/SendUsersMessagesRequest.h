/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/SendUsersMessageRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class SendUsersMessagesRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API SendUsersMessagesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendUsersMessages"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier for the application. This identifier is displayed as
     * the <b>Project ID</b> on the Amazon Pinpoint console.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    SendUsersMessagesRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const SendUsersMessageRequest& GetSendUsersMessageRequest() const { return m_sendUsersMessageRequest; }
    inline bool SendUsersMessageRequestHasBeenSet() const { return m_sendUsersMessageRequestHasBeenSet; }
    template<typename SendUsersMessageRequestT = SendUsersMessageRequest>
    void SetSendUsersMessageRequest(SendUsersMessageRequestT&& value) { m_sendUsersMessageRequestHasBeenSet = true; m_sendUsersMessageRequest = std::forward<SendUsersMessageRequestT>(value); }
    template<typename SendUsersMessageRequestT = SendUsersMessageRequest>
    SendUsersMessagesRequest& WithSendUsersMessageRequest(SendUsersMessageRequestT&& value) { SetSendUsersMessageRequest(std::forward<SendUsersMessageRequestT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    SendUsersMessageRequest m_sendUsersMessageRequest;
    bool m_sendUsersMessageRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
