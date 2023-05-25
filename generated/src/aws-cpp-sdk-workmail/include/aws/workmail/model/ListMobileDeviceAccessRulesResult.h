/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MobileDeviceAccessRule.h>
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
  class ListMobileDeviceAccessRulesResult
  {
  public:
    AWS_WORKMAIL_API ListMobileDeviceAccessRulesResult();
    AWS_WORKMAIL_API ListMobileDeviceAccessRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListMobileDeviceAccessRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of mobile device access rules that exist under the specified
     * WorkMail organization.</p>
     */
    inline const Aws::Vector<MobileDeviceAccessRule>& GetRules() const{ return m_rules; }

    /**
     * <p>The list of mobile device access rules that exist under the specified
     * WorkMail organization.</p>
     */
    inline void SetRules(const Aws::Vector<MobileDeviceAccessRule>& value) { m_rules = value; }

    /**
     * <p>The list of mobile device access rules that exist under the specified
     * WorkMail organization.</p>
     */
    inline void SetRules(Aws::Vector<MobileDeviceAccessRule>&& value) { m_rules = std::move(value); }

    /**
     * <p>The list of mobile device access rules that exist under the specified
     * WorkMail organization.</p>
     */
    inline ListMobileDeviceAccessRulesResult& WithRules(const Aws::Vector<MobileDeviceAccessRule>& value) { SetRules(value); return *this;}

    /**
     * <p>The list of mobile device access rules that exist under the specified
     * WorkMail organization.</p>
     */
    inline ListMobileDeviceAccessRulesResult& WithRules(Aws::Vector<MobileDeviceAccessRule>&& value) { SetRules(std::move(value)); return *this;}

    /**
     * <p>The list of mobile device access rules that exist under the specified
     * WorkMail organization.</p>
     */
    inline ListMobileDeviceAccessRulesResult& AddRules(const MobileDeviceAccessRule& value) { m_rules.push_back(value); return *this; }

    /**
     * <p>The list of mobile device access rules that exist under the specified
     * WorkMail organization.</p>
     */
    inline ListMobileDeviceAccessRulesResult& AddRules(MobileDeviceAccessRule&& value) { m_rules.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMobileDeviceAccessRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMobileDeviceAccessRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMobileDeviceAccessRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<MobileDeviceAccessRule> m_rules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
