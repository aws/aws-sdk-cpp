﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/IPSet.h>
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
  class GetIPSetResult
  {
  public:
    AWS_WAFV2_API GetIPSetResult();
    AWS_WAFV2_API GetIPSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetIPSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p/>
     */
    inline const IPSet& GetIPSet() const{ return m_iPSet; }
    inline void SetIPSet(const IPSet& value) { m_iPSet = value; }
    inline void SetIPSet(IPSet&& value) { m_iPSet = std::move(value); }
    inline GetIPSetResult& WithIPSet(const IPSet& value) { SetIPSet(value); return *this;}
    inline GetIPSetResult& WithIPSet(IPSet&& value) { SetIPSet(std::move(value)); return *this;}
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
    inline GetIPSetResult& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}
    inline GetIPSetResult& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}
    inline GetIPSetResult& WithLockToken(const char* value) { SetLockToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetIPSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetIPSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetIPSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    IPSet m_iPSet;

    Aws::String m_lockToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
