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
  class StopReplicationToReplicaResult
  {
  public:
    AWS_SECRETSMANAGER_API StopReplicationToReplicaResult();
    AWS_SECRETSMANAGER_API StopReplicationToReplicaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECRETSMANAGER_API StopReplicationToReplicaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the promoted secret. The ARN is the same as the original primary
     * secret except the Region is changed.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The ARN of the promoted secret. The ARN is the same as the original primary
     * secret except the Region is changed.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRN = value; }

    /**
     * <p>The ARN of the promoted secret. The ARN is the same as the original primary
     * secret except the Region is changed.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRN = std::move(value); }

    /**
     * <p>The ARN of the promoted secret. The ARN is the same as the original primary
     * secret except the Region is changed.</p>
     */
    inline void SetARN(const char* value) { m_aRN.assign(value); }

    /**
     * <p>The ARN of the promoted secret. The ARN is the same as the original primary
     * secret except the Region is changed.</p>
     */
    inline StopReplicationToReplicaResult& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The ARN of the promoted secret. The ARN is the same as the original primary
     * secret except the Region is changed.</p>
     */
    inline StopReplicationToReplicaResult& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the promoted secret. The ARN is the same as the original primary
     * secret except the Region is changed.</p>
     */
    inline StopReplicationToReplicaResult& WithARN(const char* value) { SetARN(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopReplicationToReplicaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopReplicationToReplicaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopReplicationToReplicaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_aRN;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecretsManager
} // namespace Aws
