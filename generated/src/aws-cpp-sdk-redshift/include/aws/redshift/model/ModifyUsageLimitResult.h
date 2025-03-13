/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/UsageLimitFeatureType.h>
#include <aws/redshift/model/UsageLimitLimitType.h>
#include <aws/redshift/model/UsageLimitPeriod.h>
#include <aws/redshift/model/UsageLimitBreachAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/Tag.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  /**
   * <p>Describes a usage limit object for a cluster. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/UsageLimit">AWS
   * API Reference</a></p>
   */
  class ModifyUsageLimitResult
  {
  public:
    AWS_REDSHIFT_API ModifyUsageLimitResult() = default;
    AWS_REDSHIFT_API ModifyUsageLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ModifyUsageLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline const Aws::String& GetUsageLimitId() const { return m_usageLimitId; }
    template<typename UsageLimitIdT = Aws::String>
    void SetUsageLimitId(UsageLimitIdT&& value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId = std::forward<UsageLimitIdT>(value); }
    template<typename UsageLimitIdT = Aws::String>
    ModifyUsageLimitResult& WithUsageLimitId(UsageLimitIdT&& value) { SetUsageLimitId(std::forward<UsageLimitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the cluster with a usage limit.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    ModifyUsageLimitResult& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift feature to which the limit applies.</p>
     */
    inline UsageLimitFeatureType GetFeatureType() const { return m_featureType; }
    inline void SetFeatureType(UsageLimitFeatureType value) { m_featureTypeHasBeenSet = true; m_featureType = value; }
    inline ModifyUsageLimitResult& WithFeatureType(UsageLimitFeatureType value) { SetFeatureType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size.</p>
     */
    inline UsageLimitLimitType GetLimitType() const { return m_limitType; }
    inline void SetLimitType(UsageLimitLimitType value) { m_limitTypeHasBeenSet = true; m_limitType = value; }
    inline ModifyUsageLimitResult& WithLimitType(UsageLimitLimitType value) { SetLimitType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limit amount. If time-based, this amount is in minutes. If data-based,
     * this amount is in terabytes (TB).</p>
     */
    inline long long GetAmount() const { return m_amount; }
    inline void SetAmount(long long value) { m_amountHasBeenSet = true; m_amount = value; }
    inline ModifyUsageLimitResult& WithAmount(long long value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline UsageLimitPeriod GetPeriod() const { return m_period; }
    inline void SetPeriod(UsageLimitPeriod value) { m_periodHasBeenSet = true; m_period = value; }
    inline ModifyUsageLimitResult& WithPeriod(UsageLimitPeriod value) { SetPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. Possible
     * values are: </p> <ul> <li> <p> <b>log</b> - To log an event in a system table.
     * The default is log.</p> </li> <li> <p> <b>emit-metric</b> - To emit CloudWatch
     * metrics.</p> </li> <li> <p> <b>disable</b> - To disable the feature until the
     * next usage period begins.</p> </li> </ul>
     */
    inline UsageLimitBreachAction GetBreachAction() const { return m_breachAction; }
    inline void SetBreachAction(UsageLimitBreachAction value) { m_breachActionHasBeenSet = true; m_breachAction = value; }
    inline ModifyUsageLimitResult& WithBreachAction(UsageLimitBreachAction value) { SetBreachAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    ModifyUsageLimitResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    ModifyUsageLimitResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyUsageLimitResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_usageLimitId;
    bool m_usageLimitIdHasBeenSet = false;

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

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
