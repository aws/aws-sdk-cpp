/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>An Elastic Inference accelerator to use for the containers in the
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEcsTaskDefinitionInferenceAcceleratorsDetails">AWS
   * API Reference</a></p>
   */
  class AwsEcsTaskDefinitionInferenceAcceleratorsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionInferenceAcceleratorsDetails() = default;
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionInferenceAcceleratorsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEcsTaskDefinitionInferenceAcceleratorsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Elastic Inference accelerator device name.</p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    AwsEcsTaskDefinitionInferenceAcceleratorsDetails& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elastic Inference accelerator type to use.</p>
     */
    inline const Aws::String& GetDeviceType() const { return m_deviceType; }
    inline bool DeviceTypeHasBeenSet() const { return m_deviceTypeHasBeenSet; }
    template<typename DeviceTypeT = Aws::String>
    void SetDeviceType(DeviceTypeT&& value) { m_deviceTypeHasBeenSet = true; m_deviceType = std::forward<DeviceTypeT>(value); }
    template<typename DeviceTypeT = Aws::String>
    AwsEcsTaskDefinitionInferenceAcceleratorsDetails& WithDeviceType(DeviceTypeT&& value) { SetDeviceType(std::forward<DeviceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_deviceType;
    bool m_deviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
