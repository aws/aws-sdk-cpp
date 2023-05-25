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
  class DeleteLaunchConfigurationTemplateRequest : public MgnRequest
  {
  public:
    AWS_MGN_API DeleteLaunchConfigurationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteLaunchConfigurationTemplate"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const{ return m_launchConfigurationTemplateID; }

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline bool LaunchConfigurationTemplateIDHasBeenSet() const { return m_launchConfigurationTemplateIDHasBeenSet; }

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline void SetLaunchConfigurationTemplateID(const Aws::String& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = value; }

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline void SetLaunchConfigurationTemplateID(Aws::String&& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = std::move(value); }

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline void SetLaunchConfigurationTemplateID(const char* value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID.assign(value); }

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline DeleteLaunchConfigurationTemplateRequest& WithLaunchConfigurationTemplateID(const Aws::String& value) { SetLaunchConfigurationTemplateID(value); return *this;}

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline DeleteLaunchConfigurationTemplateRequest& WithLaunchConfigurationTemplateID(Aws::String&& value) { SetLaunchConfigurationTemplateID(std::move(value)); return *this;}

    /**
     * <p>ID of resource to be deleted.</p>
     */
    inline DeleteLaunchConfigurationTemplateRequest& WithLaunchConfigurationTemplateID(const char* value) { SetLaunchConfigurationTemplateID(value); return *this;}

  private:

    Aws::String m_launchConfigurationTemplateID;
    bool m_launchConfigurationTemplateIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
