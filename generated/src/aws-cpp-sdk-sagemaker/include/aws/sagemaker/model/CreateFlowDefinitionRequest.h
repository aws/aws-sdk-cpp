﻿/**
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
    AWS_SAGEMAKER_API CreateFlowDefinitionRequest();

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
    inline const Aws::String& GetFlowDefinitionName() const{ return m_flowDefinitionName; }
    inline bool FlowDefinitionNameHasBeenSet() const { return m_flowDefinitionNameHasBeenSet; }
    inline void SetFlowDefinitionName(const Aws::String& value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName = value; }
    inline void SetFlowDefinitionName(Aws::String&& value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName = std::move(value); }
    inline void SetFlowDefinitionName(const char* value) { m_flowDefinitionNameHasBeenSet = true; m_flowDefinitionName.assign(value); }
    inline CreateFlowDefinitionRequest& WithFlowDefinitionName(const Aws::String& value) { SetFlowDefinitionName(value); return *this;}
    inline CreateFlowDefinitionRequest& WithFlowDefinitionName(Aws::String&& value) { SetFlowDefinitionName(std::move(value)); return *this;}
    inline CreateFlowDefinitionRequest& WithFlowDefinitionName(const char* value) { SetFlowDefinitionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Container for configuring the source of human task requests. Use to specify
     * if Amazon Rekognition or Amazon Textract is used as an integration source.</p>
     */
    inline const HumanLoopRequestSource& GetHumanLoopRequestSource() const{ return m_humanLoopRequestSource; }
    inline bool HumanLoopRequestSourceHasBeenSet() const { return m_humanLoopRequestSourceHasBeenSet; }
    inline void SetHumanLoopRequestSource(const HumanLoopRequestSource& value) { m_humanLoopRequestSourceHasBeenSet = true; m_humanLoopRequestSource = value; }
    inline void SetHumanLoopRequestSource(HumanLoopRequestSource&& value) { m_humanLoopRequestSourceHasBeenSet = true; m_humanLoopRequestSource = std::move(value); }
    inline CreateFlowDefinitionRequest& WithHumanLoopRequestSource(const HumanLoopRequestSource& value) { SetHumanLoopRequestSource(value); return *this;}
    inline CreateFlowDefinitionRequest& WithHumanLoopRequestSource(HumanLoopRequestSource&& value) { SetHumanLoopRequestSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the events that trigger a human
     * workflow.</p>
     */
    inline const HumanLoopActivationConfig& GetHumanLoopActivationConfig() const{ return m_humanLoopActivationConfig; }
    inline bool HumanLoopActivationConfigHasBeenSet() const { return m_humanLoopActivationConfigHasBeenSet; }
    inline void SetHumanLoopActivationConfig(const HumanLoopActivationConfig& value) { m_humanLoopActivationConfigHasBeenSet = true; m_humanLoopActivationConfig = value; }
    inline void SetHumanLoopActivationConfig(HumanLoopActivationConfig&& value) { m_humanLoopActivationConfigHasBeenSet = true; m_humanLoopActivationConfig = std::move(value); }
    inline CreateFlowDefinitionRequest& WithHumanLoopActivationConfig(const HumanLoopActivationConfig& value) { SetHumanLoopActivationConfig(value); return *this;}
    inline CreateFlowDefinitionRequest& WithHumanLoopActivationConfig(HumanLoopActivationConfig&& value) { SetHumanLoopActivationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the tasks the human reviewers will
     * perform.</p>
     */
    inline const HumanLoopConfig& GetHumanLoopConfig() const{ return m_humanLoopConfig; }
    inline bool HumanLoopConfigHasBeenSet() const { return m_humanLoopConfigHasBeenSet; }
    inline void SetHumanLoopConfig(const HumanLoopConfig& value) { m_humanLoopConfigHasBeenSet = true; m_humanLoopConfig = value; }
    inline void SetHumanLoopConfig(HumanLoopConfig&& value) { m_humanLoopConfigHasBeenSet = true; m_humanLoopConfig = std::move(value); }
    inline CreateFlowDefinitionRequest& WithHumanLoopConfig(const HumanLoopConfig& value) { SetHumanLoopConfig(value); return *this;}
    inline CreateFlowDefinitionRequest& WithHumanLoopConfig(HumanLoopConfig&& value) { SetHumanLoopConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about where the human review results will be
     * uploaded.</p>
     */
    inline const FlowDefinitionOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    inline void SetOutputConfig(const FlowDefinitionOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }
    inline void SetOutputConfig(FlowDefinitionOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }
    inline CreateFlowDefinitionRequest& WithOutputConfig(const FlowDefinitionOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline CreateFlowDefinitionRequest& WithOutputConfig(FlowDefinitionOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role needed to call other services on
     * your behalf. For example,
     * <code>arn:aws:iam::1234567890:role/service-role/AmazonSageMaker-ExecutionRole-20180111T151298</code>.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateFlowDefinitionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateFlowDefinitionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateFlowDefinitionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs that contain metadata to help you categorize and
     * organize a flow definition. Each tag consists of a key and a value, both of
     * which you define.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateFlowDefinitionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateFlowDefinitionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateFlowDefinitionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateFlowDefinitionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
