/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/SMSTemplateRequest.h>
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
  class CreateSmsTemplateRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API CreateSmsTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSmsTemplate"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const SMSTemplateRequest& GetSMSTemplateRequest() const { return m_sMSTemplateRequest; }
    inline bool SMSTemplateRequestHasBeenSet() const { return m_sMSTemplateRequestHasBeenSet; }
    template<typename SMSTemplateRequestT = SMSTemplateRequest>
    void SetSMSTemplateRequest(SMSTemplateRequestT&& value) { m_sMSTemplateRequestHasBeenSet = true; m_sMSTemplateRequest = std::forward<SMSTemplateRequestT>(value); }
    template<typename SMSTemplateRequestT = SMSTemplateRequest>
    CreateSmsTemplateRequest& WithSMSTemplateRequest(SMSTemplateRequestT&& value) { SetSMSTemplateRequest(std::forward<SMSTemplateRequestT>(value)); return *this;}
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
    CreateSmsTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    SMSTemplateRequest m_sMSTemplateRequest;
    bool m_sMSTemplateRequestHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
