/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms-voice/PinpointSMSVoice_EXPORTS.h>
#include <aws/sms-voice/PinpointSMSVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoice
{
namespace Model
{

  /**
   * A request to create a new configuration set.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-2018-09-05/CreateConfigurationSetRequest">AWS
   * API Reference</a></p>
   */
  class CreateConfigurationSetRequest : public PinpointSMSVoiceRequest
  {
  public:
    AWS_PINPOINTSMSVOICE_API CreateConfigurationSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationSet"; }

    AWS_PINPOINTSMSVOICE_API Aws::String SerializePayload() const override;


    /**
     * The name that you want to give the configuration set.
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * The name that you want to give the configuration set.
     */
    inline bool ConfigurationSetNameHasBeenSet() const { return m_configurationSetNameHasBeenSet; }

    /**
     * The name that you want to give the configuration set.
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = value; }

    /**
     * The name that you want to give the configuration set.
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName = std::move(value); }

    /**
     * The name that you want to give the configuration set.
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetNameHasBeenSet = true; m_configurationSetName.assign(value); }

    /**
     * The name that you want to give the configuration set.
     */
    inline CreateConfigurationSetRequest& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * The name that you want to give the configuration set.
     */
    inline CreateConfigurationSetRequest& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * The name that you want to give the configuration set.
     */
    inline CreateConfigurationSetRequest& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}

  private:

    Aws::String m_configurationSetName;
    bool m_configurationSetNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoice
} // namespace Aws
