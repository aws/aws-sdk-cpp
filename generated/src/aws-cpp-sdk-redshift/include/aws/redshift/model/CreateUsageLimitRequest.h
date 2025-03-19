/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/UsageLimitFeatureType.h>
#include <aws/redshift/model/UsageLimitLimitType.h>
#include <aws/redshift/model/UsageLimitPeriod.h>
#include <aws/redshift/model/UsageLimitBreachAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class CreateUsageLimitRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API CreateUsageLimitRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUsageLimit"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the cluster that you want to limit usage.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    CreateUsageLimitRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift feature that you want to limit.</p>
     */
    inline UsageLimitFeatureType GetFeatureType() const { return m_featureType; }
    inline bool FeatureTypeHasBeenSet() const { return m_featureTypeHasBeenSet; }
    inline void SetFeatureType(UsageLimitFeatureType value) { m_featureTypeHasBeenSet = true; m_featureType = value; }
    inline CreateUsageLimitRequest& WithFeatureType(UsageLimitFeatureType value) { SetFeatureType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size. If <code>FeatureType</code> is <code>spectrum</code>,
     * then <code>LimitType</code> must be <code>data-scanned</code>. If
     * <code>FeatureType</code> is <code>concurrency-scaling</code>, then
     * <code>LimitType</code> must be <code>time</code>. If <code>FeatureType</code> is
     * <code>cross-region-datasharing</code>, then <code>LimitType</code> must be
     * <code>data-scanned</code>. </p>
     */
    inline UsageLimitLimitType GetLimitType() const { return m_limitType; }
    inline bool LimitTypeHasBeenSet() const { return m_limitTypeHasBeenSet; }
    inline void SetLimitType(UsageLimitLimitType value) { m_limitTypeHasBeenSet = true; m_limitType = value; }
    inline CreateUsageLimitRequest& WithLimitType(UsageLimitLimitType value) { SetLimitType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limit amount. If time-based, this amount is in minutes. If data-based,
     * this amount is in terabytes (TB). The value must be a positive number. </p>
     */
    inline long long GetAmount() const { return m_amount; }
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
    inline void SetAmount(long long value) { m_amountHasBeenSet = true; m_amount = value; }
    inline CreateUsageLimitRequest& WithAmount(long long value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline UsageLimitPeriod GetPeriod() const { return m_period; }
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }
    inline void SetPeriod(UsageLimitPeriod value) { m_periodHasBeenSet = true; m_period = value; }
    inline CreateUsageLimitRequest& WithPeriod(UsageLimitPeriod value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. The default
     * is log. For more information about this parameter, see <a>UsageLimit</a>.</p>
     */
    inline UsageLimitBreachAction GetBreachAction() const { return m_breachAction; }
    inline bool BreachActionHasBeenSet() const { return m_breachActionHasBeenSet; }
    inline void SetBreachAction(UsageLimitBreachAction value) { m_breachActionHasBeenSet = true; m_breachAction = value; }
    inline CreateUsageLimitRequest& WithBreachAction(UsageLimitBreachAction value) { SetBreachAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateUsageLimitRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateUsageLimitRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    UsageLimitFeatureType m_featureType{UsageLimitFeatureType::NOT_SET};
    bool m_featureTypeHasBeenSet = false;

    UsageLimitLimitType m_limitType{UsageLimitLimitType::NOT_SET};
    bool m_limitTypeHasBeenSet = false;

    long long m_amount{0};
    bool m_amountHasBeenSet = false;

    UsageLimitPeriod m_period{UsageLimitPeriod::NOT_SET};
    bool m_periodHasBeenSet = false;

    UsageLimitBreachAction m_breachAction{UsageLimitBreachAction::NOT_SET};
    bool m_breachActionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
