/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
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
   * <p>The source controls that are used in a
   * <code>CascadingControlConfiguration</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CascadingControlSource">AWS
   * API Reference</a></p>
   */
  class CascadingControlSource
  {
  public:
    AWS_QUICKSIGHT_API CascadingControlSource() = default;
    AWS_QUICKSIGHT_API CascadingControlSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CascadingControlSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source sheet control ID of a <code>CascadingControlSource</code>.</p>
     */
    inline const Aws::String& GetSourceSheetControlId() const { return m_sourceSheetControlId; }
    inline bool SourceSheetControlIdHasBeenSet() const { return m_sourceSheetControlIdHasBeenSet; }
    template<typename SourceSheetControlIdT = Aws::String>
    void SetSourceSheetControlId(SourceSheetControlIdT&& value) { m_sourceSheetControlIdHasBeenSet = true; m_sourceSheetControlId = std::forward<SourceSheetControlIdT>(value); }
    template<typename SourceSheetControlIdT = Aws::String>
    CascadingControlSource& WithSourceSheetControlId(SourceSheetControlIdT&& value) { SetSourceSheetControlId(std::forward<SourceSheetControlIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column identifier that determines which column to look up for the source
     * sheet control.</p>
     */
    inline const ColumnIdentifier& GetColumnToMatch() const { return m_columnToMatch; }
    inline bool ColumnToMatchHasBeenSet() const { return m_columnToMatchHasBeenSet; }
    template<typename ColumnToMatchT = ColumnIdentifier>
    void SetColumnToMatch(ColumnToMatchT&& value) { m_columnToMatchHasBeenSet = true; m_columnToMatch = std::forward<ColumnToMatchT>(value); }
    template<typename ColumnToMatchT = ColumnIdentifier>
    CascadingControlSource& WithColumnToMatch(ColumnToMatchT&& value) { SetColumnToMatch(std::forward<ColumnToMatchT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceSheetControlId;
    bool m_sourceSheetControlIdHasBeenSet = false;

    ColumnIdentifier m_columnToMatch;
    bool m_columnToMatchHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
