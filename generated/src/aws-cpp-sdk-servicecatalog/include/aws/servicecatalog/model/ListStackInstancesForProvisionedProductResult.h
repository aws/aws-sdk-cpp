﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/StackInstance.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListStackInstancesForProvisionedProductResult
  {
  public:
    AWS_SERVICECATALOG_API ListStackInstancesForProvisionedProductResult();
    AWS_SERVICECATALOG_API ListStackInstancesForProvisionedProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListStackInstancesForProvisionedProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of stack instances.</p>
     */
    inline const Aws::Vector<StackInstance>& GetStackInstances() const{ return m_stackInstances; }
    inline void SetStackInstances(const Aws::Vector<StackInstance>& value) { m_stackInstances = value; }
    inline void SetStackInstances(Aws::Vector<StackInstance>&& value) { m_stackInstances = std::move(value); }
    inline ListStackInstancesForProvisionedProductResult& WithStackInstances(const Aws::Vector<StackInstance>& value) { SetStackInstances(value); return *this;}
    inline ListStackInstancesForProvisionedProductResult& WithStackInstances(Aws::Vector<StackInstance>&& value) { SetStackInstances(std::move(value)); return *this;}
    inline ListStackInstancesForProvisionedProductResult& AddStackInstances(const StackInstance& value) { m_stackInstances.push_back(value); return *this; }
    inline ListStackInstancesForProvisionedProductResult& AddStackInstances(StackInstance&& value) { m_stackInstances.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline ListStackInstancesForProvisionedProductResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListStackInstancesForProvisionedProductResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListStackInstancesForProvisionedProductResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListStackInstancesForProvisionedProductResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListStackInstancesForProvisionedProductResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListStackInstancesForProvisionedProductResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<StackInstance> m_stackInstances;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
