﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DeleteEdgeDeploymentPlanRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DeleteEdgeDeploymentPlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEdgeDeploymentPlan"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the edge deployment plan to delete.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanName() const { return m_edgeDeploymentPlanName; }
    inline bool EdgeDeploymentPlanNameHasBeenSet() const { return m_edgeDeploymentPlanNameHasBeenSet; }
    template<typename EdgeDeploymentPlanNameT = Aws::String>
    void SetEdgeDeploymentPlanName(EdgeDeploymentPlanNameT&& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = std::forward<EdgeDeploymentPlanNameT>(value); }
    template<typename EdgeDeploymentPlanNameT = Aws::String>
    DeleteEdgeDeploymentPlanRequest& WithEdgeDeploymentPlanName(EdgeDeploymentPlanNameT&& value) { SetEdgeDeploymentPlanName(std::forward<EdgeDeploymentPlanNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_edgeDeploymentPlanName;
    bool m_edgeDeploymentPlanNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
