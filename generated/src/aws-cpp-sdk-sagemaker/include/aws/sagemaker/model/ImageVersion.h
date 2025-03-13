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
   * <p>A version of a SageMaker AI <code>Image</code>. A version represents an
   * existing container image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ImageVersion">AWS
   * API Reference</a></p>
   */
  class ImageVersion
  {
  public:
    AWS_SAGEMAKER_API ImageVersion() = default;
    AWS_SAGEMAKER_API ImageVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ImageVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>When the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ImageVersion& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    ImageVersion& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image the version is based on.</p>
     */
    inline const Aws::String& GetImageArn() const { return m_imageArn; }
    inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
    template<typename ImageArnT = Aws::String>
    void SetImageArn(ImageArnT&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::forward<ImageArnT>(value); }
    template<typename ImageArnT = Aws::String>
    ImageVersion& WithImageArn(ImageArnT&& value) { SetImageArn(std::forward<ImageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the version.</p>
     */
    inline const Aws::String& GetImageVersionArn() const { return m_imageVersionArn; }
    inline bool ImageVersionArnHasBeenSet() const { return m_imageVersionArnHasBeenSet; }
    template<typename ImageVersionArnT = Aws::String>
    void SetImageVersionArn(ImageVersionArnT&& value) { m_imageVersionArnHasBeenSet = true; m_imageVersionArn = std::forward<ImageVersionArnT>(value); }
    template<typename ImageVersionArnT = Aws::String>
    ImageVersion& WithImageVersionArn(ImageVersionArnT&& value) { SetImageVersionArn(std::forward<ImageVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the version.</p>
     */
    inline ImageVersionStatus GetImageVersionStatus() const { return m_imageVersionStatus; }
    inline bool ImageVersionStatusHasBeenSet() const { return m_imageVersionStatusHasBeenSet; }
    inline void SetImageVersionStatus(ImageVersionStatus value) { m_imageVersionStatusHasBeenSet = true; m_imageVersionStatus = value; }
    inline ImageVersion& WithImageVersionStatus(ImageVersionStatus value) { SetImageVersionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the version was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ImageVersion& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number.</p>
     */
    inline int GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline ImageVersion& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet = false;

    Aws::String m_imageVersionArn;
    bool m_imageVersionArnHasBeenSet = false;

    ImageVersionStatus m_imageVersionStatus{ImageVersionStatus::NOT_SET};
    bool m_imageVersionStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    int m_version{0};
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
