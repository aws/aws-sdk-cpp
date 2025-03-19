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
  class UpdateSecretVersionStageRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API UpdateSecretVersionStageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSecretVersionStage"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ARN or the name of the secret with the version and staging labelsto
     * modify.</p> <p>For an ARN, we recommend that you specify a complete ARN rather
     * than a partial ARN. See <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot.html#ARN_secretnamehyphen">Finding
     * a secret from a partial ARN</a>.</p>
     */
    inline const Aws::String& GetSecretId() const { return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    template<typename SecretIdT = Aws::String>
    void SetSecretId(SecretIdT&& value) { m_secretIdHasBeenSet = true; m_secretId = std::forward<SecretIdT>(value); }
    template<typename SecretIdT = Aws::String>
    UpdateSecretVersionStageRequest& WithSecretId(SecretIdT&& value) { SetSecretId(std::forward<SecretIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The staging label to add to this version.</p>
     */
    inline const Aws::String& GetVersionStage() const { return m_versionStage; }
    inline bool VersionStageHasBeenSet() const { return m_versionStageHasBeenSet; }
    template<typename VersionStageT = Aws::String>
    void SetVersionStage(VersionStageT&& value) { m_versionStageHasBeenSet = true; m_versionStage = std::forward<VersionStageT>(value); }
    template<typename VersionStageT = Aws::String>
    UpdateSecretVersionStageRequest& WithVersionStage(VersionStageT&& value) { SetVersionStage(std::forward<VersionStageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the version that the staging label is to be removed from. If the
     * staging label you are trying to attach to one version is already attached to a
     * different version, then you must include this parameter and specify the version
     * that the label is to be removed from. If the label is attached and you either do
     * not specify this parameter, or the version ID does not match, then the operation
     * fails.</p>
     */
    inline const Aws::String& GetRemoveFromVersionId() const { return m_removeFromVersionId; }
    inline bool RemoveFromVersionIdHasBeenSet() const { return m_removeFromVersionIdHasBeenSet; }
    template<typename RemoveFromVersionIdT = Aws::String>
    void SetRemoveFromVersionId(RemoveFromVersionIdT&& value) { m_removeFromVersionIdHasBeenSet = true; m_removeFromVersionId = std::forward<RemoveFromVersionIdT>(value); }
    template<typename RemoveFromVersionIdT = Aws::String>
    UpdateSecretVersionStageRequest& WithRemoveFromVersionId(RemoveFromVersionIdT&& value) { SetRemoveFromVersionId(std::forward<RemoveFromVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the version to add the staging label to. To remove a label from a
     * version, then do not specify this parameter.</p> <p>If the staging label is
     * already attached to a different version of the secret, then you must also
     * specify the <code>RemoveFromVersionId</code> parameter. </p>
     */
    inline const Aws::String& GetMoveToVersionId() const { return m_moveToVersionId; }
    inline bool MoveToVersionIdHasBeenSet() const { return m_moveToVersionIdHasBeenSet; }
    template<typename MoveToVersionIdT = Aws::String>
    void SetMoveToVersionId(MoveToVersionIdT&& value) { m_moveToVersionIdHasBeenSet = true; m_moveToVersionId = std::forward<MoveToVersionIdT>(value); }
    template<typename MoveToVersionIdT = Aws::String>
    UpdateSecretVersionStageRequest& WithMoveToVersionId(MoveToVersionIdT&& value) { SetMoveToVersionId(std::forward<MoveToVersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;

    Aws::String m_versionStage;
    bool m_versionStageHasBeenSet = false;

    Aws::String m_removeFromVersionId;
    bool m_removeFromVersionIdHasBeenSet = false;

    Aws::String m_moveToVersionId;
    bool m_moveToVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
