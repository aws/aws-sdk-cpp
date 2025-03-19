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
   * <p>Information about an instance type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/InstanceTypeItem">AWS
   * API Reference</a></p>
   */
  class InstanceTypeItem
  {
  public:
    AWS_OUTPOSTS_API InstanceTypeItem() = default;
    AWS_OUTPOSTS_API InstanceTypeItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API InstanceTypeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    InstanceTypeItem& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of default VCPUs in an instance type.</p>
     */
    inline int GetVCPUs() const { return m_vCPUs; }
    inline bool VCPUsHasBeenSet() const { return m_vCPUsHasBeenSet; }
    inline void SetVCPUs(int value) { m_vCPUsHasBeenSet = true; m_vCPUs = value; }
    inline InstanceTypeItem& WithVCPUs(int value) { SetVCPUs(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_vCPUs{0};
    bool m_vCPUsHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
