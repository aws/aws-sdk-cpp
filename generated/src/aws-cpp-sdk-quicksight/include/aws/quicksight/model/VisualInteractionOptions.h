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
    AWS_QUICKSIGHT_API VisualInteractionOptions();
    AWS_QUICKSIGHT_API VisualInteractionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualInteractionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The on-visual menu options for a visual.</p>
     */
    inline const VisualMenuOption& GetVisualMenuOption() const{ return m_visualMenuOption; }

    /**
     * <p>The on-visual menu options for a visual.</p>
     */
    inline bool VisualMenuOptionHasBeenSet() const { return m_visualMenuOptionHasBeenSet; }

    /**
     * <p>The on-visual menu options for a visual.</p>
     */
    inline void SetVisualMenuOption(const VisualMenuOption& value) { m_visualMenuOptionHasBeenSet = true; m_visualMenuOption = value; }

    /**
     * <p>The on-visual menu options for a visual.</p>
     */
    inline void SetVisualMenuOption(VisualMenuOption&& value) { m_visualMenuOptionHasBeenSet = true; m_visualMenuOption = std::move(value); }

    /**
     * <p>The on-visual menu options for a visual.</p>
     */
    inline VisualInteractionOptions& WithVisualMenuOption(const VisualMenuOption& value) { SetVisualMenuOption(value); return *this;}

    /**
     * <p>The on-visual menu options for a visual.</p>
     */
    inline VisualInteractionOptions& WithVisualMenuOption(VisualMenuOption&& value) { SetVisualMenuOption(std::move(value)); return *this;}


    /**
     * <p>The context menu options for a visual.</p>
     */
    inline const ContextMenuOption& GetContextMenuOption() const{ return m_contextMenuOption; }

    /**
     * <p>The context menu options for a visual.</p>
     */
    inline bool ContextMenuOptionHasBeenSet() const { return m_contextMenuOptionHasBeenSet; }

    /**
     * <p>The context menu options for a visual.</p>
     */
    inline void SetContextMenuOption(const ContextMenuOption& value) { m_contextMenuOptionHasBeenSet = true; m_contextMenuOption = value; }

    /**
     * <p>The context menu options for a visual.</p>
     */
    inline void SetContextMenuOption(ContextMenuOption&& value) { m_contextMenuOptionHasBeenSet = true; m_contextMenuOption = std::move(value); }

    /**
     * <p>The context menu options for a visual.</p>
     */
    inline VisualInteractionOptions& WithContextMenuOption(const ContextMenuOption& value) { SetContextMenuOption(value); return *this;}

    /**
     * <p>The context menu options for a visual.</p>
     */
    inline VisualInteractionOptions& WithContextMenuOption(ContextMenuOption&& value) { SetContextMenuOption(std::move(value)); return *this;}

  private:

    VisualMenuOption m_visualMenuOption;
    bool m_visualMenuOptionHasBeenSet = false;

    ContextMenuOption m_contextMenuOption;
    bool m_contextMenuOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
