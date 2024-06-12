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
    AWS_SECRETSMANAGER_API GetSecretValueResult();
    AWS_SECRETSMANAGER_API GetSecretValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API GetSecretValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline void SetARN(const Aws::String& value) { m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRN.assign(value); }
    inline GetSecretValueResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline GetSecretValueResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline GetSecretValueResult& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetSecretValueResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetSecretValueResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetSecretValueResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this version of the secret.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }
    inline GetSecretValueResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline GetSecretValueResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline GetSecretValueResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}
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
    inline const Aws::Utils::CryptoBuffer& GetSecretBinary() const{ return m_secretBinary; }
    inline void SetSecretBinary(const Aws::Utils::CryptoBuffer& value) { m_secretBinary = value; }
    inline void SetSecretBinary(Aws::Utils::CryptoBuffer&& value) { m_secretBinary = std::move(value); }
    inline GetSecretValueResult& WithSecretBinary(const Aws::Utils::CryptoBuffer& value) { SetSecretBinary(value); return *this;}
    inline GetSecretValueResult& WithSecretBinary(Aws::Utils::CryptoBuffer&& value) { SetSecretBinary(std::move(value)); return *this;}
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
    inline const Aws::String& GetSecretString() const{ return m_secretString; }
    inline void SetSecretString(const Aws::String& value) { m_secretString = value; }
    inline void SetSecretString(Aws::String&& value) { m_secretString = std::move(value); }
    inline void SetSecretString(const char* value) { m_secretString.assign(value); }
    inline GetSecretValueResult& WithSecretString(const Aws::String& value) { SetSecretString(value); return *this;}
    inline GetSecretValueResult& WithSecretString(Aws::String&& value) { SetSecretString(std::move(value)); return *this;}
    inline GetSecretValueResult& WithSecretString(const char* value) { SetSecretString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of all of the staging labels currently attached to this version of the
     * secret.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const{ return m_versionStages; }
    inline void SetVersionStages(const Aws::Vector<Aws::String>& value) { m_versionStages = value; }
    inline void SetVersionStages(Aws::Vector<Aws::String>&& value) { m_versionStages = std::move(value); }
    inline GetSecretValueResult& WithVersionStages(const Aws::Vector<Aws::String>& value) { SetVersionStages(value); return *this;}
    inline GetSecretValueResult& WithVersionStages(Aws::Vector<Aws::String>&& value) { SetVersionStages(std::move(value)); return *this;}
    inline GetSecretValueResult& AddVersionStages(const Aws::String& value) { m_versionStages.push_back(value); return *this; }
    inline GetSecretValueResult& AddVersionStages(Aws::String&& value) { m_versionStages.push_back(std::move(value)); return *this; }
    inline GetSecretValueResult& AddVersionStages(const char* value) { m_versionStages.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time that this version of the secret was created. If you don't
     * specify which version in <code>VersionId</code> or <code>VersionStage</code>,
     * then Secrets Manager uses the <code>AWSCURRENT</code> version.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }
    inline GetSecretValueResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline GetSecretValueResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetSecretValueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetSecretValueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetSecretValueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_versionId;

    Aws::Utils::CryptoBuffer m_secretBinary;

    Aws::String m_secretString;

    Aws::Vector<Aws::String> m_versionStages;

    Aws::Utils::DateTime m_createdDate;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
