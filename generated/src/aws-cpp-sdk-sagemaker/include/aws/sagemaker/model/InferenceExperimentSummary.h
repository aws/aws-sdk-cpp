/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceExperimentType.h>
#include <aws/sagemaker/model/InferenceExperimentSchedule.h>
#include <aws/sagemaker/model/InferenceExperimentStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Lists a summary of properties of an inference experiment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceExperimentSummary">AWS
   * API Reference</a></p>
   */
  class InferenceExperimentSummary
  {
  public:
    AWS_SAGEMAKER_API InferenceExperimentSummary() = default;
    AWS_SAGEMAKER_API InferenceExperimentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceExperimentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the inference experiment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    InferenceExperimentSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the inference experiment.</p>
     */
    inline InferenceExperimentType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(InferenceExperimentType value) { m_typeHasBeenSet = true; m_type = value; }
    inline InferenceExperimentSummary& WithType(InferenceExperimentType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration for which the inference experiment ran or will run.</p> <p>The
     * maximum duration that you can set for an inference experiment is 30 days.</p>
     */
    inline const InferenceExperimentSchedule& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = InferenceExperimentSchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = InferenceExperimentSchedule>
    InferenceExperimentSummary& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the inference experiment.</p>
     */
    inline InferenceExperimentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(InferenceExperimentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline InferenceExperimentSummary& WithStatus(InferenceExperimentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message for the inference experiment status result.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    InferenceExperimentSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the inference experiment.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    InferenceExperimentSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the inference experiment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    InferenceExperimentSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the inference experiment was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    InferenceExperimentSummary& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when you last modified the inference experiment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    InferenceExperimentSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the IAM role that Amazon SageMaker can assume to access model
     * artifacts and container images, and manage Amazon SageMaker Inference endpoints
     * for model deployment. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    InferenceExperimentSummary& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    InferenceExperimentType m_type{InferenceExperimentType::NOT_SET};
    bool m_typeHasBeenSet = false;

    InferenceExperimentSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    InferenceExperimentStatus m_status{InferenceExperimentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
