/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/ExcludeRecommendationReason.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines a recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/RecommendationItem">AWS
   * API Reference</a></p>
   */
  class RecommendationItem
  {
  public:
    AWS_RESILIENCEHUB_API RecommendationItem();
    AWS_RESILIENCEHUB_API RecommendationItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API RecommendationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies if the recommendation has already been implemented.</p>
     */
    inline bool GetAlreadyImplemented() const{ return m_alreadyImplemented; }

    /**
     * <p>Specifies if the recommendation has already been implemented.</p>
     */
    inline bool AlreadyImplementedHasBeenSet() const { return m_alreadyImplementedHasBeenSet; }

    /**
     * <p>Specifies if the recommendation has already been implemented.</p>
     */
    inline void SetAlreadyImplemented(bool value) { m_alreadyImplementedHasBeenSet = true; m_alreadyImplemented = value; }

    /**
     * <p>Specifies if the recommendation has already been implemented.</p>
     */
    inline RecommendationItem& WithAlreadyImplemented(bool value) { SetAlreadyImplemented(value); return *this;}


    /**
     * <p>Indicates the reason for excluding an operational recommendation.</p>
     */
    inline const ExcludeRecommendationReason& GetExcludeReason() const{ return m_excludeReason; }

    /**
     * <p>Indicates the reason for excluding an operational recommendation.</p>
     */
    inline bool ExcludeReasonHasBeenSet() const { return m_excludeReasonHasBeenSet; }

    /**
     * <p>Indicates the reason for excluding an operational recommendation.</p>
     */
    inline void SetExcludeReason(const ExcludeRecommendationReason& value) { m_excludeReasonHasBeenSet = true; m_excludeReason = value; }

    /**
     * <p>Indicates the reason for excluding an operational recommendation.</p>
     */
    inline void SetExcludeReason(ExcludeRecommendationReason&& value) { m_excludeReasonHasBeenSet = true; m_excludeReason = std::move(value); }

    /**
     * <p>Indicates the reason for excluding an operational recommendation.</p>
     */
    inline RecommendationItem& WithExcludeReason(const ExcludeRecommendationReason& value) { SetExcludeReason(value); return *this;}

    /**
     * <p>Indicates the reason for excluding an operational recommendation.</p>
     */
    inline RecommendationItem& WithExcludeReason(ExcludeRecommendationReason&& value) { SetExcludeReason(std::move(value)); return *this;}


    /**
     * <p>Indicates if an operational recommendation item is excluded.</p>
     */
    inline bool GetExcluded() const{ return m_excluded; }

    /**
     * <p>Indicates if an operational recommendation item is excluded.</p>
     */
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }

    /**
     * <p>Indicates if an operational recommendation item is excluded.</p>
     */
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }

    /**
     * <p>Indicates if an operational recommendation item is excluded.</p>
     */
    inline RecommendationItem& WithExcluded(bool value) { SetExcluded(value); return *this;}


    /**
     * <p>Identifier of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Identifier of the resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Identifier of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Identifier of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Identifier of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Identifier of the resource.</p>
     */
    inline RecommendationItem& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Identifier of the resource.</p>
     */
    inline RecommendationItem& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the resource.</p>
     */
    inline RecommendationItem& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Identifier of the target account.</p>
     */
    inline const Aws::String& GetTargetAccountId() const{ return m_targetAccountId; }

    /**
     * <p>Identifier of the target account.</p>
     */
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }

    /**
     * <p>Identifier of the target account.</p>
     */
    inline void SetTargetAccountId(const Aws::String& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = value; }

    /**
     * <p>Identifier of the target account.</p>
     */
    inline void SetTargetAccountId(Aws::String&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::move(value); }

    /**
     * <p>Identifier of the target account.</p>
     */
    inline void SetTargetAccountId(const char* value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId.assign(value); }

    /**
     * <p>Identifier of the target account.</p>
     */
    inline RecommendationItem& WithTargetAccountId(const Aws::String& value) { SetTargetAccountId(value); return *this;}

    /**
     * <p>Identifier of the target account.</p>
     */
    inline RecommendationItem& WithTargetAccountId(Aws::String&& value) { SetTargetAccountId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the target account.</p>
     */
    inline RecommendationItem& WithTargetAccountId(const char* value) { SetTargetAccountId(value); return *this;}


    /**
     * <p>The target region.</p>
     */
    inline const Aws::String& GetTargetRegion() const{ return m_targetRegion; }

    /**
     * <p>The target region.</p>
     */
    inline bool TargetRegionHasBeenSet() const { return m_targetRegionHasBeenSet; }

    /**
     * <p>The target region.</p>
     */
    inline void SetTargetRegion(const Aws::String& value) { m_targetRegionHasBeenSet = true; m_targetRegion = value; }

    /**
     * <p>The target region.</p>
     */
    inline void SetTargetRegion(Aws::String&& value) { m_targetRegionHasBeenSet = true; m_targetRegion = std::move(value); }

    /**
     * <p>The target region.</p>
     */
    inline void SetTargetRegion(const char* value) { m_targetRegionHasBeenSet = true; m_targetRegion.assign(value); }

    /**
     * <p>The target region.</p>
     */
    inline RecommendationItem& WithTargetRegion(const Aws::String& value) { SetTargetRegion(value); return *this;}

    /**
     * <p>The target region.</p>
     */
    inline RecommendationItem& WithTargetRegion(Aws::String&& value) { SetTargetRegion(std::move(value)); return *this;}

    /**
     * <p>The target region.</p>
     */
    inline RecommendationItem& WithTargetRegion(const char* value) { SetTargetRegion(value); return *this;}

  private:

    bool m_alreadyImplemented;
    bool m_alreadyImplementedHasBeenSet = false;

    ExcludeRecommendationReason m_excludeReason;
    bool m_excludeReasonHasBeenSet = false;

    bool m_excluded;
    bool m_excludedHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_targetAccountId;
    bool m_targetAccountIdHasBeenSet = false;

    Aws::String m_targetRegion;
    bool m_targetRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
