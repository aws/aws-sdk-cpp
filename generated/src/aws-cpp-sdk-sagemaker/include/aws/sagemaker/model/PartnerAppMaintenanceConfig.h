/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Maintenance configuration settings for the SageMaker Partner AI
   * App.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PartnerAppMaintenanceConfig">AWS
   * API Reference</a></p>
   */
  class PartnerAppMaintenanceConfig
  {
  public:
    AWS_SAGEMAKER_API PartnerAppMaintenanceConfig() = default;
    AWS_SAGEMAKER_API PartnerAppMaintenanceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PartnerAppMaintenanceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The day and time of the week in Coordinated Universal Time (UTC) 24-hour
     * standard time that weekly maintenance updates are scheduled. This value must
     * take the following format: <code>3-letter-day:24-h-hour:minute</code>. For
     * example: <code>TUE:03:30</code>.</p>
     */
    inline const Aws::String& GetMaintenanceWindowStart() const { return m_maintenanceWindowStart; }
    inline bool MaintenanceWindowStartHasBeenSet() const { return m_maintenanceWindowStartHasBeenSet; }
    template<typename MaintenanceWindowStartT = Aws::String>
    void SetMaintenanceWindowStart(MaintenanceWindowStartT&& value) { m_maintenanceWindowStartHasBeenSet = true; m_maintenanceWindowStart = std::forward<MaintenanceWindowStartT>(value); }
    template<typename MaintenanceWindowStartT = Aws::String>
    PartnerAppMaintenanceConfig& WithMaintenanceWindowStart(MaintenanceWindowStartT&& value) { SetMaintenanceWindowStart(std::forward<MaintenanceWindowStartT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_maintenanceWindowStart;
    bool m_maintenanceWindowStartHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
