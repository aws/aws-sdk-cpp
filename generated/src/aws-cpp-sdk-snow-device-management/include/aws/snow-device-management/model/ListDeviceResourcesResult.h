/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snow-device-management/model/ResourceSummary.h>
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
namespace SnowDeviceManagement
{
namespace Model
{
  class ListDeviceResourcesResult
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API ListDeviceResourcesResult();
    AWS_SNOWDEVICEMANAGEMENT_API ListDeviceResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWDEVICEMANAGEMENT_API ListDeviceResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDeviceResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDeviceResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDeviceResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure defining the resource's type, Amazon Resource Name (ARN), and
     * ID.</p>
     */
    inline const Aws::Vector<ResourceSummary>& GetResources() const{ return m_resources; }
    inline void SetResources(const Aws::Vector<ResourceSummary>& value) { m_resources = value; }
    inline void SetResources(Aws::Vector<ResourceSummary>&& value) { m_resources = std::move(value); }
    inline ListDeviceResourcesResult& WithResources(const Aws::Vector<ResourceSummary>& value) { SetResources(value); return *this;}
    inline ListDeviceResourcesResult& WithResources(Aws::Vector<ResourceSummary>&& value) { SetResources(std::move(value)); return *this;}
    inline ListDeviceResourcesResult& AddResources(const ResourceSummary& value) { m_resources.push_back(value); return *this; }
    inline ListDeviceResourcesResult& AddResources(ResourceSummary&& value) { m_resources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDeviceResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDeviceResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDeviceResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ResourceSummary> m_resources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
