/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/transcribe/model/TranscriptFilterType.h>
#include <aws/transcribe/model/AbsoluteTimeRange.h>
#include <aws/transcribe/model/RelativeTimeRange.h>
#include <aws/transcribe/model/ParticipantRole.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Flag the presence or absence of specific words or phrases detected in your
   * Call Analytics transcription output.</p> <p>Rules using
   * <code>TranscriptFilter</code> are designed to match:</p> <ul> <li> <p>Custom
   * words or phrases spoken by the agent, the customer, or both</p> </li> <li>
   * <p>Custom words or phrases <b>not</b> spoken by the agent, the customer, or
   * either</p> </li> <li> <p>Custom words or phrases that occur at a specific time
   * frame</p> </li> </ul> <p>See <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-categories-batch.html#tca-rules-batch">Rule
   * criteria for post-call categories</a> and <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-categories-stream.html#tca-rules-stream">Rule
   * criteria for streaming categories</a> for usage examples.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/TranscriptFilter">AWS
   * API Reference</a></p>
   */
  class TranscriptFilter
  {
  public:
    AWS_TRANSCRIBESERVICE_API TranscriptFilter() = default;
    AWS_TRANSCRIBESERVICE_API TranscriptFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API TranscriptFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Flag the presence or absence of an exact match to the phrases that you
     * specify. For example, if you specify the phrase "speak to a manager" as your
     * <code>Targets</code> value, only that exact phrase is flagged.</p> <p>Note that
     * semantic matching is not supported. For example, if your customer says "speak to
     * <i>the</i> manager", instead of "speak to <i>a</i> manager", your content is not
     * flagged.</p>
     */
    inline TranscriptFilterType GetTranscriptFilterType() const { return m_transcriptFilterType; }
    inline bool TranscriptFilterTypeHasBeenSet() const { return m_transcriptFilterTypeHasBeenSet; }
    inline void SetTranscriptFilterType(TranscriptFilterType value) { m_transcriptFilterTypeHasBeenSet = true; m_transcriptFilterType = value; }
    inline TranscriptFilter& WithTranscriptFilterType(TranscriptFilterType value) { SetTranscriptFilterType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for the specified key words or phrases. See for
     * more detail.</p>
     */
    inline const AbsoluteTimeRange& GetAbsoluteTimeRange() const { return m_absoluteTimeRange; }
    inline bool AbsoluteTimeRangeHasBeenSet() const { return m_absoluteTimeRangeHasBeenSet; }
    template<typename AbsoluteTimeRangeT = AbsoluteTimeRange>
    void SetAbsoluteTimeRange(AbsoluteTimeRangeT&& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = std::forward<AbsoluteTimeRangeT>(value); }
    template<typename AbsoluteTimeRangeT = AbsoluteTimeRange>
    TranscriptFilter& WithAbsoluteTimeRange(AbsoluteTimeRangeT&& value) { SetAbsoluteTimeRange(std::forward<AbsoluteTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for the specified key words or phrases. See for
     * more detail.</p>
     */
    inline const RelativeTimeRange& GetRelativeTimeRange() const { return m_relativeTimeRange; }
    inline bool RelativeTimeRangeHasBeenSet() const { return m_relativeTimeRangeHasBeenSet; }
    template<typename RelativeTimeRangeT = RelativeTimeRange>
    void SetRelativeTimeRange(RelativeTimeRangeT&& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = std::forward<RelativeTimeRangeT>(value); }
    template<typename RelativeTimeRangeT = RelativeTimeRange>
    TranscriptFilter& WithRelativeTimeRange(RelativeTimeRangeT&& value) { SetRelativeTimeRange(std::forward<RelativeTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the participant that you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline ParticipantRole GetParticipantRole() const { return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(ParticipantRole value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline TranscriptFilter& WithParticipantRole(ParticipantRole value) { SetParticipantRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>TRUE</code> to flag the absence of the phrase that you specified
     * in your request. Set to <code>FALSE</code> to flag the presence of the phrase
     * that you specified in your request.</p>
     */
    inline bool GetNegate() const { return m_negate; }
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }
    inline TranscriptFilter& WithNegate(bool value) { SetNegate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the phrases that you want to flag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    TranscriptFilter& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Aws::String>
    TranscriptFilter& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}
  private:

    TranscriptFilterType m_transcriptFilterType{TranscriptFilterType::NOT_SET};
    bool m_transcriptFilterTypeHasBeenSet = false;

    AbsoluteTimeRange m_absoluteTimeRange;
    bool m_absoluteTimeRangeHasBeenSet = false;

    RelativeTimeRange m_relativeTimeRange;
    bool m_relativeTimeRangeHasBeenSet = false;

    ParticipantRole m_participantRole{ParticipantRole::NOT_SET};
    bool m_participantRoleHasBeenSet = false;

    bool m_negate{false};
    bool m_negateHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
