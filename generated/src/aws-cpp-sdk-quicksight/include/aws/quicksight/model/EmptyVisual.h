/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/VisualCustomAction.h>
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
   * <p>An empty visual.</p> <p>Empty visuals are used in layouts but have not been
   * configured to show any data. A new visual created in the Amazon QuickSight
   * console is considered an <code>EmptyVisual</code> until a visual type is
   * selected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/EmptyVisual">AWS
   * API Reference</a></p>
   */
  class EmptyVisual
  {
  public:
    AWS_QUICKSIGHT_API EmptyVisual();
    AWS_QUICKSIGHT_API EmptyVisual(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API EmptyVisual& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline const Aws::String& GetVisualId() const{ return m_visualId; }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline bool VisualIdHasBeenSet() const { return m_visualIdHasBeenSet; }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline void SetVisualId(const Aws::String& value) { m_visualIdHasBeenSet = true; m_visualId = value; }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline void SetVisualId(Aws::String&& value) { m_visualIdHasBeenSet = true; m_visualId = std::move(value); }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline void SetVisualId(const char* value) { m_visualIdHasBeenSet = true; m_visualId.assign(value); }

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline EmptyVisual& WithVisualId(const Aws::String& value) { SetVisualId(value); return *this;}

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline EmptyVisual& WithVisualId(Aws::String&& value) { SetVisualId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of a visual. This identifier must be unique within the
     * context of a dashboard, template, or analysis. Two dashboards, analyses, or
     * templates can have visuals with the same identifiers.</p>
     */
    inline EmptyVisual& WithVisualId(const char* value) { SetVisualId(value); return *this;}


    /**
     * <p>The data set that is used in the empty visual. Every visual requires a
     * dataset to render.</p>
     */
    inline const Aws::String& GetDataSetIdentifier() const{ return m_dataSetIdentifier; }

    /**
     * <p>The data set that is used in the empty visual. Every visual requires a
     * dataset to render.</p>
     */
    inline bool DataSetIdentifierHasBeenSet() const { return m_dataSetIdentifierHasBeenSet; }

    /**
     * <p>The data set that is used in the empty visual. Every visual requires a
     * dataset to render.</p>
     */
    inline void SetDataSetIdentifier(const Aws::String& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = value; }

    /**
     * <p>The data set that is used in the empty visual. Every visual requires a
     * dataset to render.</p>
     */
    inline void SetDataSetIdentifier(Aws::String&& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = std::move(value); }

    /**
     * <p>The data set that is used in the empty visual. Every visual requires a
     * dataset to render.</p>
     */
    inline void SetDataSetIdentifier(const char* value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier.assign(value); }

    /**
     * <p>The data set that is used in the empty visual. Every visual requires a
     * dataset to render.</p>
     */
    inline EmptyVisual& WithDataSetIdentifier(const Aws::String& value) { SetDataSetIdentifier(value); return *this;}

    /**
     * <p>The data set that is used in the empty visual. Every visual requires a
     * dataset to render.</p>
     */
    inline EmptyVisual& WithDataSetIdentifier(Aws::String&& value) { SetDataSetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The data set that is used in the empty visual. Every visual requires a
     * dataset to render.</p>
     */
    inline EmptyVisual& WithDataSetIdentifier(const char* value) { SetDataSetIdentifier(value); return *this;}


    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline const Aws::Vector<VisualCustomAction>& GetActions() const{ return m_actions; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline void SetActions(const Aws::Vector<VisualCustomAction>& value) { m_actionsHasBeenSet = true; m_actions = value; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline void SetActions(Aws::Vector<VisualCustomAction>&& value) { m_actionsHasBeenSet = true; m_actions = std::move(value); }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline EmptyVisual& WithActions(const Aws::Vector<VisualCustomAction>& value) { SetActions(value); return *this;}

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline EmptyVisual& WithActions(Aws::Vector<VisualCustomAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline EmptyVisual& AddActions(const VisualCustomAction& value) { m_actionsHasBeenSet = true; m_actions.push_back(value); return *this; }

    /**
     * <p>The list of custom actions that are configured for a visual.</p>
     */
    inline EmptyVisual& AddActions(VisualCustomAction&& value) { m_actionsHasBeenSet = true; m_actions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_visualId;
    bool m_visualIdHasBeenSet = false;

    Aws::String m_dataSetIdentifier;
    bool m_dataSetIdentifierHasBeenSet = false;

    Aws::Vector<VisualCustomAction> m_actions;
    bool m_actionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
