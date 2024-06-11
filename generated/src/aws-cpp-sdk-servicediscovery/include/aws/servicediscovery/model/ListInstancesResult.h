﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/InstanceSummary.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class ListInstancesResult
  {
  public:
    AWS_SERVICEDISCOVERY_API ListInstancesResult();
    AWS_SERVICEDISCOVERY_API ListInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API ListInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the instances that are associated with the
     * specified service.</p>
     */
    inline const Aws::Vector<InstanceSummary>& GetInstances() const{ return m_instances; }
    inline void SetInstances(const Aws::Vector<InstanceSummary>& value) { m_instances = value; }
    inline void SetInstances(Aws::Vector<InstanceSummary>&& value) { m_instances = std::move(value); }
    inline ListInstancesResult& WithInstances(const Aws::Vector<InstanceSummary>& value) { SetInstances(value); return *this;}
    inline ListInstancesResult& WithInstances(Aws::Vector<InstanceSummary>&& value) { SetInstances(std::move(value)); return *this;}
    inline ListInstancesResult& AddInstances(const InstanceSummary& value) { m_instances.push_back(value); return *this; }
    inline ListInstancesResult& AddInstances(InstanceSummary&& value) { m_instances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If more than <code>MaxResults</code> instances match the specified criteria,
     * you can submit another <code>ListInstances</code> request to get the next group
     * of results. Specify the value of <code>NextToken</code> from the previous
     * response in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceSummary> m_instances;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
