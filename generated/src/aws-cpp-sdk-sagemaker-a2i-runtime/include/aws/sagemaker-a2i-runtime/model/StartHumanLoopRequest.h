/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopInput.h>
#include <aws/sagemaker-a2i-runtime/model/HumanLoopDataAttributes.h>
#include <utility>

namespace Aws
{
namespace AugmentedAIRuntime
{
namespace Model
{

  /**
   */
  class StartHumanLoopRequest : public AugmentedAIRuntimeRequest
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API StartHumanLoopRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartHumanLoop"; }

    AWS_AUGMENTEDAIRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopName() const { return m_humanLoopName; }
    inline bool HumanLoopNameHasBeenSet() const { return m_humanLoopNameHasBeenSet; }
    template<typename HumanLoopNameT = Aws::String>
    void SetHumanLoopName(HumanLoopNameT&& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = std::forward<HumanLoopNameT>(value); }
    template<typename HumanLoopNameT = Aws::String>
    StartHumanLoopRequest& WithHumanLoopName(HumanLoopNameT&& value) { SetHumanLoopName(std::forward<HumanLoopNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition associated with this
     * human loop.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const { return m_flowDefinitionArn; }
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }
    template<typename FlowDefinitionArnT = Aws::String>
    void SetFlowDefinitionArn(FlowDefinitionArnT&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::forward<FlowDefinitionArnT>(value); }
    template<typename FlowDefinitionArnT = Aws::String>
    StartHumanLoopRequest& WithFlowDefinitionArn(FlowDefinitionArnT&& value) { SetFlowDefinitionArn(std::forward<FlowDefinitionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the human loop.</p>
     */
    inline const HumanLoopInput& GetHumanLoopInput() const { return m_humanLoopInput; }
    inline bool HumanLoopInputHasBeenSet() const { return m_humanLoopInputHasBeenSet; }
    template<typename HumanLoopInputT = HumanLoopInput>
    void SetHumanLoopInput(HumanLoopInputT&& value) { m_humanLoopInputHasBeenSet = true; m_humanLoopInput = std::forward<HumanLoopInputT>(value); }
    template<typename HumanLoopInputT = HumanLoopInput>
    StartHumanLoopRequest& WithHumanLoopInput(HumanLoopInputT&& value) { SetHumanLoopInput(std::forward<HumanLoopInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes of the specified data. Use <code>DataAttributes</code> to specify
     * if your data is free of personally identifiable information and/or free of adult
     * content.</p>
     */
    inline const HumanLoopDataAttributes& GetDataAttributes() const { return m_dataAttributes; }
    inline bool DataAttributesHasBeenSet() const { return m_dataAttributesHasBeenSet; }
    template<typename DataAttributesT = HumanLoopDataAttributes>
    void SetDataAttributes(DataAttributesT&& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = std::forward<DataAttributesT>(value); }
    template<typename DataAttributesT = HumanLoopDataAttributes>
    StartHumanLoopRequest& WithDataAttributes(DataAttributesT&& value) { SetDataAttributes(std::forward<DataAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanLoopName;
    bool m_humanLoopNameHasBeenSet = false;

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    HumanLoopInput m_humanLoopInput;
    bool m_humanLoopInputHasBeenSet = false;

    HumanLoopDataAttributes m_dataAttributes;
    bool m_dataAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
