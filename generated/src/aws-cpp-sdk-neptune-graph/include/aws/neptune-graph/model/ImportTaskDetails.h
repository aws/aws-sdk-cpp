/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
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
namespace NeptuneGraph
{
namespace Model
{

  /**
   * <p>Contains details about an import task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ImportTaskDetails">AWS
   * API Reference</a></p>
   */
  class ImportTaskDetails
  {
  public:
    AWS_NEPTUNEGRAPH_API ImportTaskDetails() = default;
    AWS_NEPTUNEGRAPH_API ImportTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API ImportTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status of the import task.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ImportTaskDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time at which the import task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ImportTaskDetails& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Seconds elapsed since the import task started.</p>
     */
    inline long long GetTimeElapsedSeconds() const { return m_timeElapsedSeconds; }
    inline bool TimeElapsedSecondsHasBeenSet() const { return m_timeElapsedSecondsHasBeenSet; }
    inline void SetTimeElapsedSeconds(long long value) { m_timeElapsedSecondsHasBeenSet = true; m_timeElapsedSeconds = value; }
    inline ImportTaskDetails& WithTimeElapsedSeconds(long long value) { SetTimeElapsedSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage progress so far.</p>
     */
    inline int GetProgressPercentage() const { return m_progressPercentage; }
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }
    inline void SetProgressPercentage(int value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }
    inline ImportTaskDetails& WithProgressPercentage(int value) { SetProgressPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of errors encountered so far.</p>
     */
    inline int GetErrorCount() const { return m_errorCount; }
    inline bool ErrorCountHasBeenSet() const { return m_errorCountHasBeenSet; }
    inline void SetErrorCount(int value) { m_errorCountHasBeenSet = true; m_errorCount = value; }
    inline ImportTaskDetails& WithErrorCount(int value) { SetErrorCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the errors that have been encountered.</p>
     */
    inline const Aws::String& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = Aws::String>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = Aws::String>
    ImportTaskDetails& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of statements in the import task.</p>
     */
    inline long long GetStatementCount() const { return m_statementCount; }
    inline bool StatementCountHasBeenSet() const { return m_statementCountHasBeenSet; }
    inline void SetStatementCount(long long value) { m_statementCountHasBeenSet = true; m_statementCount = value; }
    inline ImportTaskDetails& WithStatementCount(long long value) { SetStatementCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of dictionary entries in the import task.</p>
     */
    inline long long GetDictionaryEntryCount() const { return m_dictionaryEntryCount; }
    inline bool DictionaryEntryCountHasBeenSet() const { return m_dictionaryEntryCountHasBeenSet; }
    inline void SetDictionaryEntryCount(long long value) { m_dictionaryEntryCountHasBeenSet = true; m_dictionaryEntryCount = value; }
    inline ImportTaskDetails& WithDictionaryEntryCount(long long value) { SetDictionaryEntryCount(value); return *this;}
    ///@}
  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    long long m_timeElapsedSeconds{0};
    bool m_timeElapsedSecondsHasBeenSet = false;

    int m_progressPercentage{0};
    bool m_progressPercentageHasBeenSet = false;

    int m_errorCount{0};
    bool m_errorCountHasBeenSet = false;

    Aws::String m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    long long m_statementCount{0};
    bool m_statementCountHasBeenSet = false;

    long long m_dictionaryEntryCount{0};
    bool m_dictionaryEntryCountHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
