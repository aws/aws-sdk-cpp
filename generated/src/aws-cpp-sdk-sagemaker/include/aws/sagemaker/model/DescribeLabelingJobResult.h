/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/LabelingJobStatus.h>
#include <aws/sagemaker/model/LabelCounters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/LabelingJobInputConfig.h>
#include <aws/sagemaker/model/LabelingJobOutputConfig.h>
#include <aws/sagemaker/model/LabelingJobStoppingConditions.h>
#include <aws/sagemaker/model/LabelingJobAlgorithmsConfig.h>
#include <aws/sagemaker/model/HumanTaskConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/LabelingJobOutput.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeLabelingJobResult
  {
  public:
    AWS_SAGEMAKER_API DescribeLabelingJobResult() = default;
    AWS_SAGEMAKER_API DescribeLabelingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeLabelingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The processing status of the labeling job. </p>
     */
    inline LabelingJobStatus GetLabelingJobStatus() const { return m_labelingJobStatus; }
    inline void SetLabelingJobStatus(LabelingJobStatus value) { m_labelingJobStatusHasBeenSet = true; m_labelingJobStatus = value; }
    inline DescribeLabelingJobResult& WithLabelingJobStatus(LabelingJobStatus value) { SetLabelingJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a breakdown of the number of data objects labeled by humans, the
     * number of objects labeled by machine, the number of objects than couldn't be
     * labeled, and the total number of objects labeled. </p>
     */
    inline const LabelCounters& GetLabelCounters() const { return m_labelCounters; }
    template<typename LabelCountersT = LabelCounters>
    void SetLabelCounters(LabelCountersT&& value) { m_labelCountersHasBeenSet = true; m_labelCounters = std::forward<LabelCountersT>(value); }
    template<typename LabelCountersT = LabelCounters>
    DescribeLabelingJobResult& WithLabelCounters(LabelCountersT&& value) { SetLabelCounters(std::forward<LabelCountersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job failed, the reason that it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeLabelingJobResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeLabelingJobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the labeling job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeLabelingJobResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for work done as part of a labeling job.</p>
     */
    inline const Aws::String& GetJobReferenceCode() const { return m_jobReferenceCode; }
    template<typename JobReferenceCodeT = Aws::String>
    void SetJobReferenceCode(JobReferenceCodeT&& value) { m_jobReferenceCodeHasBeenSet = true; m_jobReferenceCode = std::forward<JobReferenceCodeT>(value); }
    template<typename JobReferenceCodeT = Aws::String>
    DescribeLabelingJobResult& WithJobReferenceCode(JobReferenceCodeT&& value) { SetJobReferenceCode(std::forward<JobReferenceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name assigned to the labeling job when it was created.</p>
     */
    inline const Aws::String& GetLabelingJobName() const { return m_labelingJobName; }
    template<typename LabelingJobNameT = Aws::String>
    void SetLabelingJobName(LabelingJobNameT&& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = std::forward<LabelingJobNameT>(value); }
    template<typename LabelingJobNameT = Aws::String>
    DescribeLabelingJobResult& WithLabelingJobName(LabelingJobNameT&& value) { SetLabelingJobName(std::forward<LabelingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const { return m_labelingJobArn; }
    template<typename LabelingJobArnT = Aws::String>
    void SetLabelingJobArn(LabelingJobArnT&& value) { m_labelingJobArnHasBeenSet = true; m_labelingJobArn = std::forward<LabelingJobArnT>(value); }
    template<typename LabelingJobArnT = Aws::String>
    DescribeLabelingJobResult& WithLabelingJobArn(LabelingJobArnT&& value) { SetLabelingJobArn(std::forward<LabelingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute used as the label in the output manifest file.</p>
     */
    inline const Aws::String& GetLabelAttributeName() const { return m_labelAttributeName; }
    template<typename LabelAttributeNameT = Aws::String>
    void SetLabelAttributeName(LabelAttributeNameT&& value) { m_labelAttributeNameHasBeenSet = true; m_labelAttributeName = std::forward<LabelAttributeNameT>(value); }
    template<typename LabelAttributeNameT = Aws::String>
    DescribeLabelingJobResult& WithLabelAttributeName(LabelAttributeNameT&& value) { SetLabelAttributeName(std::forward<LabelAttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input configuration information for the labeling job, such as the Amazon S3
     * location of the data objects and the location of the manifest file that
     * describes the data objects.</p>
     */
    inline const LabelingJobInputConfig& GetInputConfig() const { return m_inputConfig; }
    template<typename InputConfigT = LabelingJobInputConfig>
    void SetInputConfig(InputConfigT&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::forward<InputConfigT>(value); }
    template<typename InputConfigT = LabelingJobInputConfig>
    DescribeLabelingJobResult& WithInputConfig(InputConfigT&& value) { SetInputConfig(std::forward<InputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the job's output data and the Amazon Web Services Key
     * Management Service key ID for the key used to encrypt the output data, if
     * any.</p>
     */
    inline const LabelingJobOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = LabelingJobOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = LabelingJobOutputConfig>
    DescribeLabelingJobResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that SageMaker assumes to perform tasks on
     * your behalf during data labeling.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribeLabelingJobResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 location of the JSON file that defines the categories used to label
     * data objects. Please note the following label-category limits:</p> <ul> <li>
     * <p>Semantic segmentation labeling jobs using automated labeling: 20 labels</p>
     * </li> <li> <p>Box bounding labeling jobs (all): 10 labels</p> </li> </ul> <p>The
     * file is a JSON structure in the following format:</p> <p> <code>{</code> </p>
     * <p> <code> "document-version": "2018-11-28"</code> </p> <p> <code> "labels":
     * [</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * 1</i>"</code> </p> <p> <code> },</code> </p> <p> <code> {</code> </p> <p> <code>
     * "label": "<i>label 2</i>"</code> </p> <p> <code> },</code> </p> <p> <code>
     * ...</code> </p> <p> <code> {</code> </p> <p> <code> "label": "<i>label
     * n</i>"</code> </p> <p> <code> }</code> </p> <p> <code> ]</code> </p> <p>
     * <code>}</code> </p>
     */
    inline const Aws::String& GetLabelCategoryConfigS3Uri() const { return m_labelCategoryConfigS3Uri; }
    template<typename LabelCategoryConfigS3UriT = Aws::String>
    void SetLabelCategoryConfigS3Uri(LabelCategoryConfigS3UriT&& value) { m_labelCategoryConfigS3UriHasBeenSet = true; m_labelCategoryConfigS3Uri = std::forward<LabelCategoryConfigS3UriT>(value); }
    template<typename LabelCategoryConfigS3UriT = Aws::String>
    DescribeLabelingJobResult& WithLabelCategoryConfigS3Uri(LabelCategoryConfigS3UriT&& value) { SetLabelCategoryConfigS3Uri(std::forward<LabelCategoryConfigS3UriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of conditions for stopping a labeling job. If any of the conditions are
     * met, the job is automatically stopped.</p>
     */
    inline const LabelingJobStoppingConditions& GetStoppingConditions() const { return m_stoppingConditions; }
    template<typename StoppingConditionsT = LabelingJobStoppingConditions>
    void SetStoppingConditions(StoppingConditionsT&& value) { m_stoppingConditionsHasBeenSet = true; m_stoppingConditions = std::forward<StoppingConditionsT>(value); }
    template<typename StoppingConditionsT = LabelingJobStoppingConditions>
    DescribeLabelingJobResult& WithStoppingConditions(StoppingConditionsT&& value) { SetStoppingConditions(std::forward<StoppingConditionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for automated data labeling.</p>
     */
    inline const LabelingJobAlgorithmsConfig& GetLabelingJobAlgorithmsConfig() const { return m_labelingJobAlgorithmsConfig; }
    template<typename LabelingJobAlgorithmsConfigT = LabelingJobAlgorithmsConfig>
    void SetLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfigT&& value) { m_labelingJobAlgorithmsConfigHasBeenSet = true; m_labelingJobAlgorithmsConfig = std::forward<LabelingJobAlgorithmsConfigT>(value); }
    template<typename LabelingJobAlgorithmsConfigT = LabelingJobAlgorithmsConfig>
    DescribeLabelingJobResult& WithLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfigT&& value) { SetLabelingJobAlgorithmsConfig(std::forward<LabelingJobAlgorithmsConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information required for human workers to complete a labeling
     * task.</p>
     */
    inline const HumanTaskConfig& GetHumanTaskConfig() const { return m_humanTaskConfig; }
    template<typename HumanTaskConfigT = HumanTaskConfig>
    void SetHumanTaskConfig(HumanTaskConfigT&& value) { m_humanTaskConfigHasBeenSet = true; m_humanTaskConfig = std::forward<HumanTaskConfigT>(value); }
    template<typename HumanTaskConfigT = HumanTaskConfig>
    DescribeLabelingJobResult& WithHumanTaskConfig(HumanTaskConfigT&& value) { SetHumanTaskConfig(std::forward<HumanTaskConfigT>(value)); return *this;}
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
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DescribeLabelingJobResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DescribeLabelingJobResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline const LabelingJobOutput& GetLabelingJobOutput() const { return m_labelingJobOutput; }
    template<typename LabelingJobOutputT = LabelingJobOutput>
    void SetLabelingJobOutput(LabelingJobOutputT&& value) { m_labelingJobOutputHasBeenSet = true; m_labelingJobOutput = std::forward<LabelingJobOutputT>(value); }
    template<typename LabelingJobOutputT = LabelingJobOutput>
    DescribeLabelingJobResult& WithLabelingJobOutput(LabelingJobOutputT&& value) { SetLabelingJobOutput(std::forward<LabelingJobOutputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLabelingJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LabelingJobStatus m_labelingJobStatus{LabelingJobStatus::NOT_SET};
    bool m_labelingJobStatusHasBeenSet = false;

    LabelCounters m_labelCounters;
    bool m_labelCountersHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_jobReferenceCode;
    bool m_jobReferenceCodeHasBeenSet = false;

    Aws::String m_labelingJobName;
    bool m_labelingJobNameHasBeenSet = false;

    Aws::String m_labelingJobArn;
    bool m_labelingJobArnHasBeenSet = false;

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

    LabelingJobOutput m_labelingJobOutput;
    bool m_labelingJobOutputHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
