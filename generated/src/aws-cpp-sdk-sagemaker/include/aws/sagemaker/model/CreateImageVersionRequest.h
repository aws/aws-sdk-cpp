﻿/**
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
    AWS_SAGEMAKER_API CreateImageVersionRequest();

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
    inline const Aws::String& GetBaseImage() const{ return m_baseImage; }
    inline bool BaseImageHasBeenSet() const { return m_baseImageHasBeenSet; }
    inline void SetBaseImage(const Aws::String& value) { m_baseImageHasBeenSet = true; m_baseImage = value; }
    inline void SetBaseImage(Aws::String&& value) { m_baseImageHasBeenSet = true; m_baseImage = std::move(value); }
    inline void SetBaseImage(const char* value) { m_baseImageHasBeenSet = true; m_baseImage.assign(value); }
    inline CreateImageVersionRequest& WithBaseImage(const Aws::String& value) { SetBaseImage(value); return *this;}
    inline CreateImageVersionRequest& WithBaseImage(Aws::String&& value) { SetBaseImage(std::move(value)); return *this;}
    inline CreateImageVersionRequest& WithBaseImage(const char* value) { SetBaseImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique ID. If not specified, the Amazon Web Services CLI and Amazon Web
     * Services SDKs, such as the SDK for Python (Boto3), add a unique value to the
     * call.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateImageVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateImageVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateImageVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ImageName</code> of the <code>Image</code> to create a version
     * of.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }
    inline CreateImageVersionRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}
    inline CreateImageVersionRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}
    inline CreateImageVersionRequest& WithImageName(const char* value) { SetImageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of aliases created with the image version.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAliases() const{ return m_aliases; }
    inline bool AliasesHasBeenSet() const { return m_aliasesHasBeenSet; }
    inline void SetAliases(const Aws::Vector<Aws::String>& value) { m_aliasesHasBeenSet = true; m_aliases = value; }
    inline void SetAliases(Aws::Vector<Aws::String>&& value) { m_aliasesHasBeenSet = true; m_aliases = std::move(value); }
    inline CreateImageVersionRequest& WithAliases(const Aws::Vector<Aws::String>& value) { SetAliases(value); return *this;}
    inline CreateImageVersionRequest& WithAliases(Aws::Vector<Aws::String>&& value) { SetAliases(std::move(value)); return *this;}
    inline CreateImageVersionRequest& AddAliases(const Aws::String& value) { m_aliasesHasBeenSet = true; m_aliases.push_back(value); return *this; }
    inline CreateImageVersionRequest& AddAliases(Aws::String&& value) { m_aliasesHasBeenSet = true; m_aliases.push_back(std::move(value)); return *this; }
    inline CreateImageVersionRequest& AddAliases(const char* value) { m_aliasesHasBeenSet = true; m_aliases.push_back(value); return *this; }
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
    inline const VendorGuidance& GetVendorGuidance() const{ return m_vendorGuidance; }
    inline bool VendorGuidanceHasBeenSet() const { return m_vendorGuidanceHasBeenSet; }
    inline void SetVendorGuidance(const VendorGuidance& value) { m_vendorGuidanceHasBeenSet = true; m_vendorGuidance = value; }
    inline void SetVendorGuidance(VendorGuidance&& value) { m_vendorGuidanceHasBeenSet = true; m_vendorGuidance = std::move(value); }
    inline CreateImageVersionRequest& WithVendorGuidance(const VendorGuidance& value) { SetVendorGuidance(value); return *this;}
    inline CreateImageVersionRequest& WithVendorGuidance(VendorGuidance&& value) { SetVendorGuidance(std::move(value)); return *this;}
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
    inline CreateImageVersionRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}
    inline CreateImageVersionRequest& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}
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
    inline CreateImageVersionRequest& WithMLFramework(const Aws::String& value) { SetMLFramework(value); return *this;}
    inline CreateImageVersionRequest& WithMLFramework(Aws::String&& value) { SetMLFramework(std::move(value)); return *this;}
    inline CreateImageVersionRequest& WithMLFramework(const char* value) { SetMLFramework(value); return *this;}
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
    inline CreateImageVersionRequest& WithProgrammingLang(const Aws::String& value) { SetProgrammingLang(value); return *this;}
    inline CreateImageVersionRequest& WithProgrammingLang(Aws::String&& value) { SetProgrammingLang(std::move(value)); return *this;}
    inline CreateImageVersionRequest& WithProgrammingLang(const char* value) { SetProgrammingLang(value); return *this;}
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
    inline CreateImageVersionRequest& WithProcessor(const Processor& value) { SetProcessor(value); return *this;}
    inline CreateImageVersionRequest& WithProcessor(Processor&& value) { SetProcessor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates Horovod compatibility.</p>
     */
    inline bool GetHorovod() const{ return m_horovod; }
    inline bool HorovodHasBeenSet() const { return m_horovodHasBeenSet; }
    inline void SetHorovod(bool value) { m_horovodHasBeenSet = true; m_horovod = value; }
    inline CreateImageVersionRequest& WithHorovod(bool value) { SetHorovod(value); return *this;}
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
    inline CreateImageVersionRequest& WithReleaseNotes(const Aws::String& value) { SetReleaseNotes(value); return *this;}
    inline CreateImageVersionRequest& WithReleaseNotes(Aws::String&& value) { SetReleaseNotes(std::move(value)); return *this;}
    inline CreateImageVersionRequest& WithReleaseNotes(const char* value) { SetReleaseNotes(value); return *this;}
    ///@}
  private:

    Aws::String m_baseImage;
    bool m_baseImageHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_aliases;
    bool m_aliasesHasBeenSet = false;

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
