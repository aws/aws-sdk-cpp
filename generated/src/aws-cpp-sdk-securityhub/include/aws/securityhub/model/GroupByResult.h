/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/GroupByValue.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Represents finding statistics grouped by
   * <code>GroupedByField</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GroupByResult">AWS
   * API Reference</a></p>
   */
  class GroupByResult
  {
  public:
    AWS_SECURITYHUB_API GroupByResult() = default;
    AWS_SECURITYHUB_API GroupByResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API GroupByResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attribute by which filtered security findings should be grouped.</p>
     */
    inline const Aws::String& GetGroupByField() const { return m_groupByField; }
    inline bool GroupByFieldHasBeenSet() const { return m_groupByFieldHasBeenSet; }
    template<typename GroupByFieldT = Aws::String>
    void SetGroupByField(GroupByFieldT&& value) { m_groupByFieldHasBeenSet = true; m_groupByField = std::forward<GroupByFieldT>(value); }
    template<typename GroupByFieldT = Aws::String>
    GroupByResult& WithGroupByField(GroupByFieldT&& value) { SetGroupByField(std::forward<GroupByFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of grouped values and their respective counts for each
     * <code>GroupByField</code>.</p>
     */
    inline const Aws::Vector<GroupByValue>& GetGroupByValues() const { return m_groupByValues; }
    inline bool GroupByValuesHasBeenSet() const { return m_groupByValuesHasBeenSet; }
    template<typename GroupByValuesT = Aws::Vector<GroupByValue>>
    void SetGroupByValues(GroupByValuesT&& value) { m_groupByValuesHasBeenSet = true; m_groupByValues = std::forward<GroupByValuesT>(value); }
    template<typename GroupByValuesT = Aws::Vector<GroupByValue>>
    GroupByResult& WithGroupByValues(GroupByValuesT&& value) { SetGroupByValues(std::forward<GroupByValuesT>(value)); return *this;}
    template<typename GroupByValuesT = GroupByValue>
    GroupByResult& AddGroupByValues(GroupByValuesT&& value) { m_groupByValuesHasBeenSet = true; m_groupByValues.emplace_back(std::forward<GroupByValuesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_groupByField;
    bool m_groupByFieldHasBeenSet = false;

    Aws::Vector<GroupByValue> m_groupByValues;
    bool m_groupByValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
