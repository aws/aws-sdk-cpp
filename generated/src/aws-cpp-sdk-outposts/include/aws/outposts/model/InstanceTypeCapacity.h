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
    AWS_OUTPOSTS_API InstanceTypeCapacity() = default;
    AWS_OUTPOSTS_API InstanceTypeCapacity(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API InstanceTypeCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type of the hosts.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    InstanceTypeCapacity& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances for the specified instance type.</p>
     */
    inline int GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline InstanceTypeCapacity& WithCount(int value) { SetCount(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
