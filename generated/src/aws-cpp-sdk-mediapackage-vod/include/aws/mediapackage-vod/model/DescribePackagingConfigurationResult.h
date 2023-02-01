/**
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
  class DescribePackagingConfigurationResult
  {
  public:
    AWS_MEDIAPACKAGEVOD_API DescribePackagingConfigurationResult();
    AWS_MEDIAPACKAGEVOD_API DescribePackagingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEVOD_API DescribePackagingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The ARN of the PackagingConfiguration.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline DescribePackagingConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline DescribePackagingConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of the PackagingConfiguration.
     */
    inline DescribePackagingConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const CmafPackage& GetCmafPackage() const{ return m_cmafPackage; }

    
    inline void SetCmafPackage(const CmafPackage& value) { m_cmafPackage = value; }

    
    inline void SetCmafPackage(CmafPackage&& value) { m_cmafPackage = std::move(value); }

    
    inline DescribePackagingConfigurationResult& WithCmafPackage(const CmafPackage& value) { SetCmafPackage(value); return *this;}

    
    inline DescribePackagingConfigurationResult& WithCmafPackage(CmafPackage&& value) { SetCmafPackage(std::move(value)); return *this;}


    
    inline const DashPackage& GetDashPackage() const{ return m_dashPackage; }

    
    inline void SetDashPackage(const DashPackage& value) { m_dashPackage = value; }

    
    inline void SetDashPackage(DashPackage&& value) { m_dashPackage = std::move(value); }

    
    inline DescribePackagingConfigurationResult& WithDashPackage(const DashPackage& value) { SetDashPackage(value); return *this;}

    
    inline DescribePackagingConfigurationResult& WithDashPackage(DashPackage&& value) { SetDashPackage(std::move(value)); return *this;}


    
    inline const HlsPackage& GetHlsPackage() const{ return m_hlsPackage; }

    
    inline void SetHlsPackage(const HlsPackage& value) { m_hlsPackage = value; }

    
    inline void SetHlsPackage(HlsPackage&& value) { m_hlsPackage = std::move(value); }

    
    inline DescribePackagingConfigurationResult& WithHlsPackage(const HlsPackage& value) { SetHlsPackage(value); return *this;}

    
    inline DescribePackagingConfigurationResult& WithHlsPackage(HlsPackage&& value) { SetHlsPackage(std::move(value)); return *this;}


    /**
     * The ID of the PackagingConfiguration.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The ID of the PackagingConfiguration.
     */
    inline DescribePackagingConfigurationResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the PackagingConfiguration.
     */
    inline DescribePackagingConfigurationResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the PackagingConfiguration.
     */
    inline DescribePackagingConfigurationResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const MssPackage& GetMssPackage() const{ return m_mssPackage; }

    
    inline void SetMssPackage(const MssPackage& value) { m_mssPackage = value; }

    
    inline void SetMssPackage(MssPackage&& value) { m_mssPackage = std::move(value); }

    
    inline DescribePackagingConfigurationResult& WithMssPackage(const MssPackage& value) { SetMssPackage(value); return *this;}

    
    inline DescribePackagingConfigurationResult& WithMssPackage(MssPackage&& value) { SetMssPackage(std::move(value)); return *this;}


    /**
     * The ID of a PackagingGroup.
     */
    inline const Aws::String& GetPackagingGroupId() const{ return m_packagingGroupId; }

    /**
     * The ID of a PackagingGroup.
     */
    inline void SetPackagingGroupId(const Aws::String& value) { m_packagingGroupId = value; }

    /**
     * The ID of a PackagingGroup.
     */
    inline void SetPackagingGroupId(Aws::String&& value) { m_packagingGroupId = std::move(value); }

    /**
     * The ID of a PackagingGroup.
     */
    inline void SetPackagingGroupId(const char* value) { m_packagingGroupId.assign(value); }

    /**
     * The ID of a PackagingGroup.
     */
    inline DescribePackagingConfigurationResult& WithPackagingGroupId(const Aws::String& value) { SetPackagingGroupId(value); return *this;}

    /**
     * The ID of a PackagingGroup.
     */
    inline DescribePackagingConfigurationResult& WithPackagingGroupId(Aws::String&& value) { SetPackagingGroupId(std::move(value)); return *this;}

    /**
     * The ID of a PackagingGroup.
     */
    inline DescribePackagingConfigurationResult& WithPackagingGroupId(const char* value) { SetPackagingGroupId(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline DescribePackagingConfigurationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline DescribePackagingConfigurationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline DescribePackagingConfigurationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline DescribePackagingConfigurationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline DescribePackagingConfigurationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline DescribePackagingConfigurationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline DescribePackagingConfigurationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline DescribePackagingConfigurationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline DescribePackagingConfigurationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;

    CmafPackage m_cmafPackage;

    DashPackage m_dashPackage;

    HlsPackage m_hlsPackage;

    Aws::String m_id;

    MssPackage m_mssPackage;

    Aws::String m_packagingGroupId;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
