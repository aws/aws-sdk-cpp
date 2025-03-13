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
    AWS_SECRETSMANAGER_API SecretValueEntry() = default;
    AWS_SECRETSMANAGER_API SecretValueEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API SecretValueEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECRETSMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secret.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    SecretValueEntry& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the secret. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SecretValueEntry& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique version identifier of this version of the secret.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    SecretValueEntry& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decrypted secret value, if the secret value was originally provided as
     * binary data in the form of a byte array. The parameter represents the binary
     * data as a <a
     * href="https://tools.ietf.org/html/rfc4648#section-4">base64-encoded</a>
     * string.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const { return m_secretBinary; }
    inline bool SecretBinaryHasBeenSet() const { return m_secretBinaryHasBeenSet; }
    template<typename SecretBinaryT = Aws::Utils::CryptoBuffer>
    void SetSecretBinary(SecretBinaryT&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::forward<SecretBinaryT>(value); }
    template<typename SecretBinaryT = Aws::Utils::CryptoBuffer>
    SecretValueEntry& WithSecretBinary(SecretBinaryT&& value) { SetSecretBinary(std::forward<SecretBinaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decrypted secret value, if the secret value was originally provided as a
     * string or through the Secrets Manager console.</p>
     */
    inline const Aws::String& GetSecretString() const { return m_secretString; }
    inline bool SecretStringHasBeenSet() const { return m_secretStringHasBeenSet; }
    template<typename SecretStringT = Aws::String>
    void SetSecretString(SecretStringT&& value) { m_secretStringHasBeenSet = true; m_secretString = std::forward<SecretStringT>(value); }
    template<typename SecretStringT = Aws::String>
    SecretValueEntry& WithSecretString(SecretStringT&& value) { SetSecretString(std::forward<SecretStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const { return m_versionStages; }
    inline bool VersionStagesHasBeenSet() const { return m_versionStagesHasBeenSet; }
    template<typename VersionStagesT = Aws::Vector<Aws::String>>
    void SetVersionStages(VersionStagesT&& value) { m_versionStagesHasBeenSet = true; m_versionStages = std::forward<VersionStagesT>(value); }
    template<typename VersionStagesT = Aws::Vector<Aws::String>>
    SecretValueEntry& WithVersionStages(VersionStagesT&& value) { SetVersionStages(std::forward<VersionStagesT>(value)); return *this;}
    template<typename VersionStagesT = Aws::String>
    SecretValueEntry& AddVersionStages(VersionStagesT&& value) { m_versionStagesHasBeenSet = true; m_versionStages.emplace_back(std::forward<VersionStagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date the secret was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    SecretValueEntry& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_secretBinary{};
    bool m_secretBinaryHasBeenSet = false;

    Aws::String m_secretString;
    bool m_secretStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_versionStages;
    bool m_versionStagesHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
