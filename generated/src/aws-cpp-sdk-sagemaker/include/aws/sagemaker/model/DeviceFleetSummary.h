/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Summary of the device fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DeviceFleetSummary">AWS
   * API Reference</a></p>
   */
  class DeviceFleetSummary
  {
  public:
    AWS_SAGEMAKER_API DeviceFleetSummary();
    AWS_SAGEMAKER_API DeviceFleetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DeviceFleetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the device fleet.</p>
     */
    inline const Aws::String& GetDeviceFleetArn() const{ return m_deviceFleetArn; }
    inline bool DeviceFleetArnHasBeenSet() const { return m_deviceFleetArnHasBeenSet; }
    inline void SetDeviceFleetArn(const Aws::String& value) { m_deviceFleetArnHasBeenSet = true; m_deviceFleetArn = value; }
    inline void SetDeviceFleetArn(Aws::String&& value) { m_deviceFleetArnHasBeenSet = true; m_deviceFleetArn = std::move(value); }
    inline void SetDeviceFleetArn(const char* value) { m_deviceFleetArnHasBeenSet = true; m_deviceFleetArn.assign(value); }
    inline DeviceFleetSummary& WithDeviceFleetArn(const Aws::String& value) { SetDeviceFleetArn(value); return *this;}
    inline DeviceFleetSummary& WithDeviceFleetArn(Aws::String&& value) { SetDeviceFleetArn(std::move(value)); return *this;}
    inline DeviceFleetSummary& WithDeviceFleetArn(const char* value) { SetDeviceFleetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the device fleet.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }
    inline DeviceFleetSummary& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}
    inline DeviceFleetSummary& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}
    inline DeviceFleetSummary& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the device fleet was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DeviceFleetSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DeviceFleetSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp of when the device fleet was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline DeviceFleetSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DeviceFleetSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceFleetArn;
    bool m_deviceFleetArnHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
