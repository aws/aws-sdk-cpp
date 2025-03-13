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

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateImageVersionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateImageVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateImageVersion"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetImageName() const { return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    template<typename ImageNameT = Aws::String>
    void SetImageName(ImageNameT&& value) { m_imageNameHasBeenSet = true; m_imageName = std::forward<ImageNameT>(value); }
    template<typename ImageNameT = Aws::String>
    UpdateImageVersionRequest& WithImageName(ImageNameT&& value) { SetImageName(std::forward<ImageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the image version.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    UpdateImageVersionRequest& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the image.</p>
     */
    inline int GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline UpdateImageVersionRequest& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of aliases to add.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAliasesToAdd() const { return m_aliasesToAdd; }
    inline bool AliasesToAddHasBeenSet() const { return m_aliasesToAddHasBeenSet; }
    template<typename AliasesToAddT = Aws::Vector<Aws::String>>
    void SetAliasesToAdd(AliasesToAddT&& value) { m_aliasesToAddHasBeenSet = true; m_aliasesToAdd = std::forward<AliasesToAddT>(value); }
    template<typename AliasesToAddT = Aws::Vector<Aws::String>>
    UpdateImageVersionRequest& WithAliasesToAdd(AliasesToAddT&& value) { SetAliasesToAdd(std::forward<AliasesToAddT>(value)); return *this;}
    template<typename AliasesToAddT = Aws::String>
    UpdateImageVersionRequest& AddAliasesToAdd(AliasesToAddT&& value) { m_aliasesToAddHasBeenSet = true; m_aliasesToAdd.emplace_back(std::forward<AliasesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of aliases to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAliasesToDelete() const { return m_aliasesToDelete; }
    inline bool AliasesToDeleteHasBeenSet() const { return m_aliasesToDeleteHasBeenSet; }
    template<typename AliasesToDeleteT = Aws::Vector<Aws::String>>
    void SetAliasesToDelete(AliasesToDeleteT&& value) { m_aliasesToDeleteHasBeenSet = true; m_aliasesToDelete = std::forward<AliasesToDeleteT>(value); }
    template<typename AliasesToDeleteT = Aws::Vector<Aws::String>>
    UpdateImageVersionRequest& WithAliasesToDelete(AliasesToDeleteT&& value) { SetAliasesToDelete(std::forward<AliasesToDeleteT>(value)); return *this;}
    template<typename AliasesToDeleteT = Aws::String>
    UpdateImageVersionRequest& AddAliasesToDelete(AliasesToDeleteT&& value) { m_aliasesToDeleteHasBeenSet = true; m_aliasesToDelete.emplace_back(std::forward<AliasesToDeleteT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The availability of the image version specified by the maintainer.</p> <ul>
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
    inline UpdateImageVersionRequest& WithVendorGuidance(VendorGuidance value) { SetVendorGuidance(value); return *this;}
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
    inline UpdateImageVersionRequest& WithJobType(JobType value) { SetJobType(value); return *this;}
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
    UpdateImageVersionRequest& WithMLFramework(MLFrameworkT&& value) { SetMLFramework(std::forward<MLFrameworkT>(value)); return *this;}
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
    UpdateImageVersionRequest& WithProgrammingLang(ProgrammingLangT&& value) { SetProgrammingLang(std::forward<ProgrammingLangT>(value)); return *this;}
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
    inline UpdateImageVersionRequest& WithProcessor(Processor value) { SetProcessor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates Horovod compatibility.</p>
     */
    inline bool GetHorovod() const { return m_horovod; }
    inline bool HorovodHasBeenSet() const { return m_horovodHasBeenSet; }
    inline void SetHorovod(bool value) { m_horovodHasBeenSet = true; m_horovod = value; }
    inline UpdateImageVersionRequest& WithHorovod(bool value) { SetHorovod(value); return *this;}
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
    UpdateImageVersionRequest& WithReleaseNotes(ReleaseNotesT&& value) { SetReleaseNotes(std::forward<ReleaseNotesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    int m_version{0};
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_aliasesToAdd;
    bool m_aliasesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_aliasesToDelete;
    bool m_aliasesToDeleteHasBeenSet = false;

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
