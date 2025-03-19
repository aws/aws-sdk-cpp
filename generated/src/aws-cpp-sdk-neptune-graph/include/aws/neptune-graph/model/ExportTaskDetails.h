/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune-graph/NeptuneGraph_EXPORTS.h>
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
   * <p>Contains details about the specified export task.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-graph-2023-11-29/ExportTaskDetails">AWS
   * API Reference</a></p>
   */
  class ExportTaskDetails
  {
  public:
    AWS_NEPTUNEGRAPH_API ExportTaskDetails() = default;
    AWS_NEPTUNEGRAPH_API ExportTaskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API ExportTaskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NEPTUNEGRAPH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time of the export task.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ExportTaskDetails& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time elapsed, in seconds, since the start time of the export task.</p>
     */
    inline long long GetTimeElapsedSeconds() const { return m_timeElapsedSeconds; }
    inline bool TimeElapsedSecondsHasBeenSet() const { return m_timeElapsedSecondsHasBeenSet; }
    inline void SetTimeElapsedSeconds(long long value) { m_timeElapsedSecondsHasBeenSet = true; m_timeElapsedSeconds = value; }
    inline ExportTaskDetails& WithTimeElapsedSeconds(long long value) { SetTimeElapsedSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of progress percentage of the export task.</p>
     */
    inline int GetProgressPercentage() const { return m_progressPercentage; }
    inline bool ProgressPercentageHasBeenSet() const { return m_progressPercentageHasBeenSet; }
    inline void SetProgressPercentage(int value) { m_progressPercentageHasBeenSet = true; m_progressPercentage = value; }
    inline ExportTaskDetails& WithProgressPercentage(int value) { SetProgressPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of exported vertices.</p>
     */
    inline long long GetNumVerticesWritten() const { return m_numVerticesWritten; }
    inline bool NumVerticesWrittenHasBeenSet() const { return m_numVerticesWrittenHasBeenSet; }
    inline void SetNumVerticesWritten(long long value) { m_numVerticesWrittenHasBeenSet = true; m_numVerticesWritten = value; }
    inline ExportTaskDetails& WithNumVerticesWritten(long long value) { SetNumVerticesWritten(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of exported edges.</p>
     */
    inline long long GetNumEdgesWritten() const { return m_numEdgesWritten; }
    inline bool NumEdgesWrittenHasBeenSet() const { return m_numEdgesWrittenHasBeenSet; }
    inline void SetNumEdgesWritten(long long value) { m_numEdgesWrittenHasBeenSet = true; m_numEdgesWritten = value; }
    inline ExportTaskDetails& WithNumEdgesWritten(long long value) { SetNumEdgesWritten(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    long long m_timeElapsedSeconds{0};
    bool m_timeElapsedSecondsHasBeenSet = false;

    int m_progressPercentage{0};
    bool m_progressPercentageHasBeenSet = false;

    long long m_numVerticesWritten{0};
    bool m_numVerticesWrittenHasBeenSet = false;

    long long m_numEdgesWritten{0};
    bool m_numEdgesWrittenHasBeenSet = false;
  };

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
