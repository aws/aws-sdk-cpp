/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/RecoveryPoint.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListRecoveryPointsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListRecoveryPointsResult() = default;
    AWS_REDSHIFTSERVERLESS_API ListRecoveryPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListRecoveryPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecoveryPointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned recovery point objects.</p>
     */
    inline const Aws::Vector<RecoveryPoint>& GetRecoveryPoints() const { return m_recoveryPoints; }
    template<typename RecoveryPointsT = Aws::Vector<RecoveryPoint>>
    void SetRecoveryPoints(RecoveryPointsT&& value) { m_recoveryPointsHasBeenSet = true; m_recoveryPoints = std::forward<RecoveryPointsT>(value); }
    template<typename RecoveryPointsT = Aws::Vector<RecoveryPoint>>
    ListRecoveryPointsResult& WithRecoveryPoints(RecoveryPointsT&& value) { SetRecoveryPoints(std::forward<RecoveryPointsT>(value)); return *this;}
    template<typename RecoveryPointsT = RecoveryPoint>
    ListRecoveryPointsResult& AddRecoveryPoints(RecoveryPointsT&& value) { m_recoveryPointsHasBeenSet = true; m_recoveryPoints.emplace_back(std::forward<RecoveryPointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecoveryPointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RecoveryPoint> m_recoveryPoints;
    bool m_recoveryPointsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
