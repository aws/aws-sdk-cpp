/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class SetAccountDefaultProtectConfigurationResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API SetAccountDefaultProtectConfigurationResult() = default;
    AWS_PINPOINTSMSVOICEV2_API SetAccountDefaultProtectConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API SetAccountDefaultProtectConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the account default protect
     * configuration.</p>
     */
    inline const Aws::String& GetDefaultProtectConfigurationArn() const { return m_defaultProtectConfigurationArn; }
    template<typename DefaultProtectConfigurationArnT = Aws::String>
    void SetDefaultProtectConfigurationArn(DefaultProtectConfigurationArnT&& value) { m_defaultProtectConfigurationArnHasBeenSet = true; m_defaultProtectConfigurationArn = std::forward<DefaultProtectConfigurationArnT>(value); }
    template<typename DefaultProtectConfigurationArnT = Aws::String>
    SetAccountDefaultProtectConfigurationResult& WithDefaultProtectConfigurationArn(DefaultProtectConfigurationArnT&& value) { SetDefaultProtectConfigurationArn(std::forward<DefaultProtectConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the account default protect configuration.</p>
     */
    inline const Aws::String& GetDefaultProtectConfigurationId() const { return m_defaultProtectConfigurationId; }
    template<typename DefaultProtectConfigurationIdT = Aws::String>
    void SetDefaultProtectConfigurationId(DefaultProtectConfigurationIdT&& value) { m_defaultProtectConfigurationIdHasBeenSet = true; m_defaultProtectConfigurationId = std::forward<DefaultProtectConfigurationIdT>(value); }
    template<typename DefaultProtectConfigurationIdT = Aws::String>
    SetAccountDefaultProtectConfigurationResult& WithDefaultProtectConfigurationId(DefaultProtectConfigurationIdT&& value) { SetDefaultProtectConfigurationId(std::forward<DefaultProtectConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SetAccountDefaultProtectConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultProtectConfigurationArn;
    bool m_defaultProtectConfigurationArnHasBeenSet = false;

    Aws::String m_defaultProtectConfigurationId;
    bool m_defaultProtectConfigurationIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
