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
    AWS_NOTIFICATIONS_API MediaElement();
    AWS_NOTIFICATIONS_API MediaElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API MediaElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique ID for the media.</p>
     */
    inline const Aws::String& GetMediaId() const{ return m_mediaId; }
    inline bool MediaIdHasBeenSet() const { return m_mediaIdHasBeenSet; }
    inline void SetMediaId(const Aws::String& value) { m_mediaIdHasBeenSet = true; m_mediaId = value; }
    inline void SetMediaId(Aws::String&& value) { m_mediaIdHasBeenSet = true; m_mediaId = std::move(value); }
    inline void SetMediaId(const char* value) { m_mediaIdHasBeenSet = true; m_mediaId.assign(value); }
    inline MediaElement& WithMediaId(const Aws::String& value) { SetMediaId(value); return *this;}
    inline MediaElement& WithMediaId(Aws::String&& value) { SetMediaId(std::move(value)); return *this;}
    inline MediaElement& WithMediaId(const char* value) { SetMediaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of media.</p>
     */
    inline const MediaElementType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const MediaElementType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(MediaElementType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline MediaElement& WithType(const MediaElementType& value) { SetType(value); return *this;}
    inline MediaElement& WithType(MediaElementType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the media.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }
    inline MediaElement& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline MediaElement& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline MediaElement& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The caption of the media.</p>
     */
    inline const Aws::String& GetCaption() const{ return m_caption; }
    inline bool CaptionHasBeenSet() const { return m_captionHasBeenSet; }
    inline void SetCaption(const Aws::String& value) { m_captionHasBeenSet = true; m_caption = value; }
    inline void SetCaption(Aws::String&& value) { m_captionHasBeenSet = true; m_caption = std::move(value); }
    inline void SetCaption(const char* value) { m_captionHasBeenSet = true; m_caption.assign(value); }
    inline MediaElement& WithCaption(const Aws::String& value) { SetCaption(value); return *this;}
    inline MediaElement& WithCaption(Aws::String&& value) { SetCaption(std::move(value)); return *this;}
    inline MediaElement& WithCaption(const char* value) { SetCaption(value); return *this;}
    ///@}
  private:

    Aws::String m_mediaId;
    bool m_mediaIdHasBeenSet = false;

    MediaElementType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_caption;
    bool m_captionHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
