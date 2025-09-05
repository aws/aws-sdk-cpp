/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
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
namespace PCS
{
namespace Model
{

  /**
   * <p>An EC2 instance configuration PCS uses to launch compute nodes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/InstanceConfig">AWS
   * API Reference</a></p>
   */
  class InstanceConfig
  {
  public:
    AWS_PCS_API InstanceConfig() = default;
    AWS_PCS_API InstanceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API InstanceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The EC2 instance type that PCS can provision in the compute node group.</p>
     * <p> Example: <code>t2.xlarge</code> </p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    InstanceConfig& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
