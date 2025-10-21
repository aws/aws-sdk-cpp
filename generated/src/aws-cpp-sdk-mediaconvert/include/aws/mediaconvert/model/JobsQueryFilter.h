/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/JobsQueryFilterKey.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Provide one or more JobsQueryFilter objects, each containing a Key with an
   * associated Values array. Note that MediaConvert queries jobs using OR
   * logic.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/JobsQueryFilter">AWS
   * API Reference</a></p>
   */
  class JobsQueryFilter
  {
  public:
    AWS_MEDIACONVERT_API JobsQueryFilter() = default;
    AWS_MEDIACONVERT_API JobsQueryFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API JobsQueryFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Specify job details to filter for while performing a jobs query. You specify
     * these filters as part of a key-value pair within the JobsQueryFilter array. The
     * following list describes which keys are available and their possible values: *
     * queue - Your Queue's name or ARN. * status - Your job's status. (SUBMITTED |
     * PROGRESSING | COMPLETE | CANCELED | ERROR) * fileInput - Your input file URL, or
     * partial input file name. * jobEngineVersionRequested - The Job engine version
     * that you requested for your job. Valid versions are in a YYYY-MM-DD format. *
     * jobEngineVersionUsed - The Job engine version that your job used. This may
     * differ from the version that you requested. Valid versions are in a YYYY-MM-DD
     * format. * audioCodec - Your output's audio codec. (AAC | MP2 | MP3 | WAV | AIFF
     * | AC3| EAC3 | EAC3_ATMOS | VORBIS | OPUS | PASSTHROUGH | FLAC) * videoCodec -
     * Your output's video codec. (AV1 | AVC_INTRA | FRAME_CAPTURE | H_264 | H_265 |
     * MPEG2 | PASSTHROUGH | PRORES | UNCOMPRESSED | VC3 | VP8 | VP9 | XAVC)
     */
    inline JobsQueryFilterKey GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(JobsQueryFilterKey value) { m_keyHasBeenSet = true; m_key = value; }
    inline JobsQueryFilter& WithKey(JobsQueryFilterKey value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of values associated with a JobsQueryFilterKey.
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    JobsQueryFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    JobsQueryFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    JobsQueryFilterKey m_key{JobsQueryFilterKey::NOT_SET};
    bool m_keyHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
