/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>The disk identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/Disk">AWS API
   * Reference</a></p>
   */
  class Disk
  {
  public:
    AWS_MGN_API Disk();
    AWS_MGN_API Disk(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Disk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The amount of storage on the disk in bytes.</p>
     */
    inline long long GetBytes() const{ return m_bytes; }

    /**
     * <p>The amount of storage on the disk in bytes.</p>
     */
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }

    /**
     * <p>The amount of storage on the disk in bytes.</p>
     */
    inline void SetBytes(long long value) { m_bytesHasBeenSet = true; m_bytes = value; }

    /**
     * <p>The amount of storage on the disk in bytes.</p>
     */
    inline Disk& WithBytes(long long value) { SetBytes(value); return *this;}


    /**
     * <p>The disk or device name.</p>
     */
    inline const Aws::String& GetDeviceName() const{ return m_deviceName; }

    /**
     * <p>The disk or device name.</p>
     */
    inline bool DeviceNameHasBeenSet() const { return m_deviceNameHasBeenSet; }

    /**
     * <p>The disk or device name.</p>
     */
    inline void SetDeviceName(const Aws::String& value) { m_deviceNameHasBeenSet = true; m_deviceName = value; }

    /**
     * <p>The disk or device name.</p>
     */
    inline void SetDeviceName(Aws::String&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::move(value); }

    /**
     * <p>The disk or device name.</p>
     */
    inline void SetDeviceName(const char* value) { m_deviceNameHasBeenSet = true; m_deviceName.assign(value); }

    /**
     * <p>The disk or device name.</p>
     */
    inline Disk& WithDeviceName(const Aws::String& value) { SetDeviceName(value); return *this;}

    /**
     * <p>The disk or device name.</p>
     */
    inline Disk& WithDeviceName(Aws::String&& value) { SetDeviceName(std::move(value)); return *this;}

    /**
     * <p>The disk or device name.</p>
     */
    inline Disk& WithDeviceName(const char* value) { SetDeviceName(value); return *this;}

  private:

    long long m_bytes;
    bool m_bytesHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
