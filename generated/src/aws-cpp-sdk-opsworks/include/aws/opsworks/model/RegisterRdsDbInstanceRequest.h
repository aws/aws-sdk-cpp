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
  class RegisterRdsDbInstanceRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API RegisterRdsDbInstanceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterRdsDbInstance"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The stack ID.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    RegisterRdsDbInstanceRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon RDS instance's ARN.</p>
     */
    inline const Aws::String& GetRdsDbInstanceArn() const { return m_rdsDbInstanceArn; }
    inline bool RdsDbInstanceArnHasBeenSet() const { return m_rdsDbInstanceArnHasBeenSet; }
    template<typename RdsDbInstanceArnT = Aws::String>
    void SetRdsDbInstanceArn(RdsDbInstanceArnT&& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = std::forward<RdsDbInstanceArnT>(value); }
    template<typename RdsDbInstanceArnT = Aws::String>
    RegisterRdsDbInstanceRequest& WithRdsDbInstanceArn(RdsDbInstanceArnT&& value) { SetRdsDbInstanceArn(std::forward<RdsDbInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database's master user name.</p>
     */
    inline const Aws::String& GetDbUser() const { return m_dbUser; }
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }
    template<typename DbUserT = Aws::String>
    void SetDbUser(DbUserT&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::forward<DbUserT>(value); }
    template<typename DbUserT = Aws::String>
    RegisterRdsDbInstanceRequest& WithDbUser(DbUserT&& value) { SetDbUser(std::forward<DbUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database password.</p>
     */
    inline const Aws::String& GetDbPassword() const { return m_dbPassword; }
    inline bool DbPasswordHasBeenSet() const { return m_dbPasswordHasBeenSet; }
    template<typename DbPasswordT = Aws::String>
    void SetDbPassword(DbPasswordT&& value) { m_dbPasswordHasBeenSet = true; m_dbPassword = std::forward<DbPasswordT>(value); }
    template<typename DbPasswordT = Aws::String>
    RegisterRdsDbInstanceRequest& WithDbPassword(DbPasswordT&& value) { SetDbPassword(std::forward<DbPasswordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_rdsDbInstanceArn;
    bool m_rdsDbInstanceArnHasBeenSet = false;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::String m_dbPassword;
    bool m_dbPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
