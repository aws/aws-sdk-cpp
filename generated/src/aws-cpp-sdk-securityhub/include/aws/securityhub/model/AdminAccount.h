/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AdminStatus.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Represents a Security Hub administrator account designated by an organization
   * management account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AdminAccount">AWS
   * API Reference</a></p>
   */
  class AdminAccount
  {
  public:
    AWS_SECURITYHUB_API AdminAccount();
    AWS_SECURITYHUB_API AdminAccount(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AdminAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline AdminAccount& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline AdminAccount& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline AdminAccount& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The current status of the Security Hub administrator account. Indicates
     * whether the account is currently enabled as a Security Hub administrator.</p>
     */
    inline const AdminStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the Security Hub administrator account. Indicates
     * whether the account is currently enabled as a Security Hub administrator.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the Security Hub administrator account. Indicates
     * whether the account is currently enabled as a Security Hub administrator.</p>
     */
    inline void SetStatus(const AdminStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the Security Hub administrator account. Indicates
     * whether the account is currently enabled as a Security Hub administrator.</p>
     */
    inline void SetStatus(AdminStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the Security Hub administrator account. Indicates
     * whether the account is currently enabled as a Security Hub administrator.</p>
     */
    inline AdminAccount& WithStatus(const AdminStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the Security Hub administrator account. Indicates
     * whether the account is currently enabled as a Security Hub administrator.</p>
     */
    inline AdminAccount& WithStatus(AdminStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AdminStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
