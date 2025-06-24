/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/OcsfFindingFilters.h>
#include <aws/securityhub/model/GroupByField.h>
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
   * <p>Defines the how the finding attribute should be grouped.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/GroupByRule">AWS
   * API Reference</a></p>
   */
  class GroupByRule
  {
  public:
    AWS_SECURITYHUB_API GroupByRule() = default;
    AWS_SECURITYHUB_API GroupByRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API GroupByRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The criteria used to select which security findings should be included in the
     * grouping operation.</p>
     */
    inline const OcsfFindingFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = OcsfFindingFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = OcsfFindingFilters>
    GroupByRule& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute by which filtered findings should be grouped.</p>
     */
    inline GroupByField GetGroupByField() const { return m_groupByField; }
    inline bool GroupByFieldHasBeenSet() const { return m_groupByFieldHasBeenSet; }
    inline void SetGroupByField(GroupByField value) { m_groupByFieldHasBeenSet = true; m_groupByField = value; }
    inline GroupByRule& WithGroupByField(GroupByField value) { SetGroupByField(value); return *this;}
    ///@}
  private:

    OcsfFindingFilters m_filters;
    bool m_filtersHasBeenSet = false;

    GroupByField m_groupByField{GroupByField::NOT_SET};
    bool m_groupByFieldHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
