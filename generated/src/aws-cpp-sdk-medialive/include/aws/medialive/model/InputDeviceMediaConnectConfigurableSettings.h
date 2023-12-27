/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MediaLive
{
namespace Model
{

  /**
   * Parameters required to attach a MediaConnect flow to the device.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceMediaConnectConfigurableSettings">AWS
   * API Reference</a></p>
   */
  class InputDeviceMediaConnectConfigurableSettings
  {
  public:
    AWS_MEDIALIVE_API InputDeviceMediaConnectConfigurableSettings();
    AWS_MEDIALIVE_API InputDeviceMediaConnectConfigurableSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceMediaConnectConfigurableSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The ARN of the MediaConnect flow to attach this device to.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }

    /**
     * The ARN of the MediaConnect flow to attach this device to.
     */
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }

    /**
     * The ARN of the MediaConnect flow to attach this device to.
     */
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }

    /**
     * The ARN of the MediaConnect flow to attach this device to.
     */
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }

    /**
     * The ARN of the MediaConnect flow to attach this device to.
     */
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }

    /**
     * The ARN of the MediaConnect flow to attach this device to.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}

    /**
     * The ARN of the MediaConnect flow to attach this device to.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}

    /**
     * The ARN of the MediaConnect flow to attach this device to.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}


    /**
     * The ARN for the role that MediaLive assumes to access the attached flow and
     * secret. For more information about how to create this role, see the MediaLive
     * user guide.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The ARN for the role that MediaLive assumes to access the attached flow and
     * secret. For more information about how to create this role, see the MediaLive
     * user guide.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The ARN for the role that MediaLive assumes to access the attached flow and
     * secret. For more information about how to create this role, see the MediaLive
     * user guide.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The ARN for the role that MediaLive assumes to access the attached flow and
     * secret. For more information about how to create this role, see the MediaLive
     * user guide.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The ARN for the role that MediaLive assumes to access the attached flow and
     * secret. For more information about how to create this role, see the MediaLive
     * user guide.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The ARN for the role that MediaLive assumes to access the attached flow and
     * secret. For more information about how to create this role, see the MediaLive
     * user guide.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The ARN for the role that MediaLive assumes to access the attached flow and
     * secret. For more information about how to create this role, see the MediaLive
     * user guide.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The ARN for the role that MediaLive assumes to access the attached flow and
     * secret. For more information about how to create this role, see the MediaLive
     * user guide.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * The ARN for the secret that holds the encryption key to encrypt the content
     * output by the device.
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }

    /**
     * The ARN for the secret that holds the encryption key to encrypt the content
     * output by the device.
     */
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }

    /**
     * The ARN for the secret that holds the encryption key to encrypt the content
     * output by the device.
     */
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }

    /**
     * The ARN for the secret that holds the encryption key to encrypt the content
     * output by the device.
     */
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }

    /**
     * The ARN for the secret that holds the encryption key to encrypt the content
     * output by the device.
     */
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }

    /**
     * The ARN for the secret that holds the encryption key to encrypt the content
     * output by the device.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}

    /**
     * The ARN for the secret that holds the encryption key to encrypt the content
     * output by the device.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}

    /**
     * The ARN for the secret that holds the encryption key to encrypt the content
     * output by the device.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}


    /**
     * The name of the MediaConnect Flow source to stream to.
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    /**
     * The name of the MediaConnect Flow source to stream to.
     */
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }

    /**
     * The name of the MediaConnect Flow source to stream to.
     */
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }

    /**
     * The name of the MediaConnect Flow source to stream to.
     */
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }

    /**
     * The name of the MediaConnect Flow source to stream to.
     */
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }

    /**
     * The name of the MediaConnect Flow source to stream to.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    /**
     * The name of the MediaConnect Flow source to stream to.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    /**
     * The name of the MediaConnect Flow source to stream to.
     */
    inline InputDeviceMediaConnectConfigurableSettings& WithSourceName(const char* value) { SetSourceName(value); return *this;}

  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
