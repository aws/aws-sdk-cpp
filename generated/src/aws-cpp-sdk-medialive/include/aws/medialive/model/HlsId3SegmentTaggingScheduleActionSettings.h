﻿/**
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
   * Settings for the action to insert ID3 metadata in every segment, in HLS output
   * groups.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/HlsId3SegmentTaggingScheduleActionSettings">AWS
   * API Reference</a></p>
   */
  class HlsId3SegmentTaggingScheduleActionSettings
  {
  public:
    AWS_MEDIALIVE_API HlsId3SegmentTaggingScheduleActionSettings();
    AWS_MEDIALIVE_API HlsId3SegmentTaggingScheduleActionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API HlsId3SegmentTaggingScheduleActionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Complete this parameter if you want to specify only the metadata, not the entire
     * frame. MediaLive will insert the metadata in a TXXX frame. Enter the value as
     * plain text. You can include standard MediaLive variable data such as the current
     * segment number.
     */
    inline const Aws::String& GetTag() const{ return m_tag; }
    inline bool TagHasBeenSet() const { return m_tagHasBeenSet; }
    inline void SetTag(const Aws::String& value) { m_tagHasBeenSet = true; m_tag = value; }
    inline void SetTag(Aws::String&& value) { m_tagHasBeenSet = true; m_tag = std::move(value); }
    inline void SetTag(const char* value) { m_tagHasBeenSet = true; m_tag.assign(value); }
    inline HlsId3SegmentTaggingScheduleActionSettings& WithTag(const Aws::String& value) { SetTag(value); return *this;}
    inline HlsId3SegmentTaggingScheduleActionSettings& WithTag(Aws::String&& value) { SetTag(std::move(value)); return *this;}
    inline HlsId3SegmentTaggingScheduleActionSettings& WithTag(const char* value) { SetTag(value); return *this;}
    ///@}

    ///@{
    /**
     * Complete this parameter if you want to specify the entire ID3 metadata. Enter a
     * base64 string that contains one or more fully formed ID3 tags, according to the
     * ID3 specification: http://id3.org/id3v2.4.0-structure
     */
    inline const Aws::String& GetId3() const{ return m_id3; }
    inline bool Id3HasBeenSet() const { return m_id3HasBeenSet; }
    inline void SetId3(const Aws::String& value) { m_id3HasBeenSet = true; m_id3 = value; }
    inline void SetId3(Aws::String&& value) { m_id3HasBeenSet = true; m_id3 = std::move(value); }
    inline void SetId3(const char* value) { m_id3HasBeenSet = true; m_id3.assign(value); }
    inline HlsId3SegmentTaggingScheduleActionSettings& WithId3(const Aws::String& value) { SetId3(value); return *this;}
    inline HlsId3SegmentTaggingScheduleActionSettings& WithId3(Aws::String&& value) { SetId3(std::move(value)); return *this;}
    inline HlsId3SegmentTaggingScheduleActionSettings& WithId3(const char* value) { SetId3(value); return *this;}
    ///@}
  private:

    Aws::String m_tag;
    bool m_tagHasBeenSet = false;

    Aws::String m_id3;
    bool m_id3HasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
