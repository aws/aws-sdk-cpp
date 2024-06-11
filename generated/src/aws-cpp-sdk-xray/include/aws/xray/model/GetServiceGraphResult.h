﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/Service.h>
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
namespace XRay
{
namespace Model
{
  class GetServiceGraphResult
  {
  public:
    AWS_XRAY_API GetServiceGraphResult();
    AWS_XRAY_API GetServiceGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetServiceGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The start of the time frame for which the graph was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline GetServiceGraphResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline GetServiceGraphResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time frame for which the graph was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline GetServiceGraphResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline GetServiceGraphResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The services that have processed a traced request during the specified time
     * frame.</p>
     */
    inline const Aws::Vector<Service>& GetServices() const{ return m_services; }
    inline void SetServices(const Aws::Vector<Service>& value) { m_services = value; }
    inline void SetServices(Aws::Vector<Service>&& value) { m_services = std::move(value); }
    inline GetServiceGraphResult& WithServices(const Aws::Vector<Service>& value) { SetServices(value); return *this;}
    inline GetServiceGraphResult& WithServices(Aws::Vector<Service>&& value) { SetServices(std::move(value)); return *this;}
    inline GetServiceGraphResult& AddServices(const Service& value) { m_services.push_back(value); return *this; }
    inline GetServiceGraphResult& AddServices(Service&& value) { m_services.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag indicating whether the group's filter expression has been consistent,
     * or if the returned service graph may show traces from an older version of the
     * group's filter expression.</p>
     */
    inline bool GetContainsOldGroupVersions() const{ return m_containsOldGroupVersions; }
    inline void SetContainsOldGroupVersions(bool value) { m_containsOldGroupVersions = value; }
    inline GetServiceGraphResult& WithContainsOldGroupVersions(bool value) { SetContainsOldGroupVersions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetServiceGraphResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetServiceGraphResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetServiceGraphResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServiceGraphResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServiceGraphResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServiceGraphResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Vector<Service> m_services;

    bool m_containsOldGroupVersions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
