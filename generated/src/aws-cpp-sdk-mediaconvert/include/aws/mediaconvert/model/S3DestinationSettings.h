/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/S3DestinationAccessControl.h>
#include <aws/mediaconvert/model/S3EncryptionSettings.h>
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
    AWS_MEDIACONVERT_API S3DestinationSettings();
    AWS_MEDIACONVERT_API S3DestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API S3DestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Optional. Have MediaConvert automatically apply Amazon S3 access control for the
     * outputs in this output group. When you don't use this setting, S3 automatically
     * applies the default access control list PRIVATE.
     */
    inline const S3DestinationAccessControl& GetAccessControl() const{ return m_accessControl; }

    /**
     * Optional. Have MediaConvert automatically apply Amazon S3 access control for the
     * outputs in this output group. When you don't use this setting, S3 automatically
     * applies the default access control list PRIVATE.
     */
    inline bool AccessControlHasBeenSet() const { return m_accessControlHasBeenSet; }

    /**
     * Optional. Have MediaConvert automatically apply Amazon S3 access control for the
     * outputs in this output group. When you don't use this setting, S3 automatically
     * applies the default access control list PRIVATE.
     */
    inline void SetAccessControl(const S3DestinationAccessControl& value) { m_accessControlHasBeenSet = true; m_accessControl = value; }

    /**
     * Optional. Have MediaConvert automatically apply Amazon S3 access control for the
     * outputs in this output group. When you don't use this setting, S3 automatically
     * applies the default access control list PRIVATE.
     */
    inline void SetAccessControl(S3DestinationAccessControl&& value) { m_accessControlHasBeenSet = true; m_accessControl = std::move(value); }

    /**
     * Optional. Have MediaConvert automatically apply Amazon S3 access control for the
     * outputs in this output group. When you don't use this setting, S3 automatically
     * applies the default access control list PRIVATE.
     */
    inline S3DestinationSettings& WithAccessControl(const S3DestinationAccessControl& value) { SetAccessControl(value); return *this;}

    /**
     * Optional. Have MediaConvert automatically apply Amazon S3 access control for the
     * outputs in this output group. When you don't use this setting, S3 automatically
     * applies the default access control list PRIVATE.
     */
    inline S3DestinationSettings& WithAccessControl(S3DestinationAccessControl&& value) { SetAccessControl(std::move(value)); return *this;}


    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline const S3EncryptionSettings& GetEncryption() const{ return m_encryption; }

    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }

    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline void SetEncryption(const S3EncryptionSettings& value) { m_encryptionHasBeenSet = true; m_encryption = value; }

    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline void SetEncryption(S3EncryptionSettings&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }

    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline S3DestinationSettings& WithEncryption(const S3EncryptionSettings& value) { SetEncryption(value); return *this;}

    /**
     * Settings for how your job outputs are encrypted as they are uploaded to Amazon
     * S3.
     */
    inline S3DestinationSettings& WithEncryption(S3EncryptionSettings&& value) { SetEncryption(std::move(value)); return *this;}

  private:

    S3DestinationAccessControl m_accessControl;
    bool m_accessControlHasBeenSet = false;

    S3EncryptionSettings m_encryption;
    bool m_encryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
