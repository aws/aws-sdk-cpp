/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class DescribeVpcEndpointsRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeVpcEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcEndpoints"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifiers of the endpoints to get information about.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcEndpointIds() const{ return m_vpcEndpointIds; }

    /**
     * <p>The unique identifiers of the endpoints to get information about.</p>
     */
    inline bool VpcEndpointIdsHasBeenSet() const { return m_vpcEndpointIdsHasBeenSet; }

    /**
     * <p>The unique identifiers of the endpoints to get information about.</p>
     */
    inline void SetVpcEndpointIds(const Aws::Vector<Aws::String>& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds = value; }

    /**
     * <p>The unique identifiers of the endpoints to get information about.</p>
     */
    inline void SetVpcEndpointIds(Aws::Vector<Aws::String>&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds = std::move(value); }

    /**
     * <p>The unique identifiers of the endpoints to get information about.</p>
     */
    inline DescribeVpcEndpointsRequest& WithVpcEndpointIds(const Aws::Vector<Aws::String>& value) { SetVpcEndpointIds(value); return *this;}

    /**
     * <p>The unique identifiers of the endpoints to get information about.</p>
     */
    inline DescribeVpcEndpointsRequest& WithVpcEndpointIds(Aws::Vector<Aws::String>&& value) { SetVpcEndpointIds(std::move(value)); return *this;}

    /**
     * <p>The unique identifiers of the endpoints to get information about.</p>
     */
    inline DescribeVpcEndpointsRequest& AddVpcEndpointIds(const Aws::String& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(value); return *this; }

    /**
     * <p>The unique identifiers of the endpoints to get information about.</p>
     */
    inline DescribeVpcEndpointsRequest& AddVpcEndpointIds(Aws::String&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The unique identifiers of the endpoints to get information about.</p>
     */
    inline DescribeVpcEndpointsRequest& AddVpcEndpointIds(const char* value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_vpcEndpointIds;
    bool m_vpcEndpointIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
