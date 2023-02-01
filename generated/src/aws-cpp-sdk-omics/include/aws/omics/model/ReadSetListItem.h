/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/FileType.h>
#include <aws/omics/model/SequenceInformation.h>
#include <aws/omics/model/ReadSetStatus.h>
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


    /**
     * <p>The read set's ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The read set's ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The read set's ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The read set's ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The read set's ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The read set's ARN.</p>
     */
    inline ReadSetListItem& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The read set's ARN.</p>
     */
    inline ReadSetListItem& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The read set's ARN.</p>
     */
    inline ReadSetListItem& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>When the read set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the read set was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the read set was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the read set was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the read set was created.</p>
     */
    inline ReadSetListItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the read set was created.</p>
     */
    inline ReadSetListItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The read set's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The read set's description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The read set's description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The read set's description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The read set's description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The read set's description.</p>
     */
    inline ReadSetListItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The read set's description.</p>
     */
    inline ReadSetListItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The read set's description.</p>
     */
    inline ReadSetListItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The read set's file type.</p>
     */
    inline const FileType& GetFileType() const{ return m_fileType; }

    /**
     * <p>The read set's file type.</p>
     */
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }

    /**
     * <p>The read set's file type.</p>
     */
    inline void SetFileType(const FileType& value) { m_fileTypeHasBeenSet = true; m_fileType = value; }

    /**
     * <p>The read set's file type.</p>
     */
    inline void SetFileType(FileType&& value) { m_fileTypeHasBeenSet = true; m_fileType = std::move(value); }

    /**
     * <p>The read set's file type.</p>
     */
    inline ReadSetListItem& WithFileType(const FileType& value) { SetFileType(value); return *this;}

    /**
     * <p>The read set's file type.</p>
     */
    inline ReadSetListItem& WithFileType(FileType&& value) { SetFileType(std::move(value)); return *this;}


    /**
     * <p>The read set's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The read set's ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The read set's ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The read set's ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The read set's ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The read set's ID.</p>
     */
    inline ReadSetListItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The read set's ID.</p>
     */
    inline ReadSetListItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The read set's ID.</p>
     */
    inline ReadSetListItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The read set's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The read set's name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The read set's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The read set's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The read set's name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The read set's name.</p>
     */
    inline ReadSetListItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The read set's name.</p>
     */
    inline ReadSetListItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The read set's name.</p>
     */
    inline ReadSetListItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline const Aws::String& GetReferenceArn() const{ return m_referenceArn; }

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline bool ReferenceArnHasBeenSet() const { return m_referenceArnHasBeenSet; }

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline void SetReferenceArn(const Aws::String& value) { m_referenceArnHasBeenSet = true; m_referenceArn = value; }

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline void SetReferenceArn(Aws::String&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::move(value); }

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline void SetReferenceArn(const char* value) { m_referenceArnHasBeenSet = true; m_referenceArn.assign(value); }

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline ReadSetListItem& WithReferenceArn(const Aws::String& value) { SetReferenceArn(value); return *this;}

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline ReadSetListItem& WithReferenceArn(Aws::String&& value) { SetReferenceArn(std::move(value)); return *this;}

    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline ReadSetListItem& WithReferenceArn(const char* value) { SetReferenceArn(value); return *this;}


    /**
     * <p>The read set's sample ID.</p>
     */
    inline const Aws::String& GetSampleId() const{ return m_sampleId; }

    /**
     * <p>The read set's sample ID.</p>
     */
    inline bool SampleIdHasBeenSet() const { return m_sampleIdHasBeenSet; }

    /**
     * <p>The read set's sample ID.</p>
     */
    inline void SetSampleId(const Aws::String& value) { m_sampleIdHasBeenSet = true; m_sampleId = value; }

    /**
     * <p>The read set's sample ID.</p>
     */
    inline void SetSampleId(Aws::String&& value) { m_sampleIdHasBeenSet = true; m_sampleId = std::move(value); }

    /**
     * <p>The read set's sample ID.</p>
     */
    inline void SetSampleId(const char* value) { m_sampleIdHasBeenSet = true; m_sampleId.assign(value); }

    /**
     * <p>The read set's sample ID.</p>
     */
    inline ReadSetListItem& WithSampleId(const Aws::String& value) { SetSampleId(value); return *this;}

    /**
     * <p>The read set's sample ID.</p>
     */
    inline ReadSetListItem& WithSampleId(Aws::String&& value) { SetSampleId(std::move(value)); return *this;}

    /**
     * <p>The read set's sample ID.</p>
     */
    inline ReadSetListItem& WithSampleId(const char* value) { SetSampleId(value); return *this;}


    
    inline const SequenceInformation& GetSequenceInformation() const{ return m_sequenceInformation; }

    
    inline bool SequenceInformationHasBeenSet() const { return m_sequenceInformationHasBeenSet; }

    
    inline void SetSequenceInformation(const SequenceInformation& value) { m_sequenceInformationHasBeenSet = true; m_sequenceInformation = value; }

    
    inline void SetSequenceInformation(SequenceInformation&& value) { m_sequenceInformationHasBeenSet = true; m_sequenceInformation = std::move(value); }

    
    inline ReadSetListItem& WithSequenceInformation(const SequenceInformation& value) { SetSequenceInformation(value); return *this;}

    
    inline ReadSetListItem& WithSequenceInformation(SequenceInformation&& value) { SetSequenceInformation(std::move(value)); return *this;}


    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const{ return m_sequenceStoreId; }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const Aws::String& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = value; }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(Aws::String&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::move(value); }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline void SetSequenceStoreId(const char* value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId.assign(value); }

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline ReadSetListItem& WithSequenceStoreId(const Aws::String& value) { SetSequenceStoreId(value); return *this;}

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline ReadSetListItem& WithSequenceStoreId(Aws::String&& value) { SetSequenceStoreId(std::move(value)); return *this;}

    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline ReadSetListItem& WithSequenceStoreId(const char* value) { SetSequenceStoreId(value); return *this;}


    /**
     * <p>The read set's status.</p>
     */
    inline const ReadSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The read set's status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The read set's status.</p>
     */
    inline void SetStatus(const ReadSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The read set's status.</p>
     */
    inline void SetStatus(ReadSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The read set's status.</p>
     */
    inline ReadSetListItem& WithStatus(const ReadSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The read set's status.</p>
     */
    inline ReadSetListItem& WithStatus(ReadSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The read set's subject ID.</p>
     */
    inline const Aws::String& GetSubjectId() const{ return m_subjectId; }

    /**
     * <p>The read set's subject ID.</p>
     */
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }

    /**
     * <p>The read set's subject ID.</p>
     */
    inline void SetSubjectId(const Aws::String& value) { m_subjectIdHasBeenSet = true; m_subjectId = value; }

    /**
     * <p>The read set's subject ID.</p>
     */
    inline void SetSubjectId(Aws::String&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::move(value); }

    /**
     * <p>The read set's subject ID.</p>
     */
    inline void SetSubjectId(const char* value) { m_subjectIdHasBeenSet = true; m_subjectId.assign(value); }

    /**
     * <p>The read set's subject ID.</p>
     */
    inline ReadSetListItem& WithSubjectId(const Aws::String& value) { SetSubjectId(value); return *this;}

    /**
     * <p>The read set's subject ID.</p>
     */
    inline ReadSetListItem& WithSubjectId(Aws::String&& value) { SetSubjectId(std::move(value)); return *this;}

    /**
     * <p>The read set's subject ID.</p>
     */
    inline ReadSetListItem& WithSubjectId(const char* value) { SetSubjectId(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FileType m_fileType;
    bool m_fileTypeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_referenceArn;
    bool m_referenceArnHasBeenSet = false;

    Aws::String m_sampleId;
    bool m_sampleIdHasBeenSet = false;

    SequenceInformation m_sequenceInformation;
    bool m_sequenceInformationHasBeenSet = false;

    Aws::String m_sequenceStoreId;
    bool m_sequenceStoreIdHasBeenSet = false;

    ReadSetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_subjectId;
    bool m_subjectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
