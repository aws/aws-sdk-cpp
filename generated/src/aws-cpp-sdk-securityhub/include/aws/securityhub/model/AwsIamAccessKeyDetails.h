/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsIamAccessKeyStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsIamAccessKeySessionContext.h>
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
   * <p>IAM access key details related to a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamAccessKeyDetails">AWS
   * API Reference</a></p>
   */
  class AwsIamAccessKeyDetails
  {
  public:
    AWS_SECURITYHUB_API AwsIamAccessKeyDetails();
    AWS_SECURITYHUB_API AwsIamAccessKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamAccessKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline const AwsIamAccessKeyStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline void SetStatus(const AwsIamAccessKeyStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline void SetStatus(AwsIamAccessKeyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline AwsIamAccessKeyDetails& WithStatus(const AwsIamAccessKeyStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline AwsIamAccessKeyDetails& WithStatus(AwsIamAccessKeyStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates when the IAM access key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>Indicates when the IAM access key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>Indicates when the IAM access key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>Indicates when the IAM access key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>Indicates when the IAM access key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>Indicates when the IAM access key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamAccessKeyDetails& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>Indicates when the IAM access key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamAccessKeyDetails& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>Indicates when the IAM access key was created.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsIamAccessKeyDetails& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline const Aws::String& GetPrincipalType() const{ return m_principalType; }

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline void SetPrincipalType(const Aws::String& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline void SetPrincipalType(Aws::String&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline void SetPrincipalType(const char* value) { m_principalTypeHasBeenSet = true; m_principalType.assign(value); }

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalType(const Aws::String& value) { SetPrincipalType(value); return *this;}

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalType(Aws::String&& value) { SetPrincipalType(std::move(value)); return *this;}

    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalType(const char* value) { SetPrincipalType(value); return *this;}


    /**
     * <p>The name of the principal.</p>
     */
    inline const Aws::String& GetPrincipalName() const{ return m_principalName; }

    /**
     * <p>The name of the principal.</p>
     */
    inline bool PrincipalNameHasBeenSet() const { return m_principalNameHasBeenSet; }

    /**
     * <p>The name of the principal.</p>
     */
    inline void SetPrincipalName(const Aws::String& value) { m_principalNameHasBeenSet = true; m_principalName = value; }

    /**
     * <p>The name of the principal.</p>
     */
    inline void SetPrincipalName(Aws::String&& value) { m_principalNameHasBeenSet = true; m_principalName = std::move(value); }

    /**
     * <p>The name of the principal.</p>
     */
    inline void SetPrincipalName(const char* value) { m_principalNameHasBeenSet = true; m_principalName.assign(value); }

    /**
     * <p>The name of the principal.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalName(const Aws::String& value) { SetPrincipalName(value); return *this;}

    /**
     * <p>The name of the principal.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalName(Aws::String&& value) { SetPrincipalName(std::move(value)); return *this;}

    /**
     * <p>The name of the principal.</p>
     */
    inline AwsIamAccessKeyDetails& WithPrincipalName(const char* value) { SetPrincipalName(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the account for the key.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the account for the key.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the account for the key.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the account for the key.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the account for the key.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the account for the key.</p>
     */
    inline AwsIamAccessKeyDetails& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account for the key.</p>
     */
    inline AwsIamAccessKeyDetails& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account for the key.</p>
     */
    inline AwsIamAccessKeyDetails& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The identifier of the access key.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The identifier of the access key.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The identifier of the access key.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The identifier of the access key.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The identifier of the access key.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The identifier of the access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The identifier of the access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the access key.</p>
     */
    inline AwsIamAccessKeyDetails& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>Information about the session that the key was used for.</p>
     */
    inline const AwsIamAccessKeySessionContext& GetSessionContext() const{ return m_sessionContext; }

    /**
     * <p>Information about the session that the key was used for.</p>
     */
    inline bool SessionContextHasBeenSet() const { return m_sessionContextHasBeenSet; }

    /**
     * <p>Information about the session that the key was used for.</p>
     */
    inline void SetSessionContext(const AwsIamAccessKeySessionContext& value) { m_sessionContextHasBeenSet = true; m_sessionContext = value; }

    /**
     * <p>Information about the session that the key was used for.</p>
     */
    inline void SetSessionContext(AwsIamAccessKeySessionContext&& value) { m_sessionContextHasBeenSet = true; m_sessionContext = std::move(value); }

    /**
     * <p>Information about the session that the key was used for.</p>
     */
    inline AwsIamAccessKeyDetails& WithSessionContext(const AwsIamAccessKeySessionContext& value) { SetSessionContext(value); return *this;}

    /**
     * <p>Information about the session that the key was used for.</p>
     */
    inline AwsIamAccessKeyDetails& WithSessionContext(AwsIamAccessKeySessionContext&& value) { SetSessionContext(std::move(value)); return *this;}

  private:

    AwsIamAccessKeyStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_principalType;
    bool m_principalTypeHasBeenSet = false;

    Aws::String m_principalName;
    bool m_principalNameHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    AwsIamAccessKeySessionContext m_sessionContext;
    bool m_sessionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
