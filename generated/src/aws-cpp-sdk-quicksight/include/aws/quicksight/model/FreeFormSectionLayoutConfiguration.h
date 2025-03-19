/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/FreeFormLayoutElement.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The free-form layout configuration of a section.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FreeFormSectionLayoutConfiguration">AWS
   * API Reference</a></p>
   */
  class FreeFormSectionLayoutConfiguration
  {
  public:
    AWS_QUICKSIGHT_API FreeFormSectionLayoutConfiguration() = default;
    AWS_QUICKSIGHT_API FreeFormSectionLayoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FreeFormSectionLayoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The elements that are included in the free-form layout.</p>
     */
    inline const Aws::Vector<FreeFormLayoutElement>& GetElements() const { return m_elements; }
    inline bool ElementsHasBeenSet() const { return m_elementsHasBeenSet; }
    template<typename ElementsT = Aws::Vector<FreeFormLayoutElement>>
    void SetElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements = std::forward<ElementsT>(value); }
    template<typename ElementsT = Aws::Vector<FreeFormLayoutElement>>
    FreeFormSectionLayoutConfiguration& WithElements(ElementsT&& value) { SetElements(std::forward<ElementsT>(value)); return *this;}
    template<typename ElementsT = FreeFormLayoutElement>
    FreeFormSectionLayoutConfiguration& AddElements(ElementsT&& value) { m_elementsHasBeenSet = true; m_elements.emplace_back(std::forward<ElementsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FreeFormLayoutElement> m_elements;
    bool m_elementsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
