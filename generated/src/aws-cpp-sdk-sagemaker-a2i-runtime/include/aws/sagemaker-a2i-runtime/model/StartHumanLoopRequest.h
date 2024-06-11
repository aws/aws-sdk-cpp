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
    AWS_AUGMENTEDAIRUNTIME_API StartHumanLoopRequest();

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
    inline const Aws::String& GetHumanLoopName() const{ return m_humanLoopName; }
    inline bool HumanLoopNameHasBeenSet() const { return m_humanLoopNameHasBeenSet; }
    inline void SetHumanLoopName(const Aws::String& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = value; }
    inline void SetHumanLoopName(Aws::String&& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = std::move(value); }
    inline void SetHumanLoopName(const char* value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName.assign(value); }
    inline StartHumanLoopRequest& WithHumanLoopName(const Aws::String& value) { SetHumanLoopName(value); return *this;}
    inline StartHumanLoopRequest& WithHumanLoopName(Aws::String&& value) { SetHumanLoopName(std::move(value)); return *this;}
    inline StartHumanLoopRequest& WithHumanLoopName(const char* value) { SetHumanLoopName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition associated with this
     * human loop.</p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = value; }
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::move(value); }
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn.assign(value); }
    inline StartHumanLoopRequest& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}
    inline StartHumanLoopRequest& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}
    inline StartHumanLoopRequest& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains information about the human loop.</p>
     */
    inline const HumanLoopInput& GetHumanLoopInput() const{ return m_humanLoopInput; }
    inline bool HumanLoopInputHasBeenSet() const { return m_humanLoopInputHasBeenSet; }
    inline void SetHumanLoopInput(const HumanLoopInput& value) { m_humanLoopInputHasBeenSet = true; m_humanLoopInput = value; }
    inline void SetHumanLoopInput(HumanLoopInput&& value) { m_humanLoopInputHasBeenSet = true; m_humanLoopInput = std::move(value); }
    inline StartHumanLoopRequest& WithHumanLoopInput(const HumanLoopInput& value) { SetHumanLoopInput(value); return *this;}
    inline StartHumanLoopRequest& WithHumanLoopInput(HumanLoopInput&& value) { SetHumanLoopInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes of the specified data. Use <code>DataAttributes</code> to specify
     * if your data is free of personally identifiable information and/or free of adult
     * content.</p>
     */
    inline const HumanLoopDataAttributes& GetDataAttributes() const{ return m_dataAttributes; }
    inline bool DataAttributesHasBeenSet() const { return m_dataAttributesHasBeenSet; }
    inline void SetDataAttributes(const HumanLoopDataAttributes& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = value; }
    inline void SetDataAttributes(HumanLoopDataAttributes&& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = std::move(value); }
    inline StartHumanLoopRequest& WithDataAttributes(const HumanLoopDataAttributes& value) { SetDataAttributes(value); return *this;}
    inline StartHumanLoopRequest& WithDataAttributes(HumanLoopDataAttributes&& value) { SetDataAttributes(std::move(value)); return *this;}
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
