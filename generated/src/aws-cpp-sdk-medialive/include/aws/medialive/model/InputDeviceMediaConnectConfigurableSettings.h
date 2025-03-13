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
    AWS_MEDIALIVE_API InputDeviceMediaConnectConfigurableSettings() = default;
    AWS_MEDIALIVE_API InputDeviceMediaConnectConfigurableSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceMediaConnectConfigurableSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the MediaConnect flow to attach this device to.
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    InputDeviceMediaConnectConfigurableSettings& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN for the role that MediaLive assumes to access the attached flow and
     * secret. For more information about how to create this role, see the MediaLive
     * user guide.
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    InputDeviceMediaConnectConfigurableSettings& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN for the secret that holds the encryption key to encrypt the content
     * output by the device.
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    InputDeviceMediaConnectConfigurableSettings& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the MediaConnect Flow source to stream to.
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    InputDeviceMediaConnectConfigurableSettings& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}
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
