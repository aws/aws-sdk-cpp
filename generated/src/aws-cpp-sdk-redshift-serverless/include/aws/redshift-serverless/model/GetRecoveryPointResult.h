/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/RecoveryPoint.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class GetRecoveryPointResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetRecoveryPointResult() = default;
    AWS_REDSHIFTSERVERLESS_API GetRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned recovery point object.</p>
     */
    inline const RecoveryPoint& GetRecoveryPoint() const { return m_recoveryPoint; }
    template<typename RecoveryPointT = RecoveryPoint>
    void SetRecoveryPoint(RecoveryPointT&& value) { m_recoveryPointHasBeenSet = true; m_recoveryPoint = std::forward<RecoveryPointT>(value); }
    template<typename RecoveryPointT = RecoveryPoint>
    GetRecoveryPointResult& WithRecoveryPoint(RecoveryPointT&& value) { SetRecoveryPoint(std::forward<RecoveryPointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecoveryPointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RecoveryPoint m_recoveryPoint;
    bool m_recoveryPointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
