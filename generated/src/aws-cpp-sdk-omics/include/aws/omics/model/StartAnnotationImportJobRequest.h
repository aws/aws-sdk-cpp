/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/omics/model/FormatOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/omics/model/AnnotationImportItemSource.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class StartAnnotationImportJobRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API StartAnnotationImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAnnotationImportJob"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A destination annotation store for the job.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }
    inline StartAnnotationImportJobRequest& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}
    inline StartAnnotationImportJobRequest& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}
    inline StartAnnotationImportJobRequest& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service role for the job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline StartAnnotationImportJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline StartAnnotationImportJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline StartAnnotationImportJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Items to import.</p>
     */
    inline const Aws::Vector<AnnotationImportItemSource>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<AnnotationImportItemSource>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<AnnotationImportItemSource>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline StartAnnotationImportJobRequest& WithItems(const Aws::Vector<AnnotationImportItemSource>& value) { SetItems(value); return *this;}
    inline StartAnnotationImportJobRequest& WithItems(Aws::Vector<AnnotationImportItemSource>&& value) { SetItems(std::move(value)); return *this;}
    inline StartAnnotationImportJobRequest& AddItems(const AnnotationImportItemSource& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline StartAnnotationImportJobRequest& AddItems(AnnotationImportItemSource&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the annotation store version. </p>
     */
    inline const Aws::String& GetVersionName() const{ return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    inline void SetVersionName(const Aws::String& value) { m_versionNameHasBeenSet = true; m_versionName = value; }
    inline void SetVersionName(Aws::String&& value) { m_versionNameHasBeenSet = true; m_versionName = std::move(value); }
    inline void SetVersionName(const char* value) { m_versionNameHasBeenSet = true; m_versionName.assign(value); }
    inline StartAnnotationImportJobRequest& WithVersionName(const Aws::String& value) { SetVersionName(value); return *this;}
    inline StartAnnotationImportJobRequest& WithVersionName(Aws::String&& value) { SetVersionName(std::move(value)); return *this;}
    inline StartAnnotationImportJobRequest& WithVersionName(const char* value) { SetVersionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Formatting options for the annotation file.</p>
     */
    inline const FormatOptions& GetFormatOptions() const{ return m_formatOptions; }
    inline bool FormatOptionsHasBeenSet() const { return m_formatOptionsHasBeenSet; }
    inline void SetFormatOptions(const FormatOptions& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = value; }
    inline void SetFormatOptions(FormatOptions&& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = std::move(value); }
    inline StartAnnotationImportJobRequest& WithFormatOptions(const FormatOptions& value) { SetFormatOptions(value); return *this;}
    inline StartAnnotationImportJobRequest& WithFormatOptions(FormatOptions&& value) { SetFormatOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's left normalization setting.</p>
     */
    inline bool GetRunLeftNormalization() const{ return m_runLeftNormalization; }
    inline bool RunLeftNormalizationHasBeenSet() const { return m_runLeftNormalizationHasBeenSet; }
    inline void SetRunLeftNormalization(bool value) { m_runLeftNormalizationHasBeenSet = true; m_runLeftNormalization = value; }
    inline StartAnnotationImportJobRequest& WithRunLeftNormalization(bool value) { SetRunLeftNormalization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The annotation schema generated by the parsed annotation data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAnnotationFields() const{ return m_annotationFields; }
    inline bool AnnotationFieldsHasBeenSet() const { return m_annotationFieldsHasBeenSet; }
    inline void SetAnnotationFields(const Aws::Map<Aws::String, Aws::String>& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields = value; }
    inline void SetAnnotationFields(Aws::Map<Aws::String, Aws::String>&& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields = std::move(value); }
    inline StartAnnotationImportJobRequest& WithAnnotationFields(const Aws::Map<Aws::String, Aws::String>& value) { SetAnnotationFields(value); return *this;}
    inline StartAnnotationImportJobRequest& WithAnnotationFields(Aws::Map<Aws::String, Aws::String>&& value) { SetAnnotationFields(std::move(value)); return *this;}
    inline StartAnnotationImportJobRequest& AddAnnotationFields(const Aws::String& key, const Aws::String& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(key, value); return *this; }
    inline StartAnnotationImportJobRequest& AddAnnotationFields(Aws::String&& key, const Aws::String& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(std::move(key), value); return *this; }
    inline StartAnnotationImportJobRequest& AddAnnotationFields(const Aws::String& key, Aws::String&& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(key, std::move(value)); return *this; }
    inline StartAnnotationImportJobRequest& AddAnnotationFields(Aws::String&& key, Aws::String&& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(std::move(key), std::move(value)); return *this; }
    inline StartAnnotationImportJobRequest& AddAnnotationFields(const char* key, Aws::String&& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(key, std::move(value)); return *this; }
    inline StartAnnotationImportJobRequest& AddAnnotationFields(Aws::String&& key, const char* value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(std::move(key), value); return *this; }
    inline StartAnnotationImportJobRequest& AddAnnotationFields(const char* key, const char* value) { m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<AnnotationImportItemSource> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    FormatOptions m_formatOptions;
    bool m_formatOptionsHasBeenSet = false;

    bool m_runLeftNormalization;
    bool m_runLeftNormalizationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_annotationFields;
    bool m_annotationFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
