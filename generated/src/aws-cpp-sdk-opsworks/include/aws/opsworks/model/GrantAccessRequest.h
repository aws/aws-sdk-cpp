/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class GrantAccessRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API GrantAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GrantAccess"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The instance's AWS OpsWorks Stacks ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The instance's AWS OpsWorks Stacks ID.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The instance's AWS OpsWorks Stacks ID.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The instance's AWS OpsWorks Stacks ID.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The instance's AWS OpsWorks Stacks ID.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The instance's AWS OpsWorks Stacks ID.</p>
     */
    inline GrantAccessRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The instance's AWS OpsWorks Stacks ID.</p>
     */
    inline GrantAccessRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The instance's AWS OpsWorks Stacks ID.</p>
     */
    inline GrantAccessRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The length of time (in minutes) that the grant is valid. When the grant
     * expires at the end of this period, the user will no longer be able to use the
     * credentials to log in. If the user is logged in at the time, he or she
     * automatically will be logged out.</p>
     */
    inline int GetValidForInMinutes() const{ return m_validForInMinutes; }

    /**
     * <p>The length of time (in minutes) that the grant is valid. When the grant
     * expires at the end of this period, the user will no longer be able to use the
     * credentials to log in. If the user is logged in at the time, he or she
     * automatically will be logged out.</p>
     */
    inline bool ValidForInMinutesHasBeenSet() const { return m_validForInMinutesHasBeenSet; }

    /**
     * <p>The length of time (in minutes) that the grant is valid. When the grant
     * expires at the end of this period, the user will no longer be able to use the
     * credentials to log in. If the user is logged in at the time, he or she
     * automatically will be logged out.</p>
     */
    inline void SetValidForInMinutes(int value) { m_validForInMinutesHasBeenSet = true; m_validForInMinutes = value; }

    /**
     * <p>The length of time (in minutes) that the grant is valid. When the grant
     * expires at the end of this period, the user will no longer be able to use the
     * credentials to log in. If the user is logged in at the time, he or she
     * automatically will be logged out.</p>
     */
    inline GrantAccessRequest& WithValidForInMinutes(int value) { SetValidForInMinutes(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    int m_validForInMinutes;
    bool m_validForInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
