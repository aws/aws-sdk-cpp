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
  class StopReplicationToReplicaRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API StopReplicationToReplicaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopReplicationToReplica"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN of the primary secret. </p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }
    inline StopReplicationToReplicaRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}
    inline StopReplicationToReplicaRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}
    inline StopReplicationToReplicaRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}
    ///@}
  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
