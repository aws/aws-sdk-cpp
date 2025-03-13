/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/InsightRuleContributorDatapoint.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>One of the unique contributors found by a Contributor Insights rule. If the
   * rule contains multiple keys, then a unique contributor is a unique combination
   * of values from all the keys in the rule.</p> <p>If the rule contains a single
   * key, then each unique contributor is each unique value for this key.</p> <p>For
   * more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/API_GetInsightRuleReport.html">GetInsightRuleReport</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/InsightRuleContributor">AWS
   * API Reference</a></p>
   */
  class InsightRuleContributor
  {
  public:
    AWS_CLOUDWATCH_API InsightRuleContributor() = default;
    AWS_CLOUDWATCH_API InsightRuleContributor(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API InsightRuleContributor& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>One of the log entry field keywords that is used to define contributors for
     * this rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const { return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    template<typename KeysT = Aws::Vector<Aws::String>>
    void SetKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys = std::forward<KeysT>(value); }
    template<typename KeysT = Aws::Vector<Aws::String>>
    InsightRuleContributor& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysT = Aws::String>
    InsightRuleContributor& AddKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys.emplace_back(std::forward<KeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An approximation of the aggregate value that comes from this contributor.</p>
     */
    inline double GetApproximateAggregateValue() const { return m_approximateAggregateValue; }
    inline bool ApproximateAggregateValueHasBeenSet() const { return m_approximateAggregateValueHasBeenSet; }
    inline void SetApproximateAggregateValue(double value) { m_approximateAggregateValueHasBeenSet = true; m_approximateAggregateValue = value; }
    inline InsightRuleContributor& WithApproximateAggregateValue(double value) { SetApproximateAggregateValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of the data points where this contributor is present. Only the data
     * points when this contributor appeared are included in the array.</p>
     */
    inline const Aws::Vector<InsightRuleContributorDatapoint>& GetDatapoints() const { return m_datapoints; }
    inline bool DatapointsHasBeenSet() const { return m_datapointsHasBeenSet; }
    template<typename DatapointsT = Aws::Vector<InsightRuleContributorDatapoint>>
    void SetDatapoints(DatapointsT&& value) { m_datapointsHasBeenSet = true; m_datapoints = std::forward<DatapointsT>(value); }
    template<typename DatapointsT = Aws::Vector<InsightRuleContributorDatapoint>>
    InsightRuleContributor& WithDatapoints(DatapointsT&& value) { SetDatapoints(std::forward<DatapointsT>(value)); return *this;}
    template<typename DatapointsT = InsightRuleContributorDatapoint>
    InsightRuleContributor& AddDatapoints(DatapointsT&& value) { m_datapointsHasBeenSet = true; m_datapoints.emplace_back(std::forward<DatapointsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_keys;
    bool m_keysHasBeenSet = false;

    double m_approximateAggregateValue{0.0};
    bool m_approximateAggregateValueHasBeenSet = false;

    Aws::Vector<InsightRuleContributorDatapoint> m_datapoints;
    bool m_datapointsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
