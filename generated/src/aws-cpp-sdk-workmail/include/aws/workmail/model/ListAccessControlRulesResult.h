﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/AccessControlRule.h>
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
  class ListAccessControlRulesResult
  {
  public:
    AWS_WORKMAIL_API ListAccessControlRulesResult();
    AWS_WORKMAIL_API ListAccessControlRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API ListAccessControlRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The access control rules.</p>
     */
    inline const Aws::Vector<AccessControlRule>& GetRules() const{ return m_rules; }
    inline void SetRules(const Aws::Vector<AccessControlRule>& value) { m_rules = value; }
    inline void SetRules(Aws::Vector<AccessControlRule>&& value) { m_rules = std::move(value); }
    inline ListAccessControlRulesResult& WithRules(const Aws::Vector<AccessControlRule>& value) { SetRules(value); return *this;}
    inline ListAccessControlRulesResult& WithRules(Aws::Vector<AccessControlRule>&& value) { SetRules(std::move(value)); return *this;}
    inline ListAccessControlRulesResult& AddRules(const AccessControlRule& value) { m_rules.push_back(value); return *this; }
    inline ListAccessControlRulesResult& AddRules(AccessControlRule&& value) { m_rules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAccessControlRulesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAccessControlRulesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAccessControlRulesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AccessControlRule> m_rules;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
