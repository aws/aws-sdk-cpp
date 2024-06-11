﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/service-quotas/model/ServiceQuota.h>
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
namespace ServiceQuotas
{
namespace Model
{
  class ListServiceQuotasResult
  {
  public:
    AWS_SERVICEQUOTAS_API ListServiceQuotasResult();
    AWS_SERVICEQUOTAS_API ListServiceQuotasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEQUOTAS_API ListServiceQuotasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a subsequent call to the operation to get the next part of the output. You
     * should repeat this until the <code>NextToken</code> response element comes back
     * as <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServiceQuotasResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceQuotasResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceQuotasResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the quotas.</p>
     */
    inline const Aws::Vector<ServiceQuota>& GetQuotas() const{ return m_quotas; }
    inline void SetQuotas(const Aws::Vector<ServiceQuota>& value) { m_quotas = value; }
    inline void SetQuotas(Aws::Vector<ServiceQuota>&& value) { m_quotas = std::move(value); }
    inline ListServiceQuotasResult& WithQuotas(const Aws::Vector<ServiceQuota>& value) { SetQuotas(value); return *this;}
    inline ListServiceQuotasResult& WithQuotas(Aws::Vector<ServiceQuota>&& value) { SetQuotas(std::move(value)); return *this;}
    inline ListServiceQuotasResult& AddQuotas(const ServiceQuota& value) { m_quotas.push_back(value); return *this; }
    inline ListServiceQuotasResult& AddQuotas(ServiceQuota&& value) { m_quotas.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServiceQuotasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServiceQuotasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServiceQuotasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ServiceQuota> m_quotas;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
