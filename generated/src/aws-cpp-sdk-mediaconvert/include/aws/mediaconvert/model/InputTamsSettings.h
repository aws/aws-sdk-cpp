/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconvert/model/TamsGapHandling.h>
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
   * Specify a Time Addressable Media Store (TAMS) server as an input source. TAMS is
   * an open-source API specification that provides access to time-segmented media
   * content. Use TAMS to retrieve specific time ranges from live or archived media
   * streams. When you specify TAMS settings, MediaConvert connects to your TAMS
   * server, retrieves the media segments for your specified time range, and
   * processes them as a single input. This enables workflows like extracting clips
   * from live streams or processing specific portions of archived content. To use
   * TAMS, you must: 1. Have access to a TAMS-compliant server 2. Specify the server
   * URL in the Input file URL field 3. Provide the required SourceId and Timerange
   * parameters 4. Configure authentication, if your TAMS server requires
   * it<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/InputTamsSettings">AWS
   * API Reference</a></p>
   */
  class InputTamsSettings
  {
  public:
    AWS_MEDIACONVERT_API InputTamsSettings() = default;
    AWS_MEDIACONVERT_API InputTamsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API InputTamsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify the ARN (Amazon Resource Name) of an EventBridge Connection to
     * authenticate with your TAMS server. The EventBridge Connection stores your
     * authentication credentials securely. MediaConvert assumes your job's IAM role to
     * access this connection, so ensure the role has the
     * events:RetrieveConnectionCredentials, secretsmanager:DescribeSecret, and
     * secretsmanager:GetSecretValue permissions. Format:
     * arn:aws:events:region:account-id:connection/connection-name/unique-id This
     * setting is required when you include TAMS settings in your job.
     */
    inline const Aws::String& GetAuthConnectionArn() const { return m_authConnectionArn; }
    inline bool AuthConnectionArnHasBeenSet() const { return m_authConnectionArnHasBeenSet; }
    template<typename AuthConnectionArnT = Aws::String>
    void SetAuthConnectionArn(AuthConnectionArnT&& value) { m_authConnectionArnHasBeenSet = true; m_authConnectionArn = std::forward<AuthConnectionArnT>(value); }
    template<typename AuthConnectionArnT = Aws::String>
    InputTamsSettings& WithAuthConnectionArn(AuthConnectionArnT&& value) { SetAuthConnectionArn(std::forward<AuthConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify how MediaConvert handles gaps between media segments in your TAMS
     * source. Gaps can occur in live streams due to network issues or other
     * interruptions. Choose from the following options: * Skip gaps - Default. Skip
     * over gaps and join segments together. This creates a continuous output with no
     * blank frames, but may cause timeline discontinuities. * Fill with black - Insert
     * black frames to fill gaps between segments. This maintains timeline continuity
     * but adds black frames where content is missing. * Hold last frame - Repeat the
     * last frame before a gap until the next segment begins. This maintains visual
     * continuity during gaps.
     */
    inline TamsGapHandling GetGapHandling() const { return m_gapHandling; }
    inline bool GapHandlingHasBeenSet() const { return m_gapHandlingHasBeenSet; }
    inline void SetGapHandling(TamsGapHandling value) { m_gapHandlingHasBeenSet = true; m_gapHandling = value; }
    inline InputTamsSettings& WithGapHandling(TamsGapHandling value) { SetGapHandling(value); return *this;}
    ///@}

    ///@{
    /**
     * Specify the unique identifier for the media source in your TAMS server.
     * MediaConvert uses this source ID to locate the appropriate flows containing the
     * media segments you want to process. The source ID corresponds to a specific
     * media source registered in your TAMS server. This source must be of type
     * urn:x-nmos:format:multi, and can can reference multiple flows for audio, video,
     * or combined audio/video content. MediaConvert automatically selects the highest
     * quality flows available for your job. This setting is required when you include
     * TAMS settings in your job.
     */
    inline const Aws::String& GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    template<typename SourceIdT = Aws::String>
    void SetSourceId(SourceIdT&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::forward<SourceIdT>(value); }
    template<typename SourceIdT = Aws::String>
    InputTamsSettings& WithSourceId(SourceIdT&& value) { SetSourceId(std::forward<SourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the time range of media segments to retrieve from your TAMS server.
     * MediaConvert fetches only the segments that fall within this range. Use the
     * format specified by your TAMS server implementation. This must be two timestamp
     * values with the format {sign?}{seconds}:{nanoseconds}, separated by an
     * underscore, surrounded by either parentheses or square brackets.  Example:
     * [15:0_35:0) This setting is required when you include TAMS settings in your job.
     */
    inline const Aws::String& GetTimerange() const { return m_timerange; }
    inline bool TimerangeHasBeenSet() const { return m_timerangeHasBeenSet; }
    template<typename TimerangeT = Aws::String>
    void SetTimerange(TimerangeT&& value) { m_timerangeHasBeenSet = true; m_timerange = std::forward<TimerangeT>(value); }
    template<typename TimerangeT = Aws::String>
    InputTamsSettings& WithTimerange(TimerangeT&& value) { SetTimerange(std::forward<TimerangeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authConnectionArn;
    bool m_authConnectionArnHasBeenSet = false;

    TamsGapHandling m_gapHandling{TamsGapHandling::NOT_SET};
    bool m_gapHandlingHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::String m_timerange;
    bool m_timerangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
