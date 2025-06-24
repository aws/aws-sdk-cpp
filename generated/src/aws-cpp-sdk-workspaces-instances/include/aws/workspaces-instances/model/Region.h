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
   * <p>Represents an AWS region supported by WorkSpaces Instances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/Region">AWS
   * API Reference</a></p>
   */
  class Region
  {
  public:
    AWS_WORKSPACESINSTANCES_API Region() = default;
    AWS_WORKSPACESINSTANCES_API Region(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Region& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the AWS region.</p>
     */
    inline const Aws::String& GetRegionName() const { return m_regionName; }
    inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
    template<typename RegionNameT = Aws::String>
    void SetRegionName(RegionNameT&& value) { m_regionNameHasBeenSet = true; m_regionName = std::forward<RegionNameT>(value); }
    template<typename RegionNameT = Aws::String>
    Region& WithRegionName(RegionNameT&& value) { SetRegionName(std::forward<RegionNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regionName;
    bool m_regionNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
