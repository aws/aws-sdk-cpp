/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class RemoveTemplateActionRequest : public MgnRequest
  {
  public:
    AWS_MGN_API RemoveTemplateActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTemplateAction"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Template post migration custom action ID to remove.</p>
     */
    inline const Aws::String& GetActionID() const { return m_actionID; }
    inline bool ActionIDHasBeenSet() const { return m_actionIDHasBeenSet; }
    template<typename ActionIDT = Aws::String>
    void SetActionID(ActionIDT&& value) { m_actionIDHasBeenSet = true; m_actionID = std::forward<ActionIDT>(value); }
    template<typename ActionIDT = Aws::String>
    RemoveTemplateActionRequest& WithActionID(ActionIDT&& value) { SetActionID(std::forward<ActionIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration template ID of the post migration custom action to
     * remove.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const { return m_launchConfigurationTemplateID; }
    inline bool LaunchConfigurationTemplateIDHasBeenSet() const { return m_launchConfigurationTemplateIDHasBeenSet; }
    template<typename LaunchConfigurationTemplateIDT = Aws::String>
    void SetLaunchConfigurationTemplateID(LaunchConfigurationTemplateIDT&& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = std::forward<LaunchConfigurationTemplateIDT>(value); }
    template<typename LaunchConfigurationTemplateIDT = Aws::String>
    RemoveTemplateActionRequest& WithLaunchConfigurationTemplateID(LaunchConfigurationTemplateIDT&& value) { SetLaunchConfigurationTemplateID(std::forward<LaunchConfigurationTemplateIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_actionID;
    bool m_actionIDHasBeenSet = false;

    Aws::String m_launchConfigurationTemplateID;
    bool m_launchConfigurationTemplateIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
