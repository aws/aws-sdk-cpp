/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribe/TranscribeService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribe/model/AbsoluteTimeRange.h>
#include <aws/transcribe/model/RelativeTimeRange.h>
#include <aws/transcribe/model/ParticipantRole.h>
#include <aws/transcribe/model/SentimentValue.h>
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
   * <p>Flag the presence or absence of specific sentiments detected in your Call
   * Analytics transcription output.</p> <p>Rules using <code>SentimentFilter</code>
   * are designed to match:</p> <ul> <li> <p>The presence or absence of a positive
   * sentiment felt by the customer, agent, or both at specified points in the
   * call</p> </li> <li> <p>The presence or absence of a negative sentiment felt by
   * the customer, agent, or both at specified points in the call</p> </li> <li>
   * <p>The presence or absence of a neutral sentiment felt by the customer, agent,
   * or both at specified points in the call</p> </li> <li> <p>The presence or
   * absence of a mixed sentiment felt by the customer, the agent, or both at
   * specified points in the call</p> </li> </ul> <p>See <a
   * href="https://docs.aws.amazon.com/transcribe/latest/dg/tca-categories-batch.html#tca-rules-batch">Rule
   * criteria for post-call categories</a> for usage examples.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-2017-10-26/SentimentFilter">AWS
   * API Reference</a></p>
   */
  class SentimentFilter
  {
  public:
    AWS_TRANSCRIBESERVICE_API SentimentFilter() = default;
    AWS_TRANSCRIBESERVICE_API SentimentFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API SentimentFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify the sentiments that you want to flag.</p>
     */
    inline const Aws::Vector<SentimentValue>& GetSentiments() const { return m_sentiments; }
    inline bool SentimentsHasBeenSet() const { return m_sentimentsHasBeenSet; }
    template<typename SentimentsT = Aws::Vector<SentimentValue>>
    void SetSentiments(SentimentsT&& value) { m_sentimentsHasBeenSet = true; m_sentiments = std::forward<SentimentsT>(value); }
    template<typename SentimentsT = Aws::Vector<SentimentValue>>
    SentimentFilter& WithSentiments(SentimentsT&& value) { SetSentiments(std::forward<SentimentsT>(value)); return *this;}
    inline SentimentFilter& AddSentiments(SentimentValue value) { m_sentimentsHasBeenSet = true; m_sentiments.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Makes it possible to specify a time range (in milliseconds) in your audio,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline const AbsoluteTimeRange& GetAbsoluteTimeRange() const { return m_absoluteTimeRange; }
    inline bool AbsoluteTimeRangeHasBeenSet() const { return m_absoluteTimeRangeHasBeenSet; }
    template<typename AbsoluteTimeRangeT = AbsoluteTimeRange>
    void SetAbsoluteTimeRange(AbsoluteTimeRangeT&& value) { m_absoluteTimeRangeHasBeenSet = true; m_absoluteTimeRange = std::forward<AbsoluteTimeRangeT>(value); }
    template<typename AbsoluteTimeRangeT = AbsoluteTimeRange>
    SentimentFilter& WithAbsoluteTimeRange(AbsoluteTimeRangeT&& value) { SetAbsoluteTimeRange(std::forward<AbsoluteTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Makes it possible to specify a time range (in percentage) in your media file,
     * during which you want to search for the specified sentiments. See for more
     * detail.</p>
     */
    inline const RelativeTimeRange& GetRelativeTimeRange() const { return m_relativeTimeRange; }
    inline bool RelativeTimeRangeHasBeenSet() const { return m_relativeTimeRangeHasBeenSet; }
    template<typename RelativeTimeRangeT = RelativeTimeRange>
    void SetRelativeTimeRange(RelativeTimeRangeT&& value) { m_relativeTimeRangeHasBeenSet = true; m_relativeTimeRange = std::forward<RelativeTimeRangeT>(value); }
    template<typename RelativeTimeRangeT = RelativeTimeRange>
    SentimentFilter& WithRelativeTimeRange(RelativeTimeRangeT&& value) { SetRelativeTimeRange(std::forward<RelativeTimeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the participant that you want to flag. Omitting this parameter is
     * equivalent to specifying both participants.</p>
     */
    inline ParticipantRole GetParticipantRole() const { return m_participantRole; }
    inline bool ParticipantRoleHasBeenSet() const { return m_participantRoleHasBeenSet; }
    inline void SetParticipantRole(ParticipantRole value) { m_participantRoleHasBeenSet = true; m_participantRole = value; }
    inline SentimentFilter& WithParticipantRole(ParticipantRole value) { SetParticipantRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>TRUE</code> to flag the sentiments that you didn't include in
     * your request. Set to <code>FALSE</code> to flag the sentiments that you
     * specified in your request.</p>
     */
    inline bool GetNegate() const { return m_negate; }
    inline bool NegateHasBeenSet() const { return m_negateHasBeenSet; }
    inline void SetNegate(bool value) { m_negateHasBeenSet = true; m_negate = value; }
    inline SentimentFilter& WithNegate(bool value) { SetNegate(value); return *this;}
    ///@}
  private:

    Aws::Vector<SentimentValue> m_sentiments;
    bool m_sentimentsHasBeenSet = false;

    AbsoluteTimeRange m_absoluteTimeRange;
    bool m_absoluteTimeRangeHasBeenSet = false;

    RelativeTimeRange m_relativeTimeRange;
    bool m_relativeTimeRangeHasBeenSet = false;

    ParticipantRole m_participantRole{ParticipantRole::NOT_SET};
    bool m_participantRoleHasBeenSet = false;

    bool m_negate{false};
    bool m_negateHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeService
} // namespace Aws
