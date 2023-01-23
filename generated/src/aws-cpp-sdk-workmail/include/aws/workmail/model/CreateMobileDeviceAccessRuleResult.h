/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{
  class CreateMobileDeviceAccessRuleResult
  {
  public:
    AWS_WORKMAIL_API CreateMobileDeviceAccessRuleResult();
    AWS_WORKMAIL_API CreateMobileDeviceAccessRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API CreateMobileDeviceAccessRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier for the newly created mobile device access rule.</p>
     */
    inline const Aws::String& GetMobileDeviceAccessRuleId() const{ return m_mobileDeviceAccessRuleId; }

    /**
     * <p>The identifier for the newly created mobile device access rule.</p>
     */
    inline void SetMobileDeviceAccessRuleId(const Aws::String& value) { m_mobileDeviceAccessRuleId = value; }

    /**
     * <p>The identifier for the newly created mobile device access rule.</p>
     */
    inline void SetMobileDeviceAccessRuleId(Aws::String&& value) { m_mobileDeviceAccessRuleId = std::move(value); }

    /**
     * <p>The identifier for the newly created mobile device access rule.</p>
     */
    inline void SetMobileDeviceAccessRuleId(const char* value) { m_mobileDeviceAccessRuleId.assign(value); }

    /**
     * <p>The identifier for the newly created mobile device access rule.</p>
     */
    inline CreateMobileDeviceAccessRuleResult& WithMobileDeviceAccessRuleId(const Aws::String& value) { SetMobileDeviceAccessRuleId(value); return *this;}

    /**
     * <p>The identifier for the newly created mobile device access rule.</p>
     */
    inline CreateMobileDeviceAccessRuleResult& WithMobileDeviceAccessRuleId(Aws::String&& value) { SetMobileDeviceAccessRuleId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the newly created mobile device access rule.</p>
     */
    inline CreateMobileDeviceAccessRuleResult& WithMobileDeviceAccessRuleId(const char* value) { SetMobileDeviceAccessRuleId(value); return *this;}

  private:

    Aws::String m_mobileDeviceAccessRuleId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
