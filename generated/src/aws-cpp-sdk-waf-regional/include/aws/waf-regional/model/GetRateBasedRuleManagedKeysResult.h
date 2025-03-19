/**
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
    AWS_WAFREGIONAL_API GetRateBasedRuleManagedKeysResult() = default;
    AWS_WAFREGIONAL_API GetRateBasedRuleManagedKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API GetRateBasedRuleManagedKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of IP addresses that currently are blocked by the specified
     * <a>RateBasedRule</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedKeys() const { return m_managedKeys; }
    template<typename ManagedKeysT = Aws::Vector<Aws::String>>
    void SetManagedKeys(ManagedKeysT&& value) { m_managedKeysHasBeenSet = true; m_managedKeys = std::forward<ManagedKeysT>(value); }
    template<typename ManagedKeysT = Aws::Vector<Aws::String>>
    GetRateBasedRuleManagedKeysResult& WithManagedKeys(ManagedKeysT&& value) { SetManagedKeys(std::forward<ManagedKeysT>(value)); return *this;}
    template<typename ManagedKeysT = Aws::String>
    GetRateBasedRuleManagedKeysResult& AddManagedKeys(ManagedKeysT&& value) { m_managedKeysHasBeenSet = true; m_managedKeys.emplace_back(std::forward<ManagedKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A null value and not currently used.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    GetRateBasedRuleManagedKeysResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRateBasedRuleManagedKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_managedKeys;
    bool m_managedKeysHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
