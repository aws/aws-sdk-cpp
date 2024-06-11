﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/Namespace.h>
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
  class RestoreFromRecoveryPointResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API RestoreFromRecoveryPointResult();
    AWS_REDSHIFTSERVERLESS_API RestoreFromRecoveryPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API RestoreFromRecoveryPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The namespace that data was restored into.</p>
     */
    inline const Namespace& GetNamespace() const{ return m_namespace; }
    inline void SetNamespace(const Namespace& value) { m_namespace = value; }
    inline void SetNamespace(Namespace&& value) { m_namespace = std::move(value); }
    inline RestoreFromRecoveryPointResult& WithNamespace(const Namespace& value) { SetNamespace(value); return *this;}
    inline RestoreFromRecoveryPointResult& WithNamespace(Namespace&& value) { SetNamespace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the recovery point used for the restore.</p>
     */
    inline const Aws::String& GetRecoveryPointId() const{ return m_recoveryPointId; }
    inline void SetRecoveryPointId(const Aws::String& value) { m_recoveryPointId = value; }
    inline void SetRecoveryPointId(Aws::String&& value) { m_recoveryPointId = std::move(value); }
    inline void SetRecoveryPointId(const char* value) { m_recoveryPointId.assign(value); }
    inline RestoreFromRecoveryPointResult& WithRecoveryPointId(const Aws::String& value) { SetRecoveryPointId(value); return *this;}
    inline RestoreFromRecoveryPointResult& WithRecoveryPointId(Aws::String&& value) { SetRecoveryPointId(std::move(value)); return *this;}
    inline RestoreFromRecoveryPointResult& WithRecoveryPointId(const char* value) { SetRecoveryPointId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RestoreFromRecoveryPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RestoreFromRecoveryPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RestoreFromRecoveryPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Namespace m_namespace;

    Aws::String m_recoveryPointId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
