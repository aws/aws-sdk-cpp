/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

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
 * <p>The input for a wallpaper image. Provide the image as either a binary image
 * file or an S3 URI. Maximum 5 MB in JPEG or PNG format.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/WallpaperImageInput">AWS
 * API Reference</a></p>
 */
class WallpaperImageInput {
 public:
  AWS_WORKSPACESWEB_API WallpaperImageInput() = default;
  AWS_WORKSPACESWEB_API WallpaperImageInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API WallpaperImageInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The image provided as a binary image file.</p>
   */
  inline const Aws::Utils::ByteBuffer& GetBlob() const { return m_blob; }
  inline bool BlobHasBeenSet() const { return m_blobHasBeenSet; }
  template <typename BlobT = Aws::Utils::ByteBuffer>
  void SetBlob(BlobT&& value) {
    m_blobHasBeenSet = true;
    m_blob = std::forward<BlobT>(value);
  }
  template <typename BlobT = Aws::Utils::ByteBuffer>
  WallpaperImageInput& WithBlob(BlobT&& value) {
    SetBlob(std::forward<BlobT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 URI pointing to the image file. The URI must use the format
   * <code>s3://bucket-name/key-name</code>. You must have read access to the S3
   * object.</p>
   */
  inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
  inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
  template <typename S3UriT = Aws::String>
  void SetS3Uri(S3UriT&& value) {
    m_s3UriHasBeenSet = true;
    m_s3Uri = std::forward<S3UriT>(value);
  }
  template <typename S3UriT = Aws::String>
  WallpaperImageInput& WithS3Uri(S3UriT&& value) {
    SetS3Uri(std::forward<S3UriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::ByteBuffer m_blob{};

  Aws::String m_s3Uri;
  bool m_blobHasBeenSet = false;
  bool m_s3UriHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
