/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Metadata and other file information.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Metadata">AWS
   * API Reference</a></p>
   */
  class Metadata
  {
  public:
    AWS_MEDIACONVERT_API Metadata() = default;
    AWS_MEDIACONVERT_API Metadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The entity tag (ETag) of the file.
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    Metadata& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The size of the media file, in bytes.
     */
    inline long long GetFileSize() const { return m_fileSize; }
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline Metadata& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * The last modification timestamp of the media file, in Unix time.
     */
    inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::Utils::DateTime>
    Metadata& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The MIME type of the media file.
     */
    inline const Aws::String& GetMimeType() const { return m_mimeType; }
    inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }
    template<typename MimeTypeT = Aws::String>
    void SetMimeType(MimeTypeT&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::forward<MimeTypeT>(value); }
    template<typename MimeTypeT = Aws::String>
    Metadata& WithMimeType(MimeTypeT&& value) { SetMimeType(std::forward<MimeTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    long long m_fileSize{0};
    bool m_fileSizeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified{};
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_mimeType;
    bool m_mimeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
