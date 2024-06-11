﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
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
  class PutManagedRuleSetVersionsResult
  {
  public:
    AWS_WAFV2_API PutManagedRuleSetVersionsResult();
    AWS_WAFV2_API PutManagedRuleSetVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API PutManagedRuleSetVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline const Aws::String& GetNextLockToken() const{ return m_nextLockToken; }
    inline void SetNextLockToken(const Aws::String& value) { m_nextLockToken = value; }
    inline void SetNextLockToken(Aws::String&& value) { m_nextLockToken = std::move(value); }
    inline void SetNextLockToken(const char* value) { m_nextLockToken.assign(value); }
    inline PutManagedRuleSetVersionsResult& WithNextLockToken(const Aws::String& value) { SetNextLockToken(value); return *this;}
    inline PutManagedRuleSetVersionsResult& WithNextLockToken(Aws::String&& value) { SetNextLockToken(std::move(value)); return *this;}
    inline PutManagedRuleSetVersionsResult& WithNextLockToken(const char* value) { SetNextLockToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutManagedRuleSetVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutManagedRuleSetVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutManagedRuleSetVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextLockToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
