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
    AWS_SAGEMAKER_API Device();
    AWS_SAGEMAKER_API Device(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Device& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the device.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }
    inline Device& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}
    inline Device& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}
    inline Device& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the device.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Device& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Device& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Device& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services Internet of Things (IoT) object name.</p>
     */
    inline const Aws::String& GetIotThingName() const{ return m_iotThingName; }
    inline bool IotThingNameHasBeenSet() const { return m_iotThingNameHasBeenSet; }
    inline void SetIotThingName(const Aws::String& value) { m_iotThingNameHasBeenSet = true; m_iotThingName = value; }
    inline void SetIotThingName(Aws::String&& value) { m_iotThingNameHasBeenSet = true; m_iotThingName = std::move(value); }
    inline void SetIotThingName(const char* value) { m_iotThingNameHasBeenSet = true; m_iotThingName.assign(value); }
    inline Device& WithIotThingName(const Aws::String& value) { SetIotThingName(value); return *this;}
    inline Device& WithIotThingName(Aws::String&& value) { SetIotThingName(std::move(value)); return *this;}
    inline Device& WithIotThingName(const char* value) { SetIotThingName(value); return *this;}
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
