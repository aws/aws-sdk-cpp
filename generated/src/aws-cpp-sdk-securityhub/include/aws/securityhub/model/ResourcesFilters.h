/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AllowedOperators.h>
#include <aws/securityhub/model/ResourcesCompositeFilter.h>
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
   * <p>Enables filtering of Amazon Web Services resources based on
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourcesFilters">AWS
   * API Reference</a></p>
   */
  class ResourcesFilters
  {
  public:
    AWS_SECURITYHUB_API ResourcesFilters() = default;
    AWS_SECURITYHUB_API ResourcesFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ResourcesFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A collection of complex filtering conditions that can be applied to Amazon
     * Web Services resources.</p>
     */
    inline const Aws::Vector<ResourcesCompositeFilter>& GetCompositeFilters() const { return m_compositeFilters; }
    inline bool CompositeFiltersHasBeenSet() const { return m_compositeFiltersHasBeenSet; }
    template<typename CompositeFiltersT = Aws::Vector<ResourcesCompositeFilter>>
    void SetCompositeFilters(CompositeFiltersT&& value) { m_compositeFiltersHasBeenSet = true; m_compositeFilters = std::forward<CompositeFiltersT>(value); }
    template<typename CompositeFiltersT = Aws::Vector<ResourcesCompositeFilter>>
    ResourcesFilters& WithCompositeFilters(CompositeFiltersT&& value) { SetCompositeFilters(std::forward<CompositeFiltersT>(value)); return *this;}
    template<typename CompositeFiltersT = ResourcesCompositeFilter>
    ResourcesFilters& AddCompositeFilters(CompositeFiltersT&& value) { m_compositeFiltersHasBeenSet = true; m_compositeFilters.emplace_back(std::forward<CompositeFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logical operator used to combine multiple filter conditions in the
     * structure.</p>
     */
    inline AllowedOperators GetCompositeOperator() const { return m_compositeOperator; }
    inline bool CompositeOperatorHasBeenSet() const { return m_compositeOperatorHasBeenSet; }
    inline void SetCompositeOperator(AllowedOperators value) { m_compositeOperatorHasBeenSet = true; m_compositeOperator = value; }
    inline ResourcesFilters& WithCompositeOperator(AllowedOperators value) { SetCompositeOperator(value); return *this;}
    ///@}
  private:

    Aws::Vector<ResourcesCompositeFilter> m_compositeFilters;
    bool m_compositeFiltersHasBeenSet = false;

    AllowedOperators m_compositeOperator{AllowedOperators::NOT_SET};
    bool m_compositeOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
