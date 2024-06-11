﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/CmafPackage.h>
#include <aws/mediapackage-vod/model/DashPackage.h>
#include <aws/mediapackage-vod/model/HlsPackage.h>
#include <aws/mediapackage-vod/model/MssPackage.h>
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
namespace MediaPackageVod
{
namespace Model
{
  class CreatePackagingConfigurationResult
  {
  public:
    AWS_MEDIAPACKAGEVOD_API CreatePackagingConfigurationResult();
    AWS_MEDIAPACKAGEVOD_API CreatePackagingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEVOD_API CreatePackagingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The ARN of the PackagingConfiguration.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreatePackagingConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreatePackagingConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreatePackagingConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const CmafPackage& GetCmafPackage() const{ return m_cmafPackage; }
    inline void SetCmafPackage(const CmafPackage& value) { m_cmafPackage = value; }
    inline void SetCmafPackage(CmafPackage&& value) { m_cmafPackage = std::move(value); }
    inline CreatePackagingConfigurationResult& WithCmafPackage(const CmafPackage& value) { SetCmafPackage(value); return *this;}
    inline CreatePackagingConfigurationResult& WithCmafPackage(CmafPackage&& value) { SetCmafPackage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The time the PackagingConfiguration was created.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::String& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::String&& value) { m_createdAt = std::move(value); }
    inline void SetCreatedAt(const char* value) { m_createdAt.assign(value); }
    inline CreatePackagingConfigurationResult& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}
    inline CreatePackagingConfigurationResult& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}
    inline CreatePackagingConfigurationResult& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    
    inline const DashPackage& GetDashPackage() const{ return m_dashPackage; }
    inline void SetDashPackage(const DashPackage& value) { m_dashPackage = value; }
    inline void SetDashPackage(DashPackage&& value) { m_dashPackage = std::move(value); }
    inline CreatePackagingConfigurationResult& WithDashPackage(const DashPackage& value) { SetDashPackage(value); return *this;}
    inline CreatePackagingConfigurationResult& WithDashPackage(DashPackage&& value) { SetDashPackage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsPackage& GetHlsPackage() const{ return m_hlsPackage; }
    inline void SetHlsPackage(const HlsPackage& value) { m_hlsPackage = value; }
    inline void SetHlsPackage(HlsPackage&& value) { m_hlsPackage = std::move(value); }
    inline CreatePackagingConfigurationResult& WithHlsPackage(const HlsPackage& value) { SetHlsPackage(value); return *this;}
    inline CreatePackagingConfigurationResult& WithHlsPackage(HlsPackage&& value) { SetHlsPackage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the PackagingConfiguration.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreatePackagingConfigurationResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreatePackagingConfigurationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreatePackagingConfigurationResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    
    inline const MssPackage& GetMssPackage() const{ return m_mssPackage; }
    inline void SetMssPackage(const MssPackage& value) { m_mssPackage = value; }
    inline void SetMssPackage(MssPackage&& value) { m_mssPackage = std::move(value); }
    inline CreatePackagingConfigurationResult& WithMssPackage(const MssPackage& value) { SetMssPackage(value); return *this;}
    inline CreatePackagingConfigurationResult& WithMssPackage(MssPackage&& value) { SetMssPackage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of a PackagingGroup.
     */
    inline const Aws::String& GetPackagingGroupId() const{ return m_packagingGroupId; }
    inline void SetPackagingGroupId(const Aws::String& value) { m_packagingGroupId = value; }
    inline void SetPackagingGroupId(Aws::String&& value) { m_packagingGroupId = std::move(value); }
    inline void SetPackagingGroupId(const char* value) { m_packagingGroupId.assign(value); }
    inline CreatePackagingConfigurationResult& WithPackagingGroupId(const Aws::String& value) { SetPackagingGroupId(value); return *this;}
    inline CreatePackagingConfigurationResult& WithPackagingGroupId(Aws::String&& value) { SetPackagingGroupId(std::move(value)); return *this;}
    inline CreatePackagingConfigurationResult& WithPackagingGroupId(const char* value) { SetPackagingGroupId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreatePackagingConfigurationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreatePackagingConfigurationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePackagingConfigurationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreatePackagingConfigurationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreatePackagingConfigurationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreatePackagingConfigurationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreatePackagingConfigurationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreatePackagingConfigurationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreatePackagingConfigurationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreatePackagingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreatePackagingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreatePackagingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    CmafPackage m_cmafPackage;

    Aws::String m_createdAt;

    DashPackage m_dashPackage;

    HlsPackage m_hlsPackage;

    Aws::String m_id;

    MssPackage m_mssPackage;

    Aws::String m_packagingGroupId;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
