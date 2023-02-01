/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
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
namespace WAF
{
namespace Model
{
  class GetRateBasedRuleManagedKeysResult
  {
  public:
    AWS_WAF_API GetRateBasedRuleManagedKeysResult();
    AWS_WAF_API GetRateBasedRuleManagedKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API GetRateBasedRuleManagedKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of IP addresses that currently are blocked by the specified
     * <a>RateBasedRule</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedKeys() const{ return m_managedKeys; }

    /**
     * <p>An array of IP addresses that currently are blocked by the specified
     * <a>RateBasedRule</a>. </p>
     */
    inline void SetManagedKeys(const Aws::Vector<Aws::String>& value) { m_managedKeys = value; }

    /**
     * <p>An array of IP addresses that currently are blocked by the specified
     * <a>RateBasedRule</a>. </p>
     */
    inline void SetManagedKeys(Aws::Vector<Aws::String>&& value) { m_managedKeys = std::move(value); }

    /**
     * <p>An array of IP addresses that currently are blocked by the specified
     * <a>RateBasedRule</a>. </p>
     */
    inline GetRateBasedRuleManagedKeysResult& WithManagedKeys(const Aws::Vector<Aws::String>& value) { SetManagedKeys(value); return *this;}

    /**
     * <p>An array of IP addresses that currently are blocked by the specified
     * <a>RateBasedRule</a>. </p>
     */
    inline GetRateBasedRuleManagedKeysResult& WithManagedKeys(Aws::Vector<Aws::String>&& value) { SetManagedKeys(std::move(value)); return *this;}

    /**
     * <p>An array of IP addresses that currently are blocked by the specified
     * <a>RateBasedRule</a>. </p>
     */
    inline GetRateBasedRuleManagedKeysResult& AddManagedKeys(const Aws::String& value) { m_managedKeys.push_back(value); return *this; }

    /**
     * <p>An array of IP addresses that currently are blocked by the specified
     * <a>RateBasedRule</a>. </p>
     */
    inline GetRateBasedRuleManagedKeysResult& AddManagedKeys(Aws::String&& value) { m_managedKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of IP addresses that currently are blocked by the specified
     * <a>RateBasedRule</a>. </p>
     */
    inline GetRateBasedRuleManagedKeysResult& AddManagedKeys(const char* value) { m_managedKeys.push_back(value); return *this; }


    /**
     * <p>A null value and not currently used.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>A null value and not currently used.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>A null value and not currently used.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>A null value and not currently used.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>A null value and not currently used.</p>
     */
    inline GetRateBasedRuleManagedKeysResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>A null value and not currently used.</p>
     */
    inline GetRateBasedRuleManagedKeysResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>A null value and not currently used.</p>
     */
    inline GetRateBasedRuleManagedKeysResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_managedKeys;

    Aws::String m_nextMarker;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
