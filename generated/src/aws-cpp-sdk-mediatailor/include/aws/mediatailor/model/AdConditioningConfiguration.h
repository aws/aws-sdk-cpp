/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/StreamingMediaFileConditioning.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The setting that indicates what conditioning MediaTailor will perform on ads
   * that the ad decision server (ADS) returns.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AdConditioningConfiguration">AWS
   * API Reference</a></p>
   */
  class AdConditioningConfiguration
  {
  public:
    AWS_MEDIATAILOR_API AdConditioningConfiguration() = default;
    AWS_MEDIATAILOR_API AdConditioningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API AdConditioningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>For ads that have media files with streaming delivery and supported file
     * extensions, indicates what transcoding action MediaTailor takes when it first
     * receives these ads from the ADS. <code>TRANSCODE</code> indicates that
     * MediaTailor must transcode the ads. <code>NONE</code> indicates that you have
     * already transcoded the ads outside of MediaTailor and don't need them transcoded
     * as part of the ad insertion workflow. For more information about ad conditioning
     * see <a
     * href="https://docs.aws.amazon.com/mediatailor/latest/ug/precondition-ads.html">Using
     * preconditioned ads</a> in the Elemental MediaTailor user guide.</p>
     */
    inline StreamingMediaFileConditioning GetStreamingMediaFileConditioning() const { return m_streamingMediaFileConditioning; }
    inline bool StreamingMediaFileConditioningHasBeenSet() const { return m_streamingMediaFileConditioningHasBeenSet; }
    inline void SetStreamingMediaFileConditioning(StreamingMediaFileConditioning value) { m_streamingMediaFileConditioningHasBeenSet = true; m_streamingMediaFileConditioning = value; }
    inline AdConditioningConfiguration& WithStreamingMediaFileConditioning(StreamingMediaFileConditioning value) { SetStreamingMediaFileConditioning(value); return *this;}
    ///@}
  private:

    StreamingMediaFileConditioning m_streamingMediaFileConditioning{StreamingMediaFileConditioning::NOT_SET};
    bool m_streamingMediaFileConditioningHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
