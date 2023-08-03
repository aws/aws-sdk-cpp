/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
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
   * <p>Defines the operational recommendation item that needs a status
   * update.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/UpdateRecommendationStatusItem">AWS
   * API Reference</a></p>
   */
  class UpdateRecommendationStatusItem
  {
  public:
    AWS_RESILIENCEHUB_API UpdateRecommendationStatusItem();
    AWS_RESILIENCEHUB_API UpdateRecommendationStatusItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API UpdateRecommendationStatusItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Resource identifier of the operational recommendation item.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Resource identifier of the operational recommendation item.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Resource identifier of the operational recommendation item.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Resource identifier of the operational recommendation item.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Resource identifier of the operational recommendation item.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Resource identifier of the operational recommendation item.</p>
     */
    inline UpdateRecommendationStatusItem& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Resource identifier of the operational recommendation item.</p>
     */
    inline UpdateRecommendationStatusItem& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Resource identifier of the operational recommendation item.</p>
     */
    inline UpdateRecommendationStatusItem& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Identifier of the target Amazon Web Services account.</p>
     */
    inline const Aws::String& GetTargetAccountId() const{ return m_targetAccountId; }

    /**
     * <p>Identifier of the target Amazon Web Services account.</p>
     */
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }

    /**
     * <p>Identifier of the target Amazon Web Services account.</p>
     */
    inline void SetTargetAccountId(const Aws::String& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = value; }

    /**
     * <p>Identifier of the target Amazon Web Services account.</p>
     */
    inline void SetTargetAccountId(Aws::String&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::move(value); }

    /**
     * <p>Identifier of the target Amazon Web Services account.</p>
     */
    inline void SetTargetAccountId(const char* value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId.assign(value); }

    /**
     * <p>Identifier of the target Amazon Web Services account.</p>
     */
    inline UpdateRecommendationStatusItem& WithTargetAccountId(const Aws::String& value) { SetTargetAccountId(value); return *this;}

    /**
     * <p>Identifier of the target Amazon Web Services account.</p>
     */
    inline UpdateRecommendationStatusItem& WithTargetAccountId(Aws::String&& value) { SetTargetAccountId(std::move(value)); return *this;}

    /**
     * <p>Identifier of the target Amazon Web Services account.</p>
     */
    inline UpdateRecommendationStatusItem& WithTargetAccountId(const char* value) { SetTargetAccountId(value); return *this;}


    /**
     * <p>Identifier of the target Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetTargetRegion() const{ return m_targetRegion; }

    /**
     * <p>Identifier of the target Amazon Web Services Region.</p>
     */
    inline bool TargetRegionHasBeenSet() const { return m_targetRegionHasBeenSet; }

    /**
     * <p>Identifier of the target Amazon Web Services Region.</p>
     */
    inline void SetTargetRegion(const Aws::String& value) { m_targetRegionHasBeenSet = true; m_targetRegion = value; }

    /**
     * <p>Identifier of the target Amazon Web Services Region.</p>
     */
    inline void SetTargetRegion(Aws::String&& value) { m_targetRegionHasBeenSet = true; m_targetRegion = std::move(value); }

    /**
     * <p>Identifier of the target Amazon Web Services Region.</p>
     */
    inline void SetTargetRegion(const char* value) { m_targetRegionHasBeenSet = true; m_targetRegion.assign(value); }

    /**
     * <p>Identifier of the target Amazon Web Services Region.</p>
     */
    inline UpdateRecommendationStatusItem& WithTargetRegion(const Aws::String& value) { SetTargetRegion(value); return *this;}

    /**
     * <p>Identifier of the target Amazon Web Services Region.</p>
     */
    inline UpdateRecommendationStatusItem& WithTargetRegion(Aws::String&& value) { SetTargetRegion(std::move(value)); return *this;}

    /**
     * <p>Identifier of the target Amazon Web Services Region.</p>
     */
    inline UpdateRecommendationStatusItem& WithTargetRegion(const char* value) { SetTargetRegion(value); return *this;}

  private:

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
