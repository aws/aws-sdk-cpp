/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/TrainingMode.h>
#include <aws/personalize/model/TrainingType.h>
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
   * <p>Provides a summary of the properties of a solution version. For a complete
   * listing, call the <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/API_DescribeSolutionVersion.html">DescribeSolutionVersion</a>
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/SolutionVersionSummary">AWS
   * API Reference</a></p>
   */
  class SolutionVersionSummary
  {
  public:
    AWS_PERSONALIZE_API SolutionVersionSummary();
    AWS_PERSONALIZE_API SolutionVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API SolutionVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the solution version.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }
    inline SolutionVersionSummary& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}
    inline SolutionVersionSummary& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}
    inline SolutionVersionSummary& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the solution version.</p> <p>A solution version can be in one
     * of the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS
     * &gt; ACTIVE -or- CREATE FAILED</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline SolutionVersionSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline SolutionVersionSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline SolutionVersionSummary& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of training to be performed when creating the solution version. A
     * <code>FULL</code> training considers all of the data in your dataset group. An
     * <code>UPDATE</code> processes only the data that has changed since the latest
     * training. Only solution versions created with the User-Personalization recipe
     * can use <code>UPDATE</code>. </p>
     */
    inline const TrainingMode& GetTrainingMode() const{ return m_trainingMode; }
    inline bool TrainingModeHasBeenSet() const { return m_trainingModeHasBeenSet; }
    inline void SetTrainingMode(const TrainingMode& value) { m_trainingModeHasBeenSet = true; m_trainingMode = value; }
    inline void SetTrainingMode(TrainingMode&& value) { m_trainingModeHasBeenSet = true; m_trainingMode = std::move(value); }
    inline SolutionVersionSummary& WithTrainingMode(const TrainingMode& value) { SetTrainingMode(value); return *this;}
    inline SolutionVersionSummary& WithTrainingMode(TrainingMode&& value) { SetTrainingMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the solution version was created automatically or manually.</p>
     */
    inline const TrainingType& GetTrainingType() const{ return m_trainingType; }
    inline bool TrainingTypeHasBeenSet() const { return m_trainingTypeHasBeenSet; }
    inline void SetTrainingType(const TrainingType& value) { m_trainingTypeHasBeenSet = true; m_trainingType = value; }
    inline void SetTrainingType(TrainingType&& value) { m_trainingTypeHasBeenSet = true; m_trainingType = std::move(value); }
    inline SolutionVersionSummary& WithTrainingType(const TrainingType& value) { SetTrainingType(value); return *this;}
    inline SolutionVersionSummary& WithTrainingType(TrainingType&& value) { SetTrainingType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that this version of a solution was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline SolutionVersionSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline SolutionVersionSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in Unix time) that the solution version was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline SolutionVersionSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline SolutionVersionSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a solution version fails, the reason behind the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline SolutionVersionSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline SolutionVersionSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline SolutionVersionSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    TrainingMode m_trainingMode;
    bool m_trainingModeHasBeenSet = false;

    TrainingType m_trainingType;
    bool m_trainingTypeHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
