/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/FilterVisualScope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The filter that is applied to the options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SheetVisualScopingConfiguration">AWS
   * API Reference</a></p>
   */
  class SheetVisualScopingConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SheetVisualScopingConfiguration();
    AWS_QUICKSIGHT_API SheetVisualScopingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SheetVisualScopingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The selected sheet that the filter is applied to.</p>
     */
    inline const Aws::String& GetSheetId() const{ return m_sheetId; }
    inline bool SheetIdHasBeenSet() const { return m_sheetIdHasBeenSet; }
    inline void SetSheetId(const Aws::String& value) { m_sheetIdHasBeenSet = true; m_sheetId = value; }
    inline void SetSheetId(Aws::String&& value) { m_sheetIdHasBeenSet = true; m_sheetId = std::move(value); }
    inline void SetSheetId(const char* value) { m_sheetIdHasBeenSet = true; m_sheetId.assign(value); }
    inline SheetVisualScopingConfiguration& WithSheetId(const Aws::String& value) { SetSheetId(value); return *this;}
    inline SheetVisualScopingConfiguration& WithSheetId(Aws::String&& value) { SetSheetId(std::move(value)); return *this;}
    inline SheetVisualScopingConfiguration& WithSheetId(const char* value) { SetSheetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scope of the applied entities. Choose one of the following options:</p>
     * <ul> <li> <p> <code>ALL_VISUALS</code> </p> </li> <li> <p>
     * <code>SELECTED_VISUALS</code> </p> </li> </ul>
     */
    inline const FilterVisualScope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const FilterVisualScope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(FilterVisualScope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline SheetVisualScopingConfiguration& WithScope(const FilterVisualScope& value) { SetScope(value); return *this;}
    inline SheetVisualScopingConfiguration& WithScope(FilterVisualScope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The selected visuals that the filter is applied to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVisualIds() const{ return m_visualIds; }
    inline bool VisualIdsHasBeenSet() const { return m_visualIdsHasBeenSet; }
    inline void SetVisualIds(const Aws::Vector<Aws::String>& value) { m_visualIdsHasBeenSet = true; m_visualIds = value; }
    inline void SetVisualIds(Aws::Vector<Aws::String>&& value) { m_visualIdsHasBeenSet = true; m_visualIds = std::move(value); }
    inline SheetVisualScopingConfiguration& WithVisualIds(const Aws::Vector<Aws::String>& value) { SetVisualIds(value); return *this;}
    inline SheetVisualScopingConfiguration& WithVisualIds(Aws::Vector<Aws::String>&& value) { SetVisualIds(std::move(value)); return *this;}
    inline SheetVisualScopingConfiguration& AddVisualIds(const Aws::String& value) { m_visualIdsHasBeenSet = true; m_visualIds.push_back(value); return *this; }
    inline SheetVisualScopingConfiguration& AddVisualIds(Aws::String&& value) { m_visualIdsHasBeenSet = true; m_visualIds.push_back(std::move(value)); return *this; }
    inline SheetVisualScopingConfiguration& AddVisualIds(const char* value) { m_visualIdsHasBeenSet = true; m_visualIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_sheetId;
    bool m_sheetIdHasBeenSet = false;

    FilterVisualScope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<Aws::String> m_visualIds;
    bool m_visualIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
