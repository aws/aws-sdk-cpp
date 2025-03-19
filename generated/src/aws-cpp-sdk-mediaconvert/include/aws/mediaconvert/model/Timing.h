/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Information about when jobs are submitted, started, and finished is specified in
   * Unix epoch format in seconds.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Timing">AWS
   * API Reference</a></p>
   */
  class Timing
  {
  public:
    AWS_MEDIACONVERT_API Timing() = default;
    AWS_MEDIACONVERT_API Timing(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Timing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The time, in Unix epoch format, that the transcoding job finished
     */
    inline const Aws::Utils::DateTime& GetFinishTime() const { return m_finishTime; }
    inline bool FinishTimeHasBeenSet() const { return m_finishTimeHasBeenSet; }
    template<typename FinishTimeT = Aws::Utils::DateTime>
    void SetFinishTime(FinishTimeT&& value) { m_finishTimeHasBeenSet = true; m_finishTime = std::forward<FinishTimeT>(value); }
    template<typename FinishTimeT = Aws::Utils::DateTime>
    Timing& WithFinishTime(FinishTimeT&& value) { SetFinishTime(std::forward<FinishTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time, in Unix epoch format, that transcoding for the job began.
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    Timing& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time, in Unix epoch format, that you submitted the job.
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const { return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    void SetSubmitTime(SubmitTimeT&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::forward<SubmitTimeT>(value); }
    template<typename SubmitTimeT = Aws::Utils::DateTime>
    Timing& WithSubmitTime(SubmitTimeT&& value) { SetSubmitTime(std::forward<SubmitTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_finishTime{};
    bool m_finishTimeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime{};
    bool m_submitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
