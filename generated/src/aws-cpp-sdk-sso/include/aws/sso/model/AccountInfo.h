/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso/SSO_EXPORTS.h>
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
namespace SSO
{
namespace Model
{

  /**
   * <p>Provides information about your AWS account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-2019-06-10/AccountInfo">AWS API
   * Reference</a></p>
   */
  class AccountInfo
  {
  public:
    AWS_SSO_API AccountInfo();
    AWS_SSO_API AccountInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSO_API AccountInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the AWS account that is assigned to the user.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The identifier of the AWS account that is assigned to the user.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The identifier of the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The identifier of the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The identifier of the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The identifier of the AWS account that is assigned to the user.</p>
     */
    inline AccountInfo& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The identifier of the AWS account that is assigned to the user.</p>
     */
    inline AccountInfo& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the AWS account that is assigned to the user.</p>
     */
    inline AccountInfo& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The display name of the AWS account that is assigned to the user.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }

    /**
     * <p>The display name of the AWS account that is assigned to the user.</p>
     */
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }

    /**
     * <p>The display name of the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p>The display name of the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }

    /**
     * <p>The display name of the AWS account that is assigned to the user.</p>
     */
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }

    /**
     * <p>The display name of the AWS account that is assigned to the user.</p>
     */
    inline AccountInfo& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}

    /**
     * <p>The display name of the AWS account that is assigned to the user.</p>
     */
    inline AccountInfo& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}

    /**
     * <p>The display name of the AWS account that is assigned to the user.</p>
     */
    inline AccountInfo& WithAccountName(const char* value) { SetAccountName(value); return *this;}


    /**
     * <p>The email address of the AWS account that is assigned to the user.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address of the AWS account that is assigned to the user.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address of the AWS account that is assigned to the user.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address of the AWS account that is assigned to the user.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address of the AWS account that is assigned to the user.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address of the AWS account that is assigned to the user.</p>
     */
    inline AccountInfo& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address of the AWS account that is assigned to the user.</p>
     */
    inline AccountInfo& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address of the AWS account that is assigned to the user.</p>
     */
    inline AccountInfo& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SSO
} // namespace Aws
