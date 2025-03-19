/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
#include <aws/quicksight/model/TopBottomSortOrder.h>
#include <aws/quicksight/model/TopBottomComputationType.h>
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
   * <p>The top movers and bottom movers computation setup.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopBottomMoversComputation">AWS
   * API Reference</a></p>
   */
  class TopBottomMoversComputation
  {
  public:
    AWS_QUICKSIGHT_API TopBottomMoversComputation() = default;
    AWS_QUICKSIGHT_API TopBottomMoversComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopBottomMoversComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for a computation.</p>
     */
    inline const Aws::String& GetComputationId() const { return m_computationId; }
    inline bool ComputationIdHasBeenSet() const { return m_computationIdHasBeenSet; }
    template<typename ComputationIdT = Aws::String>
    void SetComputationId(ComputationIdT&& value) { m_computationIdHasBeenSet = true; m_computationId = std::forward<ComputationIdT>(value); }
    template<typename ComputationIdT = Aws::String>
    TopBottomMoversComputation& WithComputationId(ComputationIdT&& value) { SetComputationId(std::forward<ComputationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a computation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TopBottomMoversComputation& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline const DimensionField& GetTime() const { return m_time; }
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }
    template<typename TimeT = DimensionField>
    void SetTime(TimeT&& value) { m_timeHasBeenSet = true; m_time = std::forward<TimeT>(value); }
    template<typename TimeT = DimensionField>
    TopBottomMoversComputation& WithTime(TimeT&& value) { SetTime(std::forward<TimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category field that is used in a computation.</p>
     */
    inline const DimensionField& GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    template<typename CategoryT = DimensionField>
    void SetCategory(CategoryT&& value) { m_categoryHasBeenSet = true; m_category = std::forward<CategoryT>(value); }
    template<typename CategoryT = DimensionField>
    TopBottomMoversComputation& WithCategory(CategoryT&& value) { SetCategory(std::forward<CategoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline const MeasureField& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = MeasureField>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = MeasureField>
    TopBottomMoversComputation& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mover size setup of the top and bottom movers computation.</p>
     */
    inline int GetMoverSize() const { return m_moverSize; }
    inline bool MoverSizeHasBeenSet() const { return m_moverSizeHasBeenSet; }
    inline void SetMoverSize(int value) { m_moverSizeHasBeenSet = true; m_moverSize = value; }
    inline TopBottomMoversComputation& WithMoverSize(int value) { SetMoverSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort order setup of the top and bottom movers computation.</p>
     */
    inline TopBottomSortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(TopBottomSortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline TopBottomMoversComputation& WithSortOrder(TopBottomSortOrder value) { SetSortOrder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The computation type. Choose from the following options:</p> <ul> <li>
     * <p>TOP: Top movers computation.</p> </li> <li> <p>BOTTOM: Bottom movers
     * computation.</p> </li> </ul>
     */
    inline TopBottomComputationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TopBottomComputationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TopBottomMoversComputation& WithType(TopBottomComputationType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_computationId;
    bool m_computationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DimensionField m_time;
    bool m_timeHasBeenSet = false;

    DimensionField m_category;
    bool m_categoryHasBeenSet = false;

    MeasureField m_value;
    bool m_valueHasBeenSet = false;

    int m_moverSize{0};
    bool m_moverSizeHasBeenSet = false;

    TopBottomSortOrder m_sortOrder{TopBottomSortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;

    TopBottomComputationType m_type{TopBottomComputationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
