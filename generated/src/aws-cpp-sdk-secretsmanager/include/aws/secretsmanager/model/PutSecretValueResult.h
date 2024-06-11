/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class PutSecretValueResult
  {
  public:
    AWS_SECRETSMANAGER_API PutSecretValueResult();
    AWS_SECRETSMANAGER_API PutSecretValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API PutSecretValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline void SetARN(const Aws::String& value) { m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRN.assign(value); }
    inline PutSecretValueResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline PutSecretValueResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline PutSecretValueResult& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline PutSecretValueResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutSecretValueResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutSecretValueResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the version of the secret.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }
    inline PutSecretValueResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline PutSecretValueResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline PutSecretValueResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of staging labels that are currently attached to this version of the
     * secret. Secrets Manager uses staging labels to track a version as it progresses
     * through the secret rotation process.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVersionStages() const{ return m_versionStages; }
    inline void SetVersionStages(const Aws::Vector<Aws::String>& value) { m_versionStages = value; }
    inline void SetVersionStages(Aws::Vector<Aws::String>&& value) { m_versionStages = std::move(value); }
    inline PutSecretValueResult& WithVersionStages(const Aws::Vector<Aws::String>& value) { SetVersionStages(value); return *this;}
    inline PutSecretValueResult& WithVersionStages(Aws::Vector<Aws::String>&& value) { SetVersionStages(std::move(value)); return *this;}
    inline PutSecretValueResult& AddVersionStages(const Aws::String& value) { m_versionStages.push_back(value); return *this; }
    inline PutSecretValueResult& AddVersionStages(Aws::String&& value) { m_versionStages.push_back(std::move(value)); return *this; }
    inline PutSecretValueResult& AddVersionStages(const char* value) { m_versionStages.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutSecretValueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutSecretValueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutSecretValueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_versionId;

    Aws::Vector<Aws::String> m_versionStages;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
