/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/SheetControlLayoutConfiguration.h>
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
   * <p>A grid layout to define the placement of sheet control.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetControlLayout">AWS
   * API Reference</a></p>
   */
  class SheetControlLayout
  {
  public:
    AWS_QUICKSIGHT_API SheetControlLayout();
    AWS_QUICKSIGHT_API SheetControlLayout(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetControlLayout& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline const SheetControlLayoutConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline void SetConfiguration(const SheetControlLayoutConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline void SetConfiguration(SheetControlLayoutConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline SheetControlLayout& WithConfiguration(const SheetControlLayoutConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration that determines the elements and canvas size options of
     * sheet control.</p>
     */
    inline SheetControlLayout& WithConfiguration(SheetControlLayoutConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}

  private:

    SheetControlLayoutConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
