/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint/model/ResultRowValue.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides the results of a query that retrieved the data for a standard metric
   * that applies to an application, campaign, or journey.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/ResultRow">AWS
   * API Reference</a></p>
   */
  class ResultRow
  {
  public:
    AWS_PINPOINT_API ResultRow();
    AWS_PINPOINT_API ResultRow(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ResultRow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of objects that defines the field and field values that were used to
     * group data in a result set that contains multiple results. This value is null if
     * the data in a result set isn’t grouped.</p>
     */
    inline const Aws::Vector<ResultRowValue>& GetGroupedBys() const{ return m_groupedBys; }

    /**
     * <p>An array of objects that defines the field and field values that were used to
     * group data in a result set that contains multiple results. This value is null if
     * the data in a result set isn’t grouped.</p>
     */
    inline bool GroupedBysHasBeenSet() const { return m_groupedBysHasBeenSet; }

    /**
     * <p>An array of objects that defines the field and field values that were used to
     * group data in a result set that contains multiple results. This value is null if
     * the data in a result set isn’t grouped.</p>
     */
    inline void SetGroupedBys(const Aws::Vector<ResultRowValue>& value) { m_groupedBysHasBeenSet = true; m_groupedBys = value; }

    /**
     * <p>An array of objects that defines the field and field values that were used to
     * group data in a result set that contains multiple results. This value is null if
     * the data in a result set isn’t grouped.</p>
     */
    inline void SetGroupedBys(Aws::Vector<ResultRowValue>&& value) { m_groupedBysHasBeenSet = true; m_groupedBys = std::move(value); }

    /**
     * <p>An array of objects that defines the field and field values that were used to
     * group data in a result set that contains multiple results. This value is null if
     * the data in a result set isn’t grouped.</p>
     */
    inline ResultRow& WithGroupedBys(const Aws::Vector<ResultRowValue>& value) { SetGroupedBys(value); return *this;}

    /**
     * <p>An array of objects that defines the field and field values that were used to
     * group data in a result set that contains multiple results. This value is null if
     * the data in a result set isn’t grouped.</p>
     */
    inline ResultRow& WithGroupedBys(Aws::Vector<ResultRowValue>&& value) { SetGroupedBys(std::move(value)); return *this;}

    /**
     * <p>An array of objects that defines the field and field values that were used to
     * group data in a result set that contains multiple results. This value is null if
     * the data in a result set isn’t grouped.</p>
     */
    inline ResultRow& AddGroupedBys(const ResultRowValue& value) { m_groupedBysHasBeenSet = true; m_groupedBys.push_back(value); return *this; }

    /**
     * <p>An array of objects that defines the field and field values that were used to
     * group data in a result set that contains multiple results. This value is null if
     * the data in a result set isn’t grouped.</p>
     */
    inline ResultRow& AddGroupedBys(ResultRowValue&& value) { m_groupedBysHasBeenSet = true; m_groupedBys.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of objects that provides pre-aggregated values for a standard metric
     * that applies to an application, campaign, or journey.</p>
     */
    inline const Aws::Vector<ResultRowValue>& GetValues() const{ return m_values; }

    /**
     * <p>An array of objects that provides pre-aggregated values for a standard metric
     * that applies to an application, campaign, or journey.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>An array of objects that provides pre-aggregated values for a standard metric
     * that applies to an application, campaign, or journey.</p>
     */
    inline void SetValues(const Aws::Vector<ResultRowValue>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>An array of objects that provides pre-aggregated values for a standard metric
     * that applies to an application, campaign, or journey.</p>
     */
    inline void SetValues(Aws::Vector<ResultRowValue>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>An array of objects that provides pre-aggregated values for a standard metric
     * that applies to an application, campaign, or journey.</p>
     */
    inline ResultRow& WithValues(const Aws::Vector<ResultRowValue>& value) { SetValues(value); return *this;}

    /**
     * <p>An array of objects that provides pre-aggregated values for a standard metric
     * that applies to an application, campaign, or journey.</p>
     */
    inline ResultRow& WithValues(Aws::Vector<ResultRowValue>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>An array of objects that provides pre-aggregated values for a standard metric
     * that applies to an application, campaign, or journey.</p>
     */
    inline ResultRow& AddValues(const ResultRowValue& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>An array of objects that provides pre-aggregated values for a standard metric
     * that applies to an application, campaign, or journey.</p>
     */
    inline ResultRow& AddValues(ResultRowValue&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ResultRowValue> m_groupedBys;
    bool m_groupedBysHasBeenSet = false;

    Aws::Vector<ResultRowValue> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
