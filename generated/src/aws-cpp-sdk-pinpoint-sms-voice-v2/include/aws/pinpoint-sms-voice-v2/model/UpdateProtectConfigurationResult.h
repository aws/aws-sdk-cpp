/**
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
  class UpdateProtectConfigurationResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API UpdateProtectConfigurationResult();
    AWS_PINPOINTSMSVOICEV2_API UpdateProtectConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API UpdateProtectConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationArn() const{ return m_protectConfigurationArn; }
    inline void SetProtectConfigurationArn(const Aws::String& value) { m_protectConfigurationArn = value; }
    inline void SetProtectConfigurationArn(Aws::String&& value) { m_protectConfigurationArn = std::move(value); }
    inline void SetProtectConfigurationArn(const char* value) { m_protectConfigurationArn.assign(value); }
    inline UpdateProtectConfigurationResult& WithProtectConfigurationArn(const Aws::String& value) { SetProtectConfigurationArn(value); return *this;}
    inline UpdateProtectConfigurationResult& WithProtectConfigurationArn(Aws::String&& value) { SetProtectConfigurationArn(std::move(value)); return *this;}
    inline UpdateProtectConfigurationResult& WithProtectConfigurationArn(const char* value) { SetProtectConfigurationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const{ return m_protectConfigurationId; }
    inline void SetProtectConfigurationId(const Aws::String& value) { m_protectConfigurationId = value; }
    inline void SetProtectConfigurationId(Aws::String&& value) { m_protectConfigurationId = std::move(value); }
    inline void SetProtectConfigurationId(const char* value) { m_protectConfigurationId.assign(value); }
    inline UpdateProtectConfigurationResult& WithProtectConfigurationId(const Aws::String& value) { SetProtectConfigurationId(value); return *this;}
    inline UpdateProtectConfigurationResult& WithProtectConfigurationId(Aws::String&& value) { SetProtectConfigurationId(std::move(value)); return *this;}
    inline UpdateProtectConfigurationResult& WithProtectConfigurationId(const char* value) { SetProtectConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the protect configuration was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline UpdateProtectConfigurationResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline UpdateProtectConfigurationResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is true if the protect configuration is set as your account default
     * protect configuration.</p>
     */
    inline bool GetAccountDefault() const{ return m_accountDefault; }
    inline void SetAccountDefault(bool value) { m_accountDefault = value; }
    inline UpdateProtectConfigurationResult& WithAccountDefault(bool value) { SetAccountDefault(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of deletion protection for the protect configuration. When set to
     * true deletion protection is enabled. By default this is set to false. </p>
     */
    inline bool GetDeletionProtectionEnabled() const{ return m_deletionProtectionEnabled; }
    inline void SetDeletionProtectionEnabled(bool value) { m_deletionProtectionEnabled = value; }
    inline UpdateProtectConfigurationResult& WithDeletionProtectionEnabled(bool value) { SetDeletionProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateProtectConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateProtectConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateProtectConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_protectConfigurationArn;

    Aws::String m_protectConfigurationId;

    Aws::Utils::DateTime m_createdTimestamp;

    bool m_accountDefault;

    bool m_deletionProtectionEnabled;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
