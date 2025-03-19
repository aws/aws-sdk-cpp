/**
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
  class ValidateResourcePolicyRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API ValidateResourcePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ValidateResourcePolicy"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN or name of the secret with the resource-based policy you want to
     * validate.</p>
     */
    inline const Aws::String& GetSecretId() const { return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    template<typename SecretIdT = Aws::String>
    void SetSecretId(SecretIdT&& value) { m_secretIdHasBeenSet = true; m_secretId = std::forward<SecretIdT>(value); }
    template<typename SecretIdT = Aws::String>
    ValidateResourcePolicyRequest& WithSecretId(SecretIdT&& value) { SetSecretId(std::forward<SecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON-formatted string that contains an Amazon Web Services resource-based
     * policy. The policy in the string identifies who can access or manage this secret
     * and its versions. For example policies, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html">Permissions
     * policy examples</a>.</p>
     */
    inline const Aws::String& GetResourcePolicy() const { return m_resourcePolicy; }
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }
    template<typename ResourcePolicyT = Aws::String>
    void SetResourcePolicy(ResourcePolicyT&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::forward<ResourcePolicyT>(value); }
    template<typename ResourcePolicyT = Aws::String>
    ValidateResourcePolicyRequest& WithResourcePolicy(ResourcePolicyT&& value) { SetResourcePolicy(std::forward<ResourcePolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
