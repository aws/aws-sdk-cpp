﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/ManagedRuleSet.h>
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
namespace WAFV2
{
namespace Model
{
  class GetManagedRuleSetResult
  {
  public:
    AWS_WAFV2_API GetManagedRuleSetResult();
    AWS_WAFV2_API GetManagedRuleSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetManagedRuleSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The managed rule set that you requested. </p>
     */
    inline const ManagedRuleSet& GetManagedRuleSet() const{ return m_managedRuleSet; }
    inline void SetManagedRuleSet(const ManagedRuleSet& value) { m_managedRuleSet = value; }
    inline void SetManagedRuleSet(ManagedRuleSet&& value) { m_managedRuleSet = std::move(value); }
    inline GetManagedRuleSetResult& WithManagedRuleSet(const ManagedRuleSet& value) { SetManagedRuleSet(value); return *this;}
    inline GetManagedRuleSetResult& WithManagedRuleSet(ManagedRuleSet&& value) { SetManagedRuleSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline const Aws::String& GetLockToken() const{ return m_lockToken; }
    inline void SetLockToken(const Aws::String& value) { m_lockToken = value; }
    inline void SetLockToken(Aws::String&& value) { m_lockToken = std::move(value); }
    inline void SetLockToken(const char* value) { m_lockToken.assign(value); }
    inline GetManagedRuleSetResult& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}
    inline GetManagedRuleSetResult& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}
    inline GetManagedRuleSetResult& WithLockToken(const char* value) { SetLockToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetManagedRuleSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetManagedRuleSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetManagedRuleSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ManagedRuleSet m_managedRuleSet;

    Aws::String m_lockToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
