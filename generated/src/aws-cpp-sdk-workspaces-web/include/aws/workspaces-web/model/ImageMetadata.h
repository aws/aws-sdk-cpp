/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/MimeType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WorkSpacesWeb {
namespace Model {

/**
 * <p>Metadata information about an uploaded image file.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/ImageMetadata">AWS
 * API Reference</a></p>
 */
class ImageMetadata {
 public:
  AWS_WORKSPACESWEB_API ImageMetadata() = default;
  AWS_WORKSPACESWEB_API ImageMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API ImageMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The MIME type of the image.</p>
   */
  inline MimeType GetMimeType() const { return m_mimeType; }
  inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }
  inline void SetMimeType(MimeType value) {
    m_mimeTypeHasBeenSet = true;
    m_mimeType = value;
  }
  inline ImageMetadata& WithMimeType(MimeType value) {
    SetMimeType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file extension of the image.</p>
   */
  inline const Aws::String& GetFileExtension() const { return m_fileExtension; }
  inline bool FileExtensionHasBeenSet() const { return m_fileExtensionHasBeenSet; }
  template <typename FileExtensionT = Aws::String>
  void SetFileExtension(FileExtensionT&& value) {
    m_fileExtensionHasBeenSet = true;
    m_fileExtension = std::forward<FileExtensionT>(value);
  }
  template <typename FileExtensionT = Aws::String>
  ImageMetadata& WithFileExtension(FileExtensionT&& value) {
    SetFileExtension(std::forward<FileExtensionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the image was last uploaded.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUploadTimestamp() const { return m_lastUploadTimestamp; }
  inline bool LastUploadTimestampHasBeenSet() const { return m_lastUploadTimestampHasBeenSet; }
  template <typename LastUploadTimestampT = Aws::Utils::DateTime>
  void SetLastUploadTimestamp(LastUploadTimestampT&& value) {
    m_lastUploadTimestampHasBeenSet = true;
    m_lastUploadTimestamp = std::forward<LastUploadTimestampT>(value);
  }
  template <typename LastUploadTimestampT = Aws::Utils::DateTime>
  ImageMetadata& WithLastUploadTimestamp(LastUploadTimestampT&& value) {
    SetLastUploadTimestamp(std::forward<LastUploadTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  MimeType m_mimeType{MimeType::NOT_SET};

  Aws::String m_fileExtension;

  Aws::Utils::DateTime m_lastUploadTimestamp{};
  bool m_mimeTypeHasBeenSet = false;
  bool m_fileExtensionHasBeenSet = false;
  bool m_lastUploadTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
