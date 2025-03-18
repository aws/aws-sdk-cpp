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
    AWS_MEDIALIVE_API Thumbnail() = default;
    AWS_MEDIALIVE_API Thumbnail(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Thumbnail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The binary data for the latest thumbnail.
     */
    inline const Aws::String& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = Aws::String>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = Aws::String>
    Thumbnail& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The content type for the latest thumbnail.
     */
    inline const Aws::String& GetContentType() const { return m_contentType; }
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
    template<typename ContentTypeT = Aws::String>
    void SetContentType(ContentTypeT&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::forward<ContentTypeT>(value); }
    template<typename ContentTypeT = Aws::String>
    Thumbnail& WithContentType(ContentTypeT&& value) { SetContentType(std::forward<ContentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Thumbnail Type
     */
    inline ThumbnailType GetThumbnailType() const { return m_thumbnailType; }
    inline bool ThumbnailTypeHasBeenSet() const { return m_thumbnailTypeHasBeenSet; }
    inline void SetThumbnailType(ThumbnailType value) { m_thumbnailTypeHasBeenSet = true; m_thumbnailType = value; }
    inline Thumbnail& WithThumbnailType(ThumbnailType value) { SetThumbnailType(value); return *this;}
    ///@}

    ///@{
    /**
     * Time stamp for the latest thumbnail.
     */
    inline const Aws::Utils::DateTime& GetTimeStamp() const { return m_timeStamp; }
    inline bool TimeStampHasBeenSet() const { return m_timeStampHasBeenSet; }
    template<typename TimeStampT = Aws::Utils::DateTime>
    void SetTimeStamp(TimeStampT&& value) { m_timeStampHasBeenSet = true; m_timeStamp = std::forward<TimeStampT>(value); }
    template<typename TimeStampT = Aws::Utils::DateTime>
    Thumbnail& WithTimeStamp(TimeStampT&& value) { SetTimeStamp(std::forward<TimeStampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_body;
    bool m_bodyHasBeenSet = false;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet = false;

    ThumbnailType m_thumbnailType{ThumbnailType::NOT_SET};
    bool m_thumbnailTypeHasBeenSet = false;

    Aws::Utils::DateTime m_timeStamp{};
    bool m_timeStampHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
