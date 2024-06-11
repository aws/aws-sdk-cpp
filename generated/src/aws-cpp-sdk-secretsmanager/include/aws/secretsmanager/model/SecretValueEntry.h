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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline SecretValueEntry& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline SecretValueEntry& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline SecretValueEntry& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the secret. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline SecretValueEntry& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SecretValueEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SecretValueEntry& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }
    inline SecretValueEntry& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline SecretValueEntry& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline SecretValueEntry& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decrypted secret value, if the secret value was originally provided as
     * binary data in the form of a byte array. The parameter represents the binary
     * data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const{ return m_secretBinary; }
    inline bool SecretBinaryHasBeenSet() const { return m_secretBinaryHasBeenSet; }
    inline void SetSecretBinary(const Aws::Utils::CryptoBuffer& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = value; }
    inline void SetSecretBinary(Aws::Utils::CryptoBuffer&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::move(value); }
    inline SecretValueEntry& WithSecretBinary(const Aws::Utils::CryptoBuffer& value) { SetSecretBinary(value); return *this;}
    inline SecretValueEntry& WithSecretBinary(Aws::Utils::CryptoBuffer&& value) { SetSecretBinary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decrypted secret value, if the secret value was originally provided as a
     * string or through the Secrets Manager console.</p>
     */
    inline const Aws::String& GetSecretString() const{ return m_secretString; }
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }
    inline void SetSecretString(const Aws::String& value) { m_secretStringHasBeenSet = true; m_secretString = value; }
    inline void SetSecretString(Aws::String&& value) { m_secretStringHasBeenSet = true; m_secretString = std::move(value); }
    inline void SetSecretString(const char* value) { m_secretStringHasBeenSet = true; m_secretString.assign(value); }
    inline SecretValueEntry& WithSecretString(const Aws::String& value) { SetSecretString(value); return *this;}
    inline SecretValueEntry& WithSecretString(Aws::String&& value) { SetSecretString(std::move(value)); return *this;}
    inline SecretValueEntry& WithSecretString(const char* value) { SetSecretString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const{ return m_versionStages; }
    inline bool VersionStagesHasBeenSet() const { return m_versionStagesHasBeenSet; }
    inline void SetVersionStages(const Aws::Vector<Aws::String>& value) { m_versionStagesHasBeenSet = true; m_versionStages = value; }
    inline void SetVersionStages(Aws::Vector<Aws::String>&& value) { m_versionStagesHasBeenSet = true; m_versionStages = std::move(value); }
    inline SecretValueEntry& WithVersionStages(const Aws::Vector<Aws::String>& value) { SetVersionStages(value); return *this;}
    inline SecretValueEntry& WithVersionStages(Aws::Vector<Aws::String>&& value) { SetVersionStages(std::move(value)); return *this;}
    inline SecretValueEntry& AddVersionStages(const Aws::String& value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(value); return *this; }
    inline SecretValueEntry& AddVersionStages(Aws::String&& value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(std::move(value)); return *this; }
    inline SecretValueEntry& AddVersionStages(const char* value) { m_versionStagesHasBeenSet = true; m_versionStages.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline SecretValueEntry& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline SecretValueEntry& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}
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
