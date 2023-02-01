/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/Authorization.h>
#include <aws/mediapackage/model/CmafPackage.h>
#include <aws/mediapackage/model/DashPackage.h>
#include <aws/mediapackage/model/HlsPackage.h>
#include <aws/mediapackage/model/MssPackage.h>
#include <aws/mediapackage/model/Origination.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace MediaPackage
{
namespace Model
{
  class CreateOriginEndpointResult
  {
  public:
    AWS_MEDIAPACKAGE_API CreateOriginEndpointResult();
    AWS_MEDIAPACKAGE_API CreateOriginEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGE_API CreateOriginEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline CreateOriginEndpointResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline CreateOriginEndpointResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) assigned to the OriginEndpoint.
     */
    inline CreateOriginEndpointResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Authorization& GetAuthorization() const{ return m_authorization; }

    
    inline void SetAuthorization(const Authorization& value) { m_authorization = value; }

    
    inline void SetAuthorization(Authorization&& value) { m_authorization = std::move(value); }

    
    inline CreateOriginEndpointResult& WithAuthorization(const Authorization& value) { SetAuthorization(value); return *this;}

    
    inline CreateOriginEndpointResult& WithAuthorization(Authorization&& value) { SetAuthorization(std::move(value)); return *this;}


    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline void SetChannelId(const Aws::String& value) { m_channelId = value; }

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline void SetChannelId(Aws::String&& value) { m_channelId = std::move(value); }

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline void SetChannelId(const char* value) { m_channelId.assign(value); }

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline CreateOriginEndpointResult& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline CreateOriginEndpointResult& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}

    /**
     * The ID of the Channel the OriginEndpoint is associated with.
     */
    inline CreateOriginEndpointResult& WithChannelId(const char* value) { SetChannelId(value); return *this;}


    
    inline const CmafPackage& GetCmafPackage() const{ return m_cmafPackage; }

    
    inline void SetCmafPackage(const CmafPackage& value) { m_cmafPackage = value; }

    
    inline void SetCmafPackage(CmafPackage&& value) { m_cmafPackage = std::move(value); }

    
    inline CreateOriginEndpointResult& WithCmafPackage(const CmafPackage& value) { SetCmafPackage(value); return *this;}

    
    inline CreateOriginEndpointResult& WithCmafPackage(CmafPackage&& value) { SetCmafPackage(std::move(value)); return *this;}


    
    inline const DashPackage& GetDashPackage() const{ return m_dashPackage; }

    
    inline void SetDashPackage(const DashPackage& value) { m_dashPackage = value; }

    
    inline void SetDashPackage(DashPackage&& value) { m_dashPackage = std::move(value); }

    
    inline CreateOriginEndpointResult& WithDashPackage(const DashPackage& value) { SetDashPackage(value); return *this;}

    
    inline CreateOriginEndpointResult& WithDashPackage(DashPackage&& value) { SetDashPackage(std::move(value)); return *this;}


    /**
     * A short text description of the OriginEndpoint.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A short text description of the OriginEndpoint.
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * A short text description of the OriginEndpoint.
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * A short text description of the OriginEndpoint.
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * A short text description of the OriginEndpoint.
     */
    inline CreateOriginEndpointResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A short text description of the OriginEndpoint.
     */
    inline CreateOriginEndpointResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A short text description of the OriginEndpoint.
     */
    inline CreateOriginEndpointResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const HlsPackage& GetHlsPackage() const{ return m_hlsPackage; }

    
    inline void SetHlsPackage(const HlsPackage& value) { m_hlsPackage = value; }

    
    inline void SetHlsPackage(HlsPackage&& value) { m_hlsPackage = std::move(value); }

    
    inline CreateOriginEndpointResult& WithHlsPackage(const HlsPackage& value) { SetHlsPackage(value); return *this;}

    
    inline CreateOriginEndpointResult& WithHlsPackage(HlsPackage&& value) { SetHlsPackage(std::move(value)); return *this;}


    /**
     * The ID of the OriginEndpoint.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The ID of the OriginEndpoint.
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * The ID of the OriginEndpoint.
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * The ID of the OriginEndpoint.
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * The ID of the OriginEndpoint.
     */
    inline CreateOriginEndpointResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The ID of the OriginEndpoint.
     */
    inline CreateOriginEndpointResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The ID of the OriginEndpoint.
     */
    inline CreateOriginEndpointResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline const Aws::String& GetManifestName() const{ return m_manifestName; }

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline void SetManifestName(const Aws::String& value) { m_manifestName = value; }

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline void SetManifestName(Aws::String&& value) { m_manifestName = std::move(value); }

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline void SetManifestName(const char* value) { m_manifestName.assign(value); }

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline CreateOriginEndpointResult& WithManifestName(const Aws::String& value) { SetManifestName(value); return *this;}

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline CreateOriginEndpointResult& WithManifestName(Aws::String&& value) { SetManifestName(std::move(value)); return *this;}

    /**
     * A short string appended to the end of the OriginEndpoint URL.
     */
    inline CreateOriginEndpointResult& WithManifestName(const char* value) { SetManifestName(value); return *this;}


    
    inline const MssPackage& GetMssPackage() const{ return m_mssPackage; }

    
    inline void SetMssPackage(const MssPackage& value) { m_mssPackage = value; }

    
    inline void SetMssPackage(MssPackage&& value) { m_mssPackage = std::move(value); }

    
    inline CreateOriginEndpointResult& WithMssPackage(const MssPackage& value) { SetMssPackage(value); return *this;}

    
    inline CreateOriginEndpointResult& WithMssPackage(MssPackage&& value) { SetMssPackage(std::move(value)); return *this;}


    /**
     * Control whether origination of video is allowed for this OriginEndpoint. If set
     * to ALLOW, the OriginEndpoint
may by requested, pursuant to any other form of
     * access control. If set to DENY, the OriginEndpoint may not be
requested. This
     * can be helpful for Live to VOD harvesting, or for temporarily disabling
     * origination

     */
    inline const Origination& GetOrigination() const{ return m_origination; }

    /**
     * Control whether origination of video is allowed for this OriginEndpoint. If set
     * to ALLOW, the OriginEndpoint
may by requested, pursuant to any other form of
     * access control. If set to DENY, the OriginEndpoint may not be
requested. This
     * can be helpful for Live to VOD harvesting, or for temporarily disabling
     * origination

     */
    inline void SetOrigination(const Origination& value) { m_origination = value; }

    /**
     * Control whether origination of video is allowed for this OriginEndpoint. If set
     * to ALLOW, the OriginEndpoint
may by requested, pursuant to any other form of
     * access control. If set to DENY, the OriginEndpoint may not be
requested. This
     * can be helpful for Live to VOD harvesting, or for temporarily disabling
     * origination

     */
    inline void SetOrigination(Origination&& value) { m_origination = std::move(value); }

    /**
     * Control whether origination of video is allowed for this OriginEndpoint. If set
     * to ALLOW, the OriginEndpoint
may by requested, pursuant to any other form of
     * access control. If set to DENY, the OriginEndpoint may not be
requested. This
     * can be helpful for Live to VOD harvesting, or for temporarily disabling
     * origination

     */
    inline CreateOriginEndpointResult& WithOrigination(const Origination& value) { SetOrigination(value); return *this;}

    /**
     * Control whether origination of video is allowed for this OriginEndpoint. If set
     * to ALLOW, the OriginEndpoint
may by requested, pursuant to any other form of
     * access control. If set to DENY, the OriginEndpoint may not be
requested. This
     * can be helpful for Live to VOD harvesting, or for temporarily disabling
     * origination

     */
    inline CreateOriginEndpointResult& WithOrigination(Origination&& value) { SetOrigination(std::move(value)); return *this;}


    /**
     * Maximum duration (seconds) of content to retain for startover playback.
If not
     * specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline int GetStartoverWindowSeconds() const{ return m_startoverWindowSeconds; }

    /**
     * Maximum duration (seconds) of content to retain for startover playback.
If not
     * specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline void SetStartoverWindowSeconds(int value) { m_startoverWindowSeconds = value; }

    /**
     * Maximum duration (seconds) of content to retain for startover playback.
If not
     * specified, startover playback will be disabled for the OriginEndpoint.

     */
    inline CreateOriginEndpointResult& WithStartoverWindowSeconds(int value) { SetStartoverWindowSeconds(value); return *this;}


    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    
    inline CreateOriginEndpointResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    
    inline CreateOriginEndpointResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateOriginEndpointResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    
    inline CreateOriginEndpointResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateOriginEndpointResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateOriginEndpointResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    
    inline CreateOriginEndpointResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    
    inline CreateOriginEndpointResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    
    inline CreateOriginEndpointResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * Amount of delay (seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline int GetTimeDelaySeconds() const{ return m_timeDelaySeconds; }

    /**
     * Amount of delay (seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline void SetTimeDelaySeconds(int value) { m_timeDelaySeconds = value; }

    /**
     * Amount of delay (seconds) to enforce on the playback of live content.
If not
     * specified, there will be no time delay in effect for the OriginEndpoint.

     */
    inline CreateOriginEndpointResult& WithTimeDelaySeconds(int value) { SetTimeDelaySeconds(value); return *this;}


    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline void SetUrl(const Aws::String& value) { m_url = value; }

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline void SetUrl(const char* value) { m_url.assign(value); }

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline CreateOriginEndpointResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline CreateOriginEndpointResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * The URL of the packaged OriginEndpoint for consumption.
     */
    inline CreateOriginEndpointResult& WithUrl(const char* value) { SetUrl(value); return *this;}


    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline const Aws::Vector<Aws::String>& GetWhitelist() const{ return m_whitelist; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline void SetWhitelist(const Aws::Vector<Aws::String>& value) { m_whitelist = value; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline void SetWhitelist(Aws::Vector<Aws::String>&& value) { m_whitelist = std::move(value); }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline CreateOriginEndpointResult& WithWhitelist(const Aws::Vector<Aws::String>& value) { SetWhitelist(value); return *this;}

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline CreateOriginEndpointResult& WithWhitelist(Aws::Vector<Aws::String>&& value) { SetWhitelist(std::move(value)); return *this;}

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline CreateOriginEndpointResult& AddWhitelist(const Aws::String& value) { m_whitelist.push_back(value); return *this; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline CreateOriginEndpointResult& AddWhitelist(Aws::String&& value) { m_whitelist.push_back(std::move(value)); return *this; }

    /**
     * A list of source IP CIDR blocks that will be allowed to access the
     * OriginEndpoint.
     */
    inline CreateOriginEndpointResult& AddWhitelist(const char* value) { m_whitelist.push_back(value); return *this; }

  private:

    Aws::String m_arn;

    Authorization m_authorization;

    Aws::String m_channelId;

    CmafPackage m_cmafPackage;

    DashPackage m_dashPackage;

    Aws::String m_description;

    HlsPackage m_hlsPackage;

    Aws::String m_id;

    Aws::String m_manifestName;

    MssPackage m_mssPackage;

    Origination m_origination;

    int m_startoverWindowSeconds;

    Aws::Map<Aws::String, Aws::String> m_tags;

    int m_timeDelaySeconds;

    Aws::String m_url;

    Aws::Vector<Aws::String> m_whitelist;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
