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
    AWS_REDSHIFTSERVERLESS_API GetRecoveryPointResult();
    AWS_REDSHIFTSERVERLESS_API GetRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API GetRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The returned recovery point object.</p>
     */
    inline const RecoveryPoint& GetRecoveryPoint() const{ return m_recoveryPoint; }

    /**
     * <p>The returned recovery point object.</p>
     */
    inline void SetRecoveryPoint(const RecoveryPoint& value) { m_recoveryPoint = value; }

    /**
     * <p>The returned recovery point object.</p>
     */
    inline void SetRecoveryPoint(RecoveryPoint&& value) { m_recoveryPoint = std::move(value); }

    /**
     * <p>The returned recovery point object.</p>
     */
    inline GetRecoveryPointResult& WithRecoveryPoint(const RecoveryPoint& value) { SetRecoveryPoint(value); return *this;}

    /**
     * <p>The returned recovery point object.</p>
     */
    inline GetRecoveryPointResult& WithRecoveryPoint(RecoveryPoint&& value) { SetRecoveryPoint(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRecoveryPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRecoveryPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRecoveryPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RecoveryPoint m_recoveryPoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
