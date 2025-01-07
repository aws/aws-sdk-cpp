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
    AWS_SAGEMAKER_API UpdateImageVersionRequest();

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
    inline const Aws::String& GetImageName() const{ return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }
    inline UpdateImageVersionRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}
    inline UpdateImageVersionRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}
    inline UpdateImageVersionRequest& WithImageName(const char* value) { SetImageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the image version.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline UpdateImageVersionRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline UpdateImageVersionRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline UpdateImageVersionRequest& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the image.</p>
     */
    inline int GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }
    inline UpdateImageVersionRequest& WithVersion(int value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of aliases to add.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAliasesToAdd() const{ return m_aliasesToAdd; }
    inline bool AliasesToAddHasBeenSet() const { return m_aliasesToAddHasBeenSet; }
    inline void SetAliasesToAdd(const Aws::Vector<Aws::String>& value) { m_aliasesToAddHasBeenSet = true; m_aliasesToAdd = value; }
    inline void SetAliasesToAdd(Aws::Vector<Aws::String>&& value) { m_aliasesToAddHasBeenSet = true; m_aliasesToAdd = std::move(value); }
    inline UpdateImageVersionRequest& WithAliasesToAdd(const Aws::Vector<Aws::String>& value) { SetAliasesToAdd(value); return *this;}
    inline UpdateImageVersionRequest& WithAliasesToAdd(Aws::Vector<Aws::String>&& value) { SetAliasesToAdd(std::move(value)); return *this;}
    inline UpdateImageVersionRequest& AddAliasesToAdd(const Aws::String& value) { m_aliasesToAddHasBeenSet = true; m_aliasesToAdd.push_back(value); return *this; }
    inline UpdateImageVersionRequest& AddAliasesToAdd(Aws::String&& value) { m_aliasesToAddHasBeenSet = true; m_aliasesToAdd.push_back(std::move(value)); return *this; }
    inline UpdateImageVersionRequest& AddAliasesToAdd(const char* value) { m_aliasesToAddHasBeenSet = true; m_aliasesToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of aliases to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAliasesToDelete() const{ return m_aliasesToDelete; }
    inline bool AliasesToDeleteHasBeenSet() const { return m_aliasesToDeleteHasBeenSet; }
    inline void SetAliasesToDelete(const Aws::Vector<Aws::String>& value) { m_aliasesToDeleteHasBeenSet = true; m_aliasesToDelete = value; }
    inline void SetAliasesToDelete(Aws::Vector<Aws::String>&& value) { m_aliasesToDeleteHasBeenSet = true; m_aliasesToDelete = std::move(value); }
    inline UpdateImageVersionRequest& WithAliasesToDelete(const Aws::Vector<Aws::String>& value) { SetAliasesToDelete(value); return *this;}
    inline UpdateImageVersionRequest& WithAliasesToDelete(Aws::Vector<Aws::String>&& value) { SetAliasesToDelete(std::move(value)); return *this;}
    inline UpdateImageVersionRequest& AddAliasesToDelete(const Aws::String& value) { m_aliasesToDeleteHasBeenSet = true; m_aliasesToDelete.push_back(value); return *this; }
    inline UpdateImageVersionRequest& AddAliasesToDelete(Aws::String&& value) { m_aliasesToDeleteHasBeenSet = true; m_aliasesToDelete.push_back(std::move(value)); return *this; }
    inline UpdateImageVersionRequest& AddAliasesToDelete(const char* value) { m_aliasesToDeleteHasBeenSet = true; m_aliasesToDelete.push_back(value); return *this; }
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
    inline const VendorGuidance& GetVendorGuidance() const{ return m_vendorGuidance; }
    inline bool VendorGuidanceHasBeenSet() const { return m_vendorGuidanceHasBeenSet; }
    inline void SetVendorGuidance(const VendorGuidance& value) { m_vendorGuidanceHasBeenSet = true; m_vendorGuidance = value; }
    inline void SetVendorGuidance(VendorGuidance&& value) { m_vendorGuidanceHasBeenSet = true; m_vendorGuidance = std::move(value); }
    inline UpdateImageVersionRequest& WithVendorGuidance(const VendorGuidance& value) { SetVendorGuidance(value); return *this;}
    inline UpdateImageVersionRequest& WithVendorGuidance(VendorGuidance&& value) { SetVendorGuidance(std::move(value)); return *this;}
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
    inline const JobType& GetJobType() const{ return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }
    inline UpdateImageVersionRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline UpdateImageVersionRequest& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning framework vended in the image version.</p>
     */
    inline const Aws::String& GetMLFramework() const{ return m_mLFramework; }
    inline bool MLFrameworkHasBeenSet() const { return m_mLFrameworkHasBeenSet; }
    inline void SetMLFramework(const Aws::String& value) { m_mLFrameworkHasBeenSet = true; m_mLFramework = value; }
    inline void SetMLFramework(Aws::String&& value) { m_mLFrameworkHasBeenSet = true; m_mLFramework = std::move(value); }
    inline void SetMLFramework(const char* value) { m_mLFrameworkHasBeenSet = true; m_mLFramework.assign(value); }
    inline UpdateImageVersionRequest& WithMLFramework(const Aws::String& value) { SetMLFramework(value); return *this;}
    inline UpdateImageVersionRequest& WithMLFramework(Aws::String&& value) { SetMLFramework(std::move(value)); return *this;}
    inline UpdateImageVersionRequest& WithMLFramework(const char* value) { SetMLFramework(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported programming language and its version.</p>
     */
    inline const Aws::String& GetProgrammingLang() const{ return m_programmingLang; }
    inline bool ProgrammingLangHasBeenSet() const { return m_programmingLangHasBeenSet; }
    inline void SetProgrammingLang(const Aws::String& value) { m_programmingLangHasBeenSet = true; m_programmingLang = value; }
    inline void SetProgrammingLang(Aws::String&& value) { m_programmingLangHasBeenSet = true; m_programmingLang = std::move(value); }
    inline void SetProgrammingLang(const char* value) { m_programmingLangHasBeenSet = true; m_programmingLang.assign(value); }
    inline UpdateImageVersionRequest& WithProgrammingLang(const Aws::String& value) { SetProgrammingLang(value); return *this;}
    inline UpdateImageVersionRequest& WithProgrammingLang(Aws::String&& value) { SetProgrammingLang(std::move(value)); return *this;}
    inline UpdateImageVersionRequest& WithProgrammingLang(const char* value) { SetProgrammingLang(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates CPU or GPU compatibility.</p> <ul> <li> <p> <code>CPU</code>: The
     * image version is compatible with CPU.</p> </li> <li> <p> <code>GPU</code>: The
     * image version is compatible with GPU.</p> </li> </ul>
     */
    inline const Processor& GetProcessor() const{ return m_processor; }
    inline bool ProcessorHasBeenSet() const { return m_processorHasBeenSet; }
    inline void SetProcessor(const Processor& value) { m_processorHasBeenSet = true; m_processor = value; }
    inline void SetProcessor(Processor&& value) { m_processorHasBeenSet = true; m_processor = std::move(value); }
    inline UpdateImageVersionRequest& WithProcessor(const Processor& value) { SetProcessor(value); return *this;}
    inline UpdateImageVersionRequest& WithProcessor(Processor&& value) { SetProcessor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates Horovod compatibility.</p>
     */
    inline bool GetHorovod() const{ return m_horovod; }
    inline bool HorovodHasBeenSet() const { return m_horovodHasBeenSet; }
    inline void SetHorovod(bool value) { m_horovodHasBeenSet = true; m_horovod = value; }
    inline UpdateImageVersionRequest& WithHorovod(bool value) { SetHorovod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maintainer description of the image version.</p>
     */
    inline const Aws::String& GetReleaseNotes() const{ return m_releaseNotes; }
    inline bool ReleaseNotesHasBeenSet() const { return m_releaseNotesHasBeenSet; }
    inline void SetReleaseNotes(const Aws::String& value) { m_releaseNotesHasBeenSet = true; m_releaseNotes = value; }
    inline void SetReleaseNotes(Aws::String&& value) { m_releaseNotesHasBeenSet = true; m_releaseNotes = std::move(value); }
    inline void SetReleaseNotes(const char* value) { m_releaseNotesHasBeenSet = true; m_releaseNotes.assign(value); }
    inline UpdateImageVersionRequest& WithReleaseNotes(const Aws::String& value) { SetReleaseNotes(value); return *this;}
    inline UpdateImageVersionRequest& WithReleaseNotes(Aws::String&& value) { SetReleaseNotes(std::move(value)); return *this;}
    inline UpdateImageVersionRequest& WithReleaseNotes(const char* value) { SetReleaseNotes(value); return *this;}
    ///@}
  private:

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_aliasesToAdd;
    bool m_aliasesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_aliasesToDelete;
    bool m_aliasesToDeleteHasBeenSet = false;

    VendorGuidance m_vendorGuidance;
    bool m_vendorGuidanceHasBeenSet = false;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_mLFramework;
    bool m_mLFrameworkHasBeenSet = false;

    Aws::String m_programmingLang;
    bool m_programmingLangHasBeenSet = false;

    Processor m_processor;
    bool m_processorHasBeenSet = false;

    bool m_horovod;
    bool m_horovodHasBeenSet = false;

    Aws::String m_releaseNotes;
    bool m_releaseNotesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
