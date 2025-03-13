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
   * <p>Information of a particular device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Device">AWS
   * API Reference</a></p>
   */
  class Device
  {
  public:
    AWS_SAGEMAKER_API Device() = default;
    AWS_SAGEMAKER_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    Device& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the device.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Device& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services Internet of Things (IoT) object name.</p>
     */
    inline const Aws::String& GetIotThingName() const { return m_iotThingName; }
    inline bool IotThingNameHasBeenSet() const { return m_iotThingNameHasBeenSet; }
    template<typename IotThingNameT = Aws::String>
    void SetIotThingName(IotThingNameT&& value) { m_iotThingNameHasBeenSet = true; m_iotThingName = std::forward<IotThingNameT>(value); }
    template<typename IotThingNameT = Aws::String>
    Device& WithIotThingName(IotThingNameT&& value) { SetIotThingName(std::forward<IotThingNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_iotThingName;
    bool m_iotThingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
