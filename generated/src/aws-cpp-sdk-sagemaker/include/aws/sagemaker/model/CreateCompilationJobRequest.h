/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InputConfig.h>
#include <aws/sagemaker/model/OutputConfig.h>
#include <aws/sagemaker/model/NeoVpcConfig.h>
#include <aws/sagemaker/model/StoppingCondition.h>
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
  class CreateCompilationJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateCompilationJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCompilationJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A name for the model compilation job. The name must be unique within the
     * Amazon Web Services Region and within your Amazon Web Services account. </p>
     */
    inline const Aws::String& GetCompilationJobName() const { return m_compilationJobName; }
    inline bool CompilationJobNameHasBeenSet() const { return m_compilationJobNameHasBeenSet; }
    template<typename CompilationJobNameT = Aws::String>
    void SetCompilationJobName(CompilationJobNameT&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::forward<CompilationJobNameT>(value); }
    template<typename CompilationJobNameT = Aws::String>
    CreateCompilationJobRequest& WithCompilationJobName(CompilationJobNameT&& value) { SetCompilationJobName(std::forward<CompilationJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * AI to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker AI needs your permission to:</p> <ul> <li> <p>Read input data from an
     * S3 bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker AI, the caller of
     * this API must have the <code>iam:PassRole</code> permission. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker AI Roles.</a> </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateCompilationJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package. Provide either a
     * <code>ModelPackageVersionArn</code> or an <code>InputConfig</code> object in the
     * request syntax. The presence of both objects in the
     * <code>CreateCompilationJob</code> request will return an exception.</p>
     */
    inline const Aws::String& GetModelPackageVersionArn() const { return m_modelPackageVersionArn; }
    inline bool ModelPackageVersionArnHasBeenSet() const { return m_modelPackageVersionArnHasBeenSet; }
    template<typename ModelPackageVersionArnT = Aws::String>
    void SetModelPackageVersionArn(ModelPackageVersionArnT&& value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn = std::forward<ModelPackageVersionArnT>(value); }
    template<typename ModelPackageVersionArnT = Aws::String>
    CreateCompilationJobRequest& WithModelPackageVersionArn(ModelPackageVersionArnT&& value) { SetModelPackageVersionArn(std::forward<ModelPackageVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline const InputConfig& GetInputConfig() const { return m_inputConfig; }
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }
    template<typename InputConfigT = InputConfig>
    void SetInputConfig(InputConfigT&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::forward<InputConfigT>(value); }
    template<typename InputConfigT = InputConfig>
    CreateCompilationJobRequest& WithInputConfig(InputConfigT&& value) { SetInputConfig(std::forward<InputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline const OutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = OutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OutputConfig>
    CreateCompilationJobRequest& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_VpcConfig.html">VpcConfig</a>
     * object that specifies the VPC that you want your compilation job to connect to.
     * Control access to your models by configuring the VPC. For more information, see
     * <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-vpc.html">Protect
     * Compilation Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline const NeoVpcConfig& GetVpcConfig() const { return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    template<typename VpcConfigT = NeoVpcConfig>
    void SetVpcConfig(VpcConfigT&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::forward<VpcConfigT>(value); }
    template<typename VpcConfigT = NeoVpcConfig>
    CreateCompilationJobRequest& WithVpcConfig(VpcConfigT&& value) { SetVpcConfig(std::forward<VpcConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker AI ends the compilation job. Use this
     * API to cap model training costs.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = StoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = StoppingCondition>
    CreateCompilationJobRequest& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCompilationJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCompilationJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_compilationJobName;
    bool m_compilationJobNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_modelPackageVersionArn;
    bool m_modelPackageVersionArnHasBeenSet = false;

    InputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    NeoVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
