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
    AWS_SAGEMAKER_API DescribeLabelingJobResult();
    AWS_SAGEMAKER_API DescribeLabelingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeLabelingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The processing status of the labeling job. </p>
     */
    inline const LabelingJobStatus& GetLabelingJobStatus() const{ return m_labelingJobStatus; }
    inline void SetLabelingJobStatus(const LabelingJobStatus& value) { m_labelingJobStatus = value; }
    inline void SetLabelingJobStatus(LabelingJobStatus&& value) { m_labelingJobStatus = std::move(value); }
    inline DescribeLabelingJobResult& WithLabelingJobStatus(const LabelingJobStatus& value) { SetLabelingJobStatus(value); return *this;}
    inline DescribeLabelingJobResult& WithLabelingJobStatus(LabelingJobStatus&& value) { SetLabelingJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides a breakdown of the number of data objects labeled by humans, the
     * number of objects labeled by machine, the number of objects than couldn't be
     * labeled, and the total number of objects labeled. </p>
     */
    inline const LabelCounters& GetLabelCounters() const{ return m_labelCounters; }
    inline void SetLabelCounters(const LabelCounters& value) { m_labelCounters = value; }
    inline void SetLabelCounters(LabelCounters&& value) { m_labelCounters = std::move(value); }
    inline DescribeLabelingJobResult& WithLabelCounters(const LabelCounters& value) { SetLabelCounters(value); return *this;}
    inline DescribeLabelingJobResult& WithLabelCounters(LabelCounters&& value) { SetLabelCounters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the job failed, the reason that it failed. </p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeLabelingJobResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeLabelingJobResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeLabelingJobResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeLabelingJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeLabelingJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the labeling job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeLabelingJobResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeLabelingJobResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for work done as part of a labeling job.</p>
     */
    inline const Aws::String& GetJobReferenceCode() const{ return m_jobReferenceCode; }
    inline void SetJobReferenceCode(const Aws::String& value) { m_jobReferenceCode = value; }
    inline void SetJobReferenceCode(Aws::String&& value) { m_jobReferenceCode = std::move(value); }
    inline void SetJobReferenceCode(const char* value) { m_jobReferenceCode.assign(value); }
    inline DescribeLabelingJobResult& WithJobReferenceCode(const Aws::String& value) { SetJobReferenceCode(value); return *this;}
    inline DescribeLabelingJobResult& WithJobReferenceCode(Aws::String&& value) { SetJobReferenceCode(std::move(value)); return *this;}
    inline DescribeLabelingJobResult& WithJobReferenceCode(const char* value) { SetJobReferenceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name assigned to the labeling job when it was created.</p>
     */
    inline const Aws::String& GetLabelingJobName() const{ return m_labelingJobName; }
    inline void SetLabelingJobName(const Aws::String& value) { m_labelingJobName = value; }
    inline void SetLabelingJobName(Aws::String&& value) { m_labelingJobName = std::move(value); }
    inline void SetLabelingJobName(const char* value) { m_labelingJobName.assign(value); }
    inline DescribeLabelingJobResult& WithLabelingJobName(const Aws::String& value) { SetLabelingJobName(value); return *this;}
    inline DescribeLabelingJobResult& WithLabelingJobName(Aws::String&& value) { SetLabelingJobName(std::move(value)); return *this;}
    inline DescribeLabelingJobResult& WithLabelingJobName(const char* value) { SetLabelingJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the labeling job.</p>
     */
    inline const Aws::String& GetLabelingJobArn() const{ return m_labelingJobArn; }
    inline void SetLabelingJobArn(const Aws::String& value) { m_labelingJobArn = value; }
    inline void SetLabelingJobArn(Aws::String&& value) { m_labelingJobArn = std::move(value); }
    inline void SetLabelingJobArn(const char* value) { m_labelingJobArn.assign(value); }
    inline DescribeLabelingJobResult& WithLabelingJobArn(const Aws::String& value) { SetLabelingJobArn(value); return *this;}
    inline DescribeLabelingJobResult& WithLabelingJobArn(Aws::String&& value) { SetLabelingJobArn(std::move(value)); return *this;}
    inline DescribeLabelingJobResult& WithLabelingJobArn(const char* value) { SetLabelingJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute used as the label in the output manifest file.</p>
     */
    inline const Aws::String& GetLabelAttributeName() const{ return m_labelAttributeName; }
    inline void SetLabelAttributeName(const Aws::String& value) { m_labelAttributeName = value; }
    inline void SetLabelAttributeName(Aws::String&& value) { m_labelAttributeName = std::move(value); }
    inline void SetLabelAttributeName(const char* value) { m_labelAttributeName.assign(value); }
    inline DescribeLabelingJobResult& WithLabelAttributeName(const Aws::String& value) { SetLabelAttributeName(value); return *this;}
    inline DescribeLabelingJobResult& WithLabelAttributeName(Aws::String&& value) { SetLabelAttributeName(std::move(value)); return *this;}
    inline DescribeLabelingJobResult& WithLabelAttributeName(const char* value) { SetLabelAttributeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input configuration information for the labeling job, such as the Amazon S3
     * location of the data objects and the location of the manifest file that
     * describes the data objects.</p>
     */
    inline const LabelingJobInputConfig& GetInputConfig() const{ return m_inputConfig; }
    inline void SetInputConfig(const LabelingJobInputConfig& value) { m_inputConfig = value; }
    inline void SetInputConfig(LabelingJobInputConfig&& value) { m_inputConfig = std::move(value); }
    inline DescribeLabelingJobResult& WithInputConfig(const LabelingJobInputConfig& value) { SetInputConfig(value); return *this;}
    inline DescribeLabelingJobResult& WithInputConfig(LabelingJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the job's output data and the Amazon Web Services Key
     * Management Service key ID for the key used to encrypt the output data, if
     * any.</p>
     */
    inline const LabelingJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline void SetOutputConfig(const LabelingJobOutputConfig& value) { m_outputConfig = value; }
    inline void SetOutputConfig(LabelingJobOutputConfig&& value) { m_outputConfig = std::move(value); }
    inline DescribeLabelingJobResult& WithOutputConfig(const LabelingJobOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline DescribeLabelingJobResult& WithOutputConfig(LabelingJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that SageMaker assumes to perform tasks on
     * your behalf during data labeling.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeLabelingJobResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeLabelingJobResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeLabelingJobResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline const Aws::String& GetLabelCategoryConfigS3Uri() const{ return m_labelCategoryConfigS3Uri; }
    inline void SetLabelCategoryConfigS3Uri(const Aws::String& value) { m_labelCategoryConfigS3Uri = value; }
    inline void SetLabelCategoryConfigS3Uri(Aws::String&& value) { m_labelCategoryConfigS3Uri = std::move(value); }
    inline void SetLabelCategoryConfigS3Uri(const char* value) { m_labelCategoryConfigS3Uri.assign(value); }
    inline DescribeLabelingJobResult& WithLabelCategoryConfigS3Uri(const Aws::String& value) { SetLabelCategoryConfigS3Uri(value); return *this;}
    inline DescribeLabelingJobResult& WithLabelCategoryConfigS3Uri(Aws::String&& value) { SetLabelCategoryConfigS3Uri(std::move(value)); return *this;}
    inline DescribeLabelingJobResult& WithLabelCategoryConfigS3Uri(const char* value) { SetLabelCategoryConfigS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of conditions for stopping a labeling job. If any of the conditions are
     * met, the job is automatically stopped.</p>
     */
    inline const LabelingJobStoppingConditions& GetStoppingConditions() const{ return m_stoppingConditions; }
    inline void SetStoppingConditions(const LabelingJobStoppingConditions& value) { m_stoppingConditions = value; }
    inline void SetStoppingConditions(LabelingJobStoppingConditions&& value) { m_stoppingConditions = std::move(value); }
    inline DescribeLabelingJobResult& WithStoppingConditions(const LabelingJobStoppingConditions& value) { SetStoppingConditions(value); return *this;}
    inline DescribeLabelingJobResult& WithStoppingConditions(LabelingJobStoppingConditions&& value) { SetStoppingConditions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for automated data labeling.</p>
     */
    inline const LabelingJobAlgorithmsConfig& GetLabelingJobAlgorithmsConfig() const{ return m_labelingJobAlgorithmsConfig; }
    inline void SetLabelingJobAlgorithmsConfig(const LabelingJobAlgorithmsConfig& value) { m_labelingJobAlgorithmsConfig = value; }
    inline void SetLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfig&& value) { m_labelingJobAlgorithmsConfig = std::move(value); }
    inline DescribeLabelingJobResult& WithLabelingJobAlgorithmsConfig(const LabelingJobAlgorithmsConfig& value) { SetLabelingJobAlgorithmsConfig(value); return *this;}
    inline DescribeLabelingJobResult& WithLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfig&& value) { SetLabelingJobAlgorithmsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information required for human workers to complete a labeling
     * task.</p>
     */
    inline const HumanTaskConfig& GetHumanTaskConfig() const{ return m_humanTaskConfig; }
    inline void SetHumanTaskConfig(const HumanTaskConfig& value) { m_humanTaskConfig = value; }
    inline void SetHumanTaskConfig(HumanTaskConfig&& value) { m_humanTaskConfig = std::move(value); }
    inline DescribeLabelingJobResult& WithHumanTaskConfig(const HumanTaskConfig& value) { SetHumanTaskConfig(value); return *this;}
    inline DescribeLabelingJobResult& WithHumanTaskConfig(HumanTaskConfig&& value) { SetHumanTaskConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline DescribeLabelingJobResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DescribeLabelingJobResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeLabelingJobResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline DescribeLabelingJobResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The location of the output produced by the labeling job.</p>
     */
    inline const LabelingJobOutput& GetLabelingJobOutput() const{ return m_labelingJobOutput; }
    inline void SetLabelingJobOutput(const LabelingJobOutput& value) { m_labelingJobOutput = value; }
    inline void SetLabelingJobOutput(LabelingJobOutput&& value) { m_labelingJobOutput = std::move(value); }
    inline DescribeLabelingJobResult& WithLabelingJobOutput(const LabelingJobOutput& value) { SetLabelingJobOutput(value); return *this;}
    inline DescribeLabelingJobResult& WithLabelingJobOutput(LabelingJobOutput&& value) { SetLabelingJobOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLabelingJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLabelingJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLabelingJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    LabelingJobStatus m_labelingJobStatus;

    LabelCounters m_labelCounters;

    Aws::String m_failureReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_jobReferenceCode;

    Aws::String m_labelingJobName;

    Aws::String m_labelingJobArn;

    Aws::String m_labelAttributeName;

    LabelingJobInputConfig m_inputConfig;

    LabelingJobOutputConfig m_outputConfig;

    Aws::String m_roleArn;

    Aws::String m_labelCategoryConfigS3Uri;

    LabelingJobStoppingConditions m_stoppingConditions;

    LabelingJobAlgorithmsConfig m_labelingJobAlgorithmsConfig;

    HumanTaskConfig m_humanTaskConfig;

    Aws::Vector<Tag> m_tags;

    LabelingJobOutput m_labelingJobOutput;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
