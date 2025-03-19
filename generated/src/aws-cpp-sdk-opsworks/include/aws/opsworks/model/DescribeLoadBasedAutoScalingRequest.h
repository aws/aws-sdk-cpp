/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeLoadBasedAutoScalingRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeLoadBasedAutoScalingRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeLoadBasedAutoScaling"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of layer IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerIds() const { return m_layerIds; }
    inline bool LayerIdsHasBeenSet() const { return m_layerIdsHasBeenSet; }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    void SetLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds = std::forward<LayerIdsT>(value); }
    template<typename LayerIdsT = Aws::Vector<Aws::String>>
    DescribeLoadBasedAutoScalingRequest& WithLayerIds(LayerIdsT&& value) { SetLayerIds(std::forward<LayerIdsT>(value)); return *this;}
    template<typename LayerIdsT = Aws::String>
    DescribeLoadBasedAutoScalingRequest& AddLayerIds(LayerIdsT&& value) { m_layerIdsHasBeenSet = true; m_layerIds.emplace_back(std::forward<LayerIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_layerIds;
    bool m_layerIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
