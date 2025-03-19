/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/MediaElementType.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Describes a media element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/MediaElement">AWS
   * API Reference</a></p>
   */
  class MediaElement
  {
  public:
    AWS_NOTIFICATIONS_API MediaElement() = default;
    AWS_NOTIFICATIONS_API MediaElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API MediaElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the media.</p>
     */
    inline const Aws::String& GetMediaId() const { return m_mediaId; }
    inline bool MediaIdHasBeenSet() const { return m_mediaIdHasBeenSet; }
    template<typename MediaIdT = Aws::String>
    void SetMediaId(MediaIdT&& value) { m_mediaIdHasBeenSet = true; m_mediaId = std::forward<MediaIdT>(value); }
    template<typename MediaIdT = Aws::String>
    MediaElement& WithMediaId(MediaIdT&& value) { SetMediaId(std::forward<MediaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of media.</p>
     */
    inline MediaElementType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(MediaElementType value) { m_typeHasBeenSet = true; m_type = value; }
    inline MediaElement& WithType(MediaElementType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the media.</p>
     */
    inline const Aws::String& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    MediaElement& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The caption of the media.</p>
     */
    inline const Aws::String& GetCaption() const { return m_caption; }
    inline bool CaptionHasBeenSet() const { return m_captionHasBeenSet; }
    template<typename CaptionT = Aws::String>
    void SetCaption(CaptionT&& value) { m_captionHasBeenSet = true; m_caption = std::forward<CaptionT>(value); }
    template<typename CaptionT = Aws::String>
    MediaElement& WithCaption(CaptionT&& value) { SetCaption(std::forward<CaptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaId;
    bool m_mediaIdHasBeenSet = false;

    MediaElementType m_type{MediaElementType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_caption;
    bool m_captionHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
