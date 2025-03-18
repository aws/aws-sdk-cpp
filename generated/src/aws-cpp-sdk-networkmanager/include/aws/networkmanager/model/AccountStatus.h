/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the current status of an account within an Amazon Web Services
   * Organization, including service-linked roles (SLRs).</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/AccountStatus">AWS
   * API Reference</a></p>
   */
  class AccountStatus
  {
  public:
    AWS_NETWORKMANAGER_API AccountStatus() = default;
    AWS_NETWORKMANAGER_API AccountStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API AccountStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of an account within the Amazon Web Services Organization.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AccountStatus& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of SLR deployment for the account.</p>
     */
    inline const Aws::String& GetSLRDeploymentStatus() const { return m_sLRDeploymentStatus; }
    inline bool SLRDeploymentStatusHasBeenSet() const { return m_sLRDeploymentStatusHasBeenSet; }
    template<typename SLRDeploymentStatusT = Aws::String>
    void SetSLRDeploymentStatus(SLRDeploymentStatusT&& value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus = std::forward<SLRDeploymentStatusT>(value); }
    template<typename SLRDeploymentStatusT = Aws::String>
    AccountStatus& WithSLRDeploymentStatus(SLRDeploymentStatusT&& value) { SetSLRDeploymentStatus(std::forward<SLRDeploymentStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_sLRDeploymentStatus;
    bool m_sLRDeploymentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
