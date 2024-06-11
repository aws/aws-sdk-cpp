﻿/**
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
    AWS_WAFV2_API GetRateBasedStatementManagedKeysResult();
    AWS_WAFV2_API GetRateBasedStatementManagedKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API GetRateBasedStatementManagedKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The keys that are of Internet Protocol version 4 (IPv4). </p>
     */
    inline const RateBasedStatementManagedKeysIPSet& GetManagedKeysIPV4() const{ return m_managedKeysIPV4; }
    inline void SetManagedKeysIPV4(const RateBasedStatementManagedKeysIPSet& value) { m_managedKeysIPV4 = value; }
    inline void SetManagedKeysIPV4(RateBasedStatementManagedKeysIPSet&& value) { m_managedKeysIPV4 = std::move(value); }
    inline GetRateBasedStatementManagedKeysResult& WithManagedKeysIPV4(const RateBasedStatementManagedKeysIPSet& value) { SetManagedKeysIPV4(value); return *this;}
    inline GetRateBasedStatementManagedKeysResult& WithManagedKeysIPV4(RateBasedStatementManagedKeysIPSet&& value) { SetManagedKeysIPV4(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The keys that are of Internet Protocol version 6 (IPv6). </p>
     */
    inline const RateBasedStatementManagedKeysIPSet& GetManagedKeysIPV6() const{ return m_managedKeysIPV6; }
    inline void SetManagedKeysIPV6(const RateBasedStatementManagedKeysIPSet& value) { m_managedKeysIPV6 = value; }
    inline void SetManagedKeysIPV6(RateBasedStatementManagedKeysIPSet&& value) { m_managedKeysIPV6 = std::move(value); }
    inline GetRateBasedStatementManagedKeysResult& WithManagedKeysIPV6(const RateBasedStatementManagedKeysIPSet& value) { SetManagedKeysIPV6(value); return *this;}
    inline GetRateBasedStatementManagedKeysResult& WithManagedKeysIPV6(RateBasedStatementManagedKeysIPSet&& value) { SetManagedKeysIPV6(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRateBasedStatementManagedKeysResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRateBasedStatementManagedKeysResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRateBasedStatementManagedKeysResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RateBasedStatementManagedKeysIPSet m_managedKeysIPV4;

    RateBasedStatementManagedKeysIPSet m_managedKeysIPV6;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
