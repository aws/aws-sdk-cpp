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
    AWS_SECURITYHUB_API AwsIamAccessKeyDetails() = default;
    AWS_SECURITYHUB_API AwsIamAccessKeyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamAccessKeyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the IAM access key related to a finding.</p>
     */
    inline AwsIamAccessKeyStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AwsIamAccessKeyStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AwsIamAccessKeyDetails& WithStatus(AwsIamAccessKeyStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the IAM access key was created.</p> <p>For more information
     * about the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    AwsIamAccessKeyDetails& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the principal associated with an access key.</p>
     */
    inline const Aws::String& GetPrincipalId() const { return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    template<typename PrincipalIdT = Aws::String>
    void SetPrincipalId(PrincipalIdT&& value) { m_principalIdHasBeenSet = true; m_principalId = std::forward<PrincipalIdT>(value); }
    template<typename PrincipalIdT = Aws::String>
    AwsIamAccessKeyDetails& WithPrincipalId(PrincipalIdT&& value) { SetPrincipalId(std::forward<PrincipalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of principal associated with an access key.</p>
     */
    inline const Aws::String& GetPrincipalType() const { return m_principalType; }
    inline bool PrincipalTypeHasBeenSet() const { return m_principalTypeHasBeenSet; }
    template<typename PrincipalTypeT = Aws::String>
    void SetPrincipalType(PrincipalTypeT&& value) { m_principalTypeHasBeenSet = true; m_principalType = std::forward<PrincipalTypeT>(value); }
    template<typename PrincipalTypeT = Aws::String>
    AwsIamAccessKeyDetails& WithPrincipalType(PrincipalTypeT&& value) { SetPrincipalType(std::forward<PrincipalTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the principal.</p>
     */
    inline const Aws::String& GetPrincipalName() const { return m_principalName; }
    inline bool PrincipalNameHasBeenSet() const { return m_principalNameHasBeenSet; }
    template<typename PrincipalNameT = Aws::String>
    void SetPrincipalName(PrincipalNameT&& value) { m_principalNameHasBeenSet = true; m_principalName = std::forward<PrincipalNameT>(value); }
    template<typename PrincipalNameT = Aws::String>
    AwsIamAccessKeyDetails& WithPrincipalName(PrincipalNameT&& value) { SetPrincipalName(std::forward<PrincipalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the account for the key.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AwsIamAccessKeyDetails& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the access key.</p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    AwsIamAccessKeyDetails& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the session that the key was used for.</p>
     */
    inline const AwsIamAccessKeySessionContext& GetSessionContext() const { return m_sessionContext; }
    inline bool SessionContextHasBeenSet() const { return m_sessionContextHasBeenSet; }
    template<typename SessionContextT = AwsIamAccessKeySessionContext>
    void SetSessionContext(SessionContextT&& value) { m_sessionContextHasBeenSet = true; m_sessionContext = std::forward<SessionContextT>(value); }
    template<typename SessionContextT = AwsIamAccessKeySessionContext>
    AwsIamAccessKeyDetails& WithSessionContext(SessionContextT&& value) { SetSessionContext(std::forward<SessionContextT>(value)); return *this;}
    ///@}
  private:

    AwsIamAccessKeyStatus m_status{AwsIamAccessKeyStatus::NOT_SET};
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
