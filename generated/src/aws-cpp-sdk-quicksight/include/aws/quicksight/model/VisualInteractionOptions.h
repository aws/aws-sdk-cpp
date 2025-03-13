/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/VisualMenuOption.h>
#include <aws/quicksight/model/ContextMenuOption.h>
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
   * <p>The general visual interactions setup for visual publish
   * options</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualInteractionOptions">AWS
   * API Reference</a></p>
   */
  class VisualInteractionOptions
  {
  public:
    AWS_QUICKSIGHT_API VisualInteractionOptions() = default;
    AWS_QUICKSIGHT_API VisualInteractionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualInteractionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The on-visual menu options for a visual.</p>
     */
    inline const VisualMenuOption& GetVisualMenuOption() const { return m_visualMenuOption; }
    inline bool VisualMenuOptionHasBeenSet() const { return m_visualMenuOptionHasBeenSet; }
    template<typename VisualMenuOptionT = VisualMenuOption>
    void SetVisualMenuOption(VisualMenuOptionT&& value) { m_visualMenuOptionHasBeenSet = true; m_visualMenuOption = std::forward<VisualMenuOptionT>(value); }
    template<typename VisualMenuOptionT = VisualMenuOption>
    VisualInteractionOptions& WithVisualMenuOption(VisualMenuOptionT&& value) { SetVisualMenuOption(std::forward<VisualMenuOptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The context menu options for a visual.</p>
     */
    inline const ContextMenuOption& GetContextMenuOption() const { return m_contextMenuOption; }
    inline bool ContextMenuOptionHasBeenSet() const { return m_contextMenuOptionHasBeenSet; }
    template<typename ContextMenuOptionT = ContextMenuOption>
    void SetContextMenuOption(ContextMenuOptionT&& value) { m_contextMenuOptionHasBeenSet = true; m_contextMenuOption = std::forward<ContextMenuOptionT>(value); }
    template<typename ContextMenuOptionT = ContextMenuOption>
    VisualInteractionOptions& WithContextMenuOption(ContextMenuOptionT&& value) { SetContextMenuOption(std::forward<ContextMenuOptionT>(value)); return *this;}
    ///@}
  private:

    VisualMenuOption m_visualMenuOption;
    bool m_visualMenuOptionHasBeenSet = false;

    ContextMenuOption m_contextMenuOption;
    bool m_contextMenuOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
