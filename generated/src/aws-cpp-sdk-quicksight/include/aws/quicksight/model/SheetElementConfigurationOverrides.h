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
   * <p>The override configuration of the rendering rules of a sheet.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetElementConfigurationOverrides">AWS
   * API Reference</a></p>
   */
  class SheetElementConfigurationOverrides
  {
  public:
    AWS_QUICKSIGHT_API SheetElementConfigurationOverrides();
    AWS_QUICKSIGHT_API SheetElementConfigurationOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetElementConfigurationOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Determines whether or not the overrides are visible. Choose one of the
     * following options:</p> <ul> <li> <p> <code>VISIBLE</code> </p> </li> <li> <p>
     * <code>HIDDEN</code> </p> </li> </ul>
     */
    inline const Visibility& GetVisibility() const{ return m_visibility; }

    /**
     * <p>Determines whether or not the overrides are visible. Choose one of the
     * following options:</p> <ul> <li> <p> <code>VISIBLE</code> </p> </li> <li> <p>
     * <code>HIDDEN</code> </p> </li> </ul>
     */
    inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }

    /**
     * <p>Determines whether or not the overrides are visible. Choose one of the
     * following options:</p> <ul> <li> <p> <code>VISIBLE</code> </p> </li> <li> <p>
     * <code>HIDDEN</code> </p> </li> </ul>
     */
    inline void SetVisibility(const Visibility& value) { m_visibilityHasBeenSet = true; m_visibility = value; }

    /**
     * <p>Determines whether or not the overrides are visible. Choose one of the
     * following options:</p> <ul> <li> <p> <code>VISIBLE</code> </p> </li> <li> <p>
     * <code>HIDDEN</code> </p> </li> </ul>
     */
    inline void SetVisibility(Visibility&& value) { m_visibilityHasBeenSet = true; m_visibility = std::move(value); }

    /**
     * <p>Determines whether or not the overrides are visible. Choose one of the
     * following options:</p> <ul> <li> <p> <code>VISIBLE</code> </p> </li> <li> <p>
     * <code>HIDDEN</code> </p> </li> </ul>
     */
    inline SheetElementConfigurationOverrides& WithVisibility(const Visibility& value) { SetVisibility(value); return *this;}

    /**
     * <p>Determines whether or not the overrides are visible. Choose one of the
     * following options:</p> <ul> <li> <p> <code>VISIBLE</code> </p> </li> <li> <p>
     * <code>HIDDEN</code> </p> </li> </ul>
     */
    inline SheetElementConfigurationOverrides& WithVisibility(Visibility&& value) { SetVisibility(std::move(value)); return *this;}

  private:

    Visibility m_visibility;
    bool m_visibilityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
