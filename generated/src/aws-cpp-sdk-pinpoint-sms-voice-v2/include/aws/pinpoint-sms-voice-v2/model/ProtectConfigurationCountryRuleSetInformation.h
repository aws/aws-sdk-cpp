/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/model/ProtectStatus.h>
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
   * <p>The types of statuses that can be used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/ProtectConfigurationCountryRuleSetInformation">AWS
   * API Reference</a></p>
   */
  class ProtectConfigurationCountryRuleSetInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationCountryRuleSetInformation();
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationCountryRuleSetInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API ProtectConfigurationCountryRuleSetInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The types of protection that can be used.</p>
     */
    inline const ProtectStatus& GetProtectStatus() const{ return m_protectStatus; }

    /**
     * <p>The types of protection that can be used.</p>
     */
    inline bool ProtectStatusHasBeenSet() const { return m_protectStatusHasBeenSet; }

    /**
     * <p>The types of protection that can be used.</p>
     */
    inline void SetProtectStatus(const ProtectStatus& value) { m_protectStatusHasBeenSet = true; m_protectStatus = value; }

    /**
     * <p>The types of protection that can be used.</p>
     */
    inline void SetProtectStatus(ProtectStatus&& value) { m_protectStatusHasBeenSet = true; m_protectStatus = std::move(value); }

    /**
     * <p>The types of protection that can be used.</p>
     */
    inline ProtectConfigurationCountryRuleSetInformation& WithProtectStatus(const ProtectStatus& value) { SetProtectStatus(value); return *this;}

    /**
     * <p>The types of protection that can be used.</p>
     */
    inline ProtectConfigurationCountryRuleSetInformation& WithProtectStatus(ProtectStatus&& value) { SetProtectStatus(std::move(value)); return *this;}

  private:

    ProtectStatus m_protectStatus;
    bool m_protectStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
