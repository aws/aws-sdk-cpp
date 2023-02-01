/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace NetworkManager
{
namespace Model
{
  class UpdateNetworkResourceMetadataResult
  {
  public:
    AWS_NETWORKMANAGER_API UpdateNetworkResourceMetadataResult();
    AWS_NETWORKMANAGER_API UpdateNetworkResourceMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API UpdateNetworkResourceMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline UpdateNetworkResourceMetadataResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline UpdateNetworkResourceMetadataResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline UpdateNetworkResourceMetadataResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The updated resource metadata.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>The updated resource metadata.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadata = value; }

    /**
     * <p>The updated resource metadata.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadata = std::move(value); }

    /**
     * <p>The updated resource metadata.</p>
     */
    inline UpdateNetworkResourceMetadataResult& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>The updated resource metadata.</p>
     */
    inline UpdateNetworkResourceMetadataResult& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>The updated resource metadata.</p>
     */
    inline UpdateNetworkResourceMetadataResult& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadata.emplace(key, value); return *this; }

    /**
     * <p>The updated resource metadata.</p>
     */
    inline UpdateNetworkResourceMetadataResult& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The updated resource metadata.</p>
     */
    inline UpdateNetworkResourceMetadataResult& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The updated resource metadata.</p>
     */
    inline UpdateNetworkResourceMetadataResult& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The updated resource metadata.</p>
     */
    inline UpdateNetworkResourceMetadataResult& AddMetadata(const char* key, Aws::String&& value) { m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The updated resource metadata.</p>
     */
    inline UpdateNetworkResourceMetadataResult& AddMetadata(Aws::String&& key, const char* value) { m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>The updated resource metadata.</p>
     */
    inline UpdateNetworkResourceMetadataResult& AddMetadata(const char* key, const char* value) { m_metadata.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceArn;

    Aws::Map<Aws::String, Aws::String> m_metadata;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
