/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/secretsmanager/SecretsManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/secretsmanager/model/Tag.h>
#include <aws/secretsmanager/model/ReplicaRegionType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SecretsManager
{
namespace Model
{

  /**
   */
  class CreateSecretRequest : public SecretsManagerRequest
  {
  public:
    AWS_SECRETSMANAGER_API CreateSecretRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSecret"; }

    AWS_SECRETSMANAGER_API Aws::String SerializePayload() const override;

    AWS_SECRETSMANAGER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the new secret.</p> <p>The secret name can contain ASCII letters,
     * numbers, and the following characters: /_+=.@-</p> <p>Do not end your secret
     * name with a hyphen followed by six characters. If you do so, you risk confusion
     * and unexpected results when searching for a secret by partial ARN. Secrets
     * Manager automatically adds a hyphen and six random characters after the secret
     * name at the end of the ARN.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSecretRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you include <code>SecretString</code> or <code>SecretBinary</code>, then
     * Secrets Manager creates an initial version for the secret, and this parameter
     * specifies the unique identifier for the new version. </p>  <p>If you use
     * the Amazon Web Services CLI or one of the Amazon Web Services SDKs to call this
     * operation, then you can leave this parameter empty. The CLI or SDK generates a
     * random UUID for you and includes it as the value for this parameter in the
     * request. </p>  <p>If you generate a raw HTTP request to the Secrets
     * Manager service endpoint, then you must generate a
     * <code>ClientRequestToken</code> and include it in the request.</p> <p>This value
     * helps ensure idempotency. Secrets Manager uses this value to prevent the
     * accidental creation of duplicate versions if there are failures and retries
     * during a rotation. We recommend that you generate a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID-type</a>
     * value to ensure uniqueness of your versions within the specified secret. </p>
     * <ul> <li> <p>If the <code>ClientRequestToken</code> value isn't already
     * associated with a version of the secret then a new version of the secret is
     * created. </p> </li> <li> <p>If a version with this value already exists and the
     * version <code>SecretString</code> and <code>SecretBinary</code> values are the
     * same as those in the request, then the request is ignored.</p> </li> <li> <p>If
     * a version with this value already exists and that version's
     * <code>SecretString</code> and <code>SecretBinary</code> values are different
     * from those in the request, then the request fails because you cannot modify an
     * existing version. Instead, use <a>PutSecretValue</a> to create a new
     * version.</p> </li> </ul> <p>This value becomes the <code>VersionId</code> of the
     * new version.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateSecretRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the secret.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateSecretRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN, key ID, or alias of the KMS key that Secrets Manager uses to encrypt
     * the secret value in the secret. An alias is always prefixed by
     * <code>alias/</code>, for example <code>alias/aws/secretsmanager</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/alias-about.html">About
     * aliases</a>.</p> <p>To use a KMS key in a different account, use the key ARN or
     * the alias ARN.</p> <p>If you don't specify this value, then Secrets Manager uses
     * the key <code>aws/secretsmanager</code>. If that key doesn't yet exist, then
     * Secrets Manager creates it for you automatically the first time it encrypts the
     * secret value.</p> <p>If the secret is in a different Amazon Web Services account
     * from the credentials calling the API, then you can't use
     * <code>aws/secretsmanager</code> to encrypt the secret, and you must create and
     * use a customer managed KMS key. </p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CreateSecretRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The binary data to encrypt and store in the new version of the secret. We
     * recommend that you store your binary data in a file and then pass the contents
     * of the file as a parameter.</p> <p>Either <code>SecretString</code> or
     * <code>SecretBinary</code> must have a value, but not both.</p> <p>This parameter
     * is not available in the Secrets Manager console.</p> <p>Sensitive: This field
     * contains sensitive information, so the service does not include it in CloudTrail
     * log entries. If you create your own log entries, you must also avoid logging the
     * information in this field.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const { return m_secretBinary; }
    inline bool SecretBinaryHasBeenSet() const { return m_secretBinaryHasBeenSet; }
    template<typename SecretBinaryT = Aws::Utils::CryptoBuffer>
    void SetSecretBinary(SecretBinaryT&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::forward<SecretBinaryT>(value); }
    template<typename SecretBinaryT = Aws::Utils::CryptoBuffer>
    CreateSecretRequest& WithSecretBinary(SecretBinaryT&& value) { SetSecretBinary(std::forward<SecretBinaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text data to encrypt and store in this new version of the secret. We
     * recommend you use a JSON structure of key/value pairs for your secret value.</p>
     * <p>Either <code>SecretString</code> or <code>SecretBinary</code> must have a
     * value, but not both.</p> <p>If you create a secret by using the Secrets Manager
     * console then Secrets Manager puts the protected secret text in only the
     * <code>SecretString</code> parameter. The Secrets Manager console stores the
     * information as a JSON structure of key/value pairs that a Lambda rotation
     * function can parse.</p> <p>Sensitive: This field contains sensitive information,
     * so the service does not include it in CloudTrail log entries. If you create your
     * own log entries, you must also avoid logging the information in this field.</p>
     */
    inline const Aws::String& GetSecretString() const { return m_secretString; }
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }
    template<typename SecretStringT = Aws::String>
    void SetSecretString(SecretStringT&& value) { m_secretStringHasBeenSet = true; m_secretString = std::forward<SecretStringT>(value); }
    template<typename SecretStringT = Aws::String>
    CreateSecretRequest& WithSecretString(SecretStringT&& value) { SetSecretString(std::forward<SecretStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to attach to the secret. Each tag is a key and value pair of
     * strings in a JSON text string, for example:</p> <p>
     * <code>[{"Key":"CostCenter","Value":"12345"},{"Key":"environment","Value":"production"}]</code>
     * </p> <p>Secrets Manager tag key names are case sensitive. A tag with the key
     * "ABC" is a different tag from one with key "abc".</p> <p>If you check tags in
     * permissions policies as part of your security strategy, then adding or removing
     * a tag can change permissions. If the completion of this operation would result
     * in you losing your permissions for this secret, then Secrets Manager blocks the
     * operation and returns an <code>Access Denied</code> error. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#tag-secrets-abac">Control
     * access to secrets using tags</a> and <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_examples.html#auth-and-access_tags2">Limit
     * access to identities with tags that match secrets' tags</a>.</p> <p>For
     * information about how to format a JSON parameter for the various command line
     * tool environments, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-using-param.html#cli-using-param-json">Using
     * JSON for Parameters</a>. If your command-line tool or SDK requires quotation
     * marks around the parameter, you should use single quotes to avoid confusion with
     * the double quotes required in the JSON text.</p> <p>For tag quotas and naming
     * restrictions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/arg.html#taged-reference-quotas">Service
     * quotas for Tagging</a> in the <i>Amazon Web Services General Reference
     * guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSecretRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSecretRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of Regions and KMS keys to replicate secrets.</p>
     */
    inline const Aws::Vector<ReplicaRegionType>& GetAddReplicaRegions() const { return m_addReplicaRegions; }
    inline bool AddReplicaRegionsHasBeenSet() const { return m_addReplicaRegionsHasBeenSet; }
    template<typename AddReplicaRegionsT = Aws::Vector<ReplicaRegionType>>
    void SetAddReplicaRegions(AddReplicaRegionsT&& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions = std::forward<AddReplicaRegionsT>(value); }
    template<typename AddReplicaRegionsT = Aws::Vector<ReplicaRegionType>>
    CreateSecretRequest& WithAddReplicaRegions(AddReplicaRegionsT&& value) { SetAddReplicaRegions(std::forward<AddReplicaRegionsT>(value)); return *this;}
    template<typename AddReplicaRegionsT = ReplicaRegionType>
    CreateSecretRequest& AddAddReplicaRegions(AddReplicaRegionsT&& value) { m_addReplicaRegionsHasBeenSet = true; m_addReplicaRegions.emplace_back(std::forward<AddReplicaRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to overwrite a secret with the same name in the destination
     * Region. By default, secrets aren't overwritten.</p>
     */
    inline bool GetForceOverwriteReplicaSecret() const { return m_forceOverwriteReplicaSecret; }
    inline bool ForceOverwriteReplicaSecretHasBeenSet() const { return m_forceOverwriteReplicaSecretHasBeenSet; }
    inline void SetForceOverwriteReplicaSecret(bool value) { m_forceOverwriteReplicaSecretHasBeenSet = true; m_forceOverwriteReplicaSecret = value; }
    inline CreateSecretRequest& WithForceOverwriteReplicaSecret(bool value) { SetForceOverwriteReplicaSecret(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_secretBinary{};
    bool m_secretBinaryHasBeenSet = false;

    Aws::String m_secretString;
    bool m_secretStringHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ReplicaRegionType> m_addReplicaRegions;
    bool m_addReplicaRegionsHasBeenSet = false;

    bool m_forceOverwriteReplicaSecret{false};
    bool m_forceOverwriteReplicaSecretHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
