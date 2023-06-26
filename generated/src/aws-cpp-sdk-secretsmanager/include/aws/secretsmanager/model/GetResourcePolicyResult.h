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
  class GetResourcePolicyResult
  {
  public:
    AWS_SECRETSMANAGER_API GetResourcePolicyResult();
    AWS_SECRETSMANAGER_API GetResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API GetResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline GetResourcePolicyResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline GetResourcePolicyResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the secret that the resource-based policy was retrieved for.</p>
     */
    inline GetResourcePolicyResult& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The name of the secret that the resource-based policy was retrieved for.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the secret that the resource-based policy was retrieved for.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the secret that the resource-based policy was retrieved for.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the secret that the resource-based policy was retrieved for.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the secret that the resource-based policy was retrieved for.</p>
     */
    inline GetResourcePolicyResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the secret that the resource-based policy was retrieved for.</p>
     */
    inline GetResourcePolicyResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the secret that the resource-based policy was retrieved for.</p>
     */
    inline GetResourcePolicyResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A JSON-formatted string that contains the permissions policy attached to the
     * secret. For more information about permissions policies, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and access control for Secrets Manager</a>.</p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>A JSON-formatted string that contains the permissions policy attached to the
     * secret. For more information about permissions policies, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and access control for Secrets Manager</a>.</p>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicy = value; }

    /**
     * <p>A JSON-formatted string that contains the permissions policy attached to the
     * secret. For more information about permissions policies, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and access control for Secrets Manager</a>.</p>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicy = std::move(value); }

    /**
     * <p>A JSON-formatted string that contains the permissions policy attached to the
     * secret. For more information about permissions policies, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and access control for Secrets Manager</a>.</p>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicy.assign(value); }

    /**
     * <p>A JSON-formatted string that contains the permissions policy attached to the
     * secret. For more information about permissions policies, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and access control for Secrets Manager</a>.</p>
     */
    inline GetResourcePolicyResult& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>A JSON-formatted string that contains the permissions policy attached to the
     * secret. For more information about permissions policies, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and access control for Secrets Manager</a>.</p>
     */
    inline GetResourcePolicyResult& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}

    /**
     * <p>A JSON-formatted string that contains the permissions policy attached to the
     * secret. For more information about permissions policies, see <a
     * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
     * and access control for Secrets Manager</a>.</p>
     */
    inline GetResourcePolicyResult& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetResourcePolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetResourcePolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetResourcePolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_aRN;

    Aws::String m_name;

    Aws::String m_resourcePolicy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
