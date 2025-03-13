/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/SolutionUpdateConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides a summary of the properties of a solution update. For a complete
   * listing, call the <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSolution.html">DescribeSolution</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/SolutionUpdateSummary">AWS
   * API Reference</a></p>
   */
  class SolutionUpdateSummary
  {
  public:
    AWS_PERSONALIZE_API SolutionUpdateSummary() = default;
    AWS_PERSONALIZE_API SolutionUpdateSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API SolutionUpdateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration details of the solution.</p>
     */
    inline const SolutionUpdateConfig& GetSolutionUpdateConfig() const { return m_solutionUpdateConfig; }
    inline bool SolutionUpdateConfigHasBeenSet() const { return m_solutionUpdateConfigHasBeenSet; }
    template<typename SolutionUpdateConfigT = SolutionUpdateConfig>
    void SetSolutionUpdateConfig(SolutionUpdateConfigT&& value) { m_solutionUpdateConfigHasBeenSet = true; m_solutionUpdateConfig = std::forward<SolutionUpdateConfigT>(value); }
    template<typename SolutionUpdateConfigT = SolutionUpdateConfig>
    SolutionUpdateSummary& WithSolutionUpdateConfig(SolutionUpdateConfigT&& value) { SetSolutionUpdateConfig(std::forward<SolutionUpdateConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the solution update. A solution update can be in one of the
     * following states:</p> <p>CREATE PENDING &gt; CREATE IN_PROGRESS &gt; ACTIVE -or-
     * CREATE FAILED</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    SolutionUpdateSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the solution automatically creates solution versions.</p>
     */
    inline bool GetPerformAutoTraining() const { return m_performAutoTraining; }
    inline bool PerformAutoTrainingHasBeenSet() const { return m_performAutoTrainingHasBeenSet; }
    inline void SetPerformAutoTraining(bool value) { m_performAutoTrainingHasBeenSet = true; m_performAutoTraining = value; }
    inline SolutionUpdateSummary& WithPerformAutoTraining(bool value) { SetPerformAutoTraining(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix format) that the solution update was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    SolutionUpdateSummary& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the solution update was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const { return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::forward<LastUpdatedDateTimeT>(value); }
    template<typename LastUpdatedDateTimeT = Aws::Utils::DateTime>
    SolutionUpdateSummary& WithLastUpdatedDateTime(LastUpdatedDateTimeT&& value) { SetLastUpdatedDateTime(std::forward<LastUpdatedDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a solution update fails, the reason behind the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    SolutionUpdateSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}
  private:

    SolutionUpdateConfig m_solutionUpdateConfig;
    bool m_solutionUpdateConfigHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    bool m_performAutoTraining{false};
    bool m_performAutoTrainingHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime{};
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
