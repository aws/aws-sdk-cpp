﻿/**
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
  class DeleteBlueGreenDeploymentRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteBlueGreenDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBlueGreenDeployment"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The unique identifier of the blue/green deployment to delete. This parameter
     * isn't case-sensitive.</p> <p>Constraints: </p> <ul> <li> <p>Must match an
     * existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline const Aws::String& GetBlueGreenDeploymentIdentifier() const { return m_blueGreenDeploymentIdentifier; }
    inline bool BlueGreenDeploymentIdentifierHasBeenSet() const { return m_blueGreenDeploymentIdentifierHasBeenSet; }
    template<typename BlueGreenDeploymentIdentifierT = Aws::String>
    void SetBlueGreenDeploymentIdentifier(BlueGreenDeploymentIdentifierT&& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = std::forward<BlueGreenDeploymentIdentifierT>(value); }
    template<typename BlueGreenDeploymentIdentifierT = Aws::String>
    DeleteBlueGreenDeploymentRequest& WithBlueGreenDeploymentIdentifier(BlueGreenDeploymentIdentifierT&& value) { SetBlueGreenDeploymentIdentifier(std::forward<BlueGreenDeploymentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to delete the resources in the green environment. You can't
     * specify this option if the blue/green deployment <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_BlueGreenDeployment.html">status</a>
     * is <code>SWITCHOVER_COMPLETED</code>.</p>
     */
    inline bool GetDeleteTarget() const { return m_deleteTarget; }
    inline bool DeleteTargetHasBeenSet() const { return m_deleteTargetHasBeenSet; }
    inline void SetDeleteTarget(bool value) { m_deleteTargetHasBeenSet = true; m_deleteTarget = value; }
    inline DeleteBlueGreenDeploymentRequest& WithDeleteTarget(bool value) { SetDeleteTarget(value); return *this;}
    ///@}
  private:

    Aws::String m_blueGreenDeploymentIdentifier;
    bool m_blueGreenDeploymentIdentifierHasBeenSet = false;

    bool m_deleteTarget{false};
    bool m_deleteTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
