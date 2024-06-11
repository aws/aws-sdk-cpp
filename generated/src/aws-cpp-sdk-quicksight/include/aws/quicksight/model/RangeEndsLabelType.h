﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Visibility.h>
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
   * <p>The range ends label type of a data path label.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RangeEndsLabelType">AWS
   * API Reference</a></p>
   */
  class RangeEndsLabelType
  {
  public:
    AWS_QUICKSIGHT_API RangeEndsLabelType();
    AWS_QUICKSIGHT_API RangeEndsLabelType(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RangeEndsLabelType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The visibility of the range ends label.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }
    inline RangeEndsLabelType& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}
    inline RangeEndsLabelType& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}
    ///@}
  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
