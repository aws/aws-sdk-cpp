/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/ServiceDiscoveryRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

  /**
   */
  class GetServiceAttributesRequest : public ServiceDiscoveryRequest
  {
  public:
    AWS_SERVICEDISCOVERY_API GetServiceAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServiceAttributes"; }

    AWS_SERVICEDISCOVERY_API Aws::String SerializePayload() const override;

    AWS_SERVICEDISCOVERY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service that you want to get
     * attributes for. For services created in a namespace shared with your Amazon Web
     * Services account, specify the service ARN. For more information about shared
     * namespaces, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/dg/sharing-namespaces.html">Cross-account
     * Cloud Map namespace sharing</a> in the <i>Cloud Map Developer Guide</i>.</p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    GetServiceAttributesRequest& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
