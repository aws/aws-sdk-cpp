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
    AWS_QBUSINESS_API ImageSourceDetails();
    AWS_QBUSINESS_API ImageSourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ImageSourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the image file.</p>
     */
    inline const Aws::String& GetMediaId() const{ return m_mediaId; }
    inline bool MediaIdHasBeenSet() const { return m_mediaIdHasBeenSet; }
    inline void SetMediaId(const Aws::String& value) { m_mediaIdHasBeenSet = true; m_mediaId = value; }
    inline void SetMediaId(Aws::String&& value) { m_mediaIdHasBeenSet = true; m_mediaId = std::move(value); }
    inline void SetMediaId(const char* value) { m_mediaIdHasBeenSet = true; m_mediaId.assign(value); }
    inline ImageSourceDetails& WithMediaId(const Aws::String& value) { SetMediaId(value); return *this;}
    inline ImageSourceDetails& WithMediaId(Aws::String&& value) { SetMediaId(std::move(value)); return *this;}
    inline ImageSourceDetails& WithMediaId(const char* value) { SetMediaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The MIME type of the image file.</p>
     */
    inline const Aws::String& GetMediaMimeType() const{ return m_mediaMimeType; }
    inline bool MediaMimeTypeHasBeenSet() const { return m_mediaMimeTypeHasBeenSet; }
    inline void SetMediaMimeType(const Aws::String& value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType = value; }
    inline void SetMediaMimeType(Aws::String&& value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType = std::move(value); }
    inline void SetMediaMimeType(const char* value) { m_mediaMimeTypeHasBeenSet = true; m_mediaMimeType.assign(value); }
    inline ImageSourceDetails& WithMediaMimeType(const Aws::String& value) { SetMediaMimeType(value); return *this;}
    inline ImageSourceDetails& WithMediaMimeType(Aws::String&& value) { SetMediaMimeType(std::move(value)); return *this;}
    inline ImageSourceDetails& WithMediaMimeType(const char* value) { SetMediaMimeType(value); return *this;}
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
