﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/Workgroup.h>
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
  class ListWorkgroupsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListWorkgroupsResult();
    AWS_REDSHIFTSERVERLESS_API ListWorkgroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListWorkgroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. To
     * retrieve the next page, make the call again using the returned token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListWorkgroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkgroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkgroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned array of workgroups.</p>
     */
    inline const Aws::Vector<Workgroup>& GetWorkgroups() const{ return m_workgroups; }
    inline void SetWorkgroups(const Aws::Vector<Workgroup>& value) { m_workgroups = value; }
    inline void SetWorkgroups(Aws::Vector<Workgroup>&& value) { m_workgroups = std::move(value); }
    inline ListWorkgroupsResult& WithWorkgroups(const Aws::Vector<Workgroup>& value) { SetWorkgroups(value); return *this;}
    inline ListWorkgroupsResult& WithWorkgroups(Aws::Vector<Workgroup>&& value) { SetWorkgroups(std::move(value)); return *this;}
    inline ListWorkgroupsResult& AddWorkgroups(const Workgroup& value) { m_workgroups.push_back(value); return *this; }
    inline ListWorkgroupsResult& AddWorkgroups(Workgroup&& value) { m_workgroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListWorkgroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListWorkgroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListWorkgroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Workgroup> m_workgroups;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
