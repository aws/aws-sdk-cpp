/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/EmailTemplateRequest.h>
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
  class CreateEmailTemplateRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API CreateEmailTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEmailTemplate"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const EmailTemplateRequest& GetEmailTemplateRequest() const { return m_emailTemplateRequest; }
    inline bool EmailTemplateRequestHasBeenSet() const { return m_emailTemplateRequestHasBeenSet; }
    template<typename EmailTemplateRequestT = EmailTemplateRequest>
    void SetEmailTemplateRequest(EmailTemplateRequestT&& value) { m_emailTemplateRequestHasBeenSet = true; m_emailTemplateRequest = std::forward<EmailTemplateRequestT>(value); }
    template<typename EmailTemplateRequestT = EmailTemplateRequest>
    CreateEmailTemplateRequest& WithEmailTemplateRequest(EmailTemplateRequestT&& value) { SetEmailTemplateRequest(std::forward<EmailTemplateRequestT>(value)); return *this;}
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
    CreateEmailTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    EmailTemplateRequest m_emailTemplateRequest;
    bool m_emailTemplateRequestHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
