/**
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
  class DescribeFlowDefinitionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeFlowDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFlowDefinition"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionName() const { return m_flowDefinitionName; }
    inline bool FlowDefinitionNameHasBeenSet() const { return m_flowDefinitionNameHasBeenSet; }
    template<typename FlowDefinitionNameT = Aws::String>
    void SetFlowDefinitionName(FlowDefinitionNameT&& value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName = std::forward<FlowDefinitionNameT>(value); }
    template<typename FlowDefinitionNameT = Aws::String>
    DescribeFlowDefinitionRequest& WithFlowDefinitionName(FlowDefinitionNameT&& value) { SetFlowDefinitionName(std::forward<FlowDefinitionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowDefinitionName;
    bool m_flowDefinitionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
