/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A <i>sheet</i>, which is an object that contains a set of visuals that are
   * viewed together on one page in Amazon QuickSight. Every analysis and dashboard
   * contains at least one sheet. Each sheet contains at least one visualization
   * widget, for example a chart, pivot table, or narrative insight. Sheets can be
   * associated with other components, such as controls, filters, and so
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/Sheet">AWS
   * API Reference</a></p>
   */
  class Sheet
  {
  public:
    AWS_QUICKSIGHT_API Sheet();
    AWS_QUICKSIGHT_API Sheet(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Sheet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier associated with a sheet.</p>
     */
    inline const Aws::String& GetSheetId() const{ return m_sheetId; }

    /**
     * <p>The unique identifier associated with a sheet.</p>
     */
    inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }

    /**
     * <p>The unique identifier associated with a sheet.</p>
     */
    inline void SetSheetId(const Aws::String& value) { m_sheetIdHasBeenSet = true; m_sheetId = value; }

    /**
     * <p>The unique identifier associated with a sheet.</p>
     */
    inline void SetSheetId(Aws::String&& value) { m_sheetIdHasBeenSet = true; m_sheetId = std::move(value); }

    /**
     * <p>The unique identifier associated with a sheet.</p>
     */
    inline void SetSheetId(const char* value) { m_sheetIdHasBeenSet = true; m_sheetId.assign(value); }

    /**
     * <p>The unique identifier associated with a sheet.</p>
     */
    inline Sheet& WithSheetId(const Aws::String& value) { SetSheetId(value); return *this;}

    /**
     * <p>The unique identifier associated with a sheet.</p>
     */
    inline Sheet& WithSheetId(Aws::String&& value) { SetSheetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier associated with a sheet.</p>
     */
    inline Sheet& WithSheetId(const char* value) { SetSheetId(value); return *this;}


    /**
     * <p>The name of a sheet. This name is displayed on the sheet's tab in the Amazon
     * QuickSight console.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a sheet. This name is displayed on the sheet's tab in the Amazon
     * QuickSight console.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a sheet. This name is displayed on the sheet's tab in the Amazon
     * QuickSight console.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a sheet. This name is displayed on the sheet's tab in the Amazon
     * QuickSight console.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a sheet. This name is displayed on the sheet's tab in the Amazon
     * QuickSight console.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a sheet. This name is displayed on the sheet's tab in the Amazon
     * QuickSight console.</p>
     */
    inline Sheet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a sheet. This name is displayed on the sheet's tab in the Amazon
     * QuickSight console.</p>
     */
    inline Sheet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a sheet. This name is displayed on the sheet's tab in the Amazon
     * QuickSight console.</p>
     */
    inline Sheet& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_sheetId;
    bool m_sheetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
