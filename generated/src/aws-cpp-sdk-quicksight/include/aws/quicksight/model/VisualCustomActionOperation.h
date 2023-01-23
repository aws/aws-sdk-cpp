/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CustomActionFilterOperation.h>
#include <aws/quicksight/model/CustomActionNavigationOperation.h>
#include <aws/quicksight/model/CustomActionURLOperation.h>
#include <aws/quicksight/model/CustomActionSetParametersOperation.h>
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
   * <p>The operation that is defined by the custom action.</p> <p>This is a union
   * type structure. For this structure to be valid, only one of the attributes can
   * be defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/VisualCustomActionOperation">AWS
   * API Reference</a></p>
   */
  class VisualCustomActionOperation
  {
  public:
    AWS_QUICKSIGHT_API VisualCustomActionOperation();
    AWS_QUICKSIGHT_API VisualCustomActionOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualCustomActionOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The filter operation that filters data included in a visual or in an entire
     * sheet.</p>
     */
    inline const CustomActionFilterOperation& GetFilterOperation() const{ return m_filterOperation; }

    /**
     * <p>The filter operation that filters data included in a visual or in an entire
     * sheet.</p>
     */
    inline bool FilterOperationHasBeenSet() const { return m_filterOperationHasBeenSet; }

    /**
     * <p>The filter operation that filters data included in a visual or in an entire
     * sheet.</p>
     */
    inline void SetFilterOperation(const CustomActionFilterOperation& value) { m_filterOperationHasBeenSet = true; m_filterOperation = value; }

    /**
     * <p>The filter operation that filters data included in a visual or in an entire
     * sheet.</p>
     */
    inline void SetFilterOperation(CustomActionFilterOperation&& value) { m_filterOperationHasBeenSet = true; m_filterOperation = std::move(value); }

    /**
     * <p>The filter operation that filters data included in a visual or in an entire
     * sheet.</p>
     */
    inline VisualCustomActionOperation& WithFilterOperation(const CustomActionFilterOperation& value) { SetFilterOperation(value); return *this;}

    /**
     * <p>The filter operation that filters data included in a visual or in an entire
     * sheet.</p>
     */
    inline VisualCustomActionOperation& WithFilterOperation(CustomActionFilterOperation&& value) { SetFilterOperation(std::move(value)); return *this;}


    /**
     * <p>The navigation operation that navigates between different sheets in the same
     * analysis.</p>
     */
    inline const CustomActionNavigationOperation& GetNavigationOperation() const{ return m_navigationOperation; }

    /**
     * <p>The navigation operation that navigates between different sheets in the same
     * analysis.</p>
     */
    inline bool NavigationOperationHasBeenSet() const { return m_navigationOperationHasBeenSet; }

    /**
     * <p>The navigation operation that navigates between different sheets in the same
     * analysis.</p>
     */
    inline void SetNavigationOperation(const CustomActionNavigationOperation& value) { m_navigationOperationHasBeenSet = true; m_navigationOperation = value; }

    /**
     * <p>The navigation operation that navigates between different sheets in the same
     * analysis.</p>
     */
    inline void SetNavigationOperation(CustomActionNavigationOperation&& value) { m_navigationOperationHasBeenSet = true; m_navigationOperation = std::move(value); }

    /**
     * <p>The navigation operation that navigates between different sheets in the same
     * analysis.</p>
     */
    inline VisualCustomActionOperation& WithNavigationOperation(const CustomActionNavigationOperation& value) { SetNavigationOperation(value); return *this;}

    /**
     * <p>The navigation operation that navigates between different sheets in the same
     * analysis.</p>
     */
    inline VisualCustomActionOperation& WithNavigationOperation(CustomActionNavigationOperation&& value) { SetNavigationOperation(std::move(value)); return *this;}


    /**
     * <p>The URL operation that opens a link to another webpage.</p>
     */
    inline const CustomActionURLOperation& GetURLOperation() const{ return m_uRLOperation; }

    /**
     * <p>The URL operation that opens a link to another webpage.</p>
     */
    inline bool URLOperationHasBeenSet() const { return m_uRLOperationHasBeenSet; }

    /**
     * <p>The URL operation that opens a link to another webpage.</p>
     */
    inline void SetURLOperation(const CustomActionURLOperation& value) { m_uRLOperationHasBeenSet = true; m_uRLOperation = value; }

    /**
     * <p>The URL operation that opens a link to another webpage.</p>
     */
    inline void SetURLOperation(CustomActionURLOperation&& value) { m_uRLOperationHasBeenSet = true; m_uRLOperation = std::move(value); }

    /**
     * <p>The URL operation that opens a link to another webpage.</p>
     */
    inline VisualCustomActionOperation& WithURLOperation(const CustomActionURLOperation& value) { SetURLOperation(value); return *this;}

    /**
     * <p>The URL operation that opens a link to another webpage.</p>
     */
    inline VisualCustomActionOperation& WithURLOperation(CustomActionURLOperation&& value) { SetURLOperation(std::move(value)); return *this;}


    /**
     * <p>The set parameter operation that sets parameters in custom action.</p>
     */
    inline const CustomActionSetParametersOperation& GetSetParametersOperation() const{ return m_setParametersOperation; }

    /**
     * <p>The set parameter operation that sets parameters in custom action.</p>
     */
    inline bool SetParametersOperationHasBeenSet() const { return m_setParametersOperationHasBeenSet; }

    /**
     * <p>The set parameter operation that sets parameters in custom action.</p>
     */
    inline void SetSetParametersOperation(const CustomActionSetParametersOperation& value) { m_setParametersOperationHasBeenSet = true; m_setParametersOperation = value; }

    /**
     * <p>The set parameter operation that sets parameters in custom action.</p>
     */
    inline void SetSetParametersOperation(CustomActionSetParametersOperation&& value) { m_setParametersOperationHasBeenSet = true; m_setParametersOperation = std::move(value); }

    /**
     * <p>The set parameter operation that sets parameters in custom action.</p>
     */
    inline VisualCustomActionOperation& WithSetParametersOperation(const CustomActionSetParametersOperation& value) { SetSetParametersOperation(value); return *this;}

    /**
     * <p>The set parameter operation that sets parameters in custom action.</p>
     */
    inline VisualCustomActionOperation& WithSetParametersOperation(CustomActionSetParametersOperation&& value) { SetSetParametersOperation(std::move(value)); return *this;}

  private:

    CustomActionFilterOperation m_filterOperation;
    bool m_filterOperationHasBeenSet = false;

    CustomActionNavigationOperation m_navigationOperation;
    bool m_navigationOperationHasBeenSet = false;

    CustomActionURLOperation m_uRLOperation;
    bool m_uRLOperationHasBeenSet = false;

    CustomActionSetParametersOperation m_setParametersOperation;
    bool m_setParametersOperationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
