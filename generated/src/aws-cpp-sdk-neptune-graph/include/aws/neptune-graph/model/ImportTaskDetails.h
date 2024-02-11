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
    AWS_NEPTUNEGRAPH_API ImportTaskDetails();
    AWS_NEPTUNEGRAPH_API ImportTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API ImportTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Status of the import task.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the import task.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the import task.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the import task.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the import task.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Status of the import task.</p>
     */
    inline ImportTaskDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the import task.</p>
     */
    inline ImportTaskDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Status of the import task.</p>
     */
    inline ImportTaskDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>Time at which the import task started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>Time at which the import task started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>Time at which the import task started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>Time at which the import task started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>Time at which the import task started.</p>
     */
    inline ImportTaskDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>Time at which the import task started.</p>
     */
    inline ImportTaskDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>Seconds elapsed since the import task started.</p>
     */
    inline long long GetTimeElapsedSeconds() const{ return m_timeElapsedSeconds; }

    /**
     * <p>Seconds elapsed since the import task started.</p>
     */
    inline bool TimeElapsedSecondsHasBeenSet() const { return m_timeElapsedSecondsHasBeenSet; }

    /**
     * <p>Seconds elapsed since the import task started.</p>
     */
    inline void SetTimeElapsedSeconds(long long value) { m_timeElapsedSecondsHasBeenSet = true; m_timeElapsedSeconds = value; }

    /**
     * <p>Seconds elapsed since the import task started.</p>
     */
    inline ImportTaskDetails& WithTimeElapsedSeconds(long long value) { SetTimeElapsedSeconds(value); return *this;}


    /**
     * <p>The percentage progress so far.</p>
     */
    inline int GetProgressPercentage() const{ return m_progressPercentage; }

    /**
     * <p>The percentage progress so far.</p>
     */
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }

    /**
     * <p>The percentage progress so far.</p>
     */
    inline void SetProgressPercentage(int value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }

    /**
     * <p>The percentage progress so far.</p>
     */
    inline ImportTaskDetails& WithProgressPercentage(int value) { SetProgressPercentage(value); return *this;}


    /**
     * <p>The number of errors encountered so far.</p>
     */
    inline int GetErrorCount() const{ return m_errorCount; }

    /**
     * <p>The number of errors encountered so far.</p>
     */
    inline bool ErrorCountHasBeenSet() const { return m_errorCountHasBeenSet; }

    /**
     * <p>The number of errors encountered so far.</p>
     */
    inline void SetErrorCount(int value) { m_errorCountHasBeenSet = true; m_errorCount = value; }

    /**
     * <p>The number of errors encountered so far.</p>
     */
    inline ImportTaskDetails& WithErrorCount(int value) { SetErrorCount(value); return *this;}


    /**
     * <p>Details about the errors that have been encountered.</p>
     */
    inline const Aws::String& GetErrorDetails() const{ return m_errorDetails; }

    /**
     * <p>Details about the errors that have been encountered.</p>
     */
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }

    /**
     * <p>Details about the errors that have been encountered.</p>
     */
    inline void SetErrorDetails(const Aws::String& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = value; }

    /**
     * <p>Details about the errors that have been encountered.</p>
     */
    inline void SetErrorDetails(Aws::String&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::move(value); }

    /**
     * <p>Details about the errors that have been encountered.</p>
     */
    inline void SetErrorDetails(const char* value) { m_errorDetailsHasBeenSet = true; m_errorDetails.assign(value); }

    /**
     * <p>Details about the errors that have been encountered.</p>
     */
    inline ImportTaskDetails& WithErrorDetails(const Aws::String& value) { SetErrorDetails(value); return *this;}

    /**
     * <p>Details about the errors that have been encountered.</p>
     */
    inline ImportTaskDetails& WithErrorDetails(Aws::String&& value) { SetErrorDetails(std::move(value)); return *this;}

    /**
     * <p>Details about the errors that have been encountered.</p>
     */
    inline ImportTaskDetails& WithErrorDetails(const char* value) { SetErrorDetails(value); return *this;}


    /**
     * <p>The number of statements in the import task.</p>
     */
    inline long long GetStatementCount() const{ return m_statementCount; }

    /**
     * <p>The number of statements in the import task.</p>
     */
    inline bool StatementCountHasBeenSet() const { return m_statementCountHasBeenSet; }

    /**
     * <p>The number of statements in the import task.</p>
     */
    inline void SetStatementCount(long long value) { m_statementCountHasBeenSet = true; m_statementCount = value; }

    /**
     * <p>The number of statements in the import task.</p>
     */
    inline ImportTaskDetails& WithStatementCount(long long value) { SetStatementCount(value); return *this;}


    /**
     * <p>The number of dictionary entries in the import task.</p>
     */
    inline long long GetDictionaryEntryCount() const{ return m_dictionaryEntryCount; }

    /**
     * <p>The number of dictionary entries in the import task.</p>
     */
    inline bool DictionaryEntryCountHasBeenSet() const { return m_dictionaryEntryCountHasBeenSet; }

    /**
     * <p>The number of dictionary entries in the import task.</p>
     */
    inline void SetDictionaryEntryCount(long long value) { m_dictionaryEntryCountHasBeenSet = true; m_dictionaryEntryCount = value; }

    /**
     * <p>The number of dictionary entries in the import task.</p>
     */
    inline ImportTaskDetails& WithDictionaryEntryCount(long long value) { SetDictionaryEntryCount(value); return *this;}

  private:

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    long long m_timeElapsedSeconds;
    bool m_timeElapsedSecondsHasBeenSet = false;

    int m_progressPercentage;
    bool m_progressPercentageHasBeenSet = false;

    int m_errorCount;
    bool m_errorCountHasBeenSet = false;

    Aws::String m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    long long m_statementCount;
    bool m_statementCountHasBeenSet = false;

    long long m_dictionaryEntryCount;
    bool m_dictionaryEntryCountHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
