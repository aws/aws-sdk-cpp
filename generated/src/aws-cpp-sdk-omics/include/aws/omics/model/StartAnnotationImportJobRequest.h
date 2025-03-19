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
    AWS_OMICS_API StartAnnotationImportJobRequest() = default;

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
    inline const Aws::String& GetDestinationName() const { return m_destinationName; }
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }
    template<typename DestinationNameT = Aws::String>
    void SetDestinationName(DestinationNameT&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::forward<DestinationNameT>(value); }
    template<typename DestinationNameT = Aws::String>
    StartAnnotationImportJobRequest& WithDestinationName(DestinationNameT&& value) { SetDestinationName(std::forward<DestinationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service role for the job.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    StartAnnotationImportJobRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Items to import.</p>
     */
    inline const Aws::Vector<AnnotationImportItemSource>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<AnnotationImportItemSource>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<AnnotationImportItemSource>>
    StartAnnotationImportJobRequest& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = AnnotationImportItemSource>
    StartAnnotationImportJobRequest& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the annotation store version. </p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    inline bool VersionNameHasBeenSet() const { return m_versionNameHasBeenSet; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    StartAnnotationImportJobRequest& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Formatting options for the annotation file.</p>
     */
    inline const FormatOptions& GetFormatOptions() const { return m_formatOptions; }
    inline bool FormatOptionsHasBeenSet() const { return m_formatOptionsHasBeenSet; }
    template<typename FormatOptionsT = FormatOptions>
    void SetFormatOptions(FormatOptionsT&& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = std::forward<FormatOptionsT>(value); }
    template<typename FormatOptionsT = FormatOptions>
    StartAnnotationImportJobRequest& WithFormatOptions(FormatOptionsT&& value) { SetFormatOptions(std::forward<FormatOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's left normalization setting.</p>
     */
    inline bool GetRunLeftNormalization() const { return m_runLeftNormalization; }
    inline bool RunLeftNormalizationHasBeenSet() const { return m_runLeftNormalizationHasBeenSet; }
    inline void SetRunLeftNormalization(bool value) { m_runLeftNormalizationHasBeenSet = true; m_runLeftNormalization = value; }
    inline StartAnnotationImportJobRequest& WithRunLeftNormalization(bool value) { SetRunLeftNormalization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The annotation schema generated by the parsed annotation data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAnnotationFields() const { return m_annotationFields; }
    inline bool AnnotationFieldsHasBeenSet() const { return m_annotationFieldsHasBeenSet; }
    template<typename AnnotationFieldsT = Aws::Map<Aws::String, Aws::String>>
    void SetAnnotationFields(AnnotationFieldsT&& value) { m_annotationFieldsHasBeenSet = true; m_annotationFields = std::forward<AnnotationFieldsT>(value); }
    template<typename AnnotationFieldsT = Aws::Map<Aws::String, Aws::String>>
    StartAnnotationImportJobRequest& WithAnnotationFields(AnnotationFieldsT&& value) { SetAnnotationFields(std::forward<AnnotationFieldsT>(value)); return *this;}
    template<typename AnnotationFieldsKeyT = Aws::String, typename AnnotationFieldsValueT = Aws::String>
    StartAnnotationImportJobRequest& AddAnnotationFields(AnnotationFieldsKeyT&& key, AnnotationFieldsValueT&& value) {
      m_annotationFieldsHasBeenSet = true; m_annotationFields.emplace(std::forward<AnnotationFieldsKeyT>(key), std::forward<AnnotationFieldsValueT>(value)); return *this;
    }
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

    bool m_runLeftNormalization{false};
    bool m_runLeftNormalizationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_annotationFields;
    bool m_annotationFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
