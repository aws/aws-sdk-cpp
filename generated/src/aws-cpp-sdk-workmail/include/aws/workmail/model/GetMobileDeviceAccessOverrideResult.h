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
    AWS_WORKMAIL_API GetMobileDeviceAccessOverrideResult() = default;
    AWS_WORKMAIL_API GetMobileDeviceAccessOverrideResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API GetMobileDeviceAccessOverrideResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The WorkMail user to which the access override applies.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    GetMobileDeviceAccessOverrideResult& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device to which the access override applies.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    GetMobileDeviceAccessOverrideResult& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effect of the override, <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline MobileDeviceAccessRuleEffect GetEffect() const { return m_effect; }
    inline void SetEffect(MobileDeviceAccessRuleEffect value) { m_effectHasBeenSet = true; m_effect = value; }
    inline GetMobileDeviceAccessOverrideResult& WithEffect(MobileDeviceAccessRuleEffect value) { SetEffect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the override.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetMobileDeviceAccessOverrideResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the override was first created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const { return m_dateCreated; }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    GetMobileDeviceAccessOverrideResult& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the description was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const { return m_dateModified; }
    template<typename DateModifiedT = Aws::Utils::DateTime>
    void SetDateModified(DateModifiedT&& value) { m_dateModifiedHasBeenSet = true; m_dateModified = std::forward<DateModifiedT>(value); }
    template<typename DateModifiedT = Aws::Utils::DateTime>
    GetMobileDeviceAccessOverrideResult& WithDateModified(DateModifiedT&& value) { SetDateModified(std::forward<DateModifiedT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetMobileDeviceAccessOverrideResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    MobileDeviceAccessRuleEffect m_effect{MobileDeviceAccessRuleEffect::NOT_SET};
    bool m_effectHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_dateCreated{};
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateModified{};
    bool m_dateModifiedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
