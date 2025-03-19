/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   * <p>Provides summary information for the <code>EnvironmentVpc</code> resource as
   * a response to <code>ListEnvironmentVpc</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/EnvironmentVpc">AWS
   * API Reference</a></p>
   */
  class EnvironmentVpc
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API EnvironmentVpc() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API EnvironmentVpc(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API EnvironmentVpc& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the virtual private cloud (VPC) owner.
     * </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    EnvironmentVpc& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Amazon Virtual Private Cloud (Amazon VPC) CIDR blocks. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrBlocks() const { return m_cidrBlocks; }
    inline bool CidrBlocksHasBeenSet() const { return m_cidrBlocksHasBeenSet; }
    template<typename CidrBlocksT = Aws::Vector<Aws::String>>
    void SetCidrBlocks(CidrBlocksT&& value) { m_cidrBlocksHasBeenSet = true; m_cidrBlocks = std::forward<CidrBlocksT>(value); }
    template<typename CidrBlocksT = Aws::Vector<Aws::String>>
    EnvironmentVpc& WithCidrBlocks(CidrBlocksT&& value) { SetCidrBlocks(std::forward<CidrBlocksT>(value)); return *this;}
    template<typename CidrBlocksT = Aws::String>
    EnvironmentVpc& AddCidrBlocks(CidrBlocksT&& value) { m_cidrBlocksHasBeenSet = true; m_cidrBlocks.emplace_back(std::forward<CidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the VPC is first added to the environment.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    EnvironmentVpc& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    EnvironmentVpc& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the VPC was last updated by the environment.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    EnvironmentVpc& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC. </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    EnvironmentVpc& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the VPC at the time it is added to the environment. </p>
     */
    inline const Aws::String& GetVpcName() const { return m_vpcName; }
    inline bool VpcNameHasBeenSet() const { return m_vpcNameHasBeenSet; }
    template<typename VpcNameT = Aws::String>
    void SetVpcName(VpcNameT&& value) { m_vpcNameHasBeenSet = true; m_vpcName = std::forward<VpcNameT>(value); }
    template<typename VpcNameT = Aws::String>
    EnvironmentVpc& WithVpcName(VpcNameT&& value) { SetVpcName(std::forward<VpcNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_cidrBlocks;
    bool m_cidrBlocksHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_vpcName;
    bool m_vpcNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
