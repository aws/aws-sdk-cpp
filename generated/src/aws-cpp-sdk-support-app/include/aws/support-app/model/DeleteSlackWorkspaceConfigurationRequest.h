/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support-app/SupportApp_EXPORTS.h>
#include <aws/support-app/SupportAppRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SupportApp
{
namespace Model
{

  /**
   */
  class DeleteSlackWorkspaceConfigurationRequest : public SupportAppRequest
  {
  public:
    AWS_SUPPORTAPP_API DeleteSlackWorkspaceConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSlackWorkspaceConfiguration"; }

    AWS_SUPPORTAPP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The team ID in Slack. This ID uniquely identifies a Slack workspace, such as
     * <code>T012ABCDEFG</code>.</p>
     */
    inline const Aws::String& GetTeamId() const { return m_teamId; }
    inline bool TeamIdHasBeenSet() const { return m_teamIdHasBeenSet; }
    template<typename TeamIdT = Aws::String>
    void SetTeamId(TeamIdT&& value) { m_teamIdHasBeenSet = true; m_teamId = std::forward<TeamIdT>(value); }
    template<typename TeamIdT = Aws::String>
    DeleteSlackWorkspaceConfigurationRequest& WithTeamId(TeamIdT&& value) { SetTeamId(std::forward<TeamIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_teamId;
    bool m_teamIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupportApp
} // namespace Aws
