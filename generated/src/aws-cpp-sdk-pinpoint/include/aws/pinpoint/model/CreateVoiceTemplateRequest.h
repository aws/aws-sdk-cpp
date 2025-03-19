/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/VoiceTemplateRequest.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class CreateVoiceTemplateRequest : public PinpointRequest
  {
  public:
    AWS_PINPOINT_API CreateVoiceTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVoiceTemplate"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


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
    CreateVoiceTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const VoiceTemplateRequest& GetVoiceTemplateRequest() const { return m_voiceTemplateRequest; }
    inline bool VoiceTemplateRequestHasBeenSet() const { return m_voiceTemplateRequestHasBeenSet; }
    template<typename VoiceTemplateRequestT = VoiceTemplateRequest>
    void SetVoiceTemplateRequest(VoiceTemplateRequestT&& value) { m_voiceTemplateRequestHasBeenSet = true; m_voiceTemplateRequest = std::forward<VoiceTemplateRequestT>(value); }
    template<typename VoiceTemplateRequestT = VoiceTemplateRequest>
    CreateVoiceTemplateRequest& WithVoiceTemplateRequest(VoiceTemplateRequestT&& value) { SetVoiceTemplateRequest(std::forward<VoiceTemplateRequestT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    VoiceTemplateRequest m_voiceTemplateRequest;
    bool m_voiceTemplateRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
