﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DimensionField.h>
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
   * <p>The unique values computation configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UniqueValuesComputation">AWS
   * API Reference</a></p>
   */
  class UniqueValuesComputation
  {
  public:
    AWS_QUICKSIGHT_API UniqueValuesComputation();
    AWS_QUICKSIGHT_API UniqueValuesComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API UniqueValuesComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID for a computation.</p>
     */
    inline const Aws::String& GetComputationId() const{ return m_computationId; }
    inline bool ComputationIdHasBeenSet() const { return m_computationIdHasBeenSet; }
    inline void SetComputationId(const Aws::String& value) { m_computationIdHasBeenSet = true; m_computationId = value; }
    inline void SetComputationId(Aws::String&& value) { m_computationIdHasBeenSet = true; m_computationId = std::move(value); }
    inline void SetComputationId(const char* value) { m_computationIdHasBeenSet = true; m_computationId.assign(value); }
    inline UniqueValuesComputation& WithComputationId(const Aws::String& value) { SetComputationId(value); return *this;}
    inline UniqueValuesComputation& WithComputationId(Aws::String&& value) { SetComputationId(std::move(value)); return *this;}
    inline UniqueValuesComputation& WithComputationId(const char* value) { SetComputationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a computation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UniqueValuesComputation& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UniqueValuesComputation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UniqueValuesComputation& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category field that is used in a computation.</p>
     */
    inline const DimensionField& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const DimensionField& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(DimensionField&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline UniqueValuesComputation& WithCategory(const DimensionField& value) { SetCategory(value); return *this;}
    inline UniqueValuesComputation& WithCategory(DimensionField&& value) { SetCategory(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_computationId;
    bool m_computationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DimensionField m_category;
    bool m_categoryHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
