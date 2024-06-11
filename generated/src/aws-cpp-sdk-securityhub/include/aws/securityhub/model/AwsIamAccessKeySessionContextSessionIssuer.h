/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the entity that created the session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamAccessKeySessionContextSessionIssuer">AWS
   * API Reference</a></p>
   */
  class AwsIamAccessKeySessionContextSessionIssuer
  {
  public:
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContextSessionIssuer();
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContextSessionIssuer(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContextSessionIssuer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of principal (user, role, or group) that created the session.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline AwsIamAccessKeySessionContextSessionIssuer& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline AwsIamAccessKeySessionContextSessionIssuer& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline AwsIamAccessKeySessionContextSessionIssuer& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal ID of the principal (user, role, or group) that created the
     * session.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline AwsIamAccessKeySessionContextSessionIssuer& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline AwsIamAccessKeySessionContextSessionIssuer& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline AwsIamAccessKeySessionContextSessionIssuer& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the session.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AwsIamAccessKeySessionContextSessionIssuer& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AwsIamAccessKeySessionContextSessionIssuer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AwsIamAccessKeySessionContextSessionIssuer& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that created the
     * session.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AwsIamAccessKeySessionContextSessionIssuer& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AwsIamAccessKeySessionContextSessionIssuer& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AwsIamAccessKeySessionContextSessionIssuer& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the principal that created the session.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline AwsIamAccessKeySessionContextSessionIssuer& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline AwsIamAccessKeySessionContextSessionIssuer& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline AwsIamAccessKeySessionContextSessionIssuer& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
