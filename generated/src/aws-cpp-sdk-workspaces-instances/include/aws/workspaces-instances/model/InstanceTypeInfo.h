/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Provides details about a specific WorkSpace Instance type.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/InstanceTypeInfo">AWS
   * API Reference</a></p>
   */
  class InstanceTypeInfo
  {
  public:
    AWS_WORKSPACESINSTANCES_API InstanceTypeInfo() = default;
    AWS_WORKSPACESINSTANCES_API InstanceTypeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API InstanceTypeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifier for the WorkSpace Instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    InstanceTypeInfo& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
