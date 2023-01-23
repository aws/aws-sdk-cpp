/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
   * <p>The top ranked and bottom ranked computation configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopBottomRankedComputation">AWS
   * API Reference</a></p>
   */
  class TopBottomRankedComputation
  {
  public:
    AWS_QUICKSIGHT_API TopBottomRankedComputation();
    AWS_QUICKSIGHT_API TopBottomRankedComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopBottomRankedComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline TopBottomRankedComputation& WithComputationId(const Aws::String& value) { SetComputationId(value); return *this;}

    /**
     * <p>The ID for a computation.</p>
     */
    inline TopBottomRankedComputation& WithComputationId(Aws::String&& value) { SetComputationId(std::move(value)); return *this;}

    /**
     * <p>The ID for a computation.</p>
     */
    inline TopBottomRankedComputation& WithComputationId(const char* value) { SetComputationId(value); return *this;}


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
    inline TopBottomRankedComputation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a computation.</p>
     */
    inline TopBottomRankedComputation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a computation.</p>
     */
    inline TopBottomRankedComputation& WithName(const char* value) { SetName(value); return *this;}


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
    inline TopBottomRankedComputation& WithCategory(const DimensionField& value) { SetCategory(value); return *this;}

    /**
     * <p>The category field that is used in a computation.</p>
     */
    inline TopBottomRankedComputation& WithCategory(DimensionField&& value) { SetCategory(std::move(value)); return *this;}


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
    inline TopBottomRankedComputation& WithValue(const MeasureField& value) { SetValue(value); return *this;}

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline TopBottomRankedComputation& WithValue(MeasureField&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>The result size of a top and bottom ranked computation.</p>
     */
    inline int GetResultSize() const{ return m_resultSize; }

    /**
     * <p>The result size of a top and bottom ranked computation.</p>
     */
    inline bool ResultSizeHasBeenSet() const { return m_resultSizeHasBeenSet; }

    /**
     * <p>The result size of a top and bottom ranked computation.</p>
     */
    inline void SetResultSize(int value) { m_resultSizeHasBeenSet = true; m_resultSize = value; }

    /**
     * <p>The result size of a top and bottom ranked computation.</p>
     */
    inline TopBottomRankedComputation& WithResultSize(int value) { SetResultSize(value); return *this;}


    /**
     * <p>The computation type. Choose one of the following options:</p> <ul> <li>
     * <p>TOP: A top ranked computation.</p> </li> <li> <p>BOTTOM: A bottom ranked
     * computation.</p> </li> </ul>
     */
    inline const TopBottomComputationType& GetType() const{ return m_type; }

    /**
     * <p>The computation type. Choose one of the following options:</p> <ul> <li>
     * <p>TOP: A top ranked computation.</p> </li> <li> <p>BOTTOM: A bottom ranked
     * computation.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The computation type. Choose one of the following options:</p> <ul> <li>
     * <p>TOP: A top ranked computation.</p> </li> <li> <p>BOTTOM: A bottom ranked
     * computation.</p> </li> </ul>
     */
    inline void SetType(const TopBottomComputationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The computation type. Choose one of the following options:</p> <ul> <li>
     * <p>TOP: A top ranked computation.</p> </li> <li> <p>BOTTOM: A bottom ranked
     * computation.</p> </li> </ul>
     */
    inline void SetType(TopBottomComputationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The computation type. Choose one of the following options:</p> <ul> <li>
     * <p>TOP: A top ranked computation.</p> </li> <li> <p>BOTTOM: A bottom ranked
     * computation.</p> </li> </ul>
     */
    inline TopBottomRankedComputation& WithType(const TopBottomComputationType& value) { SetType(value); return *this;}

    /**
     * <p>The computation type. Choose one of the following options:</p> <ul> <li>
     * <p>TOP: A top ranked computation.</p> </li> <li> <p>BOTTOM: A bottom ranked
     * computation.</p> </li> </ul>
     */
    inline TopBottomRankedComputation& WithType(TopBottomComputationType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_computationId;
    bool m_computationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DimensionField m_category;
    bool m_categoryHasBeenSet = false;

    MeasureField m_value;
    bool m_valueHasBeenSet = false;

    int m_resultSize;
    bool m_resultSizeHasBeenSet = false;

    TopBottomComputationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
