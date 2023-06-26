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
   * Audio Hls Rendition Selection<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/AudioHlsRenditionSelection">AWS
   * API Reference</a></p>
   */
  class AudioHlsRenditionSelection
  {
  public:
    AWS_MEDIALIVE_API AudioHlsRenditionSelection();
    AWS_MEDIALIVE_API AudioHlsRenditionSelection(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API AudioHlsRenditionSelection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Specifies the GROUP-ID in the #EXT-X-MEDIA tag of the target HLS audio
     * rendition.
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * Specifies the GROUP-ID in the #EXT-X-MEDIA tag of the target HLS audio
     * rendition.
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * Specifies the GROUP-ID in the #EXT-X-MEDIA tag of the target HLS audio
     * rendition.
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * Specifies the GROUP-ID in the #EXT-X-MEDIA tag of the target HLS audio
     * rendition.
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * Specifies the GROUP-ID in the #EXT-X-MEDIA tag of the target HLS audio
     * rendition.
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * Specifies the GROUP-ID in the #EXT-X-MEDIA tag of the target HLS audio
     * rendition.
     */
    inline AudioHlsRenditionSelection& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * Specifies the GROUP-ID in the #EXT-X-MEDIA tag of the target HLS audio
     * rendition.
     */
    inline AudioHlsRenditionSelection& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * Specifies the GROUP-ID in the #EXT-X-MEDIA tag of the target HLS audio
     * rendition.
     */
    inline AudioHlsRenditionSelection& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * Specifies the NAME in the #EXT-X-MEDIA tag of the target HLS audio rendition.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Specifies the NAME in the #EXT-X-MEDIA tag of the target HLS audio rendition.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Specifies the NAME in the #EXT-X-MEDIA tag of the target HLS audio rendition.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Specifies the NAME in the #EXT-X-MEDIA tag of the target HLS audio rendition.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Specifies the NAME in the #EXT-X-MEDIA tag of the target HLS audio rendition.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Specifies the NAME in the #EXT-X-MEDIA tag of the target HLS audio rendition.
     */
    inline AudioHlsRenditionSelection& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Specifies the NAME in the #EXT-X-MEDIA tag of the target HLS audio rendition.
     */
    inline AudioHlsRenditionSelection& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Specifies the NAME in the #EXT-X-MEDIA tag of the target HLS audio rendition.
     */
    inline AudioHlsRenditionSelection& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
