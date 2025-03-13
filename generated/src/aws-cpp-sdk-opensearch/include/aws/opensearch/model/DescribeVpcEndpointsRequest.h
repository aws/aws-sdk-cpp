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
    AWS_OPENSEARCHSERVICE_API DescribeVpcEndpointsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVpcEndpoints"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifiers of the endpoints to get information about.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcEndpointIds() const { return m_vpcEndpointIds; }
    inline bool VpcEndpointIdsHasBeenSet() const { return m_vpcEndpointIdsHasBeenSet; }
    template<typename VpcEndpointIdsT = Aws::Vector<Aws::String>>
    void SetVpcEndpointIds(VpcEndpointIdsT&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds = std::forward<VpcEndpointIdsT>(value); }
    template<typename VpcEndpointIdsT = Aws::Vector<Aws::String>>
    DescribeVpcEndpointsRequest& WithVpcEndpointIds(VpcEndpointIdsT&& value) { SetVpcEndpointIds(std::forward<VpcEndpointIdsT>(value)); return *this;}
    template<typename VpcEndpointIdsT = Aws::String>
    DescribeVpcEndpointsRequest& AddVpcEndpointIds(VpcEndpointIdsT&& value) { m_vpcEndpointIdsHasBeenSet = true; m_vpcEndpointIds.emplace_back(std::forward<VpcEndpointIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_vpcEndpointIds;
    bool m_vpcEndpointIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
