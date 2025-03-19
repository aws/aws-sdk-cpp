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
    AWS_PINPOINT_API ResultRow() = default;
    AWS_PINPOINT_API ResultRow(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API ResultRow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of objects that defines the field and field values that were used to
     * group data in a result set that contains multiple results. This value is null if
     * the data in a result set isn’t grouped.</p>
     */
    inline const Aws::Vector<ResultRowValue>& GetGroupedBys() const { return m_groupedBys; }
    inline bool GroupedBysHasBeenSet() const { return m_groupedBysHasBeenSet; }
    template<typename GroupedBysT = Aws::Vector<ResultRowValue>>
    void SetGroupedBys(GroupedBysT&& value) { m_groupedBysHasBeenSet = true; m_groupedBys = std::forward<GroupedBysT>(value); }
    template<typename GroupedBysT = Aws::Vector<ResultRowValue>>
    ResultRow& WithGroupedBys(GroupedBysT&& value) { SetGroupedBys(std::forward<GroupedBysT>(value)); return *this;}
    template<typename GroupedBysT = ResultRowValue>
    ResultRow& AddGroupedBys(GroupedBysT&& value) { m_groupedBysHasBeenSet = true; m_groupedBys.emplace_back(std::forward<GroupedBysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects that provides pre-aggregated values for a standard metric
     * that applies to an application, campaign, or journey.</p>
     */
    inline const Aws::Vector<ResultRowValue>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<ResultRowValue>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<ResultRowValue>>
    ResultRow& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = ResultRowValue>
    ResultRow& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ResultRowValue> m_groupedBys;
    bool m_groupedBysHasBeenSet = false;

    Aws::Vector<ResultRowValue> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
