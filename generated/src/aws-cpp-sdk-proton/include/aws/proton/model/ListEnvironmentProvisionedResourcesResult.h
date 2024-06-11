﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/ProvisionedResource.h>
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
namespace Proton
{
namespace Model
{
  class ListEnvironmentProvisionedResourcesResult
  {
  public:
    AWS_PROTON_API ListEnvironmentProvisionedResourcesResult();
    AWS_PROTON_API ListEnvironmentProvisionedResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PROTON_API ListEnvironmentProvisionedResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token that indicates the location of the next environment provisioned
     * resource in the array of provisioned resources, after the current requested list
     * of environment provisioned resources.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEnvironmentProvisionedResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEnvironmentProvisionedResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEnvironmentProvisionedResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of environment provisioned resources.</p>
     */
    inline const Aws::Vector<ProvisionedResource>& GetProvisionedResources() const{ return m_provisionedResources; }
    inline void SetProvisionedResources(const Aws::Vector<ProvisionedResource>& value) { m_provisionedResources = value; }
    inline void SetProvisionedResources(Aws::Vector<ProvisionedResource>&& value) { m_provisionedResources = std::move(value); }
    inline ListEnvironmentProvisionedResourcesResult& WithProvisionedResources(const Aws::Vector<ProvisionedResource>& value) { SetProvisionedResources(value); return *this;}
    inline ListEnvironmentProvisionedResourcesResult& WithProvisionedResources(Aws::Vector<ProvisionedResource>&& value) { SetProvisionedResources(std::move(value)); return *this;}
    inline ListEnvironmentProvisionedResourcesResult& AddProvisionedResources(const ProvisionedResource& value) { m_provisionedResources.push_back(value); return *this; }
    inline ListEnvironmentProvisionedResourcesResult& AddProvisionedResources(ProvisionedResource&& value) { m_provisionedResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEnvironmentProvisionedResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEnvironmentProvisionedResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEnvironmentProvisionedResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ProvisionedResource> m_provisionedResources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
