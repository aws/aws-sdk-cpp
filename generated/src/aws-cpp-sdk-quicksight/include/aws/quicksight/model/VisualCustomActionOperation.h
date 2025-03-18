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
    AWS_QUICKSIGHT_API VisualCustomActionOperation() = default;
    AWS_QUICKSIGHT_API VisualCustomActionOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API VisualCustomActionOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter operation that filters data included in a visual or in an entire
     * sheet.</p>
     */
    inline const CustomActionFilterOperation& GetFilterOperation() const { return m_filterOperation; }
    inline bool FilterOperationHasBeenSet() const { return m_filterOperationHasBeenSet; }
    template<typename FilterOperationT = CustomActionFilterOperation>
    void SetFilterOperation(FilterOperationT&& value) { m_filterOperationHasBeenSet = true; m_filterOperation = std::forward<FilterOperationT>(value); }
    template<typename FilterOperationT = CustomActionFilterOperation>
    VisualCustomActionOperation& WithFilterOperation(FilterOperationT&& value) { SetFilterOperation(std::forward<FilterOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The navigation operation that navigates between different sheets in the same
     * analysis.</p>
     */
    inline const CustomActionNavigationOperation& GetNavigationOperation() const { return m_navigationOperation; }
    inline bool NavigationOperationHasBeenSet() const { return m_navigationOperationHasBeenSet; }
    template<typename NavigationOperationT = CustomActionNavigationOperation>
    void SetNavigationOperation(NavigationOperationT&& value) { m_navigationOperationHasBeenSet = true; m_navigationOperation = std::forward<NavigationOperationT>(value); }
    template<typename NavigationOperationT = CustomActionNavigationOperation>
    VisualCustomActionOperation& WithNavigationOperation(NavigationOperationT&& value) { SetNavigationOperation(std::forward<NavigationOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL operation that opens a link to another webpage.</p>
     */
    inline const CustomActionURLOperation& GetURLOperation() const { return m_uRLOperation; }
    inline bool URLOperationHasBeenSet() const { return m_uRLOperationHasBeenSet; }
    template<typename URLOperationT = CustomActionURLOperation>
    void SetURLOperation(URLOperationT&& value) { m_uRLOperationHasBeenSet = true; m_uRLOperation = std::forward<URLOperationT>(value); }
    template<typename URLOperationT = CustomActionURLOperation>
    VisualCustomActionOperation& WithURLOperation(URLOperationT&& value) { SetURLOperation(std::forward<URLOperationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set parameter operation that sets parameters in custom action.</p>
     */
    inline const CustomActionSetParametersOperation& GetSetParametersOperation() const { return m_setParametersOperation; }
    inline bool SetParametersOperationHasBeenSet() const { return m_setParametersOperationHasBeenSet; }
    template<typename SetParametersOperationT = CustomActionSetParametersOperation>
    void SetSetParametersOperation(SetParametersOperationT&& value) { m_setParametersOperationHasBeenSet = true; m_setParametersOperation = std::forward<SetParametersOperationT>(value); }
    template<typename SetParametersOperationT = CustomActionSetParametersOperation>
    VisualCustomActionOperation& WithSetParametersOperation(SetParametersOperationT&& value) { SetSetParametersOperation(std::forward<SetParametersOperationT>(value)); return *this;}
    ///@}
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
