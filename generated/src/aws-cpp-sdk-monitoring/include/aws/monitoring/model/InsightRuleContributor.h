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
    AWS_CLOUDWATCH_API InsightRuleContributor();
    AWS_CLOUDWATCH_API InsightRuleContributor(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API InsightRuleContributor& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One of the log entry field keywords that is used to define contributors for
     * this rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const{ return m_keys; }

    /**
     * <p>One of the log entry field keywords that is used to define contributors for
     * this rule.</p>
     */
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }

    /**
     * <p>One of the log entry field keywords that is used to define contributors for
     * this rule.</p>
     */
    inline void SetKeys(const Aws::Vector<Aws::String>& value) { m_keysHasBeenSet = true; m_keys = value; }

    /**
     * <p>One of the log entry field keywords that is used to define contributors for
     * this rule.</p>
     */
    inline void SetKeys(Aws::Vector<Aws::String>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }

    /**
     * <p>One of the log entry field keywords that is used to define contributors for
     * this rule.</p>
     */
    inline InsightRuleContributor& WithKeys(const Aws::Vector<Aws::String>& value) { SetKeys(value); return *this;}

    /**
     * <p>One of the log entry field keywords that is used to define contributors for
     * this rule.</p>
     */
    inline InsightRuleContributor& WithKeys(Aws::Vector<Aws::String>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>One of the log entry field keywords that is used to define contributors for
     * this rule.</p>
     */
    inline InsightRuleContributor& AddKeys(const Aws::String& value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }

    /**
     * <p>One of the log entry field keywords that is used to define contributors for
     * this rule.</p>
     */
    inline InsightRuleContributor& AddKeys(Aws::String&& value) { m_keysHasBeenSet = true; m_keys.push_back(std::move(value)); return *this; }

    /**
     * <p>One of the log entry field keywords that is used to define contributors for
     * this rule.</p>
     */
    inline InsightRuleContributor& AddKeys(const char* value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }


    /**
     * <p>An approximation of the aggregate value that comes from this contributor.</p>
     */
    inline double GetApproximateAggregateValue() const{ return m_approximateAggregateValue; }

    /**
     * <p>An approximation of the aggregate value that comes from this contributor.</p>
     */
    inline bool ApproximateAggregateValueHasBeenSet() const { return m_approximateAggregateValueHasBeenSet; }

    /**
     * <p>An approximation of the aggregate value that comes from this contributor.</p>
     */
    inline void SetApproximateAggregateValue(double value) { m_approximateAggregateValueHasBeenSet = true; m_approximateAggregateValue = value; }

    /**
     * <p>An approximation of the aggregate value that comes from this contributor.</p>
     */
    inline InsightRuleContributor& WithApproximateAggregateValue(double value) { SetApproximateAggregateValue(value); return *this;}


    /**
     * <p>An array of the data points where this contributor is present. Only the data
     * points when this contributor appeared are included in the array.</p>
     */
    inline const Aws::Vector<InsightRuleContributorDatapoint>& GetDatapoints() const{ return m_datapoints; }

    /**
     * <p>An array of the data points where this contributor is present. Only the data
     * points when this contributor appeared are included in the array.</p>
     */
    inline bool DatapointsHasBeenSet() const { return m_datapointsHasBeenSet; }

    /**
     * <p>An array of the data points where this contributor is present. Only the data
     * points when this contributor appeared are included in the array.</p>
     */
    inline void SetDatapoints(const Aws::Vector<InsightRuleContributorDatapoint>& value) { m_datapointsHasBeenSet = true; m_datapoints = value; }

    /**
     * <p>An array of the data points where this contributor is present. Only the data
     * points when this contributor appeared are included in the array.</p>
     */
    inline void SetDatapoints(Aws::Vector<InsightRuleContributorDatapoint>&& value) { m_datapointsHasBeenSet = true; m_datapoints = std::move(value); }

    /**
     * <p>An array of the data points where this contributor is present. Only the data
     * points when this contributor appeared are included in the array.</p>
     */
    inline InsightRuleContributor& WithDatapoints(const Aws::Vector<InsightRuleContributorDatapoint>& value) { SetDatapoints(value); return *this;}

    /**
     * <p>An array of the data points where this contributor is present. Only the data
     * points when this contributor appeared are included in the array.</p>
     */
    inline InsightRuleContributor& WithDatapoints(Aws::Vector<InsightRuleContributorDatapoint>&& value) { SetDatapoints(std::move(value)); return *this;}

    /**
     * <p>An array of the data points where this contributor is present. Only the data
     * points when this contributor appeared are included in the array.</p>
     */
    inline InsightRuleContributor& AddDatapoints(const InsightRuleContributorDatapoint& value) { m_datapointsHasBeenSet = true; m_datapoints.push_back(value); return *this; }

    /**
     * <p>An array of the data points where this contributor is present. Only the data
     * points when this contributor appeared are included in the array.</p>
     */
    inline InsightRuleContributor& AddDatapoints(InsightRuleContributorDatapoint&& value) { m_datapointsHasBeenSet = true; m_datapoints.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_keys;
    bool m_keysHasBeenSet = false;

    double m_approximateAggregateValue;
    bool m_approximateAggregateValueHasBeenSet = false;

    Aws::Vector<InsightRuleContributorDatapoint> m_datapoints;
    bool m_datapointsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
