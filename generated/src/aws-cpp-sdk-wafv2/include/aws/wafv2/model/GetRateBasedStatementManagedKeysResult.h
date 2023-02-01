/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/RateBasedStatementManagedKeysIPSet.h>
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


    /**
     * <p>The keys that are of Internet Protocol version 4 (IPv4). </p>
     */
    inline const RateBasedStatementManagedKeysIPSet& GetManagedKeysIPV4() const{ return m_managedKeysIPV4; }

    /**
     * <p>The keys that are of Internet Protocol version 4 (IPv4). </p>
     */
    inline void SetManagedKeysIPV4(const RateBasedStatementManagedKeysIPSet& value) { m_managedKeysIPV4 = value; }

    /**
     * <p>The keys that are of Internet Protocol version 4 (IPv4). </p>
     */
    inline void SetManagedKeysIPV4(RateBasedStatementManagedKeysIPSet&& value) { m_managedKeysIPV4 = std::move(value); }

    /**
     * <p>The keys that are of Internet Protocol version 4 (IPv4). </p>
     */
    inline GetRateBasedStatementManagedKeysResult& WithManagedKeysIPV4(const RateBasedStatementManagedKeysIPSet& value) { SetManagedKeysIPV4(value); return *this;}

    /**
     * <p>The keys that are of Internet Protocol version 4 (IPv4). </p>
     */
    inline GetRateBasedStatementManagedKeysResult& WithManagedKeysIPV4(RateBasedStatementManagedKeysIPSet&& value) { SetManagedKeysIPV4(std::move(value)); return *this;}


    /**
     * <p>The keys that are of Internet Protocol version 6 (IPv6). </p>
     */
    inline const RateBasedStatementManagedKeysIPSet& GetManagedKeysIPV6() const{ return m_managedKeysIPV6; }

    /**
     * <p>The keys that are of Internet Protocol version 6 (IPv6). </p>
     */
    inline void SetManagedKeysIPV6(const RateBasedStatementManagedKeysIPSet& value) { m_managedKeysIPV6 = value; }

    /**
     * <p>The keys that are of Internet Protocol version 6 (IPv6). </p>
     */
    inline void SetManagedKeysIPV6(RateBasedStatementManagedKeysIPSet&& value) { m_managedKeysIPV6 = std::move(value); }

    /**
     * <p>The keys that are of Internet Protocol version 6 (IPv6). </p>
     */
    inline GetRateBasedStatementManagedKeysResult& WithManagedKeysIPV6(const RateBasedStatementManagedKeysIPSet& value) { SetManagedKeysIPV6(value); return *this;}

    /**
     * <p>The keys that are of Internet Protocol version 6 (IPv6). </p>
     */
    inline GetRateBasedStatementManagedKeysResult& WithManagedKeysIPV6(RateBasedStatementManagedKeysIPSet&& value) { SetManagedKeysIPV6(std::move(value)); return *this;}

  private:

    RateBasedStatementManagedKeysIPSet m_managedKeysIPV4;

    RateBasedStatementManagedKeysIPSet m_managedKeysIPV6;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
