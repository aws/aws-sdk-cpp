/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/RateBasedStatementManagedKeysIPSet.h>
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
  class GetRateBasedStatementManagedKeysResult
  {
  public:
    AWS_WAFV2_API GetRateBasedStatementManagedKeysResult() = default;
    AWS_WAFV2_API GetRateBasedStatementManagedKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetRateBasedStatementManagedKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The keys that are of Internet Protocol version 4 (IPv4). </p>
     */
    inline const RateBasedStatementManagedKeysIPSet& GetManagedKeysIPV4() const { return m_managedKeysIPV4; }
    template<typename ManagedKeysIPV4T = RateBasedStatementManagedKeysIPSet>
    void SetManagedKeysIPV4(ManagedKeysIPV4T&& value) { m_managedKeysIPV4HasBeenSet = true; m_managedKeysIPV4 = std::forward<ManagedKeysIPV4T>(value); }
    template<typename ManagedKeysIPV4T = RateBasedStatementManagedKeysIPSet>
    GetRateBasedStatementManagedKeysResult& WithManagedKeysIPV4(ManagedKeysIPV4T&& value) { SetManagedKeysIPV4(std::forward<ManagedKeysIPV4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keys that are of Internet Protocol version 6 (IPv6). </p>
     */
    inline const RateBasedStatementManagedKeysIPSet& GetManagedKeysIPV6() const { return m_managedKeysIPV6; }
    template<typename ManagedKeysIPV6T = RateBasedStatementManagedKeysIPSet>
    void SetManagedKeysIPV6(ManagedKeysIPV6T&& value) { m_managedKeysIPV6HasBeenSet = true; m_managedKeysIPV6 = std::forward<ManagedKeysIPV6T>(value); }
    template<typename ManagedKeysIPV6T = RateBasedStatementManagedKeysIPSet>
    GetRateBasedStatementManagedKeysResult& WithManagedKeysIPV6(ManagedKeysIPV6T&& value) { SetManagedKeysIPV6(std::forward<ManagedKeysIPV6T>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRateBasedStatementManagedKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RateBasedStatementManagedKeysIPSet m_managedKeysIPV4;
    bool m_managedKeysIPV4HasBeenSet = false;

    RateBasedStatementManagedKeysIPSet m_managedKeysIPV6;
    bool m_managedKeysIPV6HasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
