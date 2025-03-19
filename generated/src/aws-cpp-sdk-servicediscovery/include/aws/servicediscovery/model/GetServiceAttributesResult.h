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
    AWS_SERVICEDISCOVERY_API GetServiceAttributesResult() = default;
    AWS_SERVICEDISCOVERY_API GetServiceAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API GetServiceAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A complex type that contains the service ARN and a list of attribute
     * key-value pairs associated with the service.</p>
     */
    inline const ServiceAttributes& GetServiceAttributes() const { return m_serviceAttributes; }
    template<typename ServiceAttributesT = ServiceAttributes>
    void SetServiceAttributes(ServiceAttributesT&& value) { m_serviceAttributesHasBeenSet = true; m_serviceAttributes = std::forward<ServiceAttributesT>(value); }
    template<typename ServiceAttributesT = ServiceAttributes>
    GetServiceAttributesResult& WithServiceAttributes(ServiceAttributesT&& value) { SetServiceAttributes(std::forward<ServiceAttributesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServiceAttributesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceAttributes m_serviceAttributes;
    bool m_serviceAttributesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
