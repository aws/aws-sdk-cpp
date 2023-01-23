/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ImageVersionStatus.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A version of a SageMaker <code>Image</code>. A version represents an existing
   * container image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ImageVersion">AWS
   * API Reference</a></p>
   */
  class ImageVersion
  {
  public:
    AWS_SAGEMAKER_API ImageVersion();
    AWS_SAGEMAKER_API ImageVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ImageVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>When the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the version was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the version was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the version was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the version was created.</p>
     */
    inline ImageVersion& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the version was created.</p>
     */
    inline ImageVersion& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline ImageVersion& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline ImageVersion& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline ImageVersion& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The ARN of the image the version is based on.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }

    /**
     * <p>The ARN of the image the version is based on.</p>
     */
    inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }

    /**
     * <p>The ARN of the image the version is based on.</p>
     */
    inline void SetImageArn(const Aws::String& value) { m_imageArnHasBeenSet = true; m_imageArn = value; }

    /**
     * <p>The ARN of the image the version is based on.</p>
     */
    inline void SetImageArn(Aws::String&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::move(value); }

    /**
     * <p>The ARN of the image the version is based on.</p>
     */
    inline void SetImageArn(const char* value) { m_imageArnHasBeenSet = true; m_imageArn.assign(value); }

    /**
     * <p>The ARN of the image the version is based on.</p>
     */
    inline ImageVersion& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}

    /**
     * <p>The ARN of the image the version is based on.</p>
     */
    inline ImageVersion& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the image the version is based on.</p>
     */
    inline ImageVersion& WithImageArn(const char* value) { SetImageArn(value); return *this;}


    /**
     * <p>The ARN of the version.</p>
     */
    inline const Aws::String& GetImageVersionArn() const{ return m_imageVersionArn; }

    /**
     * <p>The ARN of the version.</p>
     */
    inline bool ImageVersionArnHasBeenSet() const { return m_imageVersionArnHasBeenSet; }

    /**
     * <p>The ARN of the version.</p>
     */
    inline void SetImageVersionArn(const Aws::String& value) { m_imageVersionArnHasBeenSet = true; m_imageVersionArn = value; }

    /**
     * <p>The ARN of the version.</p>
     */
    inline void SetImageVersionArn(Aws::String&& value) { m_imageVersionArnHasBeenSet = true; m_imageVersionArn = std::move(value); }

    /**
     * <p>The ARN of the version.</p>
     */
    inline void SetImageVersionArn(const char* value) { m_imageVersionArnHasBeenSet = true; m_imageVersionArn.assign(value); }

    /**
     * <p>The ARN of the version.</p>
     */
    inline ImageVersion& WithImageVersionArn(const Aws::String& value) { SetImageVersionArn(value); return *this;}

    /**
     * <p>The ARN of the version.</p>
     */
    inline ImageVersion& WithImageVersionArn(Aws::String&& value) { SetImageVersionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the version.</p>
     */
    inline ImageVersion& WithImageVersionArn(const char* value) { SetImageVersionArn(value); return *this;}


    /**
     * <p>The status of the version.</p>
     */
    inline const ImageVersionStatus& GetImageVersionStatus() const{ return m_imageVersionStatus; }

    /**
     * <p>The status of the version.</p>
     */
    inline bool ImageVersionStatusHasBeenSet() const { return m_imageVersionStatusHasBeenSet; }

    /**
     * <p>The status of the version.</p>
     */
    inline void SetImageVersionStatus(const ImageVersionStatus& value) { m_imageVersionStatusHasBeenSet = true; m_imageVersionStatus = value; }

    /**
     * <p>The status of the version.</p>
     */
    inline void SetImageVersionStatus(ImageVersionStatus&& value) { m_imageVersionStatusHasBeenSet = true; m_imageVersionStatus = std::move(value); }

    /**
     * <p>The status of the version.</p>
     */
    inline ImageVersion& WithImageVersionStatus(const ImageVersionStatus& value) { SetImageVersionStatus(value); return *this;}

    /**
     * <p>The status of the version.</p>
     */
    inline ImageVersion& WithImageVersionStatus(ImageVersionStatus&& value) { SetImageVersionStatus(std::move(value)); return *this;}


    /**
     * <p>When the version was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the version was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>When the version was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>When the version was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the version was last modified.</p>
     */
    inline ImageVersion& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the version was last modified.</p>
     */
    inline ImageVersion& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The version number.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version number.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version number.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version number.</p>
     */
    inline ImageVersion& WithVersion(int value) { SetVersion(value); return *this;}

  private:

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet = false;

    Aws::String m_imageVersionArn;
    bool m_imageVersionArnHasBeenSet = false;

    ImageVersionStatus m_imageVersionStatus;
    bool m_imageVersionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
