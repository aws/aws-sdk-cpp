/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/VisualHighlightOperation.h>
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
   * <p>A list of custom actions applied to visuals in an analysis or
   * sheet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualCustomActionDefaults">AWS
   * API Reference</a></p>
   */
  class VisualCustomActionDefaults
  {
  public:
    AWS_QUICKSIGHT_API VisualCustomActionDefaults() = default;
    AWS_QUICKSIGHT_API VisualCustomActionDefaults(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualCustomActionDefaults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of highlight operations available for visuals in an analysis or
     * sheet.</p>
     */
    inline const VisualHighlightOperation& GetHighlightOperation() const { return m_highlightOperation; }
    inline bool HighlightOperationHasBeenSet() const { return m_highlightOperationHasBeenSet; }
    template<typename HighlightOperationT = VisualHighlightOperation>
    void SetHighlightOperation(HighlightOperationT&& value) { m_highlightOperationHasBeenSet = true; m_highlightOperation = std::forward<HighlightOperationT>(value); }
    template<typename HighlightOperationT = VisualHighlightOperation>
    VisualCustomActionDefaults& WithHighlightOperation(HighlightOperationT&& value) { SetHighlightOperation(std::forward<HighlightOperationT>(value)); return *this;}
    ///@}
  private:

    VisualHighlightOperation m_highlightOperation;
    bool m_highlightOperationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
