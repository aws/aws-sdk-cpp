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
    AWS_QUICKSIGHT_API TopBottomMoversComputation();
    AWS_QUICKSIGHT_API TopBottomMoversComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopBottomMoversComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for a computation.</p>
     */
    inline const Aws::String& GetComputationId() const{ return m_computationId; }

    /**
     * <p>The ID for a computation.</p>
     */
    inline bool ComputationIdHasBeenSet() const { return m_computationIdHasBeenSet; }

    /**
     * <p>The ID for a computation.</p>
     */
    inline void SetComputationId(const Aws::String& value) { m_computationIdHasBeenSet = true; m_computationId = value; }

    /**
     * <p>The ID for a computation.</p>
     */
    inline void SetComputationId(Aws::String&& value) { m_computationIdHasBeenSet = true; m_computationId = std::move(value); }

    /**
     * <p>The ID for a computation.</p>
     */
    inline void SetComputationId(const char* value) { m_computationIdHasBeenSet = true; m_computationId.assign(value); }

    /**
     * <p>The ID for a computation.</p>
     */
    inline TopBottomMoversComputation& WithComputationId(const Aws::String& value) { SetComputationId(value); return *this;}

    /**
     * <p>The ID for a computation.</p>
     */
    inline TopBottomMoversComputation& WithComputationId(Aws::String&& value) { SetComputationId(std::move(value)); return *this;}

    /**
     * <p>The ID for a computation.</p>
     */
    inline TopBottomMoversComputation& WithComputationId(const char* value) { SetComputationId(value); return *this;}


    /**
     * <p>The name of a computation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a computation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a computation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a computation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a computation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a computation.</p>
     */
    inline TopBottomMoversComputation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a computation.</p>
     */
    inline TopBottomMoversComputation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a computation.</p>
     */
    inline TopBottomMoversComputation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline const DimensionField& GetTime() const{ return m_time; }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline void SetTime(const DimensionField& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline void SetTime(DimensionField&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline TopBottomMoversComputation& WithTime(const DimensionField& value) { SetTime(value); return *this;}

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline TopBottomMoversComputation& WithTime(DimensionField&& value) { SetTime(std::move(value)); return *this;}


    /**
     * <p>The category field that is used in a computation.</p>
     */
    inline const DimensionField& GetCategory() const{ return m_category; }

    /**
     * <p>The category field that is used in a computation.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category field that is used in a computation.</p>
     */
    inline void SetCategory(const DimensionField& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category field that is used in a computation.</p>
     */
    inline void SetCategory(DimensionField&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category field that is used in a computation.</p>
     */
    inline TopBottomMoversComputation& WithCategory(const DimensionField& value) { SetCategory(value); return *this;}

    /**
     * <p>The category field that is used in a computation.</p>
     */
    inline TopBottomMoversComputation& WithCategory(DimensionField&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline const MeasureField& GetValue() const{ return m_value; }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline void SetValue(const MeasureField& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline void SetValue(MeasureField&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline TopBottomMoversComputation& WithValue(const MeasureField& value) { SetValue(value); return *this;}

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline TopBottomMoversComputation& WithValue(MeasureField&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>The mover size setup of the top and bottom movers computation.</p>
     */
    inline int GetMoverSize() const{ return m_moverSize; }

    /**
     * <p>The mover size setup of the top and bottom movers computation.</p>
     */
    inline bool MoverSizeHasBeenSet() const { return m_moverSizeHasBeenSet; }

    /**
     * <p>The mover size setup of the top and bottom movers computation.</p>
     */
    inline void SetMoverSize(int value) { m_moverSizeHasBeenSet = true; m_moverSize = value; }

    /**
     * <p>The mover size setup of the top and bottom movers computation.</p>
     */
    inline TopBottomMoversComputation& WithMoverSize(int value) { SetMoverSize(value); return *this;}


    /**
     * <p>The sort order setup of the top and bottom movers computation.</p>
     */
    inline const TopBottomSortOrder& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>The sort order setup of the top and bottom movers computation.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>The sort order setup of the top and bottom movers computation.</p>
     */
    inline void SetSortOrder(const TopBottomSortOrder& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>The sort order setup of the top and bottom movers computation.</p>
     */
    inline void SetSortOrder(TopBottomSortOrder&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>The sort order setup of the top and bottom movers computation.</p>
     */
    inline TopBottomMoversComputation& WithSortOrder(const TopBottomSortOrder& value) { SetSortOrder(value); return *this;}

    /**
     * <p>The sort order setup of the top and bottom movers computation.</p>
     */
    inline TopBottomMoversComputation& WithSortOrder(TopBottomSortOrder&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p>The computation type. Choose from the following options:</p> <ul> <li>
     * <p>TOP: Top movers computation.</p> </li> <li> <p>BOTTOM: Bottom movers
     * computation.</p> </li> </ul>
     */
    inline const TopBottomComputationType& GetType() const{ return m_type; }

    /**
     * <p>The computation type. Choose from the following options:</p> <ul> <li>
     * <p>TOP: Top movers computation.</p> </li> <li> <p>BOTTOM: Bottom movers
     * computation.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The computation type. Choose from the following options:</p> <ul> <li>
     * <p>TOP: Top movers computation.</p> </li> <li> <p>BOTTOM: Bottom movers
     * computation.</p> </li> </ul>
     */
    inline void SetType(const TopBottomComputationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The computation type. Choose from the following options:</p> <ul> <li>
     * <p>TOP: Top movers computation.</p> </li> <li> <p>BOTTOM: Bottom movers
     * computation.</p> </li> </ul>
     */
    inline void SetType(TopBottomComputationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The computation type. Choose from the following options:</p> <ul> <li>
     * <p>TOP: Top movers computation.</p> </li> <li> <p>BOTTOM: Bottom movers
     * computation.</p> </li> </ul>
     */
    inline TopBottomMoversComputation& WithType(const TopBottomComputationType& value) { SetType(value); return *this;}

    /**
     * <p>The computation type. Choose from the following options:</p> <ul> <li>
     * <p>TOP: Top movers computation.</p> </li> <li> <p>BOTTOM: Bottom movers
     * computation.</p> </li> </ul>
     */
    inline TopBottomMoversComputation& WithType(TopBottomComputationType&& value) { SetType(std::move(value)); return *this;}

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

    int m_moverSize;
    bool m_moverSizeHasBeenSet = false;

    TopBottomSortOrder m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    TopBottomComputationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
