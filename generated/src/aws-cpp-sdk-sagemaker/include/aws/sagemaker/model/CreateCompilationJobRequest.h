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
    AWS_SAGEMAKER_API CreateCompilationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCompilationJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the model compilation job. The name must be unique within the
     * Amazon Web Services Region and within your Amazon Web Services account. </p>
     */
    inline const Aws::String& GetCompilationJobName() const{ return m_compilationJobName; }

    /**
     * <p>A name for the model compilation job. The name must be unique within the
     * Amazon Web Services Region and within your Amazon Web Services account. </p>
     */
    inline bool CompilationJobNameHasBeenSet() const { return m_compilationJobNameHasBeenSet; }

    /**
     * <p>A name for the model compilation job. The name must be unique within the
     * Amazon Web Services Region and within your Amazon Web Services account. </p>
     */
    inline void SetCompilationJobName(const Aws::String& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = value; }

    /**
     * <p>A name for the model compilation job. The name must be unique within the
     * Amazon Web Services Region and within your Amazon Web Services account. </p>
     */
    inline void SetCompilationJobName(Aws::String&& value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName = std::move(value); }

    /**
     * <p>A name for the model compilation job. The name must be unique within the
     * Amazon Web Services Region and within your Amazon Web Services account. </p>
     */
    inline void SetCompilationJobName(const char* value) { m_compilationJobNameHasBeenSet = true; m_compilationJobName.assign(value); }

    /**
     * <p>A name for the model compilation job. The name must be unique within the
     * Amazon Web Services Region and within your Amazon Web Services account. </p>
     */
    inline CreateCompilationJobRequest& WithCompilationJobName(const Aws::String& value) { SetCompilationJobName(value); return *this;}

    /**
     * <p>A name for the model compilation job. The name must be unique within the
     * Amazon Web Services Region and within your Amazon Web Services account. </p>
     */
    inline CreateCompilationJobRequest& WithCompilationJobName(Aws::String&& value) { SetCompilationJobName(std::move(value)); return *this;}

    /**
     * <p>A name for the model compilation job. The name must be unique within the
     * Amazon Web Services Region and within your Amazon Web Services account. </p>
     */
    inline CreateCompilationJobRequest& WithCompilationJobName(const char* value) { SetCompilationJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline CreateCompilationJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline CreateCompilationJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that enables Amazon SageMaker
     * to perform tasks on your behalf. </p> <p>During model compilation, Amazon
     * SageMaker needs your permission to:</p> <ul> <li> <p>Read input data from an S3
     * bucket</p> </li> <li> <p>Write model artifacts to an S3 bucket</p> </li> <li>
     * <p>Write logs to Amazon CloudWatch Logs</p> </li> <li> <p>Publish metrics to
     * Amazon CloudWatch</p> </li> </ul> <p>You grant permissions for all of these
     * tasks to an IAM role. To pass this role to Amazon SageMaker, the caller of this
     * API must have the <code>iam:PassRole</code> permission. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-roles.html">Amazon
     * SageMaker Roles.</a> </p>
     */
    inline CreateCompilationJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package. Provide either a
     * <code>ModelPackageVersionArn</code> or an <code>InputConfig</code> object in the
     * request syntax. The presence of both objects in the
     * <code>CreateCompilationJob</code> request will return an exception.</p>
     */
    inline const Aws::String& GetModelPackageVersionArn() const{ return m_modelPackageVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package. Provide either a
     * <code>ModelPackageVersionArn</code> or an <code>InputConfig</code> object in the
     * request syntax. The presence of both objects in the
     * <code>CreateCompilationJob</code> request will return an exception.</p>
     */
    inline bool ModelPackageVersionArnHasBeenSet() const { return m_modelPackageVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package. Provide either a
     * <code>ModelPackageVersionArn</code> or an <code>InputConfig</code> object in the
     * request syntax. The presence of both objects in the
     * <code>CreateCompilationJob</code> request will return an exception.</p>
     */
    inline void SetModelPackageVersionArn(const Aws::String& value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package. Provide either a
     * <code>ModelPackageVersionArn</code> or an <code>InputConfig</code> object in the
     * request syntax. The presence of both objects in the
     * <code>CreateCompilationJob</code> request will return an exception.</p>
     */
    inline void SetModelPackageVersionArn(Aws::String&& value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package. Provide either a
     * <code>ModelPackageVersionArn</code> or an <code>InputConfig</code> object in the
     * request syntax. The presence of both objects in the
     * <code>CreateCompilationJob</code> request will return an exception.</p>
     */
    inline void SetModelPackageVersionArn(const char* value) { m_modelPackageVersionArnHasBeenSet = true; m_modelPackageVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package. Provide either a
     * <code>ModelPackageVersionArn</code> or an <code>InputConfig</code> object in the
     * request syntax. The presence of both objects in the
     * <code>CreateCompilationJob</code> request will return an exception.</p>
     */
    inline CreateCompilationJobRequest& WithModelPackageVersionArn(const Aws::String& value) { SetModelPackageVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package. Provide either a
     * <code>ModelPackageVersionArn</code> or an <code>InputConfig</code> object in the
     * request syntax. The presence of both objects in the
     * <code>CreateCompilationJob</code> request will return an exception.</p>
     */
    inline CreateCompilationJobRequest& WithModelPackageVersionArn(Aws::String&& value) { SetModelPackageVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a versioned model package. Provide either a
     * <code>ModelPackageVersionArn</code> or an <code>InputConfig</code> object in the
     * request syntax. The presence of both objects in the
     * <code>CreateCompilationJob</code> request will return an exception.</p>
     */
    inline CreateCompilationJobRequest& WithModelPackageVersionArn(const char* value) { SetModelPackageVersionArn(value); return *this;}


    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline const InputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }

    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline void SetInputConfig(const InputConfig& value) { m_inputConfigHasBeenSet = true; m_inputConfig = value; }

    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline void SetInputConfig(InputConfig&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::move(value); }

    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline CreateCompilationJobRequest& WithInputConfig(const InputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Provides information about the location of input model artifacts, the name
     * and shape of the expected data inputs, and the framework in which the model was
     * trained.</p>
     */
    inline CreateCompilationJobRequest& WithInputConfig(InputConfig&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline CreateCompilationJobRequest& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>Provides information about the output location for the compiled model and the
     * target device the model runs on.</p>
     */
    inline CreateCompilationJobRequest& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your
     * compilation job to connect to. Control access to your models by configuring the
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-vpc.html">Protect
     * Compilation Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline const NeoVpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your
     * compilation job to connect to. Control access to your models by configuring the
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-vpc.html">Protect
     * Compilation Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your
     * compilation job to connect to. Control access to your models by configuring the
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-vpc.html">Protect
     * Compilation Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline void SetVpcConfig(const NeoVpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your
     * compilation job to connect to. Control access to your models by configuring the
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-vpc.html">Protect
     * Compilation Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline void SetVpcConfig(NeoVpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your
     * compilation job to connect to. Control access to your models by configuring the
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-vpc.html">Protect
     * Compilation Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline CreateCompilationJobRequest& WithVpcConfig(const NeoVpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>A <a>VpcConfig</a> object that specifies the VPC that you want your
     * compilation job to connect to. Control access to your models by configuring the
     * VPC. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/neo-vpc.html">Protect
     * Compilation Jobs by Using an Amazon Virtual Private Cloud</a>.</p>
     */
    inline CreateCompilationJobRequest& WithVpcConfig(NeoVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline CreateCompilationJobRequest& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}

    /**
     * <p>Specifies a limit to how long a model compilation job can run. When the job
     * reaches the time limit, Amazon SageMaker ends the compilation job. Use this API
     * to cap model training costs.</p>
     */
    inline CreateCompilationJobRequest& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateCompilationJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateCompilationJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateCompilationJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateCompilationJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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
