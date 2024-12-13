/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/ServiceAttributes.h>
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
  class GetServiceAttributesResult
  {
  public:
    AWS_SERVICEDISCOVERY_API GetServiceAttributesResult();
    AWS_SERVICEDISCOVERY_API GetServiceAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API GetServiceAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A complex type that contains the service ARN and a list of attribute
     * key-value pairs associated with the service.</p>
     */
    inline const ServiceAttributes& GetServiceAttributes() const{ return m_serviceAttributes; }
    inline void SetServiceAttributes(const ServiceAttributes& value) { m_serviceAttributes = value; }
    inline void SetServiceAttributes(ServiceAttributes&& value) { m_serviceAttributes = std::move(value); }
    inline GetServiceAttributesResult& WithServiceAttributes(const ServiceAttributes& value) { SetServiceAttributes(value); return *this;}
    inline GetServiceAttributesResult& WithServiceAttributes(ServiceAttributes&& value) { SetServiceAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetServiceAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetServiceAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetServiceAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ServiceAttributes m_serviceAttributes;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
