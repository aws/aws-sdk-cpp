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
  class DisassociateProtectConfigurationResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DisassociateProtectConfigurationResult();
    AWS_PINPOINTSMSVOICEV2_API DisassociateProtectConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DisassociateProtectConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline const Aws::String& GetConfigurationSetArn() const{ return m_configurationSetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline void SetConfigurationSetArn(const Aws::String& value) { m_configurationSetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline void SetConfigurationSetArn(Aws::String&& value) { m_configurationSetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline void SetConfigurationSetArn(const char* value) { m_configurationSetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline DisassociateProtectConfigurationResult& WithConfigurationSetArn(const Aws::String& value) { SetConfigurationSetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline DisassociateProtectConfigurationResult& WithConfigurationSetArn(Aws::String&& value) { SetConfigurationSetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the configuration set.</p>
     */
    inline DisassociateProtectConfigurationResult& WithConfigurationSetArn(const char* value) { SetConfigurationSetArn(value); return *this;}


    /**
     * <p>The name of the ConfigurationSet.</p>
     */
    inline const Aws::String& GetConfigurationSetName() const{ return m_configurationSetName; }

    /**
     * <p>The name of the ConfigurationSet.</p>
     */
    inline void SetConfigurationSetName(const Aws::String& value) { m_configurationSetName = value; }

    /**
     * <p>The name of the ConfigurationSet.</p>
     */
    inline void SetConfigurationSetName(Aws::String&& value) { m_configurationSetName = std::move(value); }

    /**
     * <p>The name of the ConfigurationSet.</p>
     */
    inline void SetConfigurationSetName(const char* value) { m_configurationSetName.assign(value); }

    /**
     * <p>The name of the ConfigurationSet.</p>
     */
    inline DisassociateProtectConfigurationResult& WithConfigurationSetName(const Aws::String& value) { SetConfigurationSetName(value); return *this;}

    /**
     * <p>The name of the ConfigurationSet.</p>
     */
    inline DisassociateProtectConfigurationResult& WithConfigurationSetName(Aws::String&& value) { SetConfigurationSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the ConfigurationSet.</p>
     */
    inline DisassociateProtectConfigurationResult& WithConfigurationSetName(const char* value) { SetConfigurationSetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationArn() const{ return m_protectConfigurationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline void SetProtectConfigurationArn(const Aws::String& value) { m_protectConfigurationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline void SetProtectConfigurationArn(Aws::String&& value) { m_protectConfigurationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline void SetProtectConfigurationArn(const char* value) { m_protectConfigurationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline DisassociateProtectConfigurationResult& WithProtectConfigurationArn(const Aws::String& value) { SetProtectConfigurationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline DisassociateProtectConfigurationResult& WithProtectConfigurationArn(Aws::String&& value) { SetProtectConfigurationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline DisassociateProtectConfigurationResult& WithProtectConfigurationArn(const char* value) { SetProtectConfigurationArn(value); return *this;}


    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const{ return m_protectConfigurationId; }

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline void SetProtectConfigurationId(const Aws::String& value) { m_protectConfigurationId = value; }

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline void SetProtectConfigurationId(Aws::String&& value) { m_protectConfigurationId = std::move(value); }

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline void SetProtectConfigurationId(const char* value) { m_protectConfigurationId.assign(value); }

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline DisassociateProtectConfigurationResult& WithProtectConfigurationId(const Aws::String& value) { SetProtectConfigurationId(value); return *this;}

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline DisassociateProtectConfigurationResult& WithProtectConfigurationId(Aws::String&& value) { SetProtectConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline DisassociateProtectConfigurationResult& WithProtectConfigurationId(const char* value) { SetProtectConfigurationId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DisassociateProtectConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DisassociateProtectConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DisassociateProtectConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_configurationSetArn;

    Aws::String m_configurationSetName;

    Aws::String m_protectConfigurationArn;

    Aws::String m_protectConfigurationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
