/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/ParticipantRole.h>
#include <aws/transcribe/model/AbsoluteTimeRange.h>
#include <aws/transcribe/model/RelativeTimeRange.h>
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
namespace TranscribeService
{
namespace Model
{

  /**
   * <p>Flag the presence or absence of interruptions in your Call Analytics
   * transcription output.</p> <p>Rules using <code>InterruptionFilter</code> are
   * designed to match:</p> <ul> <li> <p>Instances where an agent interrupts a
   * customer</p> </li> <li> <p>Instances where a customer interrupts an agent</p>
   * </li> <li> <p>Either participant interrupting the other</p> </li> <li> <p>A lack
   * of interruptions</p> </li> </ul> <p>See <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-categories-batch.html#tca-rules-batch">Rule
   * criteria for post-call categories</a> for usage examples.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/InterruptionFilter">AWS
   * API Reference</a></p>
   */
  class InterruptionFilter
  {
  public:
    AWS_TRANSCRIBESERVICE_API InterruptionFilter();
    AWS_TRANSCRIBESERVICE_API InterruptionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API InterruptionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the duration of the interruptions in milliseconds. For example, you
     * can flag speech that contains more than 10,000 milliseconds of
     * interruptions.</p>
     */
    inline long long GetThreshold() const{ return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(long long value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline InterruptionFilter& WithThreshold(long long value) { SetThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the interrupter that you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline const ParticipantRole& GetParticipantRole() const{ return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(const ParticipantRole& value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline void SetParticipantRole(ParticipantRole&& value) { m_participantRoleHasBeenSet = true; m_participantRole = std::move(value); }
    inline InterruptionFilter& WithParticipantRole(const ParticipantRole& value) { SetParticipantRole(value); return *this;}
    inline InterruptionFilter& WithParticipantRole(ParticipantRole&& value) { SetParticipantRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for an interruption. See for more detail.</p>
     */
    inline const AbsoluteTimeRange& GetAbsoluteTimeRange() const{ return m_absoluteTimeRange; }
    inline bool AbsoluteTimeRangeHasBeenSet() const { return m_absoluteTimeRangeHasBeenSet; }
    inline void SetAbsoluteTimeRange(const AbsoluteTimeRange& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = value; }
    inline void SetAbsoluteTimeRange(AbsoluteTimeRange&& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = std::move(value); }
    inline InterruptionFilter& WithAbsoluteTimeRange(const AbsoluteTimeRange& value) { SetAbsoluteTimeRange(value); return *this;}
    inline InterruptionFilter& WithAbsoluteTimeRange(AbsoluteTimeRange&& value) { SetAbsoluteTimeRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for an interruption. See for more detail.</p>
     */
    inline const RelativeTimeRange& GetRelativeTimeRange() const{ return m_relativeTimeRange; }
    inline bool RelativeTimeRangeHasBeenSet() const { return m_relativeTimeRangeHasBeenSet; }
    inline void SetRelativeTimeRange(const RelativeTimeRange& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = value; }
    inline void SetRelativeTimeRange(RelativeTimeRange&& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = std::move(value); }
    inline InterruptionFilter& WithRelativeTimeRange(const RelativeTimeRange& value) { SetRelativeTimeRange(value); return *this;}
    inline InterruptionFilter& WithRelativeTimeRange(RelativeTimeRange&& value) { SetRelativeTimeRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>TRUE</code> to flag speech that does not contain interruptions.
     * Set to <code>FALSE</code> to flag speech that contains interruptions.</p>
     */
    inline bool GetNegate() const{ return m_negate; }
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }
    inline InterruptionFilter& WithNegate(bool value) { SetNegate(value); return *this;}
    ///@}
  private:

    long long m_threshold;
    bool m_thresholdHasBeenSet = false;

    ParticipantRole m_participantRole;
    bool m_participantRoleHasBeenSet = false;

    AbsoluteTimeRange m_absoluteTimeRange;
    bool m_absoluteTimeRangeHasBeenSet = false;

    RelativeTimeRange m_relativeTimeRange;
    bool m_relativeTimeRangeHasBeenSet = false;

    bool m_negate;
    bool m_negateHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
