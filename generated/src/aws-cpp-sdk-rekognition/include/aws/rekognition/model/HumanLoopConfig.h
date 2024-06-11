/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/HumanLoopDataAttributes.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Sets up the flow definition the image will be sent to if one of the
   * conditions is met. You can also set certain attributes of the image before
   * review.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/HumanLoopConfig">AWS
   * API Reference</a></p>
   */
  class HumanLoopConfig
  {
  public:
    AWS_REKOGNITION_API HumanLoopConfig();
    AWS_REKOGNITION_API HumanLoopConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API HumanLoopConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the human review used for this image. This should be kept unique
     * within a region.</p>
     */
    inline const Aws::String& GetHumanLoopName() const{ return m_humanLoopName; }
    inline bool HumanLoopNameHasBeenSet() const { return m_humanLoopNameHasBeenSet; }
    inline void SetHumanLoopName(const Aws::String& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = value; }
    inline void SetHumanLoopName(Aws::String&& value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName = std::move(value); }
    inline void SetHumanLoopName(const char* value) { m_humanLoopNameHasBeenSet = true; m_humanLoopName.assign(value); }
    inline HumanLoopConfig& WithHumanLoopName(const Aws::String& value) { SetHumanLoopName(value); return *this;}
    inline HumanLoopConfig& WithHumanLoopName(Aws::String&& value) { SetHumanLoopName(std::move(value)); return *this;}
    inline HumanLoopConfig& WithHumanLoopName(const char* value) { SetHumanLoopName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the flow definition. You can create a flow
     * definition by using the Amazon Sagemaker <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/API_CreateFlowDefinition.html">CreateFlowDefinition</a>
     * Operation. </p>
     */
    inline const Aws::String& GetFlowDefinitionArn() const{ return m_flowDefinitionArn; }
    inline bool FlowDefinitionArnHasBeenSet() const { return m_flowDefinitionArnHasBeenSet; }
    inline void SetFlowDefinitionArn(const Aws::String& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = value; }
    inline void SetFlowDefinitionArn(Aws::String&& value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn = std::move(value); }
    inline void SetFlowDefinitionArn(const char* value) { m_flowDefinitionArnHasBeenSet = true; m_flowDefinitionArn.assign(value); }
    inline HumanLoopConfig& WithFlowDefinitionArn(const Aws::String& value) { SetFlowDefinitionArn(value); return *this;}
    inline HumanLoopConfig& WithFlowDefinitionArn(Aws::String&& value) { SetFlowDefinitionArn(std::move(value)); return *this;}
    inline HumanLoopConfig& WithFlowDefinitionArn(const char* value) { SetFlowDefinitionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets attributes of the input data.</p>
     */
    inline const HumanLoopDataAttributes& GetDataAttributes() const{ return m_dataAttributes; }
    inline bool DataAttributesHasBeenSet() const { return m_dataAttributesHasBeenSet; }
    inline void SetDataAttributes(const HumanLoopDataAttributes& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = value; }
    inline void SetDataAttributes(HumanLoopDataAttributes&& value) { m_dataAttributesHasBeenSet = true; m_dataAttributes = std::move(value); }
    inline HumanLoopConfig& WithDataAttributes(const HumanLoopDataAttributes& value) { SetDataAttributes(value); return *this;}
    inline HumanLoopConfig& WithDataAttributes(HumanLoopDataAttributes&& value) { SetDataAttributes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_humanLoopName;
    bool m_humanLoopNameHasBeenSet = false;

    Aws::String m_flowDefinitionArn;
    bool m_flowDefinitionArnHasBeenSet = false;

    HumanLoopDataAttributes m_dataAttributes;
    bool m_dataAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
