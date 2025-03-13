/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HumanLoopRequestSource.h>
#include <aws/sagemaker/model/HumanLoopActivationConfig.h>
#include <aws/sagemaker/model/HumanLoopConfig.h>
#include <aws/sagemaker/model/FlowDefinitionOutputConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateFlowDefinitionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateFlowDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFlowDefinition"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of your flow definition.</p>
     */
    inline const Aws::String& GetFlowDefinitionName() const { return m_flowDefinitionName; }
    inline bool FlowDefinitionNameHasBeenSet() const { return m_flowDefinitionNameHasBeenSet; }
    template<typename FlowDefinitionNameT = Aws::String>
    void SetFlowDefinitionName(FlowDefinitionNameT&& value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName = std::forward<FlowDefinitionNameT>(value); }
    template<typename FlowDefinitionNameT = Aws::String>
    CreateFlowDefinitionRequest& WithFlowDefinitionName(FlowDefinitionNameT&& value) { SetFlowDefinitionName(std::forward<FlowDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for configuring the source of human task requests. Use to specify
     * if Amazon Rekognition or Amazon Textract is used as an integration source.</p>
     */
    inline const HumanLoopRequestSource& GetHumanLoopRequestSource() const { return m_humanLoopRequestSource; }
    inline bool HumanLoopRequestSourceHasBeenSet() const { return m_humanLoopRequestSourceHasBeenSet; }
    template<typename HumanLoopRequestSourceT = HumanLoopRequestSource>
    void SetHumanLoopRequestSource(HumanLoopRequestSourceT&& value) { m_humanLoopRequestSourceHasBeenSet = true; m_humanLoopRequestSource = std::forward<HumanLoopRequestSourceT>(value); }
    template<typename HumanLoopRequestSourceT = HumanLoopRequestSource>
    CreateFlowDefinitionRequest& WithHumanLoopRequestSource(HumanLoopRequestSourceT&& value) { SetHumanLoopRequestSource(std::forward<HumanLoopRequestSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the events that trigger a human
     * workflow.</p>
     */
    inline const HumanLoopActivationConfig& GetHumanLoopActivationConfig() const { return m_humanLoopActivationConfig; }
    inline bool HumanLoopActivationConfigHasBeenSet() const { return m_humanLoopActivationConfigHasBeenSet; }
    template<typename HumanLoopActivationConfigT = HumanLoopActivationConfig>
    void SetHumanLoopActivationConfig(HumanLoopActivationConfigT&& value) { m_humanLoopActivationConfigHasBeenSet = true; m_humanLoopActivationConfig = std::forward<HumanLoopActivationConfigT>(value); }
    template<typename HumanLoopActivationConfigT = HumanLoopActivationConfig>
    CreateFlowDefinitionRequest& WithHumanLoopActivationConfig(HumanLoopActivationConfigT&& value) { SetHumanLoopActivationConfig(std::forward<HumanLoopActivationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the tasks the human reviewers will
     * perform.</p>
     */
    inline const HumanLoopConfig& GetHumanLoopConfig() const { return m_humanLoopConfig; }
    inline bool HumanLoopConfigHasBeenSet() const { return m_humanLoopConfigHasBeenSet; }
    template<typename HumanLoopConfigT = HumanLoopConfig>
    void SetHumanLoopConfig(HumanLoopConfigT&& value) { m_humanLoopConfigHasBeenSet = true; m_humanLoopConfig = std::forward<HumanLoopConfigT>(value); }
    template<typename HumanLoopConfigT = HumanLoopConfig>
    CreateFlowDefinitionRequest& WithHumanLoopConfig(HumanLoopConfigT&& value) { SetHumanLoopConfig(std::forward<HumanLoopConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about where the human review results will be
     * uploaded.</p>
     */
    inline const FlowDefinitionOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = FlowDefinitionOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = FlowDefinitionOutputConfig>
    CreateFlowDefinitionRequest& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role needed to call other services on
     * your behalf. For example,
     * <code>arn:aws:iam::1234567890:role/service-role/AmazonSageMaker-ExecutionRole-20180111T151298</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateFlowDefinitionRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize a flow definition. Each tag consists of a key and a value, both of
     * which you define.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateFlowDefinitionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFlowDefinitionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_flowDefinitionName;
    bool m_flowDefinitionNameHasBeenSet = false;

    HumanLoopRequestSource m_humanLoopRequestSource;
    bool m_humanLoopRequestSourceHasBeenSet = false;

    HumanLoopActivationConfig m_humanLoopActivationConfig;
    bool m_humanLoopActivationConfigHasBeenSet = false;

    HumanLoopConfig m_humanLoopConfig;
    bool m_humanLoopConfigHasBeenSet = false;

    FlowDefinitionOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
