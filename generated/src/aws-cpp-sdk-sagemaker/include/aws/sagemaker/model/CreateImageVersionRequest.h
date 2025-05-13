/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VendorGuidance.h>
#include <aws/sagemaker/model/JobType.h>
#include <aws/sagemaker/model/Processor.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateImageVersionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateImageVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImageVersion"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The registry path of the container image to use as the starting point for
     * this version. The path is an Amazon ECR URI in the following format:</p> <p>
     * <code>&lt;acct-id&gt;.dkr.ecr.&lt;region&gt;.amazonaws.com/&lt;repo-name[:tag]
     * or [@digest]&gt;</code> </p>
     */
    inline const Aws::String& GetBaseImage() const { return m_baseImage; }
    inline bool BaseImageHasBeenSet() const { return m_baseImageHasBeenSet; }
    template<typename BaseImageT = Aws::String>
    void SetBaseImage(BaseImageT&& value) { m_baseImageHasBeenSet = true; m_baseImage = std::forward<BaseImageT>(value); }
    template<typename BaseImageT = Aws::String>
    CreateImageVersionRequest& WithBaseImage(BaseImageT&& value) { SetBaseImage(std::forward<BaseImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID. If not specified, the Amazon Web Services CLI and Amazon Web
     * Services SDKs, such as the SDK for Python (Boto3), add a unique value to the
     * call.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateImageVersionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ImageName</code> of the <code>Image</code> to create a version
     * of.</p>
     */
    inline const Aws::String& GetImageName() const { return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    template<typename ImageNameT = Aws::String>
    void SetImageName(ImageNameT&& value) { m_imageNameHasBeenSet = true; m_imageName = std::forward<ImageNameT>(value); }
    template<typename ImageNameT = Aws::String>
    CreateImageVersionRequest& WithImageName(ImageNameT&& value) { SetImageName(std::forward<ImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of aliases created with the image version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAliases() const { return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    template<typename AliasesT = Aws::Vector<Aws::String>>
    void SetAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases = std::forward<AliasesT>(value); }
    template<typename AliasesT = Aws::Vector<Aws::String>>
    CreateImageVersionRequest& WithAliases(AliasesT&& value) { SetAliases(std::forward<AliasesT>(value)); return *this;}
    template<typename AliasesT = Aws::String>
    CreateImageVersionRequest& AddAliases(AliasesT&& value) { m_aliasesHasBeenSet = true; m_aliases.emplace_back(std::forward<AliasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The stability of the image version, specified by the maintainer.</p> <ul>
     * <li> <p> <code>NOT_PROVIDED</code>: The maintainers did not provide a status for
     * image version stability.</p> </li> <li> <p> <code>STABLE</code>: The image
     * version is stable.</p> </li> <li> <p> <code>TO_BE_ARCHIVED</code>: The image
     * version is set to be archived. Custom image versions that are set to be archived
     * are automatically archived after three months.</p> </li> <li> <p>
     * <code>ARCHIVED</code>: The image version is archived. Archived image versions
     * are not searchable and are no longer actively supported. </p> </li> </ul>
     */
    inline VendorGuidance GetVendorGuidance() const { return m_vendorGuidance; }
    inline bool VendorGuidanceHasBeenSet() const { return m_vendorGuidanceHasBeenSet; }
    inline void SetVendorGuidance(VendorGuidance value) { m_vendorGuidanceHasBeenSet = true; m_vendorGuidance = value; }
    inline CreateImageVersionRequest& WithVendorGuidance(VendorGuidance value) { SetVendorGuidance(value); return *this;}
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
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline CreateImageVersionRequest& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning framework vended in the image version.</p>
     */
    inline const Aws::String& GetMLFramework() const { return m_mLFramework; }
    inline bool MLFrameworkHasBeenSet() const { return m_mLFrameworkHasBeenSet; }
    template<typename MLFrameworkT = Aws::String>
    void SetMLFramework(MLFrameworkT&& value) { m_mLFrameworkHasBeenSet = true; m_mLFramework = std::forward<MLFrameworkT>(value); }
    template<typename MLFrameworkT = Aws::String>
    CreateImageVersionRequest& WithMLFramework(MLFrameworkT&& value) { SetMLFramework(std::forward<MLFrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported programming language and its version.</p>
     */
    inline const Aws::String& GetProgrammingLang() const { return m_programmingLang; }
    inline bool ProgrammingLangHasBeenSet() const { return m_programmingLangHasBeenSet; }
    template<typename ProgrammingLangT = Aws::String>
    void SetProgrammingLang(ProgrammingLangT&& value) { m_programmingLangHasBeenSet = true; m_programmingLang = std::forward<ProgrammingLangT>(value); }
    template<typename ProgrammingLangT = Aws::String>
    CreateImageVersionRequest& WithProgrammingLang(ProgrammingLangT&& value) { SetProgrammingLang(std::forward<ProgrammingLangT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates CPU or GPU compatibility.</p> <ul> <li> <p> <code>CPU</code>: The
     * image version is compatible with CPU.</p> </li> <li> <p> <code>GPU</code>: The
     * image version is compatible with GPU.</p> </li> </ul>
     */
    inline Processor GetProcessor() const { return m_processor; }
    inline bool ProcessorHasBeenSet() const { return m_processorHasBeenSet; }
    inline void SetProcessor(Processor value) { m_processorHasBeenSet = true; m_processor = value; }
    inline CreateImageVersionRequest& WithProcessor(Processor value) { SetProcessor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates Horovod compatibility.</p>
     */
    inline bool GetHorovod() const { return m_horovod; }
    inline bool HorovodHasBeenSet() const { return m_horovodHasBeenSet; }
    inline void SetHorovod(bool value) { m_horovodHasBeenSet = true; m_horovod = value; }
    inline CreateImageVersionRequest& WithHorovod(bool value) { SetHorovod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintainer description of the image version.</p>
     */
    inline const Aws::String& GetReleaseNotes() const { return m_releaseNotes; }
    inline bool ReleaseNotesHasBeenSet() const { return m_releaseNotesHasBeenSet; }
    template<typename ReleaseNotesT = Aws::String>
    void SetReleaseNotes(ReleaseNotesT&& value) { m_releaseNotesHasBeenSet = true; m_releaseNotes = std::forward<ReleaseNotesT>(value); }
    template<typename ReleaseNotesT = Aws::String>
    CreateImageVersionRequest& WithReleaseNotes(ReleaseNotesT&& value) { SetReleaseNotes(std::forward<ReleaseNotesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baseImage;
    bool m_baseImageHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_aliases;
    bool m_aliasesHasBeenSet = false;

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
