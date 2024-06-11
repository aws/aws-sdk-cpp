﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WAFRegional
{
namespace Model
{
  class GetRateBasedRuleManagedKeysResult
  {
  public:
    AWS_WAFREGIONAL_API GetRateBasedRuleManagedKeysResult();
    AWS_WAFREGIONAL_API GetRateBasedRuleManagedKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetRateBasedRuleManagedKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of IP addresses that currently are blocked by the specified
     * <a>RateBasedRule</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedKeys() const{ return m_managedKeys; }
    inline void SetManagedKeys(const Aws::Vector<Aws::String>& value) { m_managedKeys = value; }
    inline void SetManagedKeys(Aws::Vector<Aws::String>&& value) { m_managedKeys = std::move(value); }
    inline GetRateBasedRuleManagedKeysResult& WithManagedKeys(const Aws::Vector<Aws::String>& value) { SetManagedKeys(value); return *this;}
    inline GetRateBasedRuleManagedKeysResult& WithManagedKeys(Aws::Vector<Aws::String>&& value) { SetManagedKeys(std::move(value)); return *this;}
    inline GetRateBasedRuleManagedKeysResult& AddManagedKeys(const Aws::String& value) { m_managedKeys.push_back(value); return *this; }
    inline GetRateBasedRuleManagedKeysResult& AddManagedKeys(Aws::String&& value) { m_managedKeys.push_back(std::move(value)); return *this; }
    inline GetRateBasedRuleManagedKeysResult& AddManagedKeys(const char* value) { m_managedKeys.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A null value and not currently used.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }
    inline GetRateBasedRuleManagedKeysResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline GetRateBasedRuleManagedKeysResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline GetRateBasedRuleManagedKeysResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRateBasedRuleManagedKeysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRateBasedRuleManagedKeysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRateBasedRuleManagedKeysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_managedKeys;

    Aws::String m_nextMarker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
