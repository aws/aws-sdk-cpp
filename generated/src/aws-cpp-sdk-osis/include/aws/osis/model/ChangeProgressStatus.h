﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/osis/model/ChangeProgressStatuses.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/osis/model/ChangeProgressStage.h>
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
namespace OSIS
{
namespace Model
{

  /**
   * <p>The progress details of a pipeline configuration change.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/osis-2022-01-01/ChangeProgressStatus">AWS
   * API Reference</a></p>
   */
  class ChangeProgressStatus
  {
  public:
    AWS_OSIS_API ChangeProgressStatus();
    AWS_OSIS_API ChangeProgressStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API ChangeProgressStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OSIS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the configuration change is made on the pipeline.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ChangeProgressStatus& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ChangeProgressStatus& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the pipeline configuration change.</p>
     */
    inline const ChangeProgressStatuses& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ChangeProgressStatuses& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ChangeProgressStatuses&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ChangeProgressStatus& WithStatus(const ChangeProgressStatuses& value) { SetStatus(value); return *this;}
    inline ChangeProgressStatus& WithStatus(ChangeProgressStatuses&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of stages required for the pipeline configuration
     * change.</p>
     */
    inline int GetTotalNumberOfStages() const{ return m_totalNumberOfStages; }
    inline bool TotalNumberOfStagesHasBeenSet() const { return m_totalNumberOfStagesHasBeenSet; }
    inline void SetTotalNumberOfStages(int value) { m_totalNumberOfStagesHasBeenSet = true; m_totalNumberOfStages = value; }
    inline ChangeProgressStatus& WithTotalNumberOfStages(int value) { SetTotalNumberOfStages(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the stages that the pipeline is going through to perform
     * the configuration change.</p>
     */
    inline const Aws::Vector<ChangeProgressStage>& GetChangeProgressStages() const{ return m_changeProgressStages; }
    inline bool ChangeProgressStagesHasBeenSet() const { return m_changeProgressStagesHasBeenSet; }
    inline void SetChangeProgressStages(const Aws::Vector<ChangeProgressStage>& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages = value; }
    inline void SetChangeProgressStages(Aws::Vector<ChangeProgressStage>&& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages = std::move(value); }
    inline ChangeProgressStatus& WithChangeProgressStages(const Aws::Vector<ChangeProgressStage>& value) { SetChangeProgressStages(value); return *this;}
    inline ChangeProgressStatus& WithChangeProgressStages(Aws::Vector<ChangeProgressStage>&& value) { SetChangeProgressStages(std::move(value)); return *this;}
    inline ChangeProgressStatus& AddChangeProgressStages(const ChangeProgressStage& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages.push_back(value); return *this; }
    inline ChangeProgressStatus& AddChangeProgressStages(ChangeProgressStage&& value) { m_changeProgressStagesHasBeenSet = true; m_changeProgressStages.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    ChangeProgressStatuses m_status;
    bool m_statusHasBeenSet = false;

    int m_totalNumberOfStages;
    bool m_totalNumberOfStagesHasBeenSet = false;

    Aws::Vector<ChangeProgressStage> m_changeProgressStages;
    bool m_changeProgressStagesHasBeenSet = false;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
