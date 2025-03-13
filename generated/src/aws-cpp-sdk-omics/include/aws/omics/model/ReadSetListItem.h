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
    AWS_OMICS_API ReadSetListItem() = default;
    AWS_OMICS_API ReadSetListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReadSetListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The read set's ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ReadSetListItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ReadSetListItem& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's sequence store ID.</p>
     */
    inline const Aws::String& GetSequenceStoreId() const { return m_sequenceStoreId; }
    inline bool SequenceStoreIdHasBeenSet() const { return m_sequenceStoreIdHasBeenSet; }
    template<typename SequenceStoreIdT = Aws::String>
    void SetSequenceStoreId(SequenceStoreIdT&& value) { m_sequenceStoreIdHasBeenSet = true; m_sequenceStoreId = std::forward<SequenceStoreIdT>(value); }
    template<typename SequenceStoreIdT = Aws::String>
    ReadSetListItem& WithSequenceStoreId(SequenceStoreIdT&& value) { SetSequenceStoreId(std::forward<SequenceStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's subject ID.</p>
     */
    inline const Aws::String& GetSubjectId() const { return m_subjectId; }
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }
    template<typename SubjectIdT = Aws::String>
    void SetSubjectId(SubjectIdT&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::forward<SubjectIdT>(value); }
    template<typename SubjectIdT = Aws::String>
    ReadSetListItem& WithSubjectId(SubjectIdT&& value) { SetSubjectId(std::forward<SubjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's sample ID.</p>
     */
    inline const Aws::String& GetSampleId() const { return m_sampleId; }
    inline bool SampleIdHasBeenSet() const { return m_sampleIdHasBeenSet; }
    template<typename SampleIdT = Aws::String>
    void SetSampleId(SampleIdT&& value) { m_sampleIdHasBeenSet = true; m_sampleId = std::forward<SampleIdT>(value); }
    template<typename SampleIdT = Aws::String>
    ReadSetListItem& WithSampleId(SampleIdT&& value) { SetSampleId(std::forward<SampleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's status.</p>
     */
    inline ReadSetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReadSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ReadSetListItem& WithStatus(ReadSetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ReadSetListItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ReadSetListItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's genome reference ARN.</p>
     */
    inline const Aws::String& GetReferenceArn() const { return m_referenceArn; }
    inline bool ReferenceArnHasBeenSet() const { return m_referenceArnHasBeenSet; }
    template<typename ReferenceArnT = Aws::String>
    void SetReferenceArn(ReferenceArnT&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::forward<ReferenceArnT>(value); }
    template<typename ReferenceArnT = Aws::String>
    ReadSetListItem& WithReferenceArn(ReferenceArnT&& value) { SetReferenceArn(std::forward<ReferenceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The read set's file type.</p>
     */
    inline FileType GetFileType() const { return m_fileType; }
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }
    inline void SetFileType(FileType value) { m_fileTypeHasBeenSet = true; m_fileType = value; }
    inline ReadSetListItem& WithFileType(FileType value) { SetFileType(value); return *this;}
    ///@}

    ///@{
    
    inline const SequenceInformation& GetSequenceInformation() const { return m_sequenceInformation; }
    inline bool SequenceInformationHasBeenSet() const { return m_sequenceInformationHasBeenSet; }
    template<typename SequenceInformationT = SequenceInformation>
    void SetSequenceInformation(SequenceInformationT&& value) { m_sequenceInformationHasBeenSet = true; m_sequenceInformation = std::forward<SequenceInformationT>(value); }
    template<typename SequenceInformationT = SequenceInformation>
    ReadSetListItem& WithSequenceInformation(SequenceInformationT&& value) { SetSequenceInformation(std::forward<SequenceInformationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the read set was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ReadSetListItem& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status for a read set. It provides more detail as to why the read set
     * has a status. </p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ReadSetListItem& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The creation type of the read set. </p>
     */
    inline CreationType GetCreationType() const { return m_creationType; }
    inline bool CreationTypeHasBeenSet() const { return m_creationTypeHasBeenSet; }
    inline void SetCreationType(CreationType value) { m_creationTypeHasBeenSet = true; m_creationType = value; }
    inline ReadSetListItem& WithCreationType(CreationType value) { SetCreationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The entity tag (ETag) is a hash of the object representing its semantic
     * content.</p>
     */
    inline const ETag& GetEtag() const { return m_etag; }
    inline bool EtagHasBeenSet() const { return m_etagHasBeenSet; }
    template<typename EtagT = ETag>
    void SetEtag(EtagT&& value) { m_etagHasBeenSet = true; m_etag = std::forward<EtagT>(value); }
    template<typename EtagT = ETag>
    ReadSetListItem& WithEtag(EtagT&& value) { SetEtag(std::forward<EtagT>(value)); return *this;}
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

    ReadSetStatus m_status{ReadSetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_referenceArn;
    bool m_referenceArnHasBeenSet = false;

    FileType m_fileType{FileType::NOT_SET};
    bool m_fileTypeHasBeenSet = false;

    SequenceInformation m_sequenceInformation;
    bool m_sequenceInformationHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    CreationType m_creationType{CreationType::NOT_SET};
    bool m_creationTypeHasBeenSet = false;

    ETag m_etag;
    bool m_etagHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
