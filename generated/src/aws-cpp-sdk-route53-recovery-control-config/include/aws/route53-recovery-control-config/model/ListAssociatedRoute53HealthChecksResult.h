﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-control-config/Route53RecoveryControlConfig_EXPORTS.h>
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
namespace Route53RecoveryControlConfig
{
namespace Model
{
  class ListAssociatedRoute53HealthChecksResult
  {
  public:
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListAssociatedRoute53HealthChecksResult() = default;
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListAssociatedRoute53HealthChecksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYCONTROLCONFIG_API ListAssociatedRoute53HealthChecksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifiers for the health checks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHealthCheckIds() const { return m_healthCheckIds; }
    template<typename HealthCheckIdsT = Aws::Vector<Aws::String>>
    void SetHealthCheckIds(HealthCheckIdsT&& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds = std::forward<HealthCheckIdsT>(value); }
    template<typename HealthCheckIdsT = Aws::Vector<Aws::String>>
    ListAssociatedRoute53HealthChecksResult& WithHealthCheckIds(HealthCheckIdsT&& value) { SetHealthCheckIds(std::forward<HealthCheckIdsT>(value)); return *this;}
    template<typename HealthCheckIdsT = Aws::String>
    ListAssociatedRoute53HealthChecksResult& AddHealthCheckIds(HealthCheckIdsT&& value) { m_healthCheckIdsHasBeenSet = true; m_healthCheckIds.emplace_back(std::forward<HealthCheckIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Next token for listing health checks.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAssociatedRoute53HealthChecksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssociatedRoute53HealthChecksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_healthCheckIds;
    bool m_healthCheckIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
