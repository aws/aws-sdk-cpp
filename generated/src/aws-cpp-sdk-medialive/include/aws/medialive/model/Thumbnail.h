/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/ThumbnailType.h>
#include <aws/core/utils/DateTime.h>
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
   * Details of a single thumbnail<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Thumbnail">AWS
   * API Reference</a></p>
   */
  class Thumbnail
  {
  public:
    AWS_MEDIALIVE_API Thumbnail();
    AWS_MEDIALIVE_API Thumbnail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Thumbnail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The binary data for the latest thumbnail.
     */
    inline const Aws::String& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const Aws::String& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(Aws::String&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline void SetBody(const char* value) { m_bodyHasBeenSet = true; m_body.assign(value); }
    inline Thumbnail& WithBody(const Aws::String& value) { SetBody(value); return *this;}
    inline Thumbnail& WithBody(Aws::String&& value) { SetBody(std::move(value)); return *this;}
    inline Thumbnail& WithBody(const char* value) { SetBody(value); return *this;}
    ///@}

    ///@{
    /**
     * The content type for the latest thumbnail.
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }
    inline Thumbnail& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}
    inline Thumbnail& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}
    inline Thumbnail& WithContentType(const char* value) { SetContentType(value); return *this;}
    ///@}

    ///@{
    /**
     * Thumbnail Type
     */
    inline const ThumbnailType& GetThumbnailType() const{ return m_thumbnailType; }
    inline bool ThumbnailTypeHasBeenSet() const { return m_thumbnailTypeHasBeenSet; }
    inline void SetThumbnailType(const ThumbnailType& value) { m_thumbnailTypeHasBeenSet = true; m_thumbnailType = value; }
    inline void SetThumbnailType(ThumbnailType&& value) { m_thumbnailTypeHasBeenSet = true; m_thumbnailType = std::move(value); }
    inline Thumbnail& WithThumbnailType(const ThumbnailType& value) { SetThumbnailType(value); return *this;}
    inline Thumbnail& WithThumbnailType(ThumbnailType&& value) { SetThumbnailType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Time stamp for the latest thumbnail.
     */
    inline const Aws::Utils::DateTime& GetTimeStamp() const{ return m_timeStamp; }
    inline bool TimeStampHasBeenSet() const { return m_timeStampHasBeenSet; }
    inline void SetTimeStamp(const Aws::Utils::DateTime& value) { m_timeStampHasBeenSet = true; m_timeStamp = value; }
    inline void SetTimeStamp(Aws::Utils::DateTime&& value) { m_timeStampHasBeenSet = true; m_timeStamp = std::move(value); }
    inline Thumbnail& WithTimeStamp(const Aws::Utils::DateTime& value) { SetTimeStamp(value); return *this;}
    inline Thumbnail& WithTimeStamp(Aws::Utils::DateTime&& value) { SetTimeStamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    ThumbnailType m_thumbnailType;
    bool m_thumbnailTypeHasBeenSet = false;

    Aws::Utils::DateTime m_timeStamp;
    bool m_timeStampHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
