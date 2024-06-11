/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/ReplicaRegionType.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class ReplicateSecretToRegionsRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API ReplicateSecretToRegionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReplicateSecretToRegions"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN or name of the secret to replicate.</p>
     */
    inline const Aws::String& GetSecretId() const{ return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    inline void SetSecretId(const Aws::String& value) { m_secretIdHasBeenSet = true; m_secretId = value; }
    inline void SetSecretId(Aws::String&& value) { m_secretIdHasBeenSet = true; m_secretId = std::move(value); }
    inline void SetSecretId(const char* value) { m_secretIdHasBeenSet = true; m_secretId.assign(value); }
    inline ReplicateSecretToRegionsRequest& WithSecretId(const Aws::String& value) { SetSecretId(value); return *this;}
    inline ReplicateSecretToRegionsRequest& WithSecretId(Aws::String&& value) { SetSecretId(std::move(value)); return *this;}
    inline ReplicateSecretToRegionsRequest& WithSecretId(const char* value) { SetSecretId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Regions in which to replicate the secret.</p>
     */
    inline const Aws::Vector<ReplicaRegionType>& GetAddReplicaRegions() const{ return m_addReplicaRegions; }
    inline bool AddReplicaRegionsHasBeenSet() const { return m_addReplicaRegionsHasBeenSet; }
    inline void SetAddReplicaRegions(const Aws::Vector<ReplicaRegionType>& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions = value; }
    inline void SetAddReplicaRegions(Aws::Vector<ReplicaRegionType>&& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions = std::move(value); }
    inline ReplicateSecretToRegionsRequest& WithAddReplicaRegions(const Aws::Vector<ReplicaRegionType>& value) { SetAddReplicaRegions(value); return *this;}
    inline ReplicateSecretToRegionsRequest& WithAddReplicaRegions(Aws::Vector<ReplicaRegionType>&& value) { SetAddReplicaRegions(std::move(value)); return *this;}
    inline ReplicateSecretToRegionsRequest& AddAddReplicaRegions(const ReplicaRegionType& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions.push_back(value); return *this; }
    inline ReplicateSecretToRegionsRequest& AddAddReplicaRegions(ReplicaRegionType&& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to overwrite a secret with the same name in the destination
     * Region. By default, secrets aren't overwritten.</p>
     */
    inline bool GetForceOverwriteReplicaSecret() const{ return m_forceOverwriteReplicaSecret; }
    inline bool ForceOverwriteReplicaSecretHasBeenSet() const { return m_forceOverwriteReplicaSecretHasBeenSet; }
    inline void SetForceOverwriteReplicaSecret(bool value) { m_forceOverwriteReplicaSecretHasBeenSet = true; m_forceOverwriteReplicaSecret = value; }
    inline ReplicateSecretToRegionsRequest& WithForceOverwriteReplicaSecret(bool value) { SetForceOverwriteReplicaSecret(value); return *this;}
    ///@}
  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::Vector<ReplicaRegionType> m_addReplicaRegions;
    bool m_addReplicaRegionsHasBeenSet = false;

    bool m_forceOverwriteReplicaSecret;
    bool m_forceOverwriteReplicaSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
