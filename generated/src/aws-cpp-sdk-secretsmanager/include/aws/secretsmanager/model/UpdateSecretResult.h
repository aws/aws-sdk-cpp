/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateSecretResult
  {
  public:
    AWS_SECRETSMANAGER_API UpdateSecretResult();
    AWS_SECRETSMANAGER_API UpdateSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API UpdateSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the secret that was updated.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN of the secret that was updated.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The ARN of the secret that was updated.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The ARN of the secret that was updated.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The ARN of the secret that was updated.</p>
     */
    inline UpdateSecretResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of the secret that was updated.</p>
     */
    inline UpdateSecretResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret that was updated.</p>
     */
    inline UpdateSecretResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The name of the secret that was updated.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the secret that was updated.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the secret that was updated.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the secret that was updated.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the secret that was updated.</p>
     */
    inline UpdateSecretResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the secret that was updated.</p>
     */
    inline UpdateSecretResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the secret that was updated.</p>
     */
    inline UpdateSecretResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If Secrets Manager created a new version of the secret during this operation,
     * then <code>VersionId</code> contains the unique identifier of the new
     * version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>If Secrets Manager created a new version of the secret during this operation,
     * then <code>VersionId</code> contains the unique identifier of the new
     * version.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }

    /**
     * <p>If Secrets Manager created a new version of the secret during this operation,
     * then <code>VersionId</code> contains the unique identifier of the new
     * version.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }

    /**
     * <p>If Secrets Manager created a new version of the secret during this operation,
     * then <code>VersionId</code> contains the unique identifier of the new
     * version.</p>
     */
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }

    /**
     * <p>If Secrets Manager created a new version of the secret during this operation,
     * then <code>VersionId</code> contains the unique identifier of the new
     * version.</p>
     */
    inline UpdateSecretResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>If Secrets Manager created a new version of the secret during this operation,
     * then <code>VersionId</code> contains the unique identifier of the new
     * version.</p>
     */
    inline UpdateSecretResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>If Secrets Manager created a new version of the secret during this operation,
     * then <code>VersionId</code> contains the unique identifier of the new
     * version.</p>
     */
    inline UpdateSecretResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateSecretResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateSecretResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateSecretResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_versionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
