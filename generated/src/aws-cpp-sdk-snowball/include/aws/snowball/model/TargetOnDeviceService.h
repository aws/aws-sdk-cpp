﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/DeviceServiceName.h>
#include <aws/snowball/model/TransferOption.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>An object that represents the service or services on the Snow Family device
   * that your transferred data will be exported from or imported into. Amazon Web
   * Services Snow Family supports Amazon S3 and NFS (Network File
   * System).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/TargetOnDeviceService">AWS
   * API Reference</a></p>
   */
  class TargetOnDeviceService
  {
  public:
    AWS_SNOWBALL_API TargetOnDeviceService() = default;
    AWS_SNOWBALL_API TargetOnDeviceService(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API TargetOnDeviceService& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the name of the service on the Snow Family device that your
     * transferred data will be exported from or imported into.</p>
     */
    inline DeviceServiceName GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(DeviceServiceName value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline TargetOnDeviceService& WithServiceName(DeviceServiceName value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the data is being imported or exported. You can import or
     * export the data, or use it locally on the device.</p>
     */
    inline TransferOption GetTransferOption() const { return m_transferOption; }
    inline bool TransferOptionHasBeenSet() const { return m_transferOptionHasBeenSet; }
    inline void SetTransferOption(TransferOption value) { m_transferOptionHasBeenSet = true; m_transferOption = value; }
    inline TargetOnDeviceService& WithTransferOption(TransferOption value) { SetTransferOption(value); return *this;}
    ///@}
  private:

    DeviceServiceName m_serviceName{DeviceServiceName::NOT_SET};
    bool m_serviceNameHasBeenSet = false;

    TransferOption m_transferOption{TransferOption::NOT_SET};
    bool m_transferOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
