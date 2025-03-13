/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Details about an image source, including its identifier and
   * format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ImageSourceDetails">AWS
   * API Reference</a></p>
   */
  class ImageSourceDetails
  {
  public:
    AWS_QBUSINESS_API ImageSourceDetails() = default;
    AWS_QBUSINESS_API ImageSourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ImageSourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the image file.</p>
     */
    inline const Aws::String& GetMediaId() const { return m_mediaId; }
    inline bool MediaIdHasBeenSet() const { return m_mediaIdHasBeenSet; }
    template<typename MediaIdT = Aws::String>
    void SetMediaId(MediaIdT&& value) { m_mediaIdHasBeenSet = true; m_mediaId = std::forward<MediaIdT>(value); }
    template<typename MediaIdT = Aws::String>
    ImageSourceDetails& WithMediaId(MediaIdT&& value) { SetMediaId(std::forward<MediaIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the image file.</p>
     */
    inline const Aws::String& GetMediaMimeType() const { return m_mediaMimeType; }
    inline bool MediaMimeTypeHasBeenSet() const { return m_mediaMimeTypeHasBeenSet; }
    template<typename MediaMimeTypeT = Aws::String>
    void SetMediaMimeType(MediaMimeTypeT&& value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType = std::forward<MediaMimeTypeT>(value); }
    template<typename MediaMimeTypeT = Aws::String>
    ImageSourceDetails& WithMediaMimeType(MediaMimeTypeT&& value) { SetMediaMimeType(std::forward<MediaMimeTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mediaId;
    bool m_mediaIdHasBeenSet = false;

    Aws::String m_mediaMimeType;
    bool m_mediaMimeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
