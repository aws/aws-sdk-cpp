/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class ImportAppCatalogRequest : public SMSRequest
  {
  public:
    AWS_SMS_API ImportAppCatalogRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportAppCatalog"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the service role. If you omit this parameter, we create a
     * service-linked role for Migration Hub in your account. Otherwise, the role that
     * you provide must have the <a
     * href="https://docs.aws.amazon.com/migrationhub/latest/ug/new-customer-setup.html#sms-managed">policy
     * and trust policy</a> described in the <i>Migration Hub User Guide</i>.</p>
     */
    inline const Aws::String& GetRoleName() const{ return m_roleName; }

    /**
     * <p>The name of the service role. If you omit this parameter, we create a
     * service-linked role for Migration Hub in your account. Otherwise, the role that
     * you provide must have the <a
     * href="https://docs.aws.amazon.com/migrationhub/latest/ug/new-customer-setup.html#sms-managed">policy
     * and trust policy</a> described in the <i>Migration Hub User Guide</i>.</p>
     */
    inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }

    /**
     * <p>The name of the service role. If you omit this parameter, we create a
     * service-linked role for Migration Hub in your account. Otherwise, the role that
     * you provide must have the <a
     * href="https://docs.aws.amazon.com/migrationhub/latest/ug/new-customer-setup.html#sms-managed">policy
     * and trust policy</a> described in the <i>Migration Hub User Guide</i>.</p>
     */
    inline void SetRoleName(const Aws::String& value) { m_roleNameHasBeenSet = true; m_roleName = value; }

    /**
     * <p>The name of the service role. If you omit this parameter, we create a
     * service-linked role for Migration Hub in your account. Otherwise, the role that
     * you provide must have the <a
     * href="https://docs.aws.amazon.com/migrationhub/latest/ug/new-customer-setup.html#sms-managed">policy
     * and trust policy</a> described in the <i>Migration Hub User Guide</i>.</p>
     */
    inline void SetRoleName(Aws::String&& value) { m_roleNameHasBeenSet = true; m_roleName = std::move(value); }

    /**
     * <p>The name of the service role. If you omit this parameter, we create a
     * service-linked role for Migration Hub in your account. Otherwise, the role that
     * you provide must have the <a
     * href="https://docs.aws.amazon.com/migrationhub/latest/ug/new-customer-setup.html#sms-managed">policy
     * and trust policy</a> described in the <i>Migration Hub User Guide</i>.</p>
     */
    inline void SetRoleName(const char* value) { m_roleNameHasBeenSet = true; m_roleName.assign(value); }

    /**
     * <p>The name of the service role. If you omit this parameter, we create a
     * service-linked role for Migration Hub in your account. Otherwise, the role that
     * you provide must have the <a
     * href="https://docs.aws.amazon.com/migrationhub/latest/ug/new-customer-setup.html#sms-managed">policy
     * and trust policy</a> described in the <i>Migration Hub User Guide</i>.</p>
     */
    inline ImportAppCatalogRequest& WithRoleName(const Aws::String& value) { SetRoleName(value); return *this;}

    /**
     * <p>The name of the service role. If you omit this parameter, we create a
     * service-linked role for Migration Hub in your account. Otherwise, the role that
     * you provide must have the <a
     * href="https://docs.aws.amazon.com/migrationhub/latest/ug/new-customer-setup.html#sms-managed">policy
     * and trust policy</a> described in the <i>Migration Hub User Guide</i>.</p>
     */
    inline ImportAppCatalogRequest& WithRoleName(Aws::String&& value) { SetRoleName(std::move(value)); return *this;}

    /**
     * <p>The name of the service role. If you omit this parameter, we create a
     * service-linked role for Migration Hub in your account. Otherwise, the role that
     * you provide must have the <a
     * href="https://docs.aws.amazon.com/migrationhub/latest/ug/new-customer-setup.html#sms-managed">policy
     * and trust policy</a> described in the <i>Migration Hub User Guide</i>.</p>
     */
    inline ImportAppCatalogRequest& WithRoleName(const char* value) { SetRoleName(value); return *this;}

  private:

    Aws::String m_roleName;
    bool m_roleNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
