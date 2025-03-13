/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/translate/Translate_EXPORTS.h>
#include <aws/translate/TranslateRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/translate/model/MergeStrategy.h>
#include <aws/translate/model/TerminologyData.h>
#include <aws/translate/model/EncryptionKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/translate/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Translate
{
namespace Model
{

  /**
   */
  class ImportTerminologyRequest : public TranslateRequest
  {
  public:
    AWS_TRANSLATE_API ImportTerminologyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportTerminology"; }

    AWS_TRANSLATE_API Aws::String SerializePayload() const override;

    AWS_TRANSLATE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the custom terminology being imported.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImportTerminologyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The merge strategy of the custom terminology being imported. Currently, only
     * the OVERWRITE merge strategy is supported. In this case, the imported
     * terminology will overwrite an existing terminology of the same name.</p>
     */
    inline MergeStrategy GetMergeStrategy() const { return m_mergeStrategy; }
    inline bool MergeStrategyHasBeenSet() const { return m_mergeStrategyHasBeenSet; }
    inline void SetMergeStrategy(MergeStrategy value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = value; }
    inline ImportTerminologyRequest& WithMergeStrategy(MergeStrategy value) { SetMergeStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the custom terminology being imported.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImportTerminologyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The terminology data for the custom terminology being imported.</p>
     */
    inline const TerminologyData& GetTerminologyData() const { return m_terminologyData; }
    inline bool TerminologyDataHasBeenSet() const { return m_terminologyDataHasBeenSet; }
    template<typename TerminologyDataT = TerminologyData>
    void SetTerminologyData(TerminologyDataT&& value) { m_terminologyDataHasBeenSet = true; m_terminologyData = std::forward<TerminologyDataT>(value); }
    template<typename TerminologyDataT = TerminologyData>
    ImportTerminologyRequest& WithTerminologyData(TerminologyDataT&& value) { SetTerminologyData(std::forward<TerminologyDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key for the custom terminology being imported.</p>
     */
    inline const EncryptionKey& GetEncryptionKey() const { return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    template<typename EncryptionKeyT = EncryptionKey>
    void SetEncryptionKey(EncryptionKeyT&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::forward<EncryptionKeyT>(value); }
    template<typename EncryptionKeyT = EncryptionKey>
    ImportTerminologyRequest& WithEncryptionKey(EncryptionKeyT&& value) { SetEncryptionKey(std::forward<EncryptionKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to be associated with this resource. A tag is a key-value pair that adds
     * metadata to a resource. Each tag key for the resource must be unique. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/tagging.html"> Tagging
     * your resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ImportTerminologyRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ImportTerminologyRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MergeStrategy m_mergeStrategy{MergeStrategy::NOT_SET};
    bool m_mergeStrategyHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TerminologyData m_terminologyData;
    bool m_terminologyDataHasBeenSet = false;

    EncryptionKey m_encryptionKey;
    bool m_encryptionKeyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Translate
} // namespace Aws
