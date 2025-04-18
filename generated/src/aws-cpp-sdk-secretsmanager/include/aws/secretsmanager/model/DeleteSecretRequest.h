﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class DeleteSecretRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API DeleteSecretRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSecret"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN or name of the secret to delete.</p> <p>For an ARN, we recommend that
     * you specify a complete ARN rather than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline const Aws::String& GetSecretId() const { return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    template<typename SecretIdT = Aws::String>
    void SetSecretId(SecretIdT&& value) { m_secretIdHasBeenSet = true; m_secretId = std::forward<SecretIdT>(value); }
    template<typename SecretIdT = Aws::String>
    DeleteSecretRequest& WithSecretId(SecretIdT&& value) { SetSecretId(std::forward<SecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days from 7 to 30 that Secrets Manager waits before permanently
     * deleting the secret. You can't use both this parameter and
     * <code>ForceDeleteWithoutRecovery</code> in the same call. If you don't use
     * either, then by default Secrets Manager uses a 30 day recovery window.</p>
     */
    inline long long GetRecoveryWindowInDays() const { return m_recoveryWindowInDays; }
    inline bool RecoveryWindowInDaysHasBeenSet() const { return m_recoveryWindowInDaysHasBeenSet; }
    inline void SetRecoveryWindowInDays(long long value) { m_recoveryWindowInDaysHasBeenSet = true; m_recoveryWindowInDays = value; }
    inline DeleteSecretRequest& WithRecoveryWindowInDays(long long value) { SetRecoveryWindowInDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to delete the secret without any recovery window. You can't
     * use both this parameter and <code>RecoveryWindowInDays</code> in the same call.
     * If you don't use either, then by default Secrets Manager uses a 30 day recovery
     * window.</p> <p>Secrets Manager performs the actual deletion with an asynchronous
     * background process, so there might be a short delay before the secret is
     * permanently deleted. If you delete a secret and then immediately create a secret
     * with the same name, use appropriate back off and retry logic.</p> <p>If you
     * forcibly delete an already deleted or nonexistent secret, the operation does not
     * return <code>ResourceNotFoundException</code>.</p>  <p>Use this
     * parameter with caution. This parameter causes the operation to skip the normal
     * recovery window before the permanent deletion that Secrets Manager would
     * normally impose with the <code>RecoveryWindowInDays</code> parameter. If you
     * delete a secret with the <code>ForceDeleteWithoutRecovery</code> parameter, then
     * you have no opportunity to recover the secret. You lose the secret
     * permanently.</p> 
     */
    inline bool GetForceDeleteWithoutRecovery() const { return m_forceDeleteWithoutRecovery; }
    inline bool ForceDeleteWithoutRecoveryHasBeenSet() const { return m_forceDeleteWithoutRecoveryHasBeenSet; }
    inline void SetForceDeleteWithoutRecovery(bool value) { m_forceDeleteWithoutRecoveryHasBeenSet = true; m_forceDeleteWithoutRecovery = value; }
    inline DeleteSecretRequest& WithForceDeleteWithoutRecovery(bool value) { SetForceDeleteWithoutRecovery(value); return *this;}
    ///@}
  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    long long m_recoveryWindowInDays{0};
    bool m_recoveryWindowInDaysHasBeenSet = false;

    bool m_forceDeleteWithoutRecovery{false};
    bool m_forceDeleteWithoutRecoveryHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
