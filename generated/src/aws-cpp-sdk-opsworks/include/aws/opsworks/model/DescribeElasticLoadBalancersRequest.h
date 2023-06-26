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
    AWS_OPSWORKS_API DescribeElasticLoadBalancersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeElasticLoadBalancers"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A stack ID. The action describes the stack's Elastic Load Balancing
     * instances.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>A stack ID. The action describes the stack's Elastic Load Balancing
     * instances.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>A stack ID. The action describes the stack's Elastic Load Balancing
     * instances.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>A stack ID. The action describes the stack's Elastic Load Balancing
     * instances.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>A stack ID. The action describes the stack's Elastic Load Balancing
     * instances.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>A stack ID. The action describes the stack's Elastic Load Balancing
     * instances.</p>
     */
    inline DescribeElasticLoadBalancersRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>A stack ID. The action describes the stack's Elastic Load Balancing
     * instances.</p>
     */
    inline DescribeElasticLoadBalancersRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>A stack ID. The action describes the stack's Elastic Load Balancing
     * instances.</p>
     */
    inline DescribeElasticLoadBalancersRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>A list of layer IDs. The action describes the Elastic Load Balancing
     * instances for the specified layers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const{ return m_layerIds; }

    /**
     * <p>A list of layer IDs. The action describes the Elastic Load Balancing
     * instances for the specified layers.</p>
     */
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }

    /**
     * <p>A list of layer IDs. The action describes the Elastic Load Balancing
     * instances for the specified layers.</p>
     */
    inline void SetLayerIds(const Aws::Vector<Aws::String>& value) { m_layerIdsHasBeenSet = true; m_layerIds = value; }

    /**
     * <p>A list of layer IDs. The action describes the Elastic Load Balancing
     * instances for the specified layers.</p>
     */
    inline void SetLayerIds(Aws::Vector<Aws::String>&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::move(value); }

    /**
     * <p>A list of layer IDs. The action describes the Elastic Load Balancing
     * instances for the specified layers.</p>
     */
    inline DescribeElasticLoadBalancersRequest& WithLayerIds(const Aws::Vector<Aws::String>& value) { SetLayerIds(value); return *this;}

    /**
     * <p>A list of layer IDs. The action describes the Elastic Load Balancing
     * instances for the specified layers.</p>
     */
    inline DescribeElasticLoadBalancersRequest& WithLayerIds(Aws::Vector<Aws::String>&& value) { SetLayerIds(std::move(value)); return *this;}

    /**
     * <p>A list of layer IDs. The action describes the Elastic Load Balancing
     * instances for the specified layers.</p>
     */
    inline DescribeElasticLoadBalancersRequest& AddLayerIds(const Aws::String& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

    /**
     * <p>A list of layer IDs. The action describes the Elastic Load Balancing
     * instances for the specified layers.</p>
     */
    inline DescribeElasticLoadBalancersRequest& AddLayerIds(Aws::String&& value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of layer IDs. The action describes the Elastic Load Balancing
     * instances for the specified layers.</p>
     */
    inline DescribeElasticLoadBalancersRequest& AddLayerIds(const char* value) { m_layerIdsHasBeenSet = true; m_layerIds.push_back(value); return *this; }

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
