/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/socialmessaging/SocialMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SocialMessaging {
namespace Model {

/**
 * <p>Contains information for the S3 bucket that contains media
 * files.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/socialmessaging-2024-01-01/S3File">AWS
 * API Reference</a></p>
 */
class S3File {
 public:
  AWS_SOCIALMESSAGING_API S3File() = default;
  AWS_SOCIALMESSAGING_API S3File(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API S3File& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SOCIALMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The bucket name.</p>
   */
  inline const Aws::String& GetBucketName() const { return m_bucketName; }
  inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
  template <typename BucketNameT = Aws::String>
  void SetBucketName(BucketNameT&& value) {
    m_bucketNameHasBeenSet = true;
    m_bucketName = std::forward<BucketNameT>(value);
  }
  template <typename BucketNameT = Aws::String>
  S3File& WithBucketName(BucketNameT&& value) {
    SetBucketName(std::forward<BucketNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 key prefix that defines the storage location of your media files. The
   * prefix works like a folder path in S3, and is combined with the WhatsApp mediaId
   * to create the final file path.</p> <p>For example, if a media file's WhatsApp
   * mediaId is <code>123.ogg</code>, and the key is <code>audio/example.ogg</code>,
   * the final file path is <code>audio/example.ogg123.ogg</code>.</p> <p>For the
   * same mediaId, a key of <code>audio/</code> results in the file path
   * <code>audio/123.ogg</code>.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  S3File& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucketName;

  Aws::String m_key;
  bool m_bucketNameHasBeenSet = false;
  bool m_keyHasBeenSet = false;
};

}  // namespace Model
}  // namespace SocialMessaging
}  // namespace Aws
