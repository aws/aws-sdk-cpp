/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/ExcludeRecommendationReason.h>
#include <aws/resiliencehub/model/UpdateRecommendationStatusItem.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>Defines the operational recommendation item that is to be included or
   * excluded.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UpdateRecommendationStatusRequestEntry">AWS
   * API Reference</a></p>
   */
  class UpdateRecommendationStatusRequestEntry
  {
  public:
    AWS_RESILIENCEHUB_API UpdateRecommendationStatusRequestEntry();
    AWS_RESILIENCEHUB_API UpdateRecommendationStatusRequestEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API UpdateRecommendationStatusRequestEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates the identifier of the AppComponent.</p>
     */
    inline const Aws::String& GetAppComponentId() const{ return m_appComponentId; }
    inline bool AppComponentIdHasBeenSet() const { return m_appComponentIdHasBeenSet; }
    inline void SetAppComponentId(const Aws::String& value) { m_appComponentIdHasBeenSet = true; m_appComponentId = value; }
    inline void SetAppComponentId(Aws::String&& value) { m_appComponentIdHasBeenSet = true; m_appComponentId = std::move(value); }
    inline void SetAppComponentId(const char* value) { m_appComponentIdHasBeenSet = true; m_appComponentId.assign(value); }
    inline UpdateRecommendationStatusRequestEntry& WithAppComponentId(const Aws::String& value) { SetAppComponentId(value); return *this;}
    inline UpdateRecommendationStatusRequestEntry& WithAppComponentId(Aws::String&& value) { SetAppComponentId(std::move(value)); return *this;}
    inline UpdateRecommendationStatusRequestEntry& WithAppComponentId(const char* value) { SetAppComponentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An identifier for an entry in this batch that is used to communicate the
     * result.</p>  <p>The <code>entryId</code>s of a batch request need to be
     * unique within a request.</p> 
     */
    inline const Aws::String& GetEntryId() const{ return m_entryId; }
    inline bool EntryIdHasBeenSet() const { return m_entryIdHasBeenSet; }
    inline void SetEntryId(const Aws::String& value) { m_entryIdHasBeenSet = true; m_entryId = value; }
    inline void SetEntryId(Aws::String&& value) { m_entryIdHasBeenSet = true; m_entryId = std::move(value); }
    inline void SetEntryId(const char* value) { m_entryIdHasBeenSet = true; m_entryId.assign(value); }
    inline UpdateRecommendationStatusRequestEntry& WithEntryId(const Aws::String& value) { SetEntryId(value); return *this;}
    inline UpdateRecommendationStatusRequestEntry& WithEntryId(Aws::String&& value) { SetEntryId(std::move(value)); return *this;}
    inline UpdateRecommendationStatusRequestEntry& WithEntryId(const char* value) { SetEntryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the reason for excluding an operational recommendation.</p>
     */
    inline const ExcludeRecommendationReason& GetExcludeReason() const{ return m_excludeReason; }
    inline bool ExcludeReasonHasBeenSet() const { return m_excludeReasonHasBeenSet; }
    inline void SetExcludeReason(const ExcludeRecommendationReason& value) { m_excludeReasonHasBeenSet = true; m_excludeReason = value; }
    inline void SetExcludeReason(ExcludeRecommendationReason&& value) { m_excludeReasonHasBeenSet = true; m_excludeReason = std::move(value); }
    inline UpdateRecommendationStatusRequestEntry& WithExcludeReason(const ExcludeRecommendationReason& value) { SetExcludeReason(value); return *this;}
    inline UpdateRecommendationStatusRequestEntry& WithExcludeReason(ExcludeRecommendationReason&& value) { SetExcludeReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the operational recommendation needs to be excluded. If set to
     * True, the operational recommendation will be excluded.</p>
     */
    inline bool GetExcluded() const{ return m_excluded; }
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }
    inline UpdateRecommendationStatusRequestEntry& WithExcluded(bool value) { SetExcluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operational recommendation item.</p>
     */
    inline const UpdateRecommendationStatusItem& GetItem() const{ return m_item; }
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
    inline void SetItem(const UpdateRecommendationStatusItem& value) { m_itemHasBeenSet = true; m_item = value; }
    inline void SetItem(UpdateRecommendationStatusItem&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }
    inline UpdateRecommendationStatusRequestEntry& WithItem(const UpdateRecommendationStatusItem& value) { SetItem(value); return *this;}
    inline UpdateRecommendationStatusRequestEntry& WithItem(UpdateRecommendationStatusItem&& value) { SetItem(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference identifier of the operational recommendation item.</p>
     */
    inline const Aws::String& GetReferenceId() const{ return m_referenceId; }
    inline bool ReferenceIdHasBeenSet() const { return m_referenceIdHasBeenSet; }
    inline void SetReferenceId(const Aws::String& value) { m_referenceIdHasBeenSet = true; m_referenceId = value; }
    inline void SetReferenceId(Aws::String&& value) { m_referenceIdHasBeenSet = true; m_referenceId = std::move(value); }
    inline void SetReferenceId(const char* value) { m_referenceIdHasBeenSet = true; m_referenceId.assign(value); }
    inline UpdateRecommendationStatusRequestEntry& WithReferenceId(const Aws::String& value) { SetReferenceId(value); return *this;}
    inline UpdateRecommendationStatusRequestEntry& WithReferenceId(Aws::String&& value) { SetReferenceId(std::move(value)); return *this;}
    inline UpdateRecommendationStatusRequestEntry& WithReferenceId(const char* value) { SetReferenceId(value); return *this;}
    ///@}
  private:

    Aws::String m_appComponentId;
    bool m_appComponentIdHasBeenSet = false;

    Aws::String m_entryId;
    bool m_entryIdHasBeenSet = false;

    ExcludeRecommendationReason m_excludeReason;
    bool m_excludeReasonHasBeenSet = false;

    bool m_excluded;
    bool m_excludedHasBeenSet = false;

    UpdateRecommendationStatusItem m_item;
    bool m_itemHasBeenSet = false;

    Aws::String m_referenceId;
    bool m_referenceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
