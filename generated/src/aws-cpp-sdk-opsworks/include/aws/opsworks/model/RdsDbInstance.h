/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an Amazon RDS instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RdsDbInstance">AWS
   * API Reference</a></p>
   */
  class RdsDbInstance
  {
  public:
    AWS_OPSWORKS_API RdsDbInstance();
    AWS_OPSWORKS_API RdsDbInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API RdsDbInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance's ARN.</p>
     */
    inline const Aws::String& GetRdsDbInstanceArn() const{ return m_rdsDbInstanceArn; }
    inline bool RdsDbInstanceArnHasBeenSet() const { return m_rdsDbInstanceArnHasBeenSet; }
    inline void SetRdsDbInstanceArn(const Aws::String& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = value; }
    inline void SetRdsDbInstanceArn(Aws::String&& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = std::move(value); }
    inline void SetRdsDbInstanceArn(const char* value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn.assign(value); }
    inline RdsDbInstance& WithRdsDbInstanceArn(const Aws::String& value) { SetRdsDbInstanceArn(value); return *this;}
    inline RdsDbInstance& WithRdsDbInstanceArn(Aws::String&& value) { SetRdsDbInstanceArn(std::move(value)); return *this;}
    inline RdsDbInstance& WithRdsDbInstanceArn(const char* value) { SetRdsDbInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database instance identifier.</p>
     */
    inline const Aws::String& GetDbInstanceIdentifier() const{ return m_dbInstanceIdentifier; }
    inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }
    inline void SetDbInstanceIdentifier(const Aws::String& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = value; }
    inline void SetDbInstanceIdentifier(Aws::String&& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = std::move(value); }
    inline void SetDbInstanceIdentifier(const char* value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier.assign(value); }
    inline RdsDbInstance& WithDbInstanceIdentifier(const Aws::String& value) { SetDbInstanceIdentifier(value); return *this;}
    inline RdsDbInstance& WithDbInstanceIdentifier(Aws::String&& value) { SetDbInstanceIdentifier(std::move(value)); return *this;}
    inline RdsDbInstance& WithDbInstanceIdentifier(const char* value) { SetDbInstanceIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master user name.</p>
     */
    inline const Aws::String& GetDbUser() const{ return m_dbUser; }
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }
    inline void SetDbUser(const Aws::String& value) { m_dbUserHasBeenSet = true; m_dbUser = value; }
    inline void SetDbUser(Aws::String&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::move(value); }
    inline void SetDbUser(const char* value) { m_dbUserHasBeenSet = true; m_dbUser.assign(value); }
    inline RdsDbInstance& WithDbUser(const Aws::String& value) { SetDbUser(value); return *this;}
    inline RdsDbInstance& WithDbUser(Aws::String&& value) { SetDbUser(std::move(value)); return *this;}
    inline RdsDbInstance& WithDbUser(const char* value) { SetDbUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value.</p>
     */
    inline const Aws::String& GetDbPassword() const{ return m_dbPassword; }
    inline bool DbPasswordHasBeenSet() const { return m_dbPasswordHasBeenSet; }
    inline void SetDbPassword(const Aws::String& value) { m_dbPasswordHasBeenSet = true; m_dbPassword = value; }
    inline void SetDbPassword(Aws::String&& value) { m_dbPasswordHasBeenSet = true; m_dbPassword = std::move(value); }
    inline void SetDbPassword(const char* value) { m_dbPasswordHasBeenSet = true; m_dbPassword.assign(value); }
    inline RdsDbInstance& WithDbPassword(const Aws::String& value) { SetDbPassword(value); return *this;}
    inline RdsDbInstance& WithDbPassword(Aws::String&& value) { SetDbPassword(std::move(value)); return *this;}
    inline RdsDbInstance& WithDbPassword(const char* value) { SetDbPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline RdsDbInstance& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline RdsDbInstance& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline RdsDbInstance& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's address.</p>
     */
    inline const Aws::String& GetAddress() const{ return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    inline void SetAddress(const Aws::String& value) { m_addressHasBeenSet = true; m_address = value; }
    inline void SetAddress(Aws::String&& value) { m_addressHasBeenSet = true; m_address = std::move(value); }
    inline void SetAddress(const char* value) { m_addressHasBeenSet = true; m_address.assign(value); }
    inline RdsDbInstance& WithAddress(const Aws::String& value) { SetAddress(value); return *this;}
    inline RdsDbInstance& WithAddress(Aws::String&& value) { SetAddress(std::move(value)); return *this;}
    inline RdsDbInstance& WithAddress(const char* value) { SetAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's database engine.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }
    inline RdsDbInstance& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}
    inline RdsDbInstance& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}
    inline RdsDbInstance& WithEngine(const char* value) { SetEngine(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the stack with which the instance is registered.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }
    inline RdsDbInstance& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}
    inline RdsDbInstance& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}
    inline RdsDbInstance& WithStackId(const char* value) { SetStackId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> if OpsWorks Stacks is unable to discover the Amazon
     * RDS instance. OpsWorks Stacks attempts to discover the instance only once. If
     * this value is set to <code>true</code>, you must deregister the instance, and
     * then register it again.</p>
     */
    inline bool GetMissingOnRds() const{ return m_missingOnRds; }
    inline bool MissingOnRdsHasBeenSet() const { return m_missingOnRdsHasBeenSet; }
    inline void SetMissingOnRds(bool value) { m_missingOnRdsHasBeenSet = true; m_missingOnRds = value; }
    inline RdsDbInstance& WithMissingOnRds(bool value) { SetMissingOnRds(value); return *this;}
    ///@}
  private:

    Aws::String m_rdsDbInstanceArn;
    bool m_rdsDbInstanceArnHasBeenSet = false;

    Aws::String m_dbInstanceIdentifier;
    bool m_dbInstanceIdentifierHasBeenSet = false;

    Aws::String m_dbUser;
    bool m_dbUserHasBeenSet = false;

    Aws::String m_dbPassword;
    bool m_dbPasswordHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_address;
    bool m_addressHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    bool m_missingOnRds;
    bool m_missingOnRdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
