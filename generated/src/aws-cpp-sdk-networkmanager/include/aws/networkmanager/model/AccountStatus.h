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
    AWS_NETWORKMANAGER_API AccountStatus();
    AWS_NETWORKMANAGER_API AccountStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API AccountStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of an account within the Amazon Web Services Organization.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of an account within the Amazon Web Services Organization.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of an account within the Amazon Web Services Organization.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of an account within the Amazon Web Services Organization.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of an account within the Amazon Web Services Organization.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of an account within the Amazon Web Services Organization.</p>
     */
    inline AccountStatus& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of an account within the Amazon Web Services Organization.</p>
     */
    inline AccountStatus& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of an account within the Amazon Web Services Organization.</p>
     */
    inline AccountStatus& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The status of SLR deployment for the account.</p>
     */
    inline const Aws::String& GetSLRDeploymentStatus() const{ return m_sLRDeploymentStatus; }

    /**
     * <p>The status of SLR deployment for the account.</p>
     */
    inline bool SLRDeploymentStatusHasBeenSet() const { return m_sLRDeploymentStatusHasBeenSet; }

    /**
     * <p>The status of SLR deployment for the account.</p>
     */
    inline void SetSLRDeploymentStatus(const Aws::String& value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus = value; }

    /**
     * <p>The status of SLR deployment for the account.</p>
     */
    inline void SetSLRDeploymentStatus(Aws::String&& value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus = std::move(value); }

    /**
     * <p>The status of SLR deployment for the account.</p>
     */
    inline void SetSLRDeploymentStatus(const char* value) { m_sLRDeploymentStatusHasBeenSet = true; m_sLRDeploymentStatus.assign(value); }

    /**
     * <p>The status of SLR deployment for the account.</p>
     */
    inline AccountStatus& WithSLRDeploymentStatus(const Aws::String& value) { SetSLRDeploymentStatus(value); return *this;}

    /**
     * <p>The status of SLR deployment for the account.</p>
     */
    inline AccountStatus& WithSLRDeploymentStatus(Aws::String&& value) { SetSLRDeploymentStatus(std::move(value)); return *this;}

    /**
     * <p>The status of SLR deployment for the account.</p>
     */
    inline AccountStatus& WithSLRDeploymentStatus(const char* value) { SetSLRDeploymentStatus(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_sLRDeploymentStatus;
    bool m_sLRDeploymentStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
