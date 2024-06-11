﻿/**
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
   * Information about the MediaConnect flow attached to the device.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputDeviceMediaConnectSettings">AWS
   * API Reference</a></p>
   */
  class InputDeviceMediaConnectSettings
  {
  public:
    AWS_MEDIALIVE_API InputDeviceMediaConnectSettings();
    AWS_MEDIALIVE_API InputDeviceMediaConnectSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputDeviceMediaConnectSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ARN of the MediaConnect flow.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline InputDeviceMediaConnectSettings& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline InputDeviceMediaConnectSettings& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline InputDeviceMediaConnectSettings& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN for the role that MediaLive assumes to access the attached flow and
     * secret.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline InputDeviceMediaConnectSettings& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline InputDeviceMediaConnectSettings& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline InputDeviceMediaConnectSettings& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the secret used to encrypt the stream.
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline InputDeviceMediaConnectSettings& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline InputDeviceMediaConnectSettings& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline InputDeviceMediaConnectSettings& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the MediaConnect flow source.
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }
    inline InputDeviceMediaConnectSettings& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}
    inline InputDeviceMediaConnectSettings& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}
    inline InputDeviceMediaConnectSettings& WithSourceName(const char* value) { SetSourceName(value); return *this;}
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
