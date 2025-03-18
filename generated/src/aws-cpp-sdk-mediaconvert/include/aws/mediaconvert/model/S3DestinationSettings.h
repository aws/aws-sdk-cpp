/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/S3DestinationAccessControl.h>
#include <aws/mediaconvert/model/S3EncryptionSettings.h>
#include <aws/mediaconvert/model/S3StorageClass.h>
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
   * Settings associated with S3 destination<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/S3DestinationSettings">AWS
   * API Reference</a></p>
   */
  class S3DestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API S3DestinationSettings() = default;
    AWS_MEDIACONVERT_API S3DestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API S3DestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Optional. Have MediaConvert automatically apply Amazon S3 access control for the
     * outputs in this output group. When you don't use this setting, S3 automatically
     * applies the default access control list PRIVATE.
     */
    inline const S3DestinationAccessControl& GetAccessControl() const { return m_accessControl; }
    inline bool AccessControlHasBeenSet() const { return m_accessControlHasBeenSet; }
    template<typename AccessControlT = S3DestinationAccessControl>
    void SetAccessControl(AccessControlT&& value) { m_accessControlHasBeenSet = true; m_accessControl = std::forward<AccessControlT>(value); }
    template<typename AccessControlT = S3DestinationAccessControl>
    S3DestinationSettings& WithAccessControl(AccessControlT&& value) { SetAccessControl(std::forward<AccessControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline const S3EncryptionSettings& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = S3EncryptionSettings>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = S3EncryptionSettings>
    S3DestinationSettings& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the S3 storage class to use for this output. To use your destination's
     * default storage class: Keep the default value, Not set. For more information
     * about S3 storage classes, see
     * https://docs.aws.amazon.com/AmazonS3/latest/userguide/storage-class-intro.html
     */
    inline S3StorageClass GetStorageClass() const { return m_storageClass; }
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
    inline void SetStorageClass(S3StorageClass value) { m_storageClassHasBeenSet = true; m_storageClass = value; }
    inline S3DestinationSettings& WithStorageClass(S3StorageClass value) { SetStorageClass(value); return *this;}
    ///@}
  private:

    S3DestinationAccessControl m_accessControl;
    bool m_accessControlHasBeenSet = false;

    S3EncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet = false;

    S3StorageClass m_storageClass{S3StorageClass::NOT_SET};
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
