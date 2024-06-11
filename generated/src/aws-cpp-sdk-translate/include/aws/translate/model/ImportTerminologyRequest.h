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
    AWS_TRANSLATE_API ImportTerminologyRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ImportTerminologyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ImportTerminologyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ImportTerminologyRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The merge strategy of the custom terminology being imported. Currently, only
     * the OVERWRITE merge strategy is supported. In this case, the imported
     * terminology will overwrite an existing terminology of the same name.</p>
     */
    inline const MergeStrategy& GetMergeStrategy() const{ return m_mergeStrategy; }
    inline bool MergeStrategyHasBeenSet() const { return m_mergeStrategyHasBeenSet; }
    inline void SetMergeStrategy(const MergeStrategy& value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = value; }
    inline void SetMergeStrategy(MergeStrategy&& value) { m_mergeStrategyHasBeenSet = true; m_mergeStrategy = std::move(value); }
    inline ImportTerminologyRequest& WithMergeStrategy(const MergeStrategy& value) { SetMergeStrategy(value); return *this;}
    inline ImportTerminologyRequest& WithMergeStrategy(MergeStrategy&& value) { SetMergeStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the custom terminology being imported.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImportTerminologyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImportTerminologyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImportTerminologyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The terminology data for the custom terminology being imported.</p>
     */
    inline const TerminologyData& GetTerminologyData() const{ return m_terminologyData; }
    inline bool TerminologyDataHasBeenSet() const { return m_terminologyDataHasBeenSet; }
    inline void SetTerminologyData(const TerminologyData& value) { m_terminologyDataHasBeenSet = true; m_terminologyData = value; }
    inline void SetTerminologyData(TerminologyData&& value) { m_terminologyDataHasBeenSet = true; m_terminologyData = std::move(value); }
    inline ImportTerminologyRequest& WithTerminologyData(const TerminologyData& value) { SetTerminologyData(value); return *this;}
    inline ImportTerminologyRequest& WithTerminologyData(TerminologyData&& value) { SetTerminologyData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The encryption key for the custom terminology being imported.</p>
     */
    inline const EncryptionKey& GetEncryptionKey() const{ return m_encryptionKey; }
    inline bool EncryptionKeyHasBeenSet() const { return m_encryptionKeyHasBeenSet; }
    inline void SetEncryptionKey(const EncryptionKey& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = value; }
    inline void SetEncryptionKey(EncryptionKey&& value) { m_encryptionKeyHasBeenSet = true; m_encryptionKey = std::move(value); }
    inline ImportTerminologyRequest& WithEncryptionKey(const EncryptionKey& value) { SetEncryptionKey(value); return *this;}
    inline ImportTerminologyRequest& WithEncryptionKey(EncryptionKey&& value) { SetEncryptionKey(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to be associated with this resource. A tag is a key-value pair that adds
     * metadata to a resource. Each tag key for the resource must be unique. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/translate/latest/dg/tagging.html"> Tagging
     * your resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline ImportTerminologyRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ImportTerminologyRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ImportTerminologyRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline ImportTerminologyRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    MergeStrategy m_mergeStrategy;
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
