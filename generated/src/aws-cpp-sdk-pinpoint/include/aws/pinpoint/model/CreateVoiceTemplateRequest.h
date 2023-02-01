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
    AWS_PINPOINT_API CreateVoiceTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateVoiceTemplate"; }

    AWS_PINPOINT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline CreateVoiceTemplateRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline CreateVoiceTemplateRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the message template. A template name must start with an
     * alphanumeric character and can contain a maximum of 128 characters. The
     * characters can be alphanumeric characters, underscores (_), or hyphens (-).
     * Template names are case sensitive.</p>
     */
    inline CreateVoiceTemplateRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    
    inline const VoiceTemplateRequest& GetVoiceTemplateRequest() const{ return m_voiceTemplateRequest; }

    
    inline bool VoiceTemplateRequestHasBeenSet() const { return m_voiceTemplateRequestHasBeenSet; }

    
    inline void SetVoiceTemplateRequest(const VoiceTemplateRequest& value) { m_voiceTemplateRequestHasBeenSet = true; m_voiceTemplateRequest = value; }

    
    inline void SetVoiceTemplateRequest(VoiceTemplateRequest&& value) { m_voiceTemplateRequestHasBeenSet = true; m_voiceTemplateRequest = std::move(value); }

    
    inline CreateVoiceTemplateRequest& WithVoiceTemplateRequest(const VoiceTemplateRequest& value) { SetVoiceTemplateRequest(value); return *this;}

    
    inline CreateVoiceTemplateRequest& WithVoiceTemplateRequest(VoiceTemplateRequest&& value) { SetVoiceTemplateRequest(std::move(value)); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    VoiceTemplateRequest m_voiceTemplateRequest;
    bool m_voiceTemplateRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
