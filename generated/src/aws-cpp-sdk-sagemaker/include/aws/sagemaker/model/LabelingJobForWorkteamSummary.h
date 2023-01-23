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
    AWS_SAGEMAKER_API LabelingJobForWorkteamSummary();
    AWS_SAGEMAKER_API LabelingJobForWorkteamSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API LabelingJobForWorkteamSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the labeling job that the work team is assigned to.</p>
     */
    inline const Aws::String& GetLabelingJobName() const{ return m_labelingJobName; }

    /**
     * <p>The name of the labeling job that the work team is assigned to.</p>
     */
    inline bool LabelingJobNameHasBeenSet() const { return m_labelingJobNameHasBeenSet; }

    /**
     * <p>The name of the labeling job that the work team is assigned to.</p>
     */
    inline void SetLabelingJobName(const Aws::String& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = value; }

    /**
     * <p>The name of the labeling job that the work team is assigned to.</p>
     */
    inline void SetLabelingJobName(Aws::String&& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = std::move(value); }

    /**
     * <p>The name of the labeling job that the work team is assigned to.</p>
     */
    inline void SetLabelingJobName(const char* value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName.assign(value); }

    /**
     * <p>The name of the labeling job that the work team is assigned to.</p>
     */
    inline LabelingJobForWorkteamSummary& WithLabelingJobName(const Aws::String& value) { SetLabelingJobName(value); return *this;}

    /**
     * <p>The name of the labeling job that the work team is assigned to.</p>
     */
    inline LabelingJobForWorkteamSummary& WithLabelingJobName(Aws::String&& value) { SetLabelingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the labeling job that the work team is assigned to.</p>
     */
    inline LabelingJobForWorkteamSummary& WithLabelingJobName(const char* value) { SetLabelingJobName(value); return *this;}


    /**
     * <p>A unique identifier for a labeling job. You can use this to refer to a
     * specific labeling job.</p>
     */
    inline const Aws::String& GetJobReferenceCode() const{ return m_jobReferenceCode; }

    /**
     * <p>A unique identifier for a labeling job. You can use this to refer to a
     * specific labeling job.</p>
     */
    inline bool JobReferenceCodeHasBeenSet() const { return m_jobReferenceCodeHasBeenSet; }

    /**
     * <p>A unique identifier for a labeling job. You can use this to refer to a
     * specific labeling job.</p>
     */
    inline void SetJobReferenceCode(const Aws::String& value) { m_jobReferenceCodeHasBeenSet = true; m_jobReferenceCode = value; }

    /**
     * <p>A unique identifier for a labeling job. You can use this to refer to a
     * specific labeling job.</p>
     */
    inline void SetJobReferenceCode(Aws::String&& value) { m_jobReferenceCodeHasBeenSet = true; m_jobReferenceCode = std::move(value); }

    /**
     * <p>A unique identifier for a labeling job. You can use this to refer to a
     * specific labeling job.</p>
     */
    inline void SetJobReferenceCode(const char* value) { m_jobReferenceCodeHasBeenSet = true; m_jobReferenceCode.assign(value); }

    /**
     * <p>A unique identifier for a labeling job. You can use this to refer to a
     * specific labeling job.</p>
     */
    inline LabelingJobForWorkteamSummary& WithJobReferenceCode(const Aws::String& value) { SetJobReferenceCode(value); return *this;}

    /**
     * <p>A unique identifier for a labeling job. You can use this to refer to a
     * specific labeling job.</p>
     */
    inline LabelingJobForWorkteamSummary& WithJobReferenceCode(Aws::String&& value) { SetJobReferenceCode(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a labeling job. You can use this to refer to a
     * specific labeling job.</p>
     */
    inline LabelingJobForWorkteamSummary& WithJobReferenceCode(const char* value) { SetJobReferenceCode(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the account used to start the labeling
     * job.</p>
     */
    inline const Aws::String& GetWorkRequesterAccountId() const{ return m_workRequesterAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the account used to start the labeling
     * job.</p>
     */
    inline bool WorkRequesterAccountIdHasBeenSet() const { return m_workRequesterAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the account used to start the labeling
     * job.</p>
     */
    inline void SetWorkRequesterAccountId(const Aws::String& value) { m_workRequesterAccountIdHasBeenSet = true; m_workRequesterAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the account used to start the labeling
     * job.</p>
     */
    inline void SetWorkRequesterAccountId(Aws::String&& value) { m_workRequesterAccountIdHasBeenSet = true; m_workRequesterAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the account used to start the labeling
     * job.</p>
     */
    inline void SetWorkRequesterAccountId(const char* value) { m_workRequesterAccountIdHasBeenSet = true; m_workRequesterAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the account used to start the labeling
     * job.</p>
     */
    inline LabelingJobForWorkteamSummary& WithWorkRequesterAccountId(const Aws::String& value) { SetWorkRequesterAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account used to start the labeling
     * job.</p>
     */
    inline LabelingJobForWorkteamSummary& WithWorkRequesterAccountId(Aws::String&& value) { SetWorkRequesterAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account used to start the labeling
     * job.</p>
     */
    inline LabelingJobForWorkteamSummary& WithWorkRequesterAccountId(const char* value) { SetWorkRequesterAccountId(value); return *this;}


    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline LabelingJobForWorkteamSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the labeling job was created.</p>
     */
    inline LabelingJobForWorkteamSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Provides information about the progress of a labeling job.</p>
     */
    inline const LabelCountersForWorkteam& GetLabelCounters() const{ return m_labelCounters; }

    /**
     * <p>Provides information about the progress of a labeling job.</p>
     */
    inline bool LabelCountersHasBeenSet() const { return m_labelCountersHasBeenSet; }

    /**
     * <p>Provides information about the progress of a labeling job.</p>
     */
    inline void SetLabelCounters(const LabelCountersForWorkteam& value) { m_labelCountersHasBeenSet = true; m_labelCounters = value; }

    /**
     * <p>Provides information about the progress of a labeling job.</p>
     */
    inline void SetLabelCounters(LabelCountersForWorkteam&& value) { m_labelCountersHasBeenSet = true; m_labelCounters = std::move(value); }

    /**
     * <p>Provides information about the progress of a labeling job.</p>
     */
    inline LabelingJobForWorkteamSummary& WithLabelCounters(const LabelCountersForWorkteam& value) { SetLabelCounters(value); return *this;}

    /**
     * <p>Provides information about the progress of a labeling job.</p>
     */
    inline LabelingJobForWorkteamSummary& WithLabelCounters(LabelCountersForWorkteam&& value) { SetLabelCounters(std::move(value)); return *this;}


    /**
     * <p>The configured number of workers per data object.</p>
     */
    inline int GetNumberOfHumanWorkersPerDataObject() const{ return m_numberOfHumanWorkersPerDataObject; }

    /**
     * <p>The configured number of workers per data object.</p>
     */
    inline bool NumberOfHumanWorkersPerDataObjectHasBeenSet() const { return m_numberOfHumanWorkersPerDataObjectHasBeenSet; }

    /**
     * <p>The configured number of workers per data object.</p>
     */
    inline void SetNumberOfHumanWorkersPerDataObject(int value) { m_numberOfHumanWorkersPerDataObjectHasBeenSet = true; m_numberOfHumanWorkersPerDataObject = value; }

    /**
     * <p>The configured number of workers per data object.</p>
     */
    inline LabelingJobForWorkteamSummary& WithNumberOfHumanWorkersPerDataObject(int value) { SetNumberOfHumanWorkersPerDataObject(value); return *this;}

  private:

    Aws::String m_labelingJobName;
    bool m_labelingJobNameHasBeenSet = false;

    Aws::String m_jobReferenceCode;
    bool m_jobReferenceCodeHasBeenSet = false;

    Aws::String m_workRequesterAccountId;
    bool m_workRequesterAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    LabelCountersForWorkteam m_labelCounters;
    bool m_labelCountersHasBeenSet = false;

    int m_numberOfHumanWorkersPerDataObject;
    bool m_numberOfHumanWorkersPerDataObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
