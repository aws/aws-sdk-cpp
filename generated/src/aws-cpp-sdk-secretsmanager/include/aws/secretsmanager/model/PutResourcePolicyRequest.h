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
  class PutResourcePolicyRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN or name of the secret to attach the resource-based policy.</p> <p>For
     * an ARN, we recommend that you specify a complete ARN rather than a partial ARN.
     * See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }
    inline PutResourcePolicyRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}
    inline PutResourcePolicyRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}
    inline PutResourcePolicyRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON-formatted string for an Amazon Web Services resource-based policy. For
     * example policies, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html">Permissions
     * policy examples</a>.</p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = value; }
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::move(value); }
    inline void SetResourcePolicy(const char* value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy.assign(value); }
    inline PutResourcePolicyRequest& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}
    inline PutResourcePolicyRequest& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}
    inline PutResourcePolicyRequest& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to block resource-based policies that allow broad access to
     * the secret, for example those that use a wildcard for the principal. By default,
     * public policies aren't blocked.</p>  <p>Resource policy validation
     * and the BlockPublicPolicy parameter help protect your resources by preventing
     * public access from being granted through the resource policies that are directly
     * attached to your secrets. In addition to using these features, carefully inspect
     * the following policies to confirm that they do not grant public access:</p> <ul>
     * <li> <p>Identity-based policies attached to associated Amazon Web Services
     * principals (for example, IAM roles)</p> </li> <li> <p>Resource-based policies
     * attached to associated Amazon Web Services resources (for example, Key
     * Management Service (KMS) keys)</p> </li> </ul> <p>To review permissions to your
     * secrets, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/determine-acccess_examine-iam-policies.html">Determine
     * who has permissions to your secrets</a>.</p> 
     */
    inline bool GetBlockPublicPolicy() const{ return m_blockPublicPolicy; }
    inline bool BlockPublicPolicyHasBeenSet() const { return m_blockPublicPolicyHasBeenSet; }
    inline void SetBlockPublicPolicy(bool value) { m_blockPublicPolicyHasBeenSet = true; m_blockPublicPolicy = value; }
    inline PutResourcePolicyRequest& WithBlockPublicPolicy(bool value) { SetBlockPublicPolicy(value); return *this;}
    ///@}
  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet = false;

    bool m_blockPublicPolicy;
    bool m_blockPublicPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
