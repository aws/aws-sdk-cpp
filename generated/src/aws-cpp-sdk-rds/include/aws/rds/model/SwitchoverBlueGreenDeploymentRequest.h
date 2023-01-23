/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class SwitchoverBlueGreenDeploymentRequest : public RDSRequest
  {
  public:
    AWS_RDS_API SwitchoverBlueGreenDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SwitchoverBlueGreenDeployment"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The blue/green deployment identifier.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline const Aws::String& GetBlueGreenDeploymentIdentifier() const{ return m_blueGreenDeploymentIdentifier; }

    /**
     * <p>The blue/green deployment identifier.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline bool BlueGreenDeploymentIdentifierHasBeenSet() const { return m_blueGreenDeploymentIdentifierHasBeenSet; }

    /**
     * <p>The blue/green deployment identifier.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline void SetBlueGreenDeploymentIdentifier(const Aws::String& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = value; }

    /**
     * <p>The blue/green deployment identifier.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline void SetBlueGreenDeploymentIdentifier(Aws::String&& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = std::move(value); }

    /**
     * <p>The blue/green deployment identifier.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline void SetBlueGreenDeploymentIdentifier(const char* value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier.assign(value); }

    /**
     * <p>The blue/green deployment identifier.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline SwitchoverBlueGreenDeploymentRequest& WithBlueGreenDeploymentIdentifier(const Aws::String& value) { SetBlueGreenDeploymentIdentifier(value); return *this;}

    /**
     * <p>The blue/green deployment identifier.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline SwitchoverBlueGreenDeploymentRequest& WithBlueGreenDeploymentIdentifier(Aws::String&& value) { SetBlueGreenDeploymentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The blue/green deployment identifier.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must match an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline SwitchoverBlueGreenDeploymentRequest& WithBlueGreenDeploymentIdentifier(const char* value) { SetBlueGreenDeploymentIdentifier(value); return *this;}


    /**
     * <p>The amount of time, in seconds, for the switchover to complete. The default
     * is 300.</p> <p>If the switchover takes longer than the specified duration, then
     * any changes are rolled back, and no changes are made to the environments.</p>
     */
    inline int GetSwitchoverTimeout() const{ return m_switchoverTimeout; }

    /**
     * <p>The amount of time, in seconds, for the switchover to complete. The default
     * is 300.</p> <p>If the switchover takes longer than the specified duration, then
     * any changes are rolled back, and no changes are made to the environments.</p>
     */
    inline bool SwitchoverTimeoutHasBeenSet() const { return m_switchoverTimeoutHasBeenSet; }

    /**
     * <p>The amount of time, in seconds, for the switchover to complete. The default
     * is 300.</p> <p>If the switchover takes longer than the specified duration, then
     * any changes are rolled back, and no changes are made to the environments.</p>
     */
    inline void SetSwitchoverTimeout(int value) { m_switchoverTimeoutHasBeenSet = true; m_switchoverTimeout = value; }

    /**
     * <p>The amount of time, in seconds, for the switchover to complete. The default
     * is 300.</p> <p>If the switchover takes longer than the specified duration, then
     * any changes are rolled back, and no changes are made to the environments.</p>
     */
    inline SwitchoverBlueGreenDeploymentRequest& WithSwitchoverTimeout(int value) { SetSwitchoverTimeout(value); return *this;}

  private:

    Aws::String m_blueGreenDeploymentIdentifier;
    bool m_blueGreenDeploymentIdentifierHasBeenSet = false;

    int m_switchoverTimeout;
    bool m_switchoverTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
