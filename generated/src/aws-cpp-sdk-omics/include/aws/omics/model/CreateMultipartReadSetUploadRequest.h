/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/FileType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class CreateMultipartReadSetUploadRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API CreateMultipartReadSetUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMultipartReadSetUpload"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The sequence store ID for the store that is the destination of the multipart
     * uploads.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }
    inline CreateMultipartReadSetUploadRequest& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An idempotency token that can be used to avoid triggering multiple multipart
     * uploads.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateMultipartReadSetUploadRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of file being uploaded.</p>
     */
    inline const FileType& GetSourceFileType() const{ return m_sourceFileType; }
    inline bool SourceFileTypeHasBeenSet() const { return m_sourceFileTypeHasBeenSet; }
    inline void SetSourceFileType(const FileType& value) { m_sourceFileTypeHasBeenSet = true; m_sourceFileType = value; }
    inline void SetSourceFileType(FileType&& value) { m_sourceFileTypeHasBeenSet = true; m_sourceFileType = std::move(value); }
    inline CreateMultipartReadSetUploadRequest& WithSourceFileType(const FileType& value) { SetSourceFileType(value); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithSourceFileType(FileType&& value) { SetSourceFileType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's subject ID.</p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }
    inline void SetSubjectId(const Aws::String& value) { m_subjectIdHasBeenSet = true; m_subjectId = value; }
    inline void SetSubjectId(Aws::String&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::move(value); }
    inline void SetSubjectId(const char* value) { m_subjectIdHasBeenSet = true; m_subjectId.assign(value); }
    inline CreateMultipartReadSetUploadRequest& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's sample ID.</p>
     */
    inline const Aws::String& GetSampleId() const{ return m_sampleId; }
    inline bool SampleIdHasBeenSet() const { return m_sampleIdHasBeenSet; }
    inline void SetSampleId(const Aws::String& value) { m_sampleIdHasBeenSet = true; m_sampleId = value; }
    inline void SetSampleId(Aws::String&& value) { m_sampleIdHasBeenSet = true; m_sampleId = std::move(value); }
    inline void SetSampleId(const char* value) { m_sampleIdHasBeenSet = true; m_sampleId.assign(value); }
    inline CreateMultipartReadSetUploadRequest& WithSampleId(const Aws::String& value) { SetSampleId(value); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithSampleId(Aws::String&& value) { SetSampleId(std::move(value)); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithSampleId(const char* value) { SetSampleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where the source originated.</p>
     */
    inline const Aws::String& GetGeneratedFrom() const{ return m_generatedFrom; }
    inline bool GeneratedFromHasBeenSet() const { return m_generatedFromHasBeenSet; }
    inline void SetGeneratedFrom(const Aws::String& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = value; }
    inline void SetGeneratedFrom(Aws::String&& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = std::move(value); }
    inline void SetGeneratedFrom(const char* value) { m_generatedFromHasBeenSet = true; m_generatedFrom.assign(value); }
    inline CreateMultipartReadSetUploadRequest& WithGeneratedFrom(const Aws::String& value) { SetGeneratedFrom(value); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithGeneratedFrom(Aws::String&& value) { SetGeneratedFrom(std::move(value)); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithGeneratedFrom(const char* value) { SetGeneratedFrom(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the reference.</p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }
    inline bool ReferenceArnHasBeenSet() const { return m_referenceArnHasBeenSet; }
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArnHasBeenSet = true; m_referenceArn = value; }
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::move(value); }
    inline void SetReferenceArn(const char* value) { m_referenceArnHasBeenSet = true; m_referenceArn.assign(value); }
    inline CreateMultipartReadSetUploadRequest& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the read set.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateMultipartReadSetUploadRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the read set.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateMultipartReadSetUploadRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags to add to the read set.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateMultipartReadSetUploadRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateMultipartReadSetUploadRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateMultipartReadSetUploadRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateMultipartReadSetUploadRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMultipartReadSetUploadRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMultipartReadSetUploadRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateMultipartReadSetUploadRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateMultipartReadSetUploadRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateMultipartReadSetUploadRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    FileType m_sourceFileType;
    bool m_sourceFileTypeHasBeenSet = false;

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;

    Aws::String m_sampleId;
    bool m_sampleIdHasBeenSet = false;

    Aws::String m_generatedFrom;
    bool m_generatedFromHasBeenSet = false;

    Aws::String m_referenceArn;
    bool m_referenceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
