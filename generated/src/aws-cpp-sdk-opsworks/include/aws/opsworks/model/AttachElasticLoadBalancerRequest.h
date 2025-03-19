/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AttachElasticLoadBalancerRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API AttachElasticLoadBalancerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachElasticLoadBalancer"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Elastic Load Balancing instance's name.</p>
     */
    inline const Aws::String& GetElasticLoadBalancerName() const { return m_elasticLoadBalancerName; }
    inline bool ElasticLoadBalancerNameHasBeenSet() const { return m_elasticLoadBalancerNameHasBeenSet; }
    template<typename ElasticLoadBalancerNameT = Aws::String>
    void SetElasticLoadBalancerName(ElasticLoadBalancerNameT&& value) { m_elasticLoadBalancerNameHasBeenSet = true; m_elasticLoadBalancerName = std::forward<ElasticLoadBalancerNameT>(value); }
    template<typename ElasticLoadBalancerNameT = Aws::String>
    AttachElasticLoadBalancerRequest& WithElasticLoadBalancerName(ElasticLoadBalancerNameT&& value) { SetElasticLoadBalancerName(std::forward<ElasticLoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the layer to which the Elastic Load Balancing instance is to be
     * attached.</p>
     */
    inline const Aws::String& GetLayerId() const { return m_layerId; }
    inline bool LayerIdHasBeenSet() const { return m_layerIdHasBeenSet; }
    template<typename LayerIdT = Aws::String>
    void SetLayerId(LayerIdT&& value) { m_layerIdHasBeenSet = true; m_layerId = std::forward<LayerIdT>(value); }
    template<typename LayerIdT = Aws::String>
    AttachElasticLoadBalancerRequest& WithLayerId(LayerIdT&& value) { SetLayerId(std::forward<LayerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_elasticLoadBalancerName;
    bool m_elasticLoadBalancerNameHasBeenSet = false;

    Aws::String m_layerId;
    bool m_layerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
