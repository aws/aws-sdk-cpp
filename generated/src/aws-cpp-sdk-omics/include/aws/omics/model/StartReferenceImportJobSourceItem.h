﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
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
   * <p>A source for a reference import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/StartReferenceImportJobSourceItem">AWS
   * API Reference</a></p>
   */
  class StartReferenceImportJobSourceItem
  {
  public:
    AWS_OMICS_API StartReferenceImportJobSourceItem();
    AWS_OMICS_API StartReferenceImportJobSourceItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API StartReferenceImportJobSourceItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline const Aws::String& GetSourceFile() const{ return m_sourceFile; }
    inline bool SourceFileHasBeenSet() const { return m_sourceFileHasBeenSet; }
    inline void SetSourceFile(const Aws::String& value) { m_sourceFileHasBeenSet = true; m_sourceFile = value; }
    inline void SetSourceFile(Aws::String&& value) { m_sourceFileHasBeenSet = true; m_sourceFile = std::move(value); }
    inline void SetSourceFile(const char* value) { m_sourceFileHasBeenSet = true; m_sourceFile.assign(value); }
    inline StartReferenceImportJobSourceItem& WithSourceFile(const Aws::String& value) { SetSourceFile(value); return *this;}
    inline StartReferenceImportJobSourceItem& WithSourceFile(Aws::String&& value) { SetSourceFile(std::move(value)); return *this;}
    inline StartReferenceImportJobSourceItem& WithSourceFile(const char* value) { SetSourceFile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartReferenceImportJobSourceItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartReferenceImportJobSourceItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartReferenceImportJobSourceItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StartReferenceImportJobSourceItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StartReferenceImportJobSourceItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StartReferenceImportJobSourceItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source's tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartReferenceImportJobSourceItem& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StartReferenceImportJobSourceItem& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StartReferenceImportJobSourceItem& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline StartReferenceImportJobSourceItem& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartReferenceImportJobSourceItem& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartReferenceImportJobSourceItem& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StartReferenceImportJobSourceItem& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartReferenceImportJobSourceItem& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartReferenceImportJobSourceItem& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_sourceFile;
    bool m_sourceFileHasBeenSet = false;

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
