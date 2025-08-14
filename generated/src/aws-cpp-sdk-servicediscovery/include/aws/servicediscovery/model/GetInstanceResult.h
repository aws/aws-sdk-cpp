/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/Instance.h>
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
    AWS_SERVICEDISCOVERY_API GetInstanceResult() = default;
    AWS_SERVICEDISCOVERY_API GetInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API GetInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that created the namespace that
     * contains the service that the instance is associated with. If this isn't your
     * account ID, it's the ID of the account that shared the namespace with your
     * account.</p>
     */
    inline const Aws::String& GetResourceOwner() const { return m_resourceOwner; }
    template<typename ResourceOwnerT = Aws::String>
    void SetResourceOwner(ResourceOwnerT&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::forward<ResourceOwnerT>(value); }
    template<typename ResourceOwnerT = Aws::String>
    GetInstanceResult& WithResourceOwner(ResourceOwnerT&& value) { SetResourceOwner(std::forward<ResourceOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about a specified instance.</p>
     */
    inline const Instance& GetInstance() const { return m_instance; }
    template<typename InstanceT = Instance>
    void SetInstance(InstanceT&& value) { m_instanceHasBeenSet = true; m_instance = std::forward<InstanceT>(value); }
    template<typename InstanceT = Instance>
    GetInstanceResult& WithInstance(InstanceT&& value) { SetInstance(std::forward<InstanceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetInstanceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet = false;

    Instance m_instance;
    bool m_instanceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
