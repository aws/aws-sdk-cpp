/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/PushNotificationTemplateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class CreatePushTemplateRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API CreatePushTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePushTemplate"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const PushNotificationTemplateRequest& GetPushNotificationTemplateRequest() const { return m_pushNotificationTemplateRequest; }
    inline bool PushNotificationTemplateRequestHasBeenSet() const { return m_pushNotificationTemplateRequestHasBeenSet; }
    template<typename PushNotificationTemplateRequestT = PushNotificationTemplateRequest>
    void SetPushNotificationTemplateRequest(PushNotificationTemplateRequestT&& value) { m_pushNotificationTemplateRequestHasBeenSet = true; m_pushNotificationTemplateRequest = std::forward<PushNotificationTemplateRequestT>(value); }
    template<typename PushNotificationTemplateRequestT = PushNotificationTemplateRequest>
    CreatePushTemplateRequest& WithPushNotificationTemplateRequest(PushNotificationTemplateRequestT&& value) { SetPushNotificationTemplateRequest(std::forward<PushNotificationTemplateRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    CreatePushTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    PushNotificationTemplateRequest m_pushNotificationTemplateRequest;
    bool m_pushNotificationTemplateRequestHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
