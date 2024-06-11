/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MobileDeviceAccessRuleEffect.h>
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
namespace WorkMail
{
namespace Model
{
  class GetMobileDeviceAccessOverrideResult
  {
  public:
    AWS_WORKMAIL_API GetMobileDeviceAccessOverrideResult();
    AWS_WORKMAIL_API GetMobileDeviceAccessOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetMobileDeviceAccessOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline void SetUserId(const Aws::String& value) { m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userId.assign(value); }
    inline GetMobileDeviceAccessOverrideResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline GetMobileDeviceAccessOverrideResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline GetMobileDeviceAccessOverrideResult& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device to which the access override applies.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceId.assign(value); }
    inline GetMobileDeviceAccessOverrideResult& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline GetMobileDeviceAccessOverrideResult& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline GetMobileDeviceAccessOverrideResult& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline const MobileDeviceAccessRuleEffect& GetEffect() const{ return m_effect; }
    inline void SetEffect(const MobileDeviceAccessRuleEffect& value) { m_effect = value; }
    inline void SetEffect(MobileDeviceAccessRuleEffect&& value) { m_effect = std::move(value); }
    inline GetMobileDeviceAccessOverrideResult& WithEffect(const MobileDeviceAccessRuleEffect& value) { SetEffect(value); return *this;}
    inline GetMobileDeviceAccessOverrideResult& WithEffect(MobileDeviceAccessRuleEffect&& value) { SetEffect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the override.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetMobileDeviceAccessOverrideResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetMobileDeviceAccessOverrideResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetMobileDeviceAccessOverrideResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the override was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreated = value; }
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreated = std::move(value); }
    inline GetMobileDeviceAccessOverrideResult& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}
    inline GetMobileDeviceAccessOverrideResult& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the description was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const{ return m_dateModified; }
    inline void SetDateModified(const Aws::Utils::DateTime& value) { m_dateModified = value; }
    inline void SetDateModified(Aws::Utils::DateTime&& value) { m_dateModified = std::move(value); }
    inline GetMobileDeviceAccessOverrideResult& WithDateModified(const Aws::Utils::DateTime& value) { SetDateModified(value); return *this;}
    inline GetMobileDeviceAccessOverrideResult& WithDateModified(Aws::Utils::DateTime&& value) { SetDateModified(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMobileDeviceAccessOverrideResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMobileDeviceAccessOverrideResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMobileDeviceAccessOverrideResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_userId;

    Aws::String m_deviceId;

    MobileDeviceAccessRuleEffect m_effect;

    Aws::String m_description;

    Aws::Utils::DateTime m_dateCreated;

    Aws::Utils::DateTime m_dateModified;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
