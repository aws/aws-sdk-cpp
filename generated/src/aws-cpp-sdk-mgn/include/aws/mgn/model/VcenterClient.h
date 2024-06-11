/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace mgn
{
namespace Model
{

  /**
   * <p>vCenter client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/VcenterClient">AWS
   * API Reference</a></p>
   */
  class VcenterClient
  {
  public:
    AWS_MGN_API VcenterClient();
    AWS_MGN_API VcenterClient(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API VcenterClient& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Arn of vCenter client.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline VcenterClient& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline VcenterClient& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline VcenterClient& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Datacenter name of vCenter client.</p>
     */
    inline const Aws::String& GetDatacenterName() const{ return m_datacenterName; }
    inline bool DatacenterNameHasBeenSet() const { return m_datacenterNameHasBeenSet; }
    inline void SetDatacenterName(const Aws::String& value) { m_datacenterNameHasBeenSet = true; m_datacenterName = value; }
    inline void SetDatacenterName(Aws::String&& value) { m_datacenterNameHasBeenSet = true; m_datacenterName = std::move(value); }
    inline void SetDatacenterName(const char* value) { m_datacenterNameHasBeenSet = true; m_datacenterName.assign(value); }
    inline VcenterClient& WithDatacenterName(const Aws::String& value) { SetDatacenterName(value); return *this;}
    inline VcenterClient& WithDatacenterName(Aws::String&& value) { SetDatacenterName(std::move(value)); return *this;}
    inline VcenterClient& WithDatacenterName(const char* value) { SetDatacenterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hostname of vCenter client .</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }
    inline VcenterClient& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}
    inline VcenterClient& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}
    inline VcenterClient& WithHostname(const char* value) { SetHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last seen time of vCenter client.</p>
     */
    inline const Aws::String& GetLastSeenDatetime() const{ return m_lastSeenDatetime; }
    inline bool LastSeenDatetimeHasBeenSet() const { return m_lastSeenDatetimeHasBeenSet; }
    inline void SetLastSeenDatetime(const Aws::String& value) { m_lastSeenDatetimeHasBeenSet = true; m_lastSeenDatetime = value; }
    inline void SetLastSeenDatetime(Aws::String&& value) { m_lastSeenDatetimeHasBeenSet = true; m_lastSeenDatetime = std::move(value); }
    inline void SetLastSeenDatetime(const char* value) { m_lastSeenDatetimeHasBeenSet = true; m_lastSeenDatetime.assign(value); }
    inline VcenterClient& WithLastSeenDatetime(const Aws::String& value) { SetLastSeenDatetime(value); return *this;}
    inline VcenterClient& WithLastSeenDatetime(Aws::String&& value) { SetLastSeenDatetime(std::move(value)); return *this;}
    inline VcenterClient& WithLastSeenDatetime(const char* value) { SetLastSeenDatetime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for Source Server of vCenter client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceServerTags() const{ return m_sourceServerTags; }
    inline bool SourceServerTagsHasBeenSet() const { return m_sourceServerTagsHasBeenSet; }
    inline void SetSourceServerTags(const Aws::Map<Aws::String, Aws::String>& value) { m_sourceServerTagsHasBeenSet = true; m_sourceServerTags = value; }
    inline void SetSourceServerTags(Aws::Map<Aws::String, Aws::String>&& value) { m_sourceServerTagsHasBeenSet = true; m_sourceServerTags = std::move(value); }
    inline VcenterClient& WithSourceServerTags(const Aws::Map<Aws::String, Aws::String>& value) { SetSourceServerTags(value); return *this;}
    inline VcenterClient& WithSourceServerTags(Aws::Map<Aws::String, Aws::String>&& value) { SetSourceServerTags(std::move(value)); return *this;}
    inline VcenterClient& AddSourceServerTags(const Aws::String& key, const Aws::String& value) { m_sourceServerTagsHasBeenSet = true; m_sourceServerTags.emplace(key, value); return *this; }
    inline VcenterClient& AddSourceServerTags(Aws::String&& key, const Aws::String& value) { m_sourceServerTagsHasBeenSet = true; m_sourceServerTags.emplace(std::move(key), value); return *this; }
    inline VcenterClient& AddSourceServerTags(const Aws::String& key, Aws::String&& value) { m_sourceServerTagsHasBeenSet = true; m_sourceServerTags.emplace(key, std::move(value)); return *this; }
    inline VcenterClient& AddSourceServerTags(Aws::String&& key, Aws::String&& value) { m_sourceServerTagsHasBeenSet = true; m_sourceServerTags.emplace(std::move(key), std::move(value)); return *this; }
    inline VcenterClient& AddSourceServerTags(const char* key, Aws::String&& value) { m_sourceServerTagsHasBeenSet = true; m_sourceServerTags.emplace(key, std::move(value)); return *this; }
    inline VcenterClient& AddSourceServerTags(Aws::String&& key, const char* value) { m_sourceServerTagsHasBeenSet = true; m_sourceServerTags.emplace(std::move(key), value); return *this; }
    inline VcenterClient& AddSourceServerTags(const char* key, const char* value) { m_sourceServerTagsHasBeenSet = true; m_sourceServerTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags for vCenter client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline VcenterClient& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline VcenterClient& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline VcenterClient& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline VcenterClient& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline VcenterClient& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline VcenterClient& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline VcenterClient& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline VcenterClient& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline VcenterClient& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>ID of vCenter client.</p>
     */
    inline const Aws::String& GetVcenterClientID() const{ return m_vcenterClientID; }
    inline bool VcenterClientIDHasBeenSet() const { return m_vcenterClientIDHasBeenSet; }
    inline void SetVcenterClientID(const Aws::String& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = value; }
    inline void SetVcenterClientID(Aws::String&& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = std::move(value); }
    inline void SetVcenterClientID(const char* value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID.assign(value); }
    inline VcenterClient& WithVcenterClientID(const Aws::String& value) { SetVcenterClientID(value); return *this;}
    inline VcenterClient& WithVcenterClientID(Aws::String&& value) { SetVcenterClientID(std::move(value)); return *this;}
    inline VcenterClient& WithVcenterClientID(const char* value) { SetVcenterClientID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Vcenter UUID of vCenter client.</p>
     */
    inline const Aws::String& GetVcenterUUID() const{ return m_vcenterUUID; }
    inline bool VcenterUUIDHasBeenSet() const { return m_vcenterUUIDHasBeenSet; }
    inline void SetVcenterUUID(const Aws::String& value) { m_vcenterUUIDHasBeenSet = true; m_vcenterUUID = value; }
    inline void SetVcenterUUID(Aws::String&& value) { m_vcenterUUIDHasBeenSet = true; m_vcenterUUID = std::move(value); }
    inline void SetVcenterUUID(const char* value) { m_vcenterUUIDHasBeenSet = true; m_vcenterUUID.assign(value); }
    inline VcenterClient& WithVcenterUUID(const Aws::String& value) { SetVcenterUUID(value); return *this;}
    inline VcenterClient& WithVcenterUUID(Aws::String&& value) { SetVcenterUUID(std::move(value)); return *this;}
    inline VcenterClient& WithVcenterUUID(const char* value) { SetVcenterUUID(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_datacenterName;
    bool m_datacenterNameHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_lastSeenDatetime;
    bool m_lastSeenDatetimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_sourceServerTags;
    bool m_sourceServerTagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vcenterClientID;
    bool m_vcenterClientIDHasBeenSet = false;

    Aws::String m_vcenterUUID;
    bool m_vcenterUUIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
