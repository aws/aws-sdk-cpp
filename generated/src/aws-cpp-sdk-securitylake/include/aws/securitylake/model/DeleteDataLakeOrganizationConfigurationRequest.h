﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securitylake/model/DataLakeAutoEnableNewAccountConfiguration.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class DeleteDataLakeOrganizationConfigurationRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API DeleteDataLakeOrganizationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDataLakeOrganizationConfiguration"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Turns off automatic enablement of Security Lake for member accounts that are
     * added to an organization.</p>
     */
    inline const Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>& GetAutoEnableNewAccount() const{ return m_autoEnableNewAccount; }
    inline bool AutoEnableNewAccountHasBeenSet() const { return m_autoEnableNewAccountHasBeenSet; }
    inline void SetAutoEnableNewAccount(const Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>& value) { m_autoEnableNewAccountHasBeenSet = true; m_autoEnableNewAccount = value; }
    inline void SetAutoEnableNewAccount(Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>&& value) { m_autoEnableNewAccountHasBeenSet = true; m_autoEnableNewAccount = std::move(value); }
    inline DeleteDataLakeOrganizationConfigurationRequest& WithAutoEnableNewAccount(const Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>& value) { SetAutoEnableNewAccount(value); return *this;}
    inline DeleteDataLakeOrganizationConfigurationRequest& WithAutoEnableNewAccount(Aws::Vector<DataLakeAutoEnableNewAccountConfiguration>&& value) { SetAutoEnableNewAccount(std::move(value)); return *this;}
    inline DeleteDataLakeOrganizationConfigurationRequest& AddAutoEnableNewAccount(const DataLakeAutoEnableNewAccountConfiguration& value) { m_autoEnableNewAccountHasBeenSet = true; m_autoEnableNewAccount.push_back(value); return *this; }
    inline DeleteDataLakeOrganizationConfigurationRequest& AddAutoEnableNewAccount(DataLakeAutoEnableNewAccountConfiguration&& value) { m_autoEnableNewAccountHasBeenSet = true; m_autoEnableNewAccount.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<DataLakeAutoEnableNewAccountConfiguration> m_autoEnableNewAccount;
    bool m_autoEnableNewAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
