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


    ///@{
    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline const AwsIamAccessKeyStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AwsIamAccessKeyStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AwsIamAccessKeyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AwsIamAccessKeyDetails& WithStatus(const AwsIamAccessKeyStatus& value) { SetStatus(value); return *this;}
    inline AwsIamAccessKeyDetails& WithStatus(AwsIamAccessKeyStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the IAM access key was created.</p> <p>For more information
     * about the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }
    inline AwsIamAccessKeyDetails& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline AwsIamAccessKeyDetails& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline AwsIamAccessKeyDetails& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline AwsIamAccessKeyDetails& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline AwsIamAccessKeyDetails& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline AwsIamAccessKeyDetails& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline const Aws::String& GetPrincipalType() const{ return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    inline void SetPrincipalType(const Aws::String& value) { m_principalTypeHasBeenSet = true; m_principalType = value; }
    inline void SetPrincipalType(Aws::String&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::move(value); }
    inline void SetPrincipalType(const char* value) { m_principalTypeHasBeenSet = true; m_principalType.assign(value); }
    inline AwsIamAccessKeyDetails& WithPrincipalType(const Aws::String& value) { SetPrincipalType(value); return *this;}
    inline AwsIamAccessKeyDetails& WithPrincipalType(Aws::String&& value) { SetPrincipalType(std::move(value)); return *this;}
    inline AwsIamAccessKeyDetails& WithPrincipalType(const char* value) { SetPrincipalType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the principal.</p>
     */
    inline const Aws::String& GetPrincipalName() const{ return m_principalName; }
    inline bool PrincipalNameHasBeenSet() const { return m_principalNameHasBeenSet; }
    inline void SetPrincipalName(const Aws::String& value) { m_principalNameHasBeenSet = true; m_principalName = value; }
    inline void SetPrincipalName(Aws::String&& value) { m_principalNameHasBeenSet = true; m_principalName = std::move(value); }
    inline void SetPrincipalName(const char* value) { m_principalNameHasBeenSet = true; m_principalName.assign(value); }
    inline AwsIamAccessKeyDetails& WithPrincipalName(const Aws::String& value) { SetPrincipalName(value); return *this;}
    inline AwsIamAccessKeyDetails& WithPrincipalName(Aws::String&& value) { SetPrincipalName(std::move(value)); return *this;}
    inline AwsIamAccessKeyDetails& WithPrincipalName(const char* value) { SetPrincipalName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the account for the key.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline AwsIamAccessKeyDetails& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline AwsIamAccessKeyDetails& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline AwsIamAccessKeyDetails& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the access key.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }
    inline AwsIamAccessKeyDetails& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}
    inline AwsIamAccessKeyDetails& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}
    inline AwsIamAccessKeyDetails& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the session that the key was used for.</p>
     */
    inline const AwsIamAccessKeySessionContext& GetSessionContext() const{ return m_sessionContext; }
    inline bool SessionContextHasBeenSet() const { return m_sessionContextHasBeenSet; }
    inline void SetSessionContext(const AwsIamAccessKeySessionContext& value) { m_sessionContextHasBeenSet = true; m_sessionContext = value; }
    inline void SetSessionContext(AwsIamAccessKeySessionContext&& value) { m_sessionContextHasBeenSet = true; m_sessionContext = std::move(value); }
    inline AwsIamAccessKeyDetails& WithSessionContext(const AwsIamAccessKeySessionContext& value) { SetSessionContext(value); return *this;}
    inline AwsIamAccessKeyDetails& WithSessionContext(AwsIamAccessKeySessionContext&& value) { SetSessionContext(std::move(value)); return *this;}
    ///@}
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
