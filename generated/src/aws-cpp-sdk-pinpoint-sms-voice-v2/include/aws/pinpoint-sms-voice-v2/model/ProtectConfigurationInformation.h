﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Provides information on the specified protect configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ProtectConfigurationInformation">AWS
   * API Reference</a></p>
   */
  class ProtectConfigurationInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationInformation();
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationArn() const{ return m_protectConfigurationArn; }
    inline bool ProtectConfigurationArnHasBeenSet() const { return m_protectConfigurationArnHasBeenSet; }
    inline void SetProtectConfigurationArn(const Aws::String& value) { m_protectConfigurationArnHasBeenSet = true; m_protectConfigurationArn = value; }
    inline void SetProtectConfigurationArn(Aws::String&& value) { m_protectConfigurationArnHasBeenSet = true; m_protectConfigurationArn = std::move(value); }
    inline void SetProtectConfigurationArn(const char* value) { m_protectConfigurationArnHasBeenSet = true; m_protectConfigurationArn.assign(value); }
    inline ProtectConfigurationInformation& WithProtectConfigurationArn(const Aws::String& value) { SetProtectConfigurationArn(value); return *this;}
    inline ProtectConfigurationInformation& WithProtectConfigurationArn(Aws::String&& value) { SetProtectConfigurationArn(std::move(value)); return *this;}
    inline ProtectConfigurationInformation& WithProtectConfigurationArn(const char* value) { SetProtectConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const{ return m_protectConfigurationId; }
    inline bool ProtectConfigurationIdHasBeenSet() const { return m_protectConfigurationIdHasBeenSet; }
    inline void SetProtectConfigurationId(const Aws::String& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = value; }
    inline void SetProtectConfigurationId(Aws::String&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::move(value); }
    inline void SetProtectConfigurationId(const char* value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId.assign(value); }
    inline ProtectConfigurationInformation& WithProtectConfigurationId(const Aws::String& value) { SetProtectConfigurationId(value); return *this;}
    inline ProtectConfigurationInformation& WithProtectConfigurationId(Aws::String&& value) { SetProtectConfigurationId(std::move(value)); return *this;}
    inline ProtectConfigurationInformation& WithProtectConfigurationId(const char* value) { SetProtectConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the protect configuration was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ProtectConfigurationInformation& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ProtectConfigurationInformation& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is true if the protect configuration is set as your account default
     * protect configuration.</p>
     */
    inline bool GetAccountDefault() const{ return m_accountDefault; }
    inline bool AccountDefaultHasBeenSet() const { return m_accountDefaultHasBeenSet; }
    inline void SetAccountDefault(bool value) { m_accountDefaultHasBeenSet = true; m_accountDefault = value; }
    inline ProtectConfigurationInformation& WithAccountDefault(bool value) { SetAccountDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of deletion protection for the protect configuration. When set to
     * true deletion protection is enabled. By default this is set to false. </p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }
    inline bool DeletionProtectionEnabledHasBeenSet() const { return m_deletionProtectionEnabledHasBeenSet; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabledHasBeenSet = true; m_deletionProtectionEnabled = value; }
    inline ProtectConfigurationInformation& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_protectConfigurationArn;
    bool m_protectConfigurationArnHasBeenSet = false;

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    bool m_accountDefault;
    bool m_accountDefaultHasBeenSet = false;

    bool m_deletionProtectionEnabled;
    bool m_deletionProtectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
