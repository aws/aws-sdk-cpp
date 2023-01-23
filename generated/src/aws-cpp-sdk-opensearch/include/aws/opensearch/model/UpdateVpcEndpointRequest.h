/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/VPCOptions.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class UpdateVpcEndpointRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdateVpcEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVpcEndpoint"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline const Aws::String& GetVpcEndpointId() const{ return m_vpcEndpointId; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline bool VpcEndpointIdHasBeenSet() const { return m_vpcEndpointIdHasBeenSet; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const Aws::String& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = value; }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(Aws::String&& value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId = std::move(value); }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline void SetVpcEndpointId(const char* value) { m_vpcEndpointIdHasBeenSet = true; m_vpcEndpointId.assign(value); }

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline UpdateVpcEndpointRequest& WithVpcEndpointId(const Aws::String& value) { SetVpcEndpointId(value); return *this;}

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline UpdateVpcEndpointRequest& WithVpcEndpointId(Aws::String&& value) { SetVpcEndpointId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the endpoint.</p>
     */
    inline UpdateVpcEndpointRequest& WithVpcEndpointId(const char* value) { SetVpcEndpointId(value); return *this;}


    /**
     * <p>The security groups and/or subnets to add, remove, or modify.</p>
     */
    inline const VPCOptions& GetVpcOptions() const{ return m_vpcOptions; }

    /**
     * <p>The security groups and/or subnets to add, remove, or modify.</p>
     */
    inline bool VpcOptionsHasBeenSet() const { return m_vpcOptionsHasBeenSet; }

    /**
     * <p>The security groups and/or subnets to add, remove, or modify.</p>
     */
    inline void SetVpcOptions(const VPCOptions& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = value; }

    /**
     * <p>The security groups and/or subnets to add, remove, or modify.</p>
     */
    inline void SetVpcOptions(VPCOptions&& value) { m_vpcOptionsHasBeenSet = true; m_vpcOptions = std::move(value); }

    /**
     * <p>The security groups and/or subnets to add, remove, or modify.</p>
     */
    inline UpdateVpcEndpointRequest& WithVpcOptions(const VPCOptions& value) { SetVpcOptions(value); return *this;}

    /**
     * <p>The security groups and/or subnets to add, remove, or modify.</p>
     */
    inline UpdateVpcEndpointRequest& WithVpcOptions(VPCOptions&& value) { SetVpcOptions(std::move(value)); return *this;}

  private:

    Aws::String m_vpcEndpointId;
    bool m_vpcEndpointIdHasBeenSet = false;

    VPCOptions m_vpcOptions;
    bool m_vpcOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
