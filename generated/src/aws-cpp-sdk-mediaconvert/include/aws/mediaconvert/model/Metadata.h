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
   * Metadata about the file.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/Metadata">AWS
   * API Reference</a></p>
   */
  class Metadata
  {
  public:
    AWS_MEDIACONVERT_API Metadata();
    AWS_MEDIACONVERT_API Metadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Metadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The ETag of the file.
     */
    inline const Aws::String& GetETag() const{ return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    inline void SetETag(const Aws::String& value) { m_eTagHasBeenSet = true; m_eTag = value; }
    inline void SetETag(Aws::String&& value) { m_eTagHasBeenSet = true; m_eTag = std::move(value); }
    inline void SetETag(const char* value) { m_eTagHasBeenSet = true; m_eTag.assign(value); }
    inline Metadata& WithETag(const Aws::String& value) { SetETag(value); return *this;}
    inline Metadata& WithETag(Aws::String&& value) { SetETag(std::move(value)); return *this;}
    inline Metadata& WithETag(const char* value) { SetETag(value); return *this;}
    ///@}

    ///@{
    /**
     * The size of the file in bytes.
     */
    inline long long GetFileSize() const{ return m_fileSize; }
    inline bool FileSizeHasBeenSet() const { return m_fileSizeHasBeenSet; }
    inline void SetFileSize(long long value) { m_fileSizeHasBeenSet = true; m_fileSize = value; }
    inline Metadata& WithFileSize(long long value) { SetFileSize(value); return *this;}
    ///@}

    ///@{
    /**
     * The last modification time of the file.
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline Metadata& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline Metadata& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The MIME type of the file.
     */
    inline const Aws::String& GetMimeType() const{ return m_mimeType; }
    inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }
    inline void SetMimeType(const Aws::String& value) { m_mimeTypeHasBeenSet = true; m_mimeType = value; }
    inline void SetMimeType(Aws::String&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::move(value); }
    inline void SetMimeType(const char* value) { m_mimeTypeHasBeenSet = true; m_mimeType.assign(value); }
    inline Metadata& WithMimeType(const Aws::String& value) { SetMimeType(value); return *this;}
    inline Metadata& WithMimeType(Aws::String&& value) { SetMimeType(std::move(value)); return *this;}
    inline Metadata& WithMimeType(const char* value) { SetMimeType(value); return *this;}
    ///@}
  private:

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    long long m_fileSize;
    bool m_fileSizeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_mimeType;
    bool m_mimeTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
