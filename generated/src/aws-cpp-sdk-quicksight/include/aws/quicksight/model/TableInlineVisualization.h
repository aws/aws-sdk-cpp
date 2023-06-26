/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataBarsOptions.h>
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
   * <p>The inline visualization of a specific type to display within a
   * chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TableInlineVisualization">AWS
   * API Reference</a></p>
   */
  class TableInlineVisualization
  {
  public:
    AWS_QUICKSIGHT_API TableInlineVisualization();
    AWS_QUICKSIGHT_API TableInlineVisualization(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TableInlineVisualization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration of the inline visualization of the data bars within a
     * chart.</p>
     */
    inline const DataBarsOptions& GetDataBars() const{ return m_dataBars; }

    /**
     * <p>The configuration of the inline visualization of the data bars within a
     * chart.</p>
     */
    inline bool DataBarsHasBeenSet() const { return m_dataBarsHasBeenSet; }

    /**
     * <p>The configuration of the inline visualization of the data bars within a
     * chart.</p>
     */
    inline void SetDataBars(const DataBarsOptions& value) { m_dataBarsHasBeenSet = true; m_dataBars = value; }

    /**
     * <p>The configuration of the inline visualization of the data bars within a
     * chart.</p>
     */
    inline void SetDataBars(DataBarsOptions&& value) { m_dataBarsHasBeenSet = true; m_dataBars = std::move(value); }

    /**
     * <p>The configuration of the inline visualization of the data bars within a
     * chart.</p>
     */
    inline TableInlineVisualization& WithDataBars(const DataBarsOptions& value) { SetDataBars(value); return *this;}

    /**
     * <p>The configuration of the inline visualization of the data bars within a
     * chart.</p>
     */
    inline TableInlineVisualization& WithDataBars(DataBarsOptions&& value) { SetDataBars(std::move(value)); return *this;}

  private:

    DataBarsOptions m_dataBars;
    bool m_dataBarsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
