/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/ObjectiveSensitivity.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes the additional objective for the solution, such as maximizing
   * streaming minutes or increasing revenue. For more information see <a
   * href="https://docs.aws.amazon.com/personalize/latest/dg/optimizing-solution-for-objective.html">Optimizing
   * a solution</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/OptimizationObjective">AWS
   * API Reference</a></p>
   */
  class OptimizationObjective
  {
  public:
    AWS_PERSONALIZE_API OptimizationObjective() = default;
    AWS_PERSONALIZE_API OptimizationObjective(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API OptimizationObjective& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The numerical metadata column in an Items dataset related to the optimization
     * objective. For example, VIDEO_LENGTH (to maximize streaming minutes), or PRICE
     * (to maximize revenue).</p>
     */
    inline const Aws::String& GetItemAttribute() const { return m_itemAttribute; }
    inline bool ItemAttributeHasBeenSet() const { return m_itemAttributeHasBeenSet; }
    template<typename ItemAttributeT = Aws::String>
    void SetItemAttribute(ItemAttributeT&& value) { m_itemAttributeHasBeenSet = true; m_itemAttribute = std::forward<ItemAttributeT>(value); }
    template<typename ItemAttributeT = Aws::String>
    OptimizationObjective& WithItemAttribute(ItemAttributeT&& value) { SetItemAttribute(std::forward<ItemAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how Amazon Personalize balances the importance of your optimization
     * objective versus relevance.</p>
     */
    inline ObjectiveSensitivity GetObjectiveSensitivity() const { return m_objectiveSensitivity; }
    inline bool ObjectiveSensitivityHasBeenSet() const { return m_objectiveSensitivityHasBeenSet; }
    inline void SetObjectiveSensitivity(ObjectiveSensitivity value) { m_objectiveSensitivityHasBeenSet = true; m_objectiveSensitivity = value; }
    inline OptimizationObjective& WithObjectiveSensitivity(ObjectiveSensitivity value) { SetObjectiveSensitivity(value); return *this;}
    ///@}
  private:

    Aws::String m_itemAttribute;
    bool m_itemAttributeHasBeenSet = false;

    ObjectiveSensitivity m_objectiveSensitivity{ObjectiveSensitivity::NOT_SET};
    bool m_objectiveSensitivityHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
