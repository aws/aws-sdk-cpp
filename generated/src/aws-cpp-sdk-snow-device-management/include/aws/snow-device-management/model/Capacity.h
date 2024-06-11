/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>The physical capacity of the Amazon Web Services Snow Family device.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/Capacity">AWS
   * API Reference</a></p>
   */
  class Capacity
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API Capacity();
    AWS_SNOWDEVICEMANAGEMENT_API Capacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Capacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of capacity available for use on the device.</p>
     */
    inline long long GetAvailable() const{ return m_available; }
    inline bool AvailableHasBeenSet() const { return m_availableHasBeenSet; }
    inline void SetAvailable(long long value) { m_availableHasBeenSet = true; m_available = value; }
    inline Capacity& WithAvailable(long long value) { SetAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the type of capacity, such as memory.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Capacity& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Capacity& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Capacity& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total capacity on the device.</p>
     */
    inline long long GetTotal() const{ return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(long long value) { m_totalHasBeenSet = true; m_total = value; }
    inline Capacity& WithTotal(long long value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of measure for the type of capacity.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline Capacity& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline Capacity& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline Capacity& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of capacity used on the device.</p>
     */
    inline long long GetUsed() const{ return m_used; }
    inline bool UsedHasBeenSet() const { return m_usedHasBeenSet; }
    inline void SetUsed(long long value) { m_usedHasBeenSet = true; m_used = value; }
    inline Capacity& WithUsed(long long value) { SetUsed(value); return *this;}
    ///@}
  private:

    long long m_available;
    bool m_availableHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    long long m_total;
    bool m_totalHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    long long m_used;
    bool m_usedHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
