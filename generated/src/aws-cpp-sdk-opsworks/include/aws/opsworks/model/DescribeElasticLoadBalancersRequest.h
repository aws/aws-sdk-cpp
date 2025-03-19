/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeElasticLoadBalancersRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeElasticLoadBalancersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeElasticLoadBalancers"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A stack ID. The action describes the stack's Elastic Load Balancing
     * instances.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeElasticLoadBalancersRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of layer IDs. The action describes the Elastic Load Balancing
     * instances for the specified layers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const { return m_layerIds; }
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    void SetLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::forward<LayerIdsT>(value); }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    DescribeElasticLoadBalancersRequest& WithLayerIds(LayerIdsT&& value) { SetLayerIds(std::forward<LayerIdsT>(value)); return *this;}
    template<typename LayerIdsT = Aws::String>
    DescribeElasticLoadBalancersRequest& AddLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds.emplace_back(std::forward<LayerIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
