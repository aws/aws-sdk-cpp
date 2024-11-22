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
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LayerCustomActionOperation">AWS
   * API Reference</a></p>
   */
  class LayerCustomActionOperation
  {
  public:
    AWS_QUICKSIGHT_API LayerCustomActionOperation();
    AWS_QUICKSIGHT_API LayerCustomActionOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LayerCustomActionOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CustomActionFilterOperation& GetFilterOperation() const{ return m_filterOperation; }
    inline bool FilterOperationHasBeenSet() const { return m_filterOperationHasBeenSet; }
    inline void SetFilterOperation(const CustomActionFilterOperation& value) { m_filterOperationHasBeenSet = true; m_filterOperation = value; }
    inline void SetFilterOperation(CustomActionFilterOperation&& value) { m_filterOperationHasBeenSet = true; m_filterOperation = std::move(value); }
    inline LayerCustomActionOperation& WithFilterOperation(const CustomActionFilterOperation& value) { SetFilterOperation(value); return *this;}
    inline LayerCustomActionOperation& WithFilterOperation(CustomActionFilterOperation&& value) { SetFilterOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomActionNavigationOperation& GetNavigationOperation() const{ return m_navigationOperation; }
    inline bool NavigationOperationHasBeenSet() const { return m_navigationOperationHasBeenSet; }
    inline void SetNavigationOperation(const CustomActionNavigationOperation& value) { m_navigationOperationHasBeenSet = true; m_navigationOperation = value; }
    inline void SetNavigationOperation(CustomActionNavigationOperation&& value) { m_navigationOperationHasBeenSet = true; m_navigationOperation = std::move(value); }
    inline LayerCustomActionOperation& WithNavigationOperation(const CustomActionNavigationOperation& value) { SetNavigationOperation(value); return *this;}
    inline LayerCustomActionOperation& WithNavigationOperation(CustomActionNavigationOperation&& value) { SetNavigationOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomActionURLOperation& GetURLOperation() const{ return m_uRLOperation; }
    inline bool URLOperationHasBeenSet() const { return m_uRLOperationHasBeenSet; }
    inline void SetURLOperation(const CustomActionURLOperation& value) { m_uRLOperationHasBeenSet = true; m_uRLOperation = value; }
    inline void SetURLOperation(CustomActionURLOperation&& value) { m_uRLOperationHasBeenSet = true; m_uRLOperation = std::move(value); }
    inline LayerCustomActionOperation& WithURLOperation(const CustomActionURLOperation& value) { SetURLOperation(value); return *this;}
    inline LayerCustomActionOperation& WithURLOperation(CustomActionURLOperation&& value) { SetURLOperation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomActionSetParametersOperation& GetSetParametersOperation() const{ return m_setParametersOperation; }
    inline bool SetParametersOperationHasBeenSet() const { return m_setParametersOperationHasBeenSet; }
    inline void SetSetParametersOperation(const CustomActionSetParametersOperation& value) { m_setParametersOperationHasBeenSet = true; m_setParametersOperation = value; }
    inline void SetSetParametersOperation(CustomActionSetParametersOperation&& value) { m_setParametersOperationHasBeenSet = true; m_setParametersOperation = std::move(value); }
    inline LayerCustomActionOperation& WithSetParametersOperation(const CustomActionSetParametersOperation& value) { SetSetParametersOperation(value); return *this;}
    inline LayerCustomActionOperation& WithSetParametersOperation(CustomActionSetParametersOperation&& value) { SetSetParametersOperation(std::move(value)); return *this;}
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
