/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConvert {
namespace Model {

/**
 * Settings specific to caption sources that are specified by track number.
 * Currently, this is only IMSC captions in an IMF package. If your caption source
 * is IMSC 1.1 in a separate xml file, use FileSourceSettings instead of
 * TrackSourceSettings.<p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TrackSourceSettings">AWS
 * API Reference</a></p>
 */
class TrackSourceSettings {
 public:
  AWS_MEDIACONVERT_API TrackSourceSettings() = default;
  AWS_MEDIACONVERT_API TrackSourceSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API TrackSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * Use this setting to select a single captions track from a source. Stream numbers
   * include all tracks in the source file, regardless of type, and correspond to
   * either the order of tracks in the file, or if applicable, the stream number
   * metadata of the track. Although all tracks count toward these stream numbers, in
   * this caption selector context, only the stream number of a track containing
   * caption data may be used. To include more than one captions track in your job
   * outputs, create multiple input captions selectors. Specify one stream per
   * selector. If your source file contains a track which is not recognized by the
   * service, then the corresponding stream number will still be reserved for future
   * use. If more types of caption data get recognized in the future, these
   * numberings will not shift.
   */
  inline int GetStreamNumber() const { return m_streamNumber; }
  inline bool StreamNumberHasBeenSet() const { return m_streamNumberHasBeenSet; }
  inline void SetStreamNumber(int value) {
    m_streamNumberHasBeenSet = true;
    m_streamNumber = value;
  }
  inline TrackSourceSettings& WithStreamNumber(int value) {
    SetStreamNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * Use this setting to select a single captions track from a source. Track numbers
   * correspond to the order in the captions source file. For IMF sources, track
   * numbering is based on the order that the captions appear in the CPL. For
   * example, use 1 to select the captions asset that is listed first in the CPL. To
   * include more than one captions track in your job outputs, create multiple input
   * captions selectors. Specify one track per selector. If more types of caption
   * data get recognized in the future, these numberings may shift, but the
   * numberings used for streamNumber will not.
   */
  inline int GetTrackNumber() const { return m_trackNumber; }
  inline bool TrackNumberHasBeenSet() const { return m_trackNumberHasBeenSet; }
  inline void SetTrackNumber(int value) {
    m_trackNumberHasBeenSet = true;
    m_trackNumber = value;
  }
  inline TrackSourceSettings& WithTrackNumber(int value) {
    SetTrackNumber(value);
    return *this;
  }
  ///@}
 private:
  int m_streamNumber{0};

  int m_trackNumber{0};
  bool m_streamNumberHasBeenSet = false;
  bool m_trackNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConvert
}  // namespace Aws
