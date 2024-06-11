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
    AWS_SAGEMAKER_API DeviceSelectionConfig();
    AWS_SAGEMAKER_API DeviceSelectionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeviceSelectionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Type of device subsets to deploy to the current stage.</p>
     */
    inline const DeviceSubsetType& GetDeviceSubsetType() const{ return m_deviceSubsetType; }
    inline bool DeviceSubsetTypeHasBeenSet() const { return m_deviceSubsetTypeHasBeenSet; }
    inline void SetDeviceSubsetType(const DeviceSubsetType& value) { m_deviceSubsetTypeHasBeenSet = true; m_deviceSubsetType = value; }
    inline void SetDeviceSubsetType(DeviceSubsetType&& value) { m_deviceSubsetTypeHasBeenSet = true; m_deviceSubsetType = std::move(value); }
    inline DeviceSelectionConfig& WithDeviceSubsetType(const DeviceSubsetType& value) { SetDeviceSubsetType(value); return *this;}
    inline DeviceSelectionConfig& WithDeviceSubsetType(DeviceSubsetType&& value) { SetDeviceSubsetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Percentage of devices in the fleet to deploy to the current stage.</p>
     */
    inline int GetPercentage() const{ return m_percentage; }
    inline bool PercentageHasBeenSet() const { return m_percentageHasBeenSet; }
    inline void SetPercentage(int value) { m_percentageHasBeenSet = true; m_percentage = value; }
    inline DeviceSelectionConfig& WithPercentage(int value) { SetPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of devices chosen to deploy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceNames() const{ return m_deviceNames; }
    inline bool DeviceNamesHasBeenSet() const { return m_deviceNamesHasBeenSet; }
    inline void SetDeviceNames(const Aws::Vector<Aws::String>& value) { m_deviceNamesHasBeenSet = true; m_deviceNames = value; }
    inline void SetDeviceNames(Aws::Vector<Aws::String>&& value) { m_deviceNamesHasBeenSet = true; m_deviceNames = std::move(value); }
    inline DeviceSelectionConfig& WithDeviceNames(const Aws::Vector<Aws::String>& value) { SetDeviceNames(value); return *this;}
    inline DeviceSelectionConfig& WithDeviceNames(Aws::Vector<Aws::String>&& value) { SetDeviceNames(std::move(value)); return *this;}
    inline DeviceSelectionConfig& AddDeviceNames(const Aws::String& value) { m_deviceNamesHasBeenSet = true; m_deviceNames.push_back(value); return *this; }
    inline DeviceSelectionConfig& AddDeviceNames(Aws::String&& value) { m_deviceNamesHasBeenSet = true; m_deviceNames.push_back(std::move(value)); return *this; }
    inline DeviceSelectionConfig& AddDeviceNames(const char* value) { m_deviceNamesHasBeenSet = true; m_deviceNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A filter to select devices with names containing this name.</p>
     */
    inline const Aws::String& GetDeviceNameContains() const{ return m_deviceNameContains; }
    inline bool DeviceNameContainsHasBeenSet() const { return m_deviceNameContainsHasBeenSet; }
    inline void SetDeviceNameContains(const Aws::String& value) { m_deviceNameContainsHasBeenSet = true; m_deviceNameContains = value; }
    inline void SetDeviceNameContains(Aws::String&& value) { m_deviceNameContainsHasBeenSet = true; m_deviceNameContains = std::move(value); }
    inline void SetDeviceNameContains(const char* value) { m_deviceNameContainsHasBeenSet = true; m_deviceNameContains.assign(value); }
    inline DeviceSelectionConfig& WithDeviceNameContains(const Aws::String& value) { SetDeviceNameContains(value); return *this;}
    inline DeviceSelectionConfig& WithDeviceNameContains(Aws::String&& value) { SetDeviceNameContains(std::move(value)); return *this;}
    inline DeviceSelectionConfig& WithDeviceNameContains(const char* value) { SetDeviceNameContains(value); return *this;}
    ///@}
  private:

    DeviceSubsetType m_deviceSubsetType;
    bool m_deviceSubsetTypeHasBeenSet = false;

    int m_percentage;
    bool m_percentageHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceNames;
    bool m_deviceNamesHasBeenSet = false;

    Aws::String m_deviceNameContains;
    bool m_deviceNameContainsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
