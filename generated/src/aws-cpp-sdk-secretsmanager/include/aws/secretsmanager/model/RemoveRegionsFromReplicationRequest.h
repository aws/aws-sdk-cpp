/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class RemoveRegionsFromReplicationRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API RemoveRegionsFromReplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveRegionsFromReplication"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN or name of the secret.</p>
     */
    inline const Aws::String& GetSecretId() const { return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    template<typename SecretIdT = Aws::String>
    void SetSecretId(SecretIdT&& value) { m_secretIdHasBeenSet = true; m_secretId = std::forward<SecretIdT>(value); }
    template<typename SecretIdT = Aws::String>
    RemoveRegionsFromReplicationRequest& WithSecretId(SecretIdT&& value) { SetSecretId(std::forward<SecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Regions of the replicas to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveReplicaRegions() const { return m_removeReplicaRegions; }
    inline bool RemoveReplicaRegionsHasBeenSet() const { return m_removeReplicaRegionsHasBeenSet; }
    template<typename RemoveReplicaRegionsT = Aws::Vector<Aws::String>>
    void SetRemoveReplicaRegions(RemoveReplicaRegionsT&& value) { m_removeReplicaRegionsHasBeenSet = true; m_removeReplicaRegions = std::forward<RemoveReplicaRegionsT>(value); }
    template<typename RemoveReplicaRegionsT = Aws::Vector<Aws::String>>
    RemoveRegionsFromReplicationRequest& WithRemoveReplicaRegions(RemoveReplicaRegionsT&& value) { SetRemoveReplicaRegions(std::forward<RemoveReplicaRegionsT>(value)); return *this;}
    template<typename RemoveReplicaRegionsT = Aws::String>
    RemoveRegionsFromReplicationRequest& AddRemoveReplicaRegions(RemoveReplicaRegionsT&& value) { m_removeReplicaRegionsHasBeenSet = true; m_removeReplicaRegions.emplace_back(std::forward<RemoveReplicaRegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeReplicaRegions;
    bool m_removeReplicaRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
