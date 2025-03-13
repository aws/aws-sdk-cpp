/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/LabelCountersForWorkteam.h>
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
   * <p>Provides summary information for a work team.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/LabelingJobForWorkteamSummary">AWS
   * API Reference</a></p>
   */
  class LabelingJobForWorkteamSummary
  {
  public:
    AWS_SAGEMAKER_API LabelingJobForWorkteamSummary() = default;
    AWS_SAGEMAKER_API LabelingJobForWorkteamSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobForWorkteamSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the labeling job that the work team is assigned to.</p>
     */
    inline const Aws::String& GetLabelingJobName() const { return m_labelingJobName; }
    inline bool LabelingJobNameHasBeenSet() const { return m_labelingJobNameHasBeenSet; }
    template<typename LabelingJobNameT = Aws::String>
    void SetLabelingJobName(LabelingJobNameT&& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = std::forward<LabelingJobNameT>(value); }
    template<typename LabelingJobNameT = Aws::String>
    LabelingJobForWorkteamSummary& WithLabelingJobName(LabelingJobNameT&& value) { SetLabelingJobName(std::forward<LabelingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for a labeling job. You can use this to refer to a
     * specific labeling job.</p>
     */
    inline const Aws::String& GetJobReferenceCode() const { return m_jobReferenceCode; }
    inline bool JobReferenceCodeHasBeenSet() const { return m_jobReferenceCodeHasBeenSet; }
    template<typename JobReferenceCodeT = Aws::String>
    void SetJobReferenceCode(JobReferenceCodeT&& value) { m_jobReferenceCodeHasBeenSet = true; m_jobReferenceCode = std::forward<JobReferenceCodeT>(value); }
    template<typename JobReferenceCodeT = Aws::String>
    LabelingJobForWorkteamSummary& WithJobReferenceCode(JobReferenceCodeT&& value) { SetJobReferenceCode(std::forward<JobReferenceCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the account used to start the labeling
     * job.</p>
     */
    inline const Aws::String& GetWorkRequesterAccountId() const { return m_workRequesterAccountId; }
    inline bool WorkRequesterAccountIdHasBeenSet() const { return m_workRequesterAccountIdHasBeenSet; }
    template<typename WorkRequesterAccountIdT = Aws::String>
    void SetWorkRequesterAccountId(WorkRequesterAccountIdT&& value) { m_workRequesterAccountIdHasBeenSet = true; m_workRequesterAccountId = std::forward<WorkRequesterAccountIdT>(value); }
    template<typename WorkRequesterAccountIdT = Aws::String>
    LabelingJobForWorkteamSummary& WithWorkRequesterAccountId(WorkRequesterAccountIdT&& value) { SetWorkRequesterAccountId(std::forward<WorkRequesterAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    LabelingJobForWorkteamSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the progress of a labeling job.</p>
     */
    inline const LabelCountersForWorkteam& GetLabelCounters() const { return m_labelCounters; }
    inline bool LabelCountersHasBeenSet() const { return m_labelCountersHasBeenSet; }
    template<typename LabelCountersT = LabelCountersForWorkteam>
    void SetLabelCounters(LabelCountersT&& value) { m_labelCountersHasBeenSet = true; m_labelCounters = std::forward<LabelCountersT>(value); }
    template<typename LabelCountersT = LabelCountersForWorkteam>
    LabelingJobForWorkteamSummary& WithLabelCounters(LabelCountersT&& value) { SetLabelCounters(std::forward<LabelCountersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured number of workers per data object.</p>
     */
    inline int GetNumberOfHumanWorkersPerDataObject() const { return m_numberOfHumanWorkersPerDataObject; }
    inline bool NumberOfHumanWorkersPerDataObjectHasBeenSet() const { return m_numberOfHumanWorkersPerDataObjectHasBeenSet; }
    inline void SetNumberOfHumanWorkersPerDataObject(int value) { m_numberOfHumanWorkersPerDataObjectHasBeenSet = true; m_numberOfHumanWorkersPerDataObject = value; }
    inline LabelingJobForWorkteamSummary& WithNumberOfHumanWorkersPerDataObject(int value) { SetNumberOfHumanWorkersPerDataObject(value); return *this;}
    ///@}
  private:

    Aws::String m_labelingJobName;
    bool m_labelingJobNameHasBeenSet = false;

    Aws::String m_jobReferenceCode;
    bool m_jobReferenceCodeHasBeenSet = false;

    Aws::String m_workRequesterAccountId;
    bool m_workRequesterAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    LabelCountersForWorkteam m_labelCounters;
    bool m_labelCountersHasBeenSet = false;

    int m_numberOfHumanWorkersPerDataObject{0};
    bool m_numberOfHumanWorkersPerDataObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
