/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings for the action to insert ID3 metadata in every segment, in applicable
   * output groups.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Id3SegmentTaggingScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class Id3SegmentTaggingScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API Id3SegmentTaggingScheduleActionSettings() = default;
    AWS_MEDIALIVE_API Id3SegmentTaggingScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Id3SegmentTaggingScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Complete this parameter if you want to specify the entire ID3 metadata. Enter a
     * base64 string that contains one or more fully formed ID3 tags, according to the
     * ID3 specification: http://id3.org/id3v2.4.0-structure
     */
    inline const Aws::String& GetId3() const { return m_id3; }
    inline bool Id3HasBeenSet() const { return m_id3HasBeenSet; }
    template<typename Id3T = Aws::String>
    void SetId3(Id3T&& value) { m_id3HasBeenSet = true; m_id3 = std::forward<Id3T>(value); }
    template<typename Id3T = Aws::String>
    Id3SegmentTaggingScheduleActionSettings& WithId3(Id3T&& value) { SetId3(std::forward<Id3T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Complete this parameter if you want to specify only the metadata, not the entire
     * frame. MediaLive will insert the metadata in a TXXX frame. Enter the value as
     * plain text. You can include standard MediaLive variable data such as the current
     * segment number.
     */
    inline const Aws::String& GetTag() const { return m_tag; }
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }
    template<typename TagT = Aws::String>
    void SetTag(TagT&& value) { m_tagHasBeenSet = true; m_tag = std::forward<TagT>(value); }
    template<typename TagT = Aws::String>
    Id3SegmentTaggingScheduleActionSettings& WithTag(TagT&& value) { SetTag(std::forward<TagT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id3;
    bool m_id3HasBeenSet = false;

    Aws::String m_tag;
    bool m_tagHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
