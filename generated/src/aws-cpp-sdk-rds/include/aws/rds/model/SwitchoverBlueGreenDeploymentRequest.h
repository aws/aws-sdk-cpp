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
    AWS_RDS_API SwitchoverBlueGreenDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SwitchoverBlueGreenDeployment"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The resource ID of the blue/green deployment.</p> <p>Constraints:</p> <ul>
     * <li> <p>Must match an existing blue/green deployment resource ID.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetBlueGreenDeploymentIdentifier() const { return m_blueGreenDeploymentIdentifier; }
    inline bool BlueGreenDeploymentIdentifierHasBeenSet() const { return m_blueGreenDeploymentIdentifierHasBeenSet; }
    template<typename BlueGreenDeploymentIdentifierT = Aws::String>
    void SetBlueGreenDeploymentIdentifier(BlueGreenDeploymentIdentifierT&& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = std::forward<BlueGreenDeploymentIdentifierT>(value); }
    template<typename BlueGreenDeploymentIdentifierT = Aws::String>
    SwitchoverBlueGreenDeploymentRequest& WithBlueGreenDeploymentIdentifier(BlueGreenDeploymentIdentifierT&& value) { SetBlueGreenDeploymentIdentifier(std::forward<BlueGreenDeploymentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, for the switchover to complete.</p>
     * <p>Default: 300</p> <p>If the switchover takes longer than the specified
     * duration, then any changes are rolled back, and no changes are made to the
     * environments.</p>
     */
    inline int GetSwitchoverTimeout() const { return m_switchoverTimeout; }
    inline bool SwitchoverTimeoutHasBeenSet() const { return m_switchoverTimeoutHasBeenSet; }
    inline void SetSwitchoverTimeout(int value) { m_switchoverTimeoutHasBeenSet = true; m_switchoverTimeout = value; }
    inline SwitchoverBlueGreenDeploymentRequest& WithSwitchoverTimeout(int value) { SetSwitchoverTimeout(value); return *this;}
    ///@}
  private:

    Aws::String m_blueGreenDeploymentIdentifier;
    bool m_blueGreenDeploymentIdentifierHasBeenSet = false;

    int m_switchoverTimeout{0};
    bool m_switchoverTimeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
