/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/MetadataValue.h>
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
namespace SSM
{
namespace Model
{
  class GetOpsMetadataResult
  {
  public:
    AWS_SSM_API GetOpsMetadataResult();
    AWS_SSM_API GetOpsMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetOpsMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The resource ID of the Application Manager application.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }
    inline GetOpsMetadataResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline GetOpsMetadataResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline GetOpsMetadataResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>OpsMetadata for an Application Manager application.</p>
     */
    inline const Aws::Map<Aws::String, MetadataValue>& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const Aws::Map<Aws::String, MetadataValue>& value) { m_metadata = value; }
    inline void SetMetadata(Aws::Map<Aws::String, MetadataValue>&& value) { m_metadata = std::move(value); }
    inline GetOpsMetadataResult& WithMetadata(const Aws::Map<Aws::String, MetadataValue>& value) { SetMetadata(value); return *this;}
    inline GetOpsMetadataResult& WithMetadata(Aws::Map<Aws::String, MetadataValue>&& value) { SetMetadata(std::move(value)); return *this;}
    inline GetOpsMetadataResult& AddMetadata(const Aws::String& key, const MetadataValue& value) { m_metadata.emplace(key, value); return *this; }
    inline GetOpsMetadataResult& AddMetadata(Aws::String&& key, const MetadataValue& value) { m_metadata.emplace(std::move(key), value); return *this; }
    inline GetOpsMetadataResult& AddMetadata(const Aws::String& key, MetadataValue&& value) { m_metadata.emplace(key, std::move(value)); return *this; }
    inline GetOpsMetadataResult& AddMetadata(Aws::String&& key, MetadataValue&& value) { m_metadata.emplace(std::move(key), std::move(value)); return *this; }
    inline GetOpsMetadataResult& AddMetadata(const char* key, MetadataValue&& value) { m_metadata.emplace(key, std::move(value)); return *this; }
    inline GetOpsMetadataResult& AddMetadata(const char* key, const MetadataValue& value) { m_metadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetOpsMetadataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetOpsMetadataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetOpsMetadataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetOpsMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetOpsMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetOpsMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;

    Aws::Map<Aws::String, MetadataValue> m_metadata;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
