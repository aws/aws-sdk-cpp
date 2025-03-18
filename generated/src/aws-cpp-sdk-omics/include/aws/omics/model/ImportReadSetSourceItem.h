/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/SourceFiles.h>
#include <aws/omics/model/FileType.h>
#include <aws/omics/model/ReadSetImportJobItemStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>A source for an import read set job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ImportReadSetSourceItem">AWS
   * API Reference</a></p>
   */
  class ImportReadSetSourceItem
  {
  public:
    AWS_OMICS_API ImportReadSetSourceItem() = default;
    AWS_OMICS_API ImportReadSetSourceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ImportReadSetSourceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source files' location in Amazon S3.</p>
     */
    inline const SourceFiles& GetSourceFiles() const { return m_sourceFiles; }
    inline bool SourceFilesHasBeenSet() const { return m_sourceFilesHasBeenSet; }
    template<typename SourceFilesT = SourceFiles>
    void SetSourceFiles(SourceFilesT&& value) { m_sourceFilesHasBeenSet = true; m_sourceFiles = std::forward<SourceFilesT>(value); }
    template<typename SourceFilesT = SourceFiles>
    ImportReadSetSourceItem& WithSourceFiles(SourceFilesT&& value) { SetSourceFiles(std::forward<SourceFilesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's file type.</p>
     */
    inline FileType GetSourceFileType() const { return m_sourceFileType; }
    inline bool SourceFileTypeHasBeenSet() const { return m_sourceFileTypeHasBeenSet; }
    inline void SetSourceFileType(FileType value) { m_sourceFileTypeHasBeenSet = true; m_sourceFileType = value; }
    inline ImportReadSetSourceItem& WithSourceFileType(FileType value) { SetSourceFileType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's status.</p>
     */
    inline ReadSetImportJobItemStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReadSetImportJobItemStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ImportReadSetSourceItem& WithStatus(ReadSetImportJobItemStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ImportReadSetSourceItem& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's subject ID.</p>
     */
    inline const Aws::String& GetSubjectId() const { return m_subjectId; }
    inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }
    template<typename SubjectIdT = Aws::String>
    void SetSubjectId(SubjectIdT&& value) { m_subjectIdHasBeenSet = true; m_subjectId = std::forward<SubjectIdT>(value); }
    template<typename SubjectIdT = Aws::String>
    ImportReadSetSourceItem& WithSubjectId(SubjectIdT&& value) { SetSubjectId(std::forward<SubjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's sample ID.</p>
     */
    inline const Aws::String& GetSampleId() const { return m_sampleId; }
    inline bool SampleIdHasBeenSet() const { return m_sampleIdHasBeenSet; }
    template<typename SampleIdT = Aws::String>
    void SetSampleId(SampleIdT&& value) { m_sampleIdHasBeenSet = true; m_sampleId = std::forward<SampleIdT>(value); }
    template<typename SampleIdT = Aws::String>
    ImportReadSetSourceItem& WithSampleId(SampleIdT&& value) { SetSampleId(std::forward<SampleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where the source originated.</p>
     */
    inline const Aws::String& GetGeneratedFrom() const { return m_generatedFrom; }
    inline bool GeneratedFromHasBeenSet() const { return m_generatedFromHasBeenSet; }
    template<typename GeneratedFromT = Aws::String>
    void SetGeneratedFrom(GeneratedFromT&& value) { m_generatedFromHasBeenSet = true; m_generatedFrom = std::forward<GeneratedFromT>(value); }
    template<typename GeneratedFromT = Aws::String>
    ImportReadSetSourceItem& WithGeneratedFrom(GeneratedFromT&& value) { SetGeneratedFrom(std::forward<GeneratedFromT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's genome reference ARN.</p>
     */
    inline const Aws::String& GetReferenceArn() const { return m_referenceArn; }
    inline bool ReferenceArnHasBeenSet() const { return m_referenceArnHasBeenSet; }
    template<typename ReferenceArnT = Aws::String>
    void SetReferenceArn(ReferenceArnT&& value) { m_referenceArnHasBeenSet = true; m_referenceArn = std::forward<ReferenceArnT>(value); }
    template<typename ReferenceArnT = Aws::String>
    ImportReadSetSourceItem& WithReferenceArn(ReferenceArnT&& value) { SetReferenceArn(std::forward<ReferenceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImportReadSetSourceItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImportReadSetSourceItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ImportReadSetSourceItem& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ImportReadSetSourceItem& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The source's read set ID.</p>
     */
    inline const Aws::String& GetReadSetId() const { return m_readSetId; }
    inline bool ReadSetIdHasBeenSet() const { return m_readSetIdHasBeenSet; }
    template<typename ReadSetIdT = Aws::String>
    void SetReadSetId(ReadSetIdT&& value) { m_readSetIdHasBeenSet = true; m_readSetId = std::forward<ReadSetIdT>(value); }
    template<typename ReadSetIdT = Aws::String>
    ImportReadSetSourceItem& WithReadSetId(ReadSetIdT&& value) { SetReadSetId(std::forward<ReadSetIdT>(value)); return *this;}
    ///@}
  private:

    SourceFiles m_sourceFiles;
    bool m_sourceFilesHasBeenSet = false;

    FileType m_sourceFileType{FileType::NOT_SET};
    bool m_sourceFileTypeHasBeenSet = false;

    ReadSetImportJobItemStatus m_status{ReadSetImportJobItemStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

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

    Aws::String m_readSetId;
    bool m_readSetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
