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
    AWS_OPSWORKS_API RdsDbInstance() = default;
    AWS_OPSWORKS_API RdsDbInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API RdsDbInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance's ARN.</p>
     */
    inline const Aws::String& GetRdsDbInstanceArn() const { return m_rdsDbInstanceArn; }
    inline bool RdsDbInstanceArnHasBeenSet() const { return m_rdsDbInstanceArnHasBeenSet; }
    template<typename RdsDbInstanceArnT = Aws::String>
    void SetRdsDbInstanceArn(RdsDbInstanceArnT&& value) { m_rdsDbInstanceArnHasBeenSet = true; m_rdsDbInstanceArn = std::forward<RdsDbInstanceArnT>(value); }
    template<typename RdsDbInstanceArnT = Aws::String>
    RdsDbInstance& WithRdsDbInstanceArn(RdsDbInstanceArnT&& value) { SetRdsDbInstanceArn(std::forward<RdsDbInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database instance identifier.</p>
     */
    inline const Aws::String& GetDbInstanceIdentifier() const { return m_dbInstanceIdentifier; }
    inline bool DbInstanceIdentifierHasBeenSet() const { return m_dbInstanceIdentifierHasBeenSet; }
    template<typename DbInstanceIdentifierT = Aws::String>
    void SetDbInstanceIdentifier(DbInstanceIdentifierT&& value) { m_dbInstanceIdentifierHasBeenSet = true; m_dbInstanceIdentifier = std::forward<DbInstanceIdentifierT>(value); }
    template<typename DbInstanceIdentifierT = Aws::String>
    RdsDbInstance& WithDbInstanceIdentifier(DbInstanceIdentifierT&& value) { SetDbInstanceIdentifier(std::forward<DbInstanceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The master user name.</p>
     */
    inline const Aws::String& GetDbUser() const { return m_dbUser; }
    inline bool DbUserHasBeenSet() const { return m_dbUserHasBeenSet; }
    template<typename DbUserT = Aws::String>
    void SetDbUser(DbUserT&& value) { m_dbUserHasBeenSet = true; m_dbUser = std::forward<DbUserT>(value); }
    template<typename DbUserT = Aws::String>
    RdsDbInstance& WithDbUser(DbUserT&& value) { SetDbUser(std::forward<DbUserT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>OpsWorks Stacks returns <code>*****FILTERED*****</code> instead of the actual
     * value.</p>
     */
    inline const Aws::String& GetDbPassword() const { return m_dbPassword; }
    inline bool DbPasswordHasBeenSet() const { return m_dbPasswordHasBeenSet; }
    template<typename DbPasswordT = Aws::String>
    void SetDbPassword(DbPasswordT&& value) { m_dbPasswordHasBeenSet = true; m_dbPassword = std::forward<DbPasswordT>(value); }
    template<typename DbPasswordT = Aws::String>
    RdsDbInstance& WithDbPassword(DbPasswordT&& value) { SetDbPassword(std::forward<DbPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    RdsDbInstance& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's address.</p>
     */
    inline const Aws::String& GetAddress() const { return m_address; }
    inline bool AddressHasBeenSet() const { return m_addressHasBeenSet; }
    template<typename AddressT = Aws::String>
    void SetAddress(AddressT&& value) { m_addressHasBeenSet = true; m_address = std::forward<AddressT>(value); }
    template<typename AddressT = Aws::String>
    RdsDbInstance& WithAddress(AddressT&& value) { SetAddress(std::forward<AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance's database engine.</p>
     */
    inline const Aws::String& GetEngine() const { return m_engine; }
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }
    template<typename EngineT = Aws::String>
    void SetEngine(EngineT&& value) { m_engineHasBeenSet = true; m_engine = std::forward<EngineT>(value); }
    template<typename EngineT = Aws::String>
    RdsDbInstance& WithEngine(EngineT&& value) { SetEngine(std::forward<EngineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the stack with which the instance is registered.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    RdsDbInstance& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> if OpsWorks Stacks is unable to discover the Amazon
     * RDS instance. OpsWorks Stacks attempts to discover the instance only once. If
     * this value is set to <code>true</code>, you must deregister the instance, and
     * then register it again.</p>
     */
    inline bool GetMissingOnRds() const { return m_missingOnRds; }
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

    bool m_missingOnRds{false};
    bool m_missingOnRdsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
