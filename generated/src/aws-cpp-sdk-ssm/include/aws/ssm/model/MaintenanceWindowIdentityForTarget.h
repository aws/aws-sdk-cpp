/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>The maintenance window to which the specified target belongs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowIdentityForTarget">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowIdentityForTarget
  {
  public:
    AWS_SSM_API MaintenanceWindowIdentityForTarget() = default;
    AWS_SSM_API MaintenanceWindowIdentityForTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowIdentityForTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the maintenance window.</p>
     */
    inline const Aws::String& GetWindowId() const { return m_windowId; }
    inline bool WindowIdHasBeenSet() const { return m_windowIdHasBeenSet; }
    template<typename WindowIdT = Aws::String>
    void SetWindowId(WindowIdT&& value) { m_windowIdHasBeenSet = true; m_windowId = std::forward<WindowIdT>(value); }
    template<typename WindowIdT = Aws::String>
    MaintenanceWindowIdentityForTarget& WithWindowId(WindowIdT&& value) { SetWindowId(std::forward<WindowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the maintenance window.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MaintenanceWindowIdentityForTarget& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_windowId;
    bool m_windowIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
