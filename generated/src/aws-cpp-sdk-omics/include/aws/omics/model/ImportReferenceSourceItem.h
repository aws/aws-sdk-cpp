/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceImportJobItemStatus.h>
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
   * <p>An genome reference source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ImportReferenceSourceItem">AWS
   * API Reference</a></p>
   */
  class ImportReferenceSourceItem
  {
  public:
    AWS_OMICS_API ImportReferenceSourceItem() = default;
    AWS_OMICS_API ImportReferenceSourceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ImportReferenceSourceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline const Aws::String& GetSourceFile() const { return m_sourceFile; }
    inline bool SourceFileHasBeenSet() const { return m_sourceFileHasBeenSet; }
    template<typename SourceFileT = Aws::String>
    void SetSourceFile(SourceFileT&& value) { m_sourceFileHasBeenSet = true; m_sourceFile = std::forward<SourceFileT>(value); }
    template<typename SourceFileT = Aws::String>
    ImportReferenceSourceItem& WithSourceFile(SourceFileT&& value) { SetSourceFile(std::forward<SourceFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's status.</p>
     */
    inline ReferenceImportJobItemStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReferenceImportJobItemStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ImportReferenceSourceItem& WithStatus(ReferenceImportJobItemStatus value) { SetStatus(value); return *this;}
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
    ImportReferenceSourceItem& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
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
    ImportReferenceSourceItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    ImportReferenceSourceItem& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    ImportReferenceSourceItem& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ImportReferenceSourceItem& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The source's reference ID.</p>
     */
    inline const Aws::String& GetReferenceId() const { return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    template<typename ReferenceIdT = Aws::String>
    void SetReferenceId(ReferenceIdT&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::forward<ReferenceIdT>(value); }
    template<typename ReferenceIdT = Aws::String>
    ImportReferenceSourceItem& WithReferenceId(ReferenceIdT&& value) { SetReferenceId(std::forward<ReferenceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceFile;
    bool m_sourceFileHasBeenSet = false;

    ReferenceImportJobItemStatus m_status{ReferenceImportJobItemStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
