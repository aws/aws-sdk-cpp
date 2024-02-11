/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
namespace SecretsManager
{
namespace Model
{

  /**
   * <p>A structure that contains the secret value and other details for a
   * secret.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/SecretValueEntry">AWS
   * API Reference</a></p>
   */
  class SecretValueEntry
  {
  public:
    AWS_SECRETSMANAGER_API SecretValueEntry();
    AWS_SECRETSMANAGER_API SecretValueEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API SecretValueEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline SecretValueEntry& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline SecretValueEntry& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline SecretValueEntry& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The friendly name of the secret. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The friendly name of the secret. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The friendly name of the secret. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The friendly name of the secret. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The friendly name of the secret. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The friendly name of the secret. </p>
     */
    inline SecretValueEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The friendly name of the secret. </p>
     */
    inline SecretValueEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The friendly name of the secret. </p>
     */
    inline SecretValueEntry& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline SecretValueEntry& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline SecretValueEntry& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline SecretValueEntry& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    /**
     * <p>The decrypted secret value, if the secret value was originally provided as
     * binary data in the form of a byte array. The parameter represents the binary
     * data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const{ return m_secretBinary; }

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as
     * binary data in the form of a byte array. The parameter represents the binary
     * data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p>
     */
    inline bool SecretBinaryHasBeenSet() const { return m_secretBinaryHasBeenSet; }

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as
     * binary data in the form of a byte array. The parameter represents the binary
     * data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p>
     */
    inline void SetSecretBinary(const Aws::Utils::CryptoBuffer& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = value; }

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as
     * binary data in the form of a byte array. The parameter represents the binary
     * data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p>
     */
    inline void SetSecretBinary(Aws::Utils::CryptoBuffer&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::move(value); }

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as
     * binary data in the form of a byte array. The parameter represents the binary
     * data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p>
     */
    inline SecretValueEntry& WithSecretBinary(const Aws::Utils::CryptoBuffer& value) { SetSecretBinary(value); return *this;}

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as
     * binary data in the form of a byte array. The parameter represents the binary
     * data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p>
     */
    inline SecretValueEntry& WithSecretBinary(Aws::Utils::CryptoBuffer&& value) { SetSecretBinary(std::move(value)); return *this;}


    /**
     * <p>The decrypted secret value, if the secret value was originally provided as a
     * string or through the Secrets Manager console.</p>
     */
    inline const Aws::String& GetSecretString() const{ return m_secretString; }

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as a
     * string or through the Secrets Manager console.</p>
     */
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as a
     * string or through the Secrets Manager console.</p>
     */
    inline void SetSecretString(const Aws::String& value) { m_secretStringHasBeenSet = true; m_secretString = value; }

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as a
     * string or through the Secrets Manager console.</p>
     */
    inline void SetSecretString(Aws::String&& value) { m_secretStringHasBeenSet = true; m_secretString = std::move(value); }

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as a
     * string or through the Secrets Manager console.</p>
     */
    inline void SetSecretString(const char* value) { m_secretStringHasBeenSet = true; m_secretString.assign(value); }

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as a
     * string or through the Secrets Manager console.</p>
     */
    inline SecretValueEntry& WithSecretString(const Aws::String& value) { SetSecretString(value); return *this;}

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as a
     * string or through the Secrets Manager console.</p>
     */
    inline SecretValueEntry& WithSecretString(Aws::String&& value) { SetSecretString(std::move(value)); return *this;}

    /**
     * <p>The decrypted secret value, if the secret value was originally provided as a
     * string or through the Secrets Manager console.</p>
     */
    inline SecretValueEntry& WithSecretString(const char* value) { SetSecretString(value); return *this;}


    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const{ return m_versionStages; }

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline bool VersionStagesHasBeenSet() const { return m_versionStagesHasBeenSet; }

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline void SetVersionStages(const Aws::Vector<Aws::String>& value) { m_versionStagesHasBeenSet = true; m_versionStages = value; }

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline void SetVersionStages(Aws::Vector<Aws::String>&& value) { m_versionStagesHasBeenSet = true; m_versionStages = std::move(value); }

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline SecretValueEntry& WithVersionStages(const Aws::Vector<Aws::String>& value) { SetVersionStages(value); return *this;}

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline SecretValueEntry& WithVersionStages(Aws::Vector<Aws::String>&& value) { SetVersionStages(std::move(value)); return *this;}

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline SecretValueEntry& AddVersionStages(const Aws::String& value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(value); return *this; }

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline SecretValueEntry& AddVersionStages(Aws::String&& value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline SecretValueEntry& AddVersionStages(const char* value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(value); return *this; }


    /**
     * <p>The date the secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date the secret was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date the secret was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date the secret was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date the secret was created.</p>
     */
    inline SecretValueEntry& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date the secret was created.</p>
     */
    inline SecretValueEntry& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_secretBinary;
    bool m_secretBinaryHasBeenSet = false;

    Aws::String m_secretString;
    bool m_secretStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_versionStages;
    bool m_versionStagesHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
