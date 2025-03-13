/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/DeviceSubsetType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains information about the configurations of selected
   * devices.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeviceSelectionConfig">AWS
   * API Reference</a></p>
   */
  class DeviceSelectionConfig
  {
  public:
    AWS_SAGEMAKER_API DeviceSelectionConfig() = default;
    AWS_SAGEMAKER_API DeviceSelectionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeviceSelectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of device subsets to deploy to the current stage.</p>
     */
    inline DeviceSubsetType GetDeviceSubsetType() const { return m_deviceSubsetType; }
    inline bool DeviceSubsetTypeHasBeenSet() const { return m_deviceSubsetTypeHasBeenSet; }
    inline void SetDeviceSubsetType(DeviceSubsetType value) { m_deviceSubsetTypeHasBeenSet = true; m_deviceSubsetType = value; }
    inline DeviceSelectionConfig& WithDeviceSubsetType(DeviceSubsetType value) { SetDeviceSubsetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Percentage of devices in the fleet to deploy to the current stage.</p>
     */
    inline int GetPercentage() const { return m_percentage; }
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
    inline void SetPercentage(int value) { m_percentageHasBeenSet = true; m_percentage = value; }
    inline DeviceSelectionConfig& WithPercentage(int value) { SetPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of devices chosen to deploy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceNames() const { return m_deviceNames; }
    inline bool DeviceNamesHasBeenSet() const { return m_deviceNamesHasBeenSet; }
    template<typename DeviceNamesT = Aws::Vector<Aws::String>>
    void SetDeviceNames(DeviceNamesT&& value) { m_deviceNamesHasBeenSet = true; m_deviceNames = std::forward<DeviceNamesT>(value); }
    template<typename DeviceNamesT = Aws::Vector<Aws::String>>
    DeviceSelectionConfig& WithDeviceNames(DeviceNamesT&& value) { SetDeviceNames(std::forward<DeviceNamesT>(value)); return *this;}
    template<typename DeviceNamesT = Aws::String>
    DeviceSelectionConfig& AddDeviceNames(DeviceNamesT&& value) { m_deviceNamesHasBeenSet = true; m_deviceNames.emplace_back(std::forward<DeviceNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A filter to select devices with names containing this name.</p>
     */
    inline const Aws::String& GetDeviceNameContains() const { return m_deviceNameContains; }
    inline bool DeviceNameContainsHasBeenSet() const { return m_deviceNameContainsHasBeenSet; }
    template<typename DeviceNameContainsT = Aws::String>
    void SetDeviceNameContains(DeviceNameContainsT&& value) { m_deviceNameContainsHasBeenSet = true; m_deviceNameContains = std::forward<DeviceNameContainsT>(value); }
    template<typename DeviceNameContainsT = Aws::String>
    DeviceSelectionConfig& WithDeviceNameContains(DeviceNameContainsT&& value) { SetDeviceNameContains(std::forward<DeviceNameContainsT>(value)); return *this;}
    ///@}
  private:

    DeviceSubsetType m_deviceSubsetType{DeviceSubsetType::NOT_SET};
    bool m_deviceSubsetTypeHasBeenSet = false;

    int m_percentage{0};
    bool m_percentageHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceNames;
    bool m_deviceNamesHasBeenSet = false;

    Aws::String m_deviceNameContains;
    bool m_deviceNameContainsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
