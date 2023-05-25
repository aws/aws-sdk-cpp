/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BorderStyle.h>
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
   * <p>Display options related to tiles on a sheet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TileStyle">AWS
   * API Reference</a></p>
   */
  class TileStyle
  {
  public:
    AWS_QUICKSIGHT_API TileStyle();
    AWS_QUICKSIGHT_API TileStyle(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TileStyle& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The border around a tile.</p>
     */
    inline const BorderStyle& GetBorder() const{ return m_border; }

    /**
     * <p>The border around a tile.</p>
     */
    inline bool BorderHasBeenSet() const { return m_borderHasBeenSet; }

    /**
     * <p>The border around a tile.</p>
     */
    inline void SetBorder(const BorderStyle& value) { m_borderHasBeenSet = true; m_border = value; }

    /**
     * <p>The border around a tile.</p>
     */
    inline void SetBorder(BorderStyle&& value) { m_borderHasBeenSet = true; m_border = std::move(value); }

    /**
     * <p>The border around a tile.</p>
     */
    inline TileStyle& WithBorder(const BorderStyle& value) { SetBorder(value); return *this;}

    /**
     * <p>The border around a tile.</p>
     */
    inline TileStyle& WithBorder(BorderStyle&& value) { SetBorder(std::move(value)); return *this;}

  private:

    BorderStyle m_border;
    bool m_borderHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
