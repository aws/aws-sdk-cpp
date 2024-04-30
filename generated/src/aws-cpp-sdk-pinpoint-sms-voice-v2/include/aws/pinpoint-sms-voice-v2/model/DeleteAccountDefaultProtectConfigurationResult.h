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
  class DeleteAccountDefaultProtectConfigurationResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteAccountDefaultProtectConfigurationResult();
    AWS_PINPOINTSMSVOICEV2_API DeleteAccountDefaultProtectConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteAccountDefaultProtectConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the account default protect
     * configuration.</p>
     */
    inline const Aws::String& GetDefaultProtectConfigurationArn() const{ return m_defaultProtectConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account default protect
     * configuration.</p>
     */
    inline void SetDefaultProtectConfigurationArn(const Aws::String& value) { m_defaultProtectConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the account default protect
     * configuration.</p>
     */
    inline void SetDefaultProtectConfigurationArn(Aws::String&& value) { m_defaultProtectConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account default protect
     * configuration.</p>
     */
    inline void SetDefaultProtectConfigurationArn(const char* value) { m_defaultProtectConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the account default protect
     * configuration.</p>
     */
    inline DeleteAccountDefaultProtectConfigurationResult& WithDefaultProtectConfigurationArn(const Aws::String& value) { SetDefaultProtectConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account default protect
     * configuration.</p>
     */
    inline DeleteAccountDefaultProtectConfigurationResult& WithDefaultProtectConfigurationArn(Aws::String&& value) { SetDefaultProtectConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the account default protect
     * configuration.</p>
     */
    inline DeleteAccountDefaultProtectConfigurationResult& WithDefaultProtectConfigurationArn(const char* value) { SetDefaultProtectConfigurationArn(value); return *this;}


    /**
     * <p>The unique identifier of the account default protect configuration.</p>
     */
    inline const Aws::String& GetDefaultProtectConfigurationId() const{ return m_defaultProtectConfigurationId; }

    /**
     * <p>The unique identifier of the account default protect configuration.</p>
     */
    inline void SetDefaultProtectConfigurationId(const Aws::String& value) { m_defaultProtectConfigurationId = value; }

    /**
     * <p>The unique identifier of the account default protect configuration.</p>
     */
    inline void SetDefaultProtectConfigurationId(Aws::String&& value) { m_defaultProtectConfigurationId = std::move(value); }

    /**
     * <p>The unique identifier of the account default protect configuration.</p>
     */
    inline void SetDefaultProtectConfigurationId(const char* value) { m_defaultProtectConfigurationId.assign(value); }

    /**
     * <p>The unique identifier of the account default protect configuration.</p>
     */
    inline DeleteAccountDefaultProtectConfigurationResult& WithDefaultProtectConfigurationId(const Aws::String& value) { SetDefaultProtectConfigurationId(value); return *this;}

    /**
     * <p>The unique identifier of the account default protect configuration.</p>
     */
    inline DeleteAccountDefaultProtectConfigurationResult& WithDefaultProtectConfigurationId(Aws::String&& value) { SetDefaultProtectConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the account default protect configuration.</p>
     */
    inline DeleteAccountDefaultProtectConfigurationResult& WithDefaultProtectConfigurationId(const char* value) { SetDefaultProtectConfigurationId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteAccountDefaultProtectConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteAccountDefaultProtectConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteAccountDefaultProtectConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_defaultProtectConfigurationArn;

    Aws::String m_defaultProtectConfigurationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
