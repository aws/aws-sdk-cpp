/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReadSetStatus.h>
#include <aws/omics/model/FileType.h>
#include <aws/omics/model/SequenceInformation.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/CreationType.h>
#include <aws/omics/model/ETag.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>A read set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReadSetListItem">AWS
   * API Reference</a></p>
   */
  class ReadSetListItem
  {
  public:
    AWS_OMICS_API ReadSetListItem();
    AWS_OMICS_API ReadSetListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReadSetListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The read set's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline ReadSetListItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline ReadSetListItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline ReadSetListItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ReadSetListItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ReadSetListItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ReadSetListItem& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }
    inline ReadSetListItem& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}
    inline ReadSetListItem& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}
    inline ReadSetListItem& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's subject ID.</p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }
    inline void SetSubjectId(const Aws::String& value) { m_subjectIdHasBeenSet = true; m_subjectId = value; }
    inline void SetSubjectId(Aws::String&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::move(value); }
    inline void SetSubjectId(const char* value) { m_subjectIdHasBeenSet = true; m_subjectId.assign(value); }
    inline ReadSetListItem& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}
    inline ReadSetListItem& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}
    inline ReadSetListItem& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's sample ID.</p>
     */
    inline const Aws::String& GetSampleId() const{ return m_sampleId; }
    inline bool SampleIdHasBeenSet() const { return m_sampleIdHasBeenSet; }
    inline void SetSampleId(const Aws::String& value) { m_sampleIdHasBeenSet = true; m_sampleId = value; }
    inline void SetSampleId(Aws::String&& value) { m_sampleIdHasBeenSet = true; m_sampleId = std::move(value); }
    inline void SetSampleId(const char* value) { m_sampleIdHasBeenSet = true; m_sampleId.assign(value); }
    inline ReadSetListItem& WithSampleId(const Aws::String& value) { SetSampleId(value); return *this;}
    inline ReadSetListItem& WithSampleId(Aws::String&& value) { SetSampleId(std::move(value)); return *this;}
    inline ReadSetListItem& WithSampleId(const char* value) { SetSampleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's status.</p>
     */
    inline const ReadSetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ReadSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ReadSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ReadSetListItem& WithStatus(const ReadSetStatus& value) { SetStatus(value); return *this;}
    inline ReadSetListItem& WithStatus(ReadSetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ReadSetListItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ReadSetListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ReadSetListItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ReadSetListItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ReadSetListItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ReadSetListItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }
    inline bool ReferenceArnHasBeenSet() const { return m_referenceArnHasBeenSet; }
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArnHasBeenSet = true; m_referenceArn = value; }
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::move(value); }
    inline void SetReferenceArn(const char* value) { m_referenceArnHasBeenSet = true; m_referenceArn.assign(value); }
    inline ReadSetListItem& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}
    inline ReadSetListItem& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}
    inline ReadSetListItem& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's file type.</p>
     */
    inline const FileType& GetFileType() const{ return m_fileType; }
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }
    inline void SetFileType(const FileType& value) { m_fileTypeHasBeenSet = true; m_fileType = value; }
    inline void SetFileType(FileType&& value) { m_fileTypeHasBeenSet = true; m_fileType = std::move(value); }
    inline ReadSetListItem& WithFileType(const FileType& value) { SetFileType(value); return *this;}
    inline ReadSetListItem& WithFileType(FileType&& value) { SetFileType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const SequenceInformation& GetSequenceInformation() const{ return m_sequenceInformation; }
    inline bool SequenceInformationHasBeenSet() const { return m_sequenceInformationHasBeenSet; }
    inline void SetSequenceInformation(const SequenceInformation& value) { m_sequenceInformationHasBeenSet = true; m_sequenceInformation = value; }
    inline void SetSequenceInformation(SequenceInformation&& value) { m_sequenceInformationHasBeenSet = true; m_sequenceInformation = std::move(value); }
    inline ReadSetListItem& WithSequenceInformation(const SequenceInformation& value) { SetSequenceInformation(value); return *this;}
    inline ReadSetListItem& WithSequenceInformation(SequenceInformation&& value) { SetSequenceInformation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the read set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ReadSetListItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ReadSetListItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status for a read set. It provides more detail as to why the read set
     * has a status. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ReadSetListItem& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ReadSetListItem& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ReadSetListItem& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The creation type of the read set. </p>
     */
    inline const CreationType& GetCreationType() const{ return m_creationType; }
    inline bool CreationTypeHasBeenSet() const { return m_creationTypeHasBeenSet; }
    inline void SetCreationType(const CreationType& value) { m_creationTypeHasBeenSet = true; m_creationType = value; }
    inline void SetCreationType(CreationType&& value) { m_creationTypeHasBeenSet = true; m_creationType = std::move(value); }
    inline ReadSetListItem& WithCreationType(const CreationType& value) { SetCreationType(value); return *this;}
    inline ReadSetListItem& WithCreationType(CreationType&& value) { SetCreationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity tag (ETag) is a hash of the object representing its semantic
     * content.</p>
     */
    inline const ETag& GetEtag() const{ return m_etag; }
    inline bool EtagHasBeenSet() const { return m_etagHasBeenSet; }
    inline void SetEtag(const ETag& value) { m_etagHasBeenSet = true; m_etag = value; }
    inline void SetEtag(ETag&& value) { m_etagHasBeenSet = true; m_etag = std::move(value); }
    inline ReadSetListItem& WithEtag(const ETag& value) { SetEtag(value); return *this;}
    inline ReadSetListItem& WithEtag(ETag&& value) { SetEtag(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;

    Aws::String m_sampleId;
    bool m_sampleIdHasBeenSet = false;

    ReadSetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_referenceArn;
    bool m_referenceArnHasBeenSet = false;

    FileType m_fileType;
    bool m_fileTypeHasBeenSet = false;

    SequenceInformation m_sequenceInformation;
    bool m_sequenceInformationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    CreationType m_creationType;
    bool m_creationTypeHasBeenSet = false;

    ETag m_etag;
    bool m_etagHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
