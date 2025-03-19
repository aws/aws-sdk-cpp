/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53-recovery-readiness/model/RecoveryGroupOutput.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{
  class ListRecoveryGroupsResult
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API ListRecoveryGroupsResult() = default;
    AWS_ROUTE53RECOVERYREADINESS_API ListRecoveryGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RECOVERYREADINESS_API ListRecoveryGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token that identifies which batch of results you want to see.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecoveryGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of recovery groups.</p>
     */
    inline const Aws::Vector<RecoveryGroupOutput>& GetRecoveryGroups() const { return m_recoveryGroups; }
    template<typename RecoveryGroupsT = Aws::Vector<RecoveryGroupOutput>>
    void SetRecoveryGroups(RecoveryGroupsT&& value) { m_recoveryGroupsHasBeenSet = true; m_recoveryGroups = std::forward<RecoveryGroupsT>(value); }
    template<typename RecoveryGroupsT = Aws::Vector<RecoveryGroupOutput>>
    ListRecoveryGroupsResult& WithRecoveryGroups(RecoveryGroupsT&& value) { SetRecoveryGroups(std::forward<RecoveryGroupsT>(value)); return *this;}
    template<typename RecoveryGroupsT = RecoveryGroupOutput>
    ListRecoveryGroupsResult& AddRecoveryGroups(RecoveryGroupsT&& value) { m_recoveryGroupsHasBeenSet = true; m_recoveryGroups.emplace_back(std::forward<RecoveryGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecoveryGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RecoveryGroupOutput> m_recoveryGroups;
    bool m_recoveryGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
