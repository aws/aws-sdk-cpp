/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AllowedOperators.h>
#include <aws/securityhub/model/CompositeFilter.h>
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
   * <p>Specifies the filtering criteria for security findings using
   * OCSF.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/OcsfFindingFilters">AWS
   * API Reference</a></p>
   */
  class OcsfFindingFilters
  {
  public:
    AWS_SECURITYHUB_API OcsfFindingFilters() = default;
    AWS_SECURITYHUB_API OcsfFindingFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API OcsfFindingFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables the creation of complex filtering conditions by combining filter
     * criteria.</p>
     */
    inline const Aws::Vector<CompositeFilter>& GetCompositeFilters() const { return m_compositeFilters; }
    inline bool CompositeFiltersHasBeenSet() const { return m_compositeFiltersHasBeenSet; }
    template<typename CompositeFiltersT = Aws::Vector<CompositeFilter>>
    void SetCompositeFilters(CompositeFiltersT&& value) { m_compositeFiltersHasBeenSet = true; m_compositeFilters = std::forward<CompositeFiltersT>(value); }
    template<typename CompositeFiltersT = Aws::Vector<CompositeFilter>>
    OcsfFindingFilters& WithCompositeFilters(CompositeFiltersT&& value) { SetCompositeFilters(std::forward<CompositeFiltersT>(value)); return *this;}
    template<typename CompositeFiltersT = CompositeFilter>
    OcsfFindingFilters& AddCompositeFilters(CompositeFiltersT&& value) { m_compositeFiltersHasBeenSet = true; m_compositeFilters.emplace_back(std::forward<CompositeFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The logical operators used to combine the filtering on multiple
     * <code>CompositeFilters</code>.</p>
     */
    inline AllowedOperators GetCompositeOperator() const { return m_compositeOperator; }
    inline bool CompositeOperatorHasBeenSet() const { return m_compositeOperatorHasBeenSet; }
    inline void SetCompositeOperator(AllowedOperators value) { m_compositeOperatorHasBeenSet = true; m_compositeOperator = value; }
    inline OcsfFindingFilters& WithCompositeOperator(AllowedOperators value) { SetCompositeOperator(value); return *this;}
    ///@}
  private:

    Aws::Vector<CompositeFilter> m_compositeFilters;
    bool m_compositeFiltersHasBeenSet = false;

    AllowedOperators m_compositeOperator{AllowedOperators::NOT_SET};
    bool m_compositeOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
