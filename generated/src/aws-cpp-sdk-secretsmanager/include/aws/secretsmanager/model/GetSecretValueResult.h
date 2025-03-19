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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecretsManager
{
namespace Model
{
  class GetSecretValueResult
  {
  public:
    AWS_SECRETSMANAGER_API GetSecretValueResult() = default;
    AWS_SECRETSMANAGER_API GetSecretValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API GetSecretValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the secret.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    GetSecretValueResult& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the secret.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetSecretValueResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this version of the secret.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    GetSecretValueResult& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decrypted secret value, if the secret value was originally provided as
     * binary data in the form of a byte array. When you retrieve a
     * <code>SecretBinary</code> using the HTTP API, the Python SDK, or the Amazon Web
     * Services CLI, the value is Base64-encoded. Otherwise, it is not encoded.</p>
     * <p>If the secret was created by using the Secrets Manager console, or if the
     * secret value was originally provided as a string, then this field is omitted.
     * The secret value appears in <code>SecretString</code> instead.</p> <p>Sensitive:
     * This field contains sensitive information, so the service does not include it in
     * CloudTrail log entries. If you create your own log entries, you must also avoid
     * logging the information in this field.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const { return m_secretBinary; }
    template<typename SecretBinaryT = Aws::Utils::CryptoBuffer>
    void SetSecretBinary(SecretBinaryT&& value) { m_secretBinaryHasBeenSet = true; m_secretBinary = std::forward<SecretBinaryT>(value); }
    template<typename SecretBinaryT = Aws::Utils::CryptoBuffer>
    GetSecretValueResult& WithSecretBinary(SecretBinaryT&& value) { SetSecretBinary(std::forward<SecretBinaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The decrypted secret value, if the secret value was originally provided as a
     * string or through the Secrets Manager console.</p> <p>If this secret was created
     * by using the console, then Secrets Manager stores the information as a JSON
     * structure of key/value pairs. </p> <p>Sensitive: This field contains sensitive
     * information, so the service does not include it in CloudTrail log entries. If
     * you create your own log entries, you must also avoid logging the information in
     * this field.</p>
     */
    inline const Aws::String& GetSecretString() const { return m_secretString; }
    template<typename SecretStringT = Aws::String>
    void SetSecretString(SecretStringT&& value) { m_secretStringHasBeenSet = true; m_secretString = std::forward<SecretStringT>(value); }
    template<typename SecretStringT = Aws::String>
    GetSecretValueResult& WithSecretString(SecretStringT&& value) { SetSecretString(std::forward<SecretStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const { return m_versionStages; }
    template<typename VersionStagesT = Aws::Vector<Aws::String>>
    void SetVersionStages(VersionStagesT&& value) { m_versionStagesHasBeenSet = true; m_versionStages = std::forward<VersionStagesT>(value); }
    template<typename VersionStagesT = Aws::Vector<Aws::String>>
    GetSecretValueResult& WithVersionStages(VersionStagesT&& value) { SetVersionStages(std::forward<VersionStagesT>(value)); return *this;}
    template<typename VersionStagesT = Aws::String>
    GetSecretValueResult& AddVersionStages(VersionStagesT&& value) { m_versionStagesHasBeenSet = true; m_versionStages.emplace_back(std::forward<VersionStagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that this version of the secret was created. If you don't
     * specify which version in <code>VersionId</code> or <code>VersionStage</code>,
     * then Secrets Manager uses the <code>AWSCURRENT</code> version.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    GetSecretValueResult& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSecretValueResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
