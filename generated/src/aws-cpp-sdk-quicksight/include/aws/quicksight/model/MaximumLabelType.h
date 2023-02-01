/**
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
   * <p>The maximum label of a data path label.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MaximumLabelType">AWS
   * API Reference</a></p>
   */
  class MaximumLabelType
  {
  public:
    AWS_QUICKSIGHT_API MaximumLabelType();
    AWS_QUICKSIGHT_API MaximumLabelType(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MaximumLabelType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The visibility of the maximum label.</p>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>The visibility of the maximum label.</p>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>The visibility of the maximum label.</p>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>The visibility of the maximum label.</p>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>The visibility of the maximum label.</p>
     */
    inline MaximumLabelType& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>The visibility of the maximum label.</p>
     */
    inline MaximumLabelType& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}

  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
