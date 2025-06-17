/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/ResourceGroupByField.h>
#include <aws/securityhub/model/ResourcesFilters.h>
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
   * <p>Defines the configuration for organizing and categorizing Amazon Web Services
   * resources based on associated security findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourceGroupByRule">AWS
   * API Reference</a></p>
   */
  class ResourceGroupByRule
  {
  public:
    AWS_SECURITYHUB_API ResourceGroupByRule() = default;
    AWS_SECURITYHUB_API ResourceGroupByRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ResourceGroupByRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the attribute that resources should be grouped by.</p>
     */
    inline ResourceGroupByField GetGroupByField() const { return m_groupByField; }
    inline bool GroupByFieldHasBeenSet() const { return m_groupByFieldHasBeenSet; }
    inline void SetGroupByField(ResourceGroupByField value) { m_groupByFieldHasBeenSet = true; m_groupByField = value; }
    inline ResourceGroupByRule& WithGroupByField(ResourceGroupByField value) { SetGroupByField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria used to select resources and associated security findings.</p>
     */
    inline const ResourcesFilters& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = ResourcesFilters>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = ResourcesFilters>
    ResourceGroupByRule& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    ///@}
  private:

    ResourceGroupByField m_groupByField{ResourceGroupByField::NOT_SET};
    bool m_groupByFieldHasBeenSet = false;

    ResourcesFilters m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
