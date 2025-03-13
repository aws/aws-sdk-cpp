/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ImageVersionStatus.h>
#include <aws/sagemaker/model/VendorGuidance.h>
#include <aws/sagemaker/model/JobType.h>
#include <aws/sagemaker/model/Processor.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DescribeImageVersionResult
  {
  public:
    AWS_SAGEMAKER_API DescribeImageVersionResult() = default;
    AWS_SAGEMAKER_API DescribeImageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeImageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry path of the container image on which this image version is
     * based.</p>
     */
    inline const Aws::String& GetBaseImage() const { return m_baseImage; }
    template<typename BaseImageT = Aws::String>
    void SetBaseImage(BaseImageT&& value) { m_baseImageHasBeenSet = true; m_baseImage = std::forward<BaseImageT>(value); }
    template<typename BaseImageT = Aws::String>
    DescribeImageVersionResult& WithBaseImage(BaseImageT&& value) { SetBaseImage(std::forward<BaseImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The registry path of the container image that contains this image
     * version.</p>
     */
    inline const Aws::String& GetContainerImage() const { return m_containerImage; }
    template<typename ContainerImageT = Aws::String>
    void SetContainerImage(ContainerImageT&& value) { m_containerImageHasBeenSet = true; m_containerImage = std::forward<ContainerImageT>(value); }
    template<typename ContainerImageT = Aws::String>
    DescribeImageVersionResult& WithContainerImage(ContainerImageT&& value) { SetContainerImage(std::forward<ContainerImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeImageVersionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a create or delete operation fails, the reason for the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeImageVersionResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image the version is based on.</p>
     */
    inline const Aws::String& GetImageArn() const { return m_imageArn; }
    template<typename ImageArnT = Aws::String>
    void SetImageArn(ImageArnT&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::forward<ImageArnT>(value); }
    template<typename ImageArnT = Aws::String>
    DescribeImageVersionResult& WithImageArn(ImageArnT&& value) { SetImageArn(std::forward<ImageArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the version.</p>
     */
    inline const Aws::String& GetImageVersionArn() const { return m_imageVersionArn; }
    template<typename ImageVersionArnT = Aws::String>
    void SetImageVersionArn(ImageVersionArnT&& value) { m_imageVersionArnHasBeenSet = true; m_imageVersionArn = std::forward<ImageVersionArnT>(value); }
    template<typename ImageVersionArnT = Aws::String>
    DescribeImageVersionResult& WithImageVersionArn(ImageVersionArnT&& value) { SetImageVersionArn(std::forward<ImageVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the version.</p>
     */
    inline ImageVersionStatus GetImageVersionStatus() const { return m_imageVersionStatus; }
    inline void SetImageVersionStatus(ImageVersionStatus value) { m_imageVersionStatusHasBeenSet = true; m_imageVersionStatus = value; }
    inline DescribeImageVersionResult& WithImageVersionStatus(ImageVersionStatus value) { SetImageVersionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the version was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeImageVersionResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number.</p>
     */
    inline int GetVersion() const { return m_version; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline DescribeImageVersionResult& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The stability of the image version specified by the maintainer.</p> <ul> <li>
     * <p> <code>NOT_PROVIDED</code>: The maintainers did not provide a status for
     * image version stability.</p> </li> <li> <p> <code>STABLE</code>: The image
     * version is stable.</p> </li> <li> <p> <code>TO_BE_ARCHIVED</code>: The image
     * version is set to be archived. Custom image versions that are set to be archived
     * are automatically archived after three months.</p> </li> <li> <p>
     * <code>ARCHIVED</code>: The image version is archived. Archived image versions
     * are not searchable and are no longer actively supported. </p> </li> </ul>
     */
    inline VendorGuidance GetVendorGuidance() const { return m_vendorGuidance; }
    inline void SetVendorGuidance(VendorGuidance value) { m_vendorGuidanceHasBeenSet = true; m_vendorGuidance = value; }
    inline DescribeImageVersionResult& WithVendorGuidance(VendorGuidance value) { SetVendorGuidance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates SageMaker AI job type compatibility.</p> <ul> <li> <p>
     * <code>TRAINING</code>: The image version is compatible with SageMaker AI
     * training jobs.</p> </li> <li> <p> <code>INFERENCE</code>: The image version is
     * compatible with SageMaker AI inference jobs.</p> </li> <li> <p>
     * <code>NOTEBOOK_KERNEL</code>: The image version is compatible with SageMaker AI
     * notebook kernels.</p> </li> </ul>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline DescribeImageVersionResult& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning framework vended in the image version.</p>
     */
    inline const Aws::String& GetMLFramework() const { return m_mLFramework; }
    template<typename MLFrameworkT = Aws::String>
    void SetMLFramework(MLFrameworkT&& value) { m_mLFrameworkHasBeenSet = true; m_mLFramework = std::forward<MLFrameworkT>(value); }
    template<typename MLFrameworkT = Aws::String>
    DescribeImageVersionResult& WithMLFramework(MLFrameworkT&& value) { SetMLFramework(std::forward<MLFrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported programming language and its version.</p>
     */
    inline const Aws::String& GetProgrammingLang() const { return m_programmingLang; }
    template<typename ProgrammingLangT = Aws::String>
    void SetProgrammingLang(ProgrammingLangT&& value) { m_programmingLangHasBeenSet = true; m_programmingLang = std::forward<ProgrammingLangT>(value); }
    template<typename ProgrammingLangT = Aws::String>
    DescribeImageVersionResult& WithProgrammingLang(ProgrammingLangT&& value) { SetProgrammingLang(std::forward<ProgrammingLangT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates CPU or GPU compatibility.</p> <ul> <li> <p> <code>CPU</code>: The
     * image version is compatible with CPU.</p> </li> <li> <p> <code>GPU</code>: The
     * image version is compatible with GPU.</p> </li> </ul>
     */
    inline Processor GetProcessor() const { return m_processor; }
    inline void SetProcessor(Processor value) { m_processorHasBeenSet = true; m_processor = value; }
    inline DescribeImageVersionResult& WithProcessor(Processor value) { SetProcessor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates Horovod compatibility.</p>
     */
    inline bool GetHorovod() const { return m_horovod; }
    inline void SetHorovod(bool value) { m_horovodHasBeenSet = true; m_horovod = value; }
    inline DescribeImageVersionResult& WithHorovod(bool value) { SetHorovod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintainer description of the image version.</p>
     */
    inline const Aws::String& GetReleaseNotes() const { return m_releaseNotes; }
    template<typename ReleaseNotesT = Aws::String>
    void SetReleaseNotes(ReleaseNotesT&& value) { m_releaseNotesHasBeenSet = true; m_releaseNotes = std::forward<ReleaseNotesT>(value); }
    template<typename ReleaseNotesT = Aws::String>
    DescribeImageVersionResult& WithReleaseNotes(ReleaseNotesT&& value) { SetReleaseNotes(std::forward<ReleaseNotesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeImageVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baseImage;
    bool m_baseImageHasBeenSet = false;

    Aws::String m_containerImage;
    bool m_containerImageHasBeenSet = false;

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

    VendorGuidance m_vendorGuidance{VendorGuidance::NOT_SET};
    bool m_vendorGuidanceHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_mLFramework;
    bool m_mLFrameworkHasBeenSet = false;

    Aws::String m_programmingLang;
    bool m_programmingLangHasBeenSet = false;

    Processor m_processor{Processor::NOT_SET};
    bool m_processorHasBeenSet = false;

    bool m_horovod{false};
    bool m_horovodHasBeenSet = false;

    Aws::String m_releaseNotes;
    bool m_releaseNotesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
