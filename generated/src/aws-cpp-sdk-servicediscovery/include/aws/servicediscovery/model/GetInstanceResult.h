/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/Instance.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class GetInstanceResult
  {
  public:
    AWS_SERVICEDISCOVERY_API GetInstanceResult();
    AWS_SERVICEDISCOVERY_API GetInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API GetInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains information about a specified instance.</p>
     */
    inline const Instance& GetInstance() const{ return m_instance; }

    /**
     * <p>A complex type that contains information about a specified instance.</p>
     */
    inline void SetInstance(const Instance& value) { m_instance = value; }

    /**
     * <p>A complex type that contains information about a specified instance.</p>
     */
    inline void SetInstance(Instance&& value) { m_instance = std::move(value); }

    /**
     * <p>A complex type that contains information about a specified instance.</p>
     */
    inline GetInstanceResult& WithInstance(const Instance& value) { SetInstance(value); return *this;}

    /**
     * <p>A complex type that contains information about a specified instance.</p>
     */
    inline GetInstanceResult& WithInstance(Instance&& value) { SetInstance(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Instance m_instance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
