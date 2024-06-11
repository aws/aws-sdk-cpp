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
  class CancelRotateSecretResult
  {
  public:
    AWS_SECRETSMANAGER_API CancelRotateSecretResult();
    AWS_SECRETSMANAGER_API CancelRotateSecretResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API CancelRotateSecretResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the secret.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline void SetARN(const Aws::String& value) { m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRN.assign(value); }
    inline CancelRotateSecretResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline CancelRotateSecretResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline CancelRotateSecretResult& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the secret.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CancelRotateSecretResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CancelRotateSecretResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CancelRotateSecretResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the version of the secret created during the
     * rotation. This version might not be complete, and should be evaluated for
     * possible deletion. We recommend that you remove the <code>VersionStage</code>
     * value <code>AWSPENDING</code> from this version so that Secrets Manager can
     * delete it. Failing to clean up a cancelled rotation can block you from starting
     * future rotations.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }
    inline void SetVersionId(const Aws::String& value) { m_versionId = value; }
    inline void SetVersionId(Aws::String&& value) { m_versionId = std::move(value); }
    inline void SetVersionId(const char* value) { m_versionId.assign(value); }
    inline CancelRotateSecretResult& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}
    inline CancelRotateSecretResult& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}
    inline CancelRotateSecretResult& WithVersionId(const char* value) { SetVersionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CancelRotateSecretResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CancelRotateSecretResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CancelRotateSecretResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_versionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
