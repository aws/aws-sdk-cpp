/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/LabelingJobInputConfig.h>
#include <aws/sagemaker/model/LabelingJobOutputConfig.h>
#include <aws/sagemaker/model/LabelingJobStoppingConditions.h>
#include <aws/sagemaker/model/LabelingJobAlgorithmsConfig.h>
#include <aws/sagemaker/model/HumanTaskConfig.h>
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
  class CreateLabelingJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateLabelingJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLabelingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs. Labeling job names must be unique within an Amazon Web
     * Services account and region. <code>LabelingJobName</code> is not case sensitive.
     * For example, Example-job and example-job are considered the same labeling job
     * name by Ground Truth.</p>
     */
    inline const Aws::String& GetLabelingJobName() const { return m_labelingJobName; }
    inline bool LabelingJobNameHasBeenSet() const { return m_labelingJobNameHasBeenSet; }
    template<typename LabelingJobNameT = Aws::String>
    void SetLabelingJobName(LabelingJobNameT&& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = std::forward<LabelingJobNameT>(value); }
    template<typename LabelingJobNameT = Aws::String>
    CreateLabelingJobRequest& WithLabelingJobName(LabelingJobNameT&& value) { SetLabelingJobName(std::forward<LabelingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The <code>LabelAttributeName</code> must meet the following
     * requirements.</p> <ul> <li> <p>The name can't end with "-metadata". </p> </li>
     * <li> <p>If you are using one of the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a> or one of the following, the attribute name <i>must</i> end with
     * "-ref".</p> <ul> <li> <p>Image semantic segmentation
     * (<code>SemanticSegmentation)</code> and adjustment
     * (<code>AdjustmentSemanticSegmentation</code>) labeling jobs for this task type.
     * One exception is that verification
     * (<code>VerificationSemanticSegmentation</code>) <i>must not</i> end with
     * -"ref".</p> </li> <li> <p>Video frame object detection
     * (<code>VideoObjectDetection</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectDetection</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object tracking
     * (<code>VideoObjectTracking</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectTracking</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>3D point cloud semantic segmentation
     * (<code>3DPointCloudSemanticSegmentation</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudSemanticSegmentation</code>) labeling jobs for this
     * task type. </p> </li> <li> <p>3D point cloud object tracking
     * (<code>3DPointCloudObjectTracking</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudObjectTracking</code>) labeling jobs for this task
     * type. </p> </li> </ul> </li> </ul> <p/>  <p>If you are creating an
     * adjustment or verification labeling job, you must use a <i>different</i>
     * <code>LabelAttributeName</code> than the one used in the original labeling job.
     * The original labeling job is the Ground Truth labeling job that produced the
     * labels that you want verified or adjusted. To learn more about adjustment and
     * verification labeling jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels</a>.</p> 
     */
    inline const Aws::String& GetLabelAttributeName() const { return m_labelAttributeName; }
    inline bool LabelAttributeNameHasBeenSet() const { return m_labelAttributeNameHasBeenSet; }
    template<typename LabelAttributeNameT = Aws::String>
    void SetLabelAttributeName(LabelAttributeNameT&& value) { m_labelAttributeNameHasBeenSet = true; m_labelAttributeName = std::forward<LabelAttributeNameT>(value); }
    template<typename LabelAttributeNameT = Aws::String>
    CreateLabelingJobRequest& WithLabelAttributeName(LabelAttributeNameT&& value) { SetLabelAttributeName(std::forward<LabelAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p> <p>You must specify at least one of the following:
     * <code>S3DataSource</code> or <code>SnsDataSource</code>. </p> <ul> <li> <p>Use
     * <code>SnsDataSource</code> to specify an SNS input topic for a streaming
     * labeling job. If you do not specify and SNS input topic ARN, Ground Truth will
     * create a one-time labeling job that stops after all data objects in the input
     * manifest file have been labeled.</p> </li> <li> <p>Use <code>S3DataSource</code>
     * to specify an input manifest file for both streaming and one-time labeling jobs.
     * Adding an <code>S3DataSource</code> is optional if you use
     * <code>SnsDataSource</code> to create a streaming labeling job.</p> </li> </ul>
     * <p>If you use the Amazon Mechanical Turk workforce, your input data should not
     * include confidential information, personal information or protected health
     * information. Use <code>ContentClassifiers</code> to specify that your data is
     * free of personally identifiable information and adult content.</p>
     */
    inline const LabelingJobInputConfig& GetInputConfig() const { return m_inputConfig; }
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }
    template<typename InputConfigT = LabelingJobInputConfig>
    void SetInputConfig(InputConfigT&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::forward<InputConfigT>(value); }
    template<typename InputConfigT = LabelingJobInputConfig>
    CreateLabelingJobRequest& WithInputConfig(InputConfigT&& value) { SetInputConfig(std::forward<InputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the output data and the Amazon Web Services Key Management
     * Service key ID for the key used to encrypt the output data, if any.</p>
     */
    inline const LabelingJobOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
    template<typename OutputConfigT = LabelingJobOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = LabelingJobOutputConfig>
    CreateLabelingJobRequest& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateLabelingJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI of the file, referred to as a <i>label category configuration
     * file</i>, that defines the categories used to label the data objects.</p> <p>For
     * 3D point cloud and video frame task types, you can add label category attributes
     * and frame attributes to your label category configuration file. To learn how,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-label-category-config.html">Create
     * a Labeling Category Configuration File for 3D Point Cloud Labeling Jobs</a>.
     * </p> <p>For named entity recognition jobs, in addition to <code>"labels"</code>,
     * you must provide worker instructions in the label category configuration file
     * using the <code>"instructions"</code> parameter: <code>"instructions":
     * {"shortInstruction":"&lt;h1&gt;Add header&lt;/h1&gt;&lt;p&gt;Add
     * Instructions&lt;/p&gt;", "fullInstruction":"&lt;p&gt;Add additional
     * instructions.&lt;/p&gt;"}</code>. For details and an example, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-named-entity-recg.html#sms-creating-ner-api">Create
     * a Named Entity Recognition Labeling Job (API) </a>.</p> <p>For all other <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates.html">custom
     * tasks</a>, your label category configuration file must be a JSON file in the
     * following format. Identify the labels you want to use by replacing
     * <code>label_1</code>, <code>label_2</code>,<code>...</code>,<code>label_n</code>
     * with your label categories.</p> <p> <code>{ </code> </p> <p>
     * <code>"document-version": "2018-11-28",</code> </p> <p> <code>"labels":
     * [{"label": "label_1"},{"label": "label_2"},...{"label": "label_n"}]</code> </p>
     * <p> <code>}</code> </p> <p>Note the following about the label category
     * configuration file:</p> <ul> <li> <p>For image classification and text
     * classification (single and multi-label) you must specify at least two label
     * categories. For all other task types, the minimum number of label categories
     * required is one. </p> </li> <li> <p>Each label category must be unique, you
     * cannot specify duplicate label categories.</p> </li> <li> <p>If you create a 3D
     * point cloud or video frame adjustment or verification labeling job, you must
     * include <code>auditLabelAttributeName</code> in the label category
     * configuration. Use this parameter to enter the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateLabelingJob.html#sagemaker-CreateLabelingJob-request-LabelAttributeName">
     * <code>LabelAttributeName</code> </a> of the labeling job you want to adjust or
     * verify annotations of.</p> </li> </ul>
     */
    inline const Aws::String& GetLabelCategoryConfigS3Uri() const { return m_labelCategoryConfigS3Uri; }
    inline bool LabelCategoryConfigS3UriHasBeenSet() const { return m_labelCategoryConfigS3UriHasBeenSet; }
    template<typename LabelCategoryConfigS3UriT = Aws::String>
    void SetLabelCategoryConfigS3Uri(LabelCategoryConfigS3UriT&& value) { m_labelCategoryConfigS3UriHasBeenSet = true; m_labelCategoryConfigS3Uri = std::forward<LabelCategoryConfigS3UriT>(value); }
    template<typename LabelCategoryConfigS3UriT = Aws::String>
    CreateLabelingJobRequest& WithLabelCategoryConfigS3Uri(LabelCategoryConfigS3UriT&& value) { SetLabelCategoryConfigS3Uri(std::forward<LabelCategoryConfigS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline const LabelingJobStoppingConditions& GetStoppingConditions() const { return m_stoppingConditions; }
    inline bool StoppingConditionsHasBeenSet() const { return m_stoppingConditionsHasBeenSet; }
    template<typename StoppingConditionsT = LabelingJobStoppingConditions>
    void SetStoppingConditions(StoppingConditionsT&& value) { m_stoppingConditionsHasBeenSet = true; m_stoppingConditions = std::forward<StoppingConditionsT>(value); }
    template<typename StoppingConditionsT = LabelingJobStoppingConditions>
    CreateLabelingJobRequest& WithStoppingConditions(StoppingConditionsT&& value) { SetStoppingConditions(std::forward<StoppingConditionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline const LabelingJobAlgorithmsConfig& GetLabelingJobAlgorithmsConfig() const { return m_labelingJobAlgorithmsConfig; }
    inline bool LabelingJobAlgorithmsConfigHasBeenSet() const { return m_labelingJobAlgorithmsConfigHasBeenSet; }
    template<typename LabelingJobAlgorithmsConfigT = LabelingJobAlgorithmsConfig>
    void SetLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfigT&& value) { m_labelingJobAlgorithmsConfigHasBeenSet = true; m_labelingJobAlgorithmsConfig = std::forward<LabelingJobAlgorithmsConfigT>(value); }
    template<typename LabelingJobAlgorithmsConfigT = LabelingJobAlgorithmsConfig>
    CreateLabelingJobRequest& WithLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfigT&& value) { SetLabelingJobAlgorithmsConfig(std::forward<LabelingJobAlgorithmsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the labeling task and how it is presented to workers; including,
     * but not limited to price, keywords, and batch size (task count).</p>
     */
    inline const HumanTaskConfig& GetHumanTaskConfig() const { return m_humanTaskConfig; }
    inline bool HumanTaskConfigHasBeenSet() const { return m_humanTaskConfigHasBeenSet; }
    template<typename HumanTaskConfigT = HumanTaskConfig>
    void SetHumanTaskConfig(HumanTaskConfigT&& value) { m_humanTaskConfigHasBeenSet = true; m_humanTaskConfig = std::forward<HumanTaskConfigT>(value); }
    template<typename HumanTaskConfigT = HumanTaskConfig>
    CreateLabelingJobRequest& WithHumanTaskConfig(HumanTaskConfigT&& value) { SetHumanTaskConfig(std::forward<HumanTaskConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateLabelingJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateLabelingJobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_labelingJobName;
    bool m_labelingJobNameHasBeenSet = false;

    Aws::String m_labelAttributeName;
    bool m_labelAttributeNameHasBeenSet = false;

    LabelingJobInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;

    LabelingJobOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_labelCategoryConfigS3Uri;
    bool m_labelCategoryConfigS3UriHasBeenSet = false;

    LabelingJobStoppingConditions m_stoppingConditions;
    bool m_stoppingConditionsHasBeenSet = false;

    LabelingJobAlgorithmsConfig m_labelingJobAlgorithmsConfig;
    bool m_labelingJobAlgorithmsConfigHasBeenSet = false;

    HumanTaskConfig m_humanTaskConfig;
    bool m_humanTaskConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
