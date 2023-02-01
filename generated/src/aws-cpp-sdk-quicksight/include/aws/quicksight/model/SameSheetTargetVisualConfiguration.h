/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/TargetVisualOptions.h>
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
   * <p>The configuration of the same-sheet target visuals that you want to be
   * filtered.</p> <p>This is a union type structure. For this structure to be valid,
   * only one of the attributes can be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SameSheetTargetVisualConfiguration">AWS
   * API Reference</a></p>
   */
  class SameSheetTargetVisualConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SameSheetTargetVisualConfiguration();
    AWS_QUICKSIGHT_API SameSheetTargetVisualConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SameSheetTargetVisualConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the target visual IDs that are located in the same sheet of the
     * analysis.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetVisuals() const{ return m_targetVisuals; }

    /**
     * <p>A list of the target visual IDs that are located in the same sheet of the
     * analysis.</p>
     */
    inline bool TargetVisualsHasBeenSet() const { return m_targetVisualsHasBeenSet; }

    /**
     * <p>A list of the target visual IDs that are located in the same sheet of the
     * analysis.</p>
     */
    inline void SetTargetVisuals(const Aws::Vector<Aws::String>& value) { m_targetVisualsHasBeenSet = true; m_targetVisuals = value; }

    /**
     * <p>A list of the target visual IDs that are located in the same sheet of the
     * analysis.</p>
     */
    inline void SetTargetVisuals(Aws::Vector<Aws::String>&& value) { m_targetVisualsHasBeenSet = true; m_targetVisuals = std::move(value); }

    /**
     * <p>A list of the target visual IDs that are located in the same sheet of the
     * analysis.</p>
     */
    inline SameSheetTargetVisualConfiguration& WithTargetVisuals(const Aws::Vector<Aws::String>& value) { SetTargetVisuals(value); return *this;}

    /**
     * <p>A list of the target visual IDs that are located in the same sheet of the
     * analysis.</p>
     */
    inline SameSheetTargetVisualConfiguration& WithTargetVisuals(Aws::Vector<Aws::String>&& value) { SetTargetVisuals(std::move(value)); return *this;}

    /**
     * <p>A list of the target visual IDs that are located in the same sheet of the
     * analysis.</p>
     */
    inline SameSheetTargetVisualConfiguration& AddTargetVisuals(const Aws::String& value) { m_targetVisualsHasBeenSet = true; m_targetVisuals.push_back(value); return *this; }

    /**
     * <p>A list of the target visual IDs that are located in the same sheet of the
     * analysis.</p>
     */
    inline SameSheetTargetVisualConfiguration& AddTargetVisuals(Aws::String&& value) { m_targetVisualsHasBeenSet = true; m_targetVisuals.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the target visual IDs that are located in the same sheet of the
     * analysis.</p>
     */
    inline SameSheetTargetVisualConfiguration& AddTargetVisuals(const char* value) { m_targetVisualsHasBeenSet = true; m_targetVisuals.push_back(value); return *this; }


    /**
     * <p>The options that choose the target visual in the same sheet.</p> <p>Valid
     * values are defined as follows:</p> <ul> <li> <p> <code>ALL_VISUALS</code>:
     * Applies the filter operation to all visuals in the same sheet.</p> </li> </ul>
     */
    inline const TargetVisualOptions& GetTargetVisualOptions() const{ return m_targetVisualOptions; }

    /**
     * <p>The options that choose the target visual in the same sheet.</p> <p>Valid
     * values are defined as follows:</p> <ul> <li> <p> <code>ALL_VISUALS</code>:
     * Applies the filter operation to all visuals in the same sheet.</p> </li> </ul>
     */
    inline bool TargetVisualOptionsHasBeenSet() const { return m_targetVisualOptionsHasBeenSet; }

    /**
     * <p>The options that choose the target visual in the same sheet.</p> <p>Valid
     * values are defined as follows:</p> <ul> <li> <p> <code>ALL_VISUALS</code>:
     * Applies the filter operation to all visuals in the same sheet.</p> </li> </ul>
     */
    inline void SetTargetVisualOptions(const TargetVisualOptions& value) { m_targetVisualOptionsHasBeenSet = true; m_targetVisualOptions = value; }

    /**
     * <p>The options that choose the target visual in the same sheet.</p> <p>Valid
     * values are defined as follows:</p> <ul> <li> <p> <code>ALL_VISUALS</code>:
     * Applies the filter operation to all visuals in the same sheet.</p> </li> </ul>
     */
    inline void SetTargetVisualOptions(TargetVisualOptions&& value) { m_targetVisualOptionsHasBeenSet = true; m_targetVisualOptions = std::move(value); }

    /**
     * <p>The options that choose the target visual in the same sheet.</p> <p>Valid
     * values are defined as follows:</p> <ul> <li> <p> <code>ALL_VISUALS</code>:
     * Applies the filter operation to all visuals in the same sheet.</p> </li> </ul>
     */
    inline SameSheetTargetVisualConfiguration& WithTargetVisualOptions(const TargetVisualOptions& value) { SetTargetVisualOptions(value); return *this;}

    /**
     * <p>The options that choose the target visual in the same sheet.</p> <p>Valid
     * values are defined as follows:</p> <ul> <li> <p> <code>ALL_VISUALS</code>:
     * Applies the filter operation to all visuals in the same sheet.</p> </li> </ul>
     */
    inline SameSheetTargetVisualConfiguration& WithTargetVisualOptions(TargetVisualOptions&& value) { SetTargetVisualOptions(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_targetVisuals;
    bool m_targetVisualsHasBeenSet = false;

    TargetVisualOptions m_targetVisualOptions;
    bool m_targetVisualOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
