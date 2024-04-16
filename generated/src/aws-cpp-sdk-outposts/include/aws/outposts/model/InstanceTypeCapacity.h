/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
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
namespace Outposts
{
namespace Model
{

  /**
   * <p>The instance type that you specify determines the combination of CPU, memory,
   * storage, and networking capacity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/InstanceTypeCapacity">AWS
   * API Reference</a></p>
   */
  class InstanceTypeCapacity
  {
  public:
    AWS_OUTPOSTS_API InstanceTypeCapacity();
    AWS_OUTPOSTS_API InstanceTypeCapacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API InstanceTypeCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance type of the hosts.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type of the hosts.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type of the hosts.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type of the hosts.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type of the hosts.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type of the hosts.</p>
     */
    inline InstanceTypeCapacity& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type of the hosts.</p>
     */
    inline InstanceTypeCapacity& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type of the hosts.</p>
     */
    inline InstanceTypeCapacity& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The number of instances for the specified instance type.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The number of instances for the specified instance type.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The number of instances for the specified instance type.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The number of instances for the specified instance type.</p>
     */
    inline InstanceTypeCapacity& WithCount(int value) { SetCount(value); return *this;}

  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
