/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/FormatOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>A destination annotation store for the job.</p>
     */
    inline const Aws::String& GetDestinationName() const{ return m_destinationName; }

    /**
     * <p>A destination annotation store for the job.</p>
     */
    inline bool DestinationNameHasBeenSet() const { return m_destinationNameHasBeenSet; }

    /**
     * <p>A destination annotation store for the job.</p>
     */
    inline void SetDestinationName(const Aws::String& value) { m_destinationNameHasBeenSet = true; m_destinationName = value; }

    /**
     * <p>A destination annotation store for the job.</p>
     */
    inline void SetDestinationName(Aws::String&& value) { m_destinationNameHasBeenSet = true; m_destinationName = std::move(value); }

    /**
     * <p>A destination annotation store for the job.</p>
     */
    inline void SetDestinationName(const char* value) { m_destinationNameHasBeenSet = true; m_destinationName.assign(value); }

    /**
     * <p>A destination annotation store for the job.</p>
     */
    inline StartAnnotationImportJobRequest& WithDestinationName(const Aws::String& value) { SetDestinationName(value); return *this;}

    /**
     * <p>A destination annotation store for the job.</p>
     */
    inline StartAnnotationImportJobRequest& WithDestinationName(Aws::String&& value) { SetDestinationName(std::move(value)); return *this;}

    /**
     * <p>A destination annotation store for the job.</p>
     */
    inline StartAnnotationImportJobRequest& WithDestinationName(const char* value) { SetDestinationName(value); return *this;}


    /**
     * <p>Formatting options for the annotation file.</p>
     */
    inline const FormatOptions& GetFormatOptions() const{ return m_formatOptions; }

    /**
     * <p>Formatting options for the annotation file.</p>
     */
    inline bool FormatOptionsHasBeenSet() const { return m_formatOptionsHasBeenSet; }

    /**
     * <p>Formatting options for the annotation file.</p>
     */
    inline void SetFormatOptions(const FormatOptions& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = value; }

    /**
     * <p>Formatting options for the annotation file.</p>
     */
    inline void SetFormatOptions(FormatOptions&& value) { m_formatOptionsHasBeenSet = true; m_formatOptions = std::move(value); }

    /**
     * <p>Formatting options for the annotation file.</p>
     */
    inline StartAnnotationImportJobRequest& WithFormatOptions(const FormatOptions& value) { SetFormatOptions(value); return *this;}

    /**
     * <p>Formatting options for the annotation file.</p>
     */
    inline StartAnnotationImportJobRequest& WithFormatOptions(FormatOptions&& value) { SetFormatOptions(std::move(value)); return *this;}


    /**
     * <p>Items to import.</p>
     */
    inline const Aws::Vector<AnnotationImportItemSource>& GetItems() const{ return m_items; }

    /**
     * <p>Items to import.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>Items to import.</p>
     */
    inline void SetItems(const Aws::Vector<AnnotationImportItemSource>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>Items to import.</p>
     */
    inline void SetItems(Aws::Vector<AnnotationImportItemSource>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>Items to import.</p>
     */
    inline StartAnnotationImportJobRequest& WithItems(const Aws::Vector<AnnotationImportItemSource>& value) { SetItems(value); return *this;}

    /**
     * <p>Items to import.</p>
     */
    inline StartAnnotationImportJobRequest& WithItems(Aws::Vector<AnnotationImportItemSource>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Items to import.</p>
     */
    inline StartAnnotationImportJobRequest& AddItems(const AnnotationImportItemSource& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>Items to import.</p>
     */
    inline StartAnnotationImportJobRequest& AddItems(AnnotationImportItemSource&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>A service role for the job.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>A service role for the job.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>A service role for the job.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>A service role for the job.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>A service role for the job.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>A service role for the job.</p>
     */
    inline StartAnnotationImportJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>A service role for the job.</p>
     */
    inline StartAnnotationImportJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>A service role for the job.</p>
     */
    inline StartAnnotationImportJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The job's left normalization setting.</p>
     */
    inline bool GetRunLeftNormalization() const{ return m_runLeftNormalization; }

    /**
     * <p>The job's left normalization setting.</p>
     */
    inline bool RunLeftNormalizationHasBeenSet() const { return m_runLeftNormalizationHasBeenSet; }

    /**
     * <p>The job's left normalization setting.</p>
     */
    inline void SetRunLeftNormalization(bool value) { m_runLeftNormalizationHasBeenSet = true; m_runLeftNormalization = value; }

    /**
     * <p>The job's left normalization setting.</p>
     */
    inline StartAnnotationImportJobRequest& WithRunLeftNormalization(bool value) { SetRunLeftNormalization(value); return *this;}

  private:

    Aws::String m_destinationName;
    bool m_destinationNameHasBeenSet = false;

    FormatOptions m_formatOptions;
    bool m_formatOptionsHasBeenSet = false;

    Aws::Vector<AnnotationImportItemSource> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    bool m_runLeftNormalization;
    bool m_runLeftNormalizationHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
