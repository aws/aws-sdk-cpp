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
    AWS_REDSHIFT_API ModifyUsageLimitResult();
    AWS_REDSHIFT_API ModifyUsageLimitResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API ModifyUsageLimitResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The identifier of the usage limit.</p>
     */
    inline const Aws::String& GetUsageLimitId() const{ return m_usageLimitId; }
    inline void SetUsageLimitId(const Aws::String& value) { m_usageLimitId = value; }
    inline void SetUsageLimitId(Aws::String&& value) { m_usageLimitId = std::move(value); }
    inline void SetUsageLimitId(const char* value) { m_usageLimitId.assign(value); }
    inline ModifyUsageLimitResult& WithUsageLimitId(const Aws::String& value) { SetUsageLimitId(value); return *this;}
    inline ModifyUsageLimitResult& WithUsageLimitId(Aws::String&& value) { SetUsageLimitId(std::move(value)); return *this;}
    inline ModifyUsageLimitResult& WithUsageLimitId(const char* value) { SetUsageLimitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the cluster with a usage limit.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifier.assign(value); }
    inline ModifyUsageLimitResult& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline ModifyUsageLimitResult& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline ModifyUsageLimitResult& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Redshift feature to which the limit applies.</p>
     */
    inline const UsageLimitFeatureType& GetFeatureType() const{ return m_featureType; }
    inline void SetFeatureType(const UsageLimitFeatureType& value) { m_featureType = value; }
    inline void SetFeatureType(UsageLimitFeatureType&& value) { m_featureType = std::move(value); }
    inline ModifyUsageLimitResult& WithFeatureType(const UsageLimitFeatureType& value) { SetFeatureType(value); return *this;}
    inline ModifyUsageLimitResult& WithFeatureType(UsageLimitFeatureType&& value) { SetFeatureType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of limit. Depending on the feature type, this can be based on a time
     * duration or data size.</p>
     */
    inline const UsageLimitLimitType& GetLimitType() const{ return m_limitType; }
    inline void SetLimitType(const UsageLimitLimitType& value) { m_limitType = value; }
    inline void SetLimitType(UsageLimitLimitType&& value) { m_limitType = std::move(value); }
    inline ModifyUsageLimitResult& WithLimitType(const UsageLimitLimitType& value) { SetLimitType(value); return *this;}
    inline ModifyUsageLimitResult& WithLimitType(UsageLimitLimitType&& value) { SetLimitType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limit amount. If time-based, this amount is in minutes. If data-based,
     * this amount is in terabytes (TB).</p>
     */
    inline long long GetAmount() const{ return m_amount; }
    inline void SetAmount(long long value) { m_amount = value; }
    inline ModifyUsageLimitResult& WithAmount(long long value) { SetAmount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period that the amount applies to. A <code>weekly</code> period
     * begins on Sunday. The default is <code>monthly</code>. </p>
     */
    inline const UsageLimitPeriod& GetPeriod() const{ return m_period; }
    inline void SetPeriod(const UsageLimitPeriod& value) { m_period = value; }
    inline void SetPeriod(UsageLimitPeriod&& value) { m_period = std::move(value); }
    inline ModifyUsageLimitResult& WithPeriod(const UsageLimitPeriod& value) { SetPeriod(value); return *this;}
    inline ModifyUsageLimitResult& WithPeriod(UsageLimitPeriod&& value) { SetPeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that Amazon Redshift takes when the limit is reached. Possible
     * values are: </p> <ul> <li> <p> <b>log</b> - To log an event in a system table.
     * The default is log.</p> </li> <li> <p> <b>emit-metric</b> - To emit CloudWatch
     * metrics.</p> </li> <li> <p> <b>disable</b> - To disable the feature until the
     * next usage period begins.</p> </li> </ul>
     */
    inline const UsageLimitBreachAction& GetBreachAction() const{ return m_breachAction; }
    inline void SetBreachAction(const UsageLimitBreachAction& value) { m_breachAction = value; }
    inline void SetBreachAction(UsageLimitBreachAction&& value) { m_breachAction = std::move(value); }
    inline ModifyUsageLimitResult& WithBreachAction(const UsageLimitBreachAction& value) { SetBreachAction(value); return *this;}
    inline ModifyUsageLimitResult& WithBreachAction(UsageLimitBreachAction&& value) { SetBreachAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tag instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline ModifyUsageLimitResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline ModifyUsageLimitResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline ModifyUsageLimitResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline ModifyUsageLimitResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline ModifyUsageLimitResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline ModifyUsageLimitResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_usageLimitId;

    Aws::String m_clusterIdentifier;

    UsageLimitFeatureType m_featureType;

    UsageLimitLimitType m_limitType;

    long long m_amount;

    UsageLimitPeriod m_period;

    UsageLimitBreachAction m_breachAction;

    Aws::Vector<Tag> m_tags;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
