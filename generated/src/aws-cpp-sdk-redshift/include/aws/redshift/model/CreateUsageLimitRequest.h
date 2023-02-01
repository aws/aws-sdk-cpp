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
    AWS_REDSHIFT_API CreateUsageLimitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUsageLimit"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the cluster that you want to limit usage.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier of the cluster that you want to limit usage.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster that you want to limit usage.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster that you want to limit usage.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster that you want to limit usage.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster that you want to limit usage.</p>
     */
    inline CreateUsageLimitRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster that you want to limit usage.</p>
     */
    inline CreateUsageLimitRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster that you want to limit usage.</p>
     */
    inline CreateUsageLimitRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The Amazon Redshift feature that you want to limit.</p>
     */
    inline const UsageLimitFeatureType& GetFeatureType() const{ return m_featureType; }

    /**
     * <p>The Amazon Redshift feature that you want to limit.</p>
     */
    inline bool FeatureTypeHasBeenSet() const { return m_featureTypeHasBeenSet; }

    /**
     * <p>The Amazon Redshift feature that you want to limit.</p>
     */
    inline void SetFeatureType(const UsageLimitFeatureType& value) { m_featureTypeHasBeenSet = true; m_featureType = value; }

    /**
     * <p>The Amazon Redshift feature that you want to limit.</p>
     */
    inline void SetFeatureType(UsageLimitFeatureType&& value) { m_featureTypeHasBeenSet = true; m_featureType = std::move(value); }

    /**
     * <p>The Amazon Redshift feature that you want to limit.</p>
     */
    inline CreateUsageLimitRequest& WithFeatureType(const UsageLimitFeatureType& value) { SetFeatureType(value); return *this;}

    /**
     * <p>The Amazon Redshift feature that you want to limit.</p>
     */
    inline CreateUsageLimitRequest& WithFeatureType(UsageLimitFeatureType&& value) { SetFeatureType(std::move(value)); return *this;}


    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size. If <code>FeatureType</code> is <code>spectrum</code>,
     * then <code>LimitType</code> must be <code>data-scanned</code>. If
     * <code>FeatureType</code> is <code>concurrency-scaling</code>, then
     * <code>LimitType</code> must be <code>time</code>. If <code>FeatureType</code> is
     * <code>cross-region-datasharing</code>, then <code>LimitType</code> must be
     * <code>data-scanned</code>. </p>
     */
    inline const UsageLimitLimitType& GetLimitType() const{ return m_limitType; }

    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size. If <code>FeatureType</code> is <code>spectrum</code>,
     * then <code>LimitType</code> must be <code>data-scanned</code>. If
     * <code>FeatureType</code> is <code>concurrency-scaling</code>, then
     * <code>LimitType</code> must be <code>time</code>. If <code>FeatureType</code> is
     * <code>cross-region-datasharing</code>, then <code>LimitType</code> must be
     * <code>data-scanned</code>. </p>
     */
    inline bool LimitTypeHasBeenSet() const { return m_limitTypeHasBeenSet; }

    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size. If <code>FeatureType</code> is <code>spectrum</code>,
     * then <code>LimitType</code> must be <code>data-scanned</code>. If
     * <code>FeatureType</code> is <code>concurrency-scaling</code>, then
     * <code>LimitType</code> must be <code>time</code>. If <code>FeatureType</code> is
     * <code>cross-region-datasharing</code>, then <code>LimitType</code> must be
     * <code>data-scanned</code>. </p>
     */
    inline void SetLimitType(const UsageLimitLimitType& value) { m_limitTypeHasBeenSet = true; m_limitType = value; }

    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size. If <code>FeatureType</code> is <code>spectrum</code>,
     * then <code>LimitType</code> must be <code>data-scanned</code>. If
     * <code>FeatureType</code> is <code>concurrency-scaling</code>, then
     * <code>LimitType</code> must be <code>time</code>. If <code>FeatureType</code> is
     * <code>cross-region-datasharing</code>, then <code>LimitType</code> must be
     * <code>data-scanned</code>. </p>
     */
    inline void SetLimitType(UsageLimitLimitType&& value) { m_limitTypeHasBeenSet = true; m_limitType = std::move(value); }

    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size. If <code>FeatureType</code> is <code>spectrum</code>,
     * then <code>LimitType</code> must be <code>data-scanned</code>. If
     * <code>FeatureType</code> is <code>concurrency-scaling</code>, then
     * <code>LimitType</code> must be <code>time</code>. If <code>FeatureType</code> is
     * <code>cross-region-datasharing</code>, then <code>LimitType</code> must be
     * <code>data-scanned</code>. </p>
     */
    inline CreateUsageLimitRequest& WithLimitType(const UsageLimitLimitType& value) { SetLimitType(value); return *this;}

    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size. If <code>FeatureType</code> is <code>spectrum</code>,
     * then <code>LimitType</code> must be <code>data-scanned</code>. If
     * <code>FeatureType</code> is <code>concurrency-scaling</code>, then
     * <code>LimitType</code> must be <code>time</code>. If <code>FeatureType</code> is
     * <code>cross-region-datasharing</code>, then <code>LimitType</code> must be
     * <code>data-scanned</code>. </p>
     */
    inline CreateUsageLimitRequest& WithLimitType(UsageLimitLimitType&& value) { SetLimitType(std::move(value)); return *this;}


    /**
     * <p>The limit amount. If time-based, this amount is in minutes. If data-based,
     * this amount is in terabytes (TB). The value must be a positive number. </p>
     */
    inline long long GetAmount() const{ return m_amount; }

    /**
     * <p>The limit amount. If time-based, this amount is in minutes. If data-based,
     * this amount is in terabytes (TB). The value must be a positive number. </p>
     */
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }

    /**
     * <p>The limit amount. If time-based, this amount is in minutes. If data-based,
     * this amount is in terabytes (TB). The value must be a positive number. </p>
     */
    inline void SetAmount(long long value) { m_amountHasBeenSet = true; m_amount = value; }

    /**
     * <p>The limit amount. If time-based, this amount is in minutes. If data-based,
     * this amount is in terabytes (TB). The value must be a positive number. </p>
     */
    inline CreateUsageLimitRequest& WithAmount(long long value) { SetAmount(value); return *this;}


    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline const UsageLimitPeriod& GetPeriod() const{ return m_period; }

    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline void SetPeriod(const UsageLimitPeriod& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline void SetPeriod(UsageLimitPeriod&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline CreateUsageLimitRequest& WithPeriod(const UsageLimitPeriod& value) { SetPeriod(value); return *this;}

    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline CreateUsageLimitRequest& WithPeriod(UsageLimitPeriod&& value) { SetPeriod(std::move(value)); return *this;}


    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. The default
     * is log. For more information about this parameter, see <a>UsageLimit</a>.</p>
     */
    inline const UsageLimitBreachAction& GetBreachAction() const{ return m_breachAction; }

    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. The default
     * is log. For more information about this parameter, see <a>UsageLimit</a>.</p>
     */
    inline bool BreachActionHasBeenSet() const { return m_breachActionHasBeenSet; }

    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. The default
     * is log. For more information about this parameter, see <a>UsageLimit</a>.</p>
     */
    inline void SetBreachAction(const UsageLimitBreachAction& value) { m_breachActionHasBeenSet = true; m_breachAction = value; }

    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. The default
     * is log. For more information about this parameter, see <a>UsageLimit</a>.</p>
     */
    inline void SetBreachAction(UsageLimitBreachAction&& value) { m_breachActionHasBeenSet = true; m_breachAction = std::move(value); }

    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. The default
     * is log. For more information about this parameter, see <a>UsageLimit</a>.</p>
     */
    inline CreateUsageLimitRequest& WithBreachAction(const UsageLimitBreachAction& value) { SetBreachAction(value); return *this;}

    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. The default
     * is log. For more information about this parameter, see <a>UsageLimit</a>.</p>
     */
    inline CreateUsageLimitRequest& WithBreachAction(UsageLimitBreachAction&& value) { SetBreachAction(std::move(value)); return *this;}


    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateUsageLimitRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateUsageLimitRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateUsageLimitRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tag instances.</p>
     */
    inline CreateUsageLimitRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    UsageLimitFeatureType m_featureType;
    bool m_featureTypeHasBeenSet = false;

    UsageLimitLimitType m_limitType;
    bool m_limitTypeHasBeenSet = false;

    long long m_amount;
    bool m_amountHasBeenSet = false;

    UsageLimitPeriod m_period;
    bool m_periodHasBeenSet = false;

    UsageLimitBreachAction m_breachAction;
    bool m_breachActionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
