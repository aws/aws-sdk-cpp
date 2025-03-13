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
    AWS_MGN_API VcenterClient() = default;
    AWS_MGN_API VcenterClient(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API VcenterClient& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Arn of vCenter client.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    VcenterClient& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Datacenter name of vCenter client.</p>
     */
    inline const Aws::String& GetDatacenterName() const { return m_datacenterName; }
    inline bool DatacenterNameHasBeenSet() const { return m_datacenterNameHasBeenSet; }
    template<typename DatacenterNameT = Aws::String>
    void SetDatacenterName(DatacenterNameT&& value) { m_datacenterNameHasBeenSet = true; m_datacenterName = std::forward<DatacenterNameT>(value); }
    template<typename DatacenterNameT = Aws::String>
    VcenterClient& WithDatacenterName(DatacenterNameT&& value) { SetDatacenterName(std::forward<DatacenterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Hostname of vCenter client .</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    VcenterClient& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last seen time of vCenter client.</p>
     */
    inline const Aws::String& GetLastSeenDatetime() const { return m_lastSeenDatetime; }
    inline bool LastSeenDatetimeHasBeenSet() const { return m_lastSeenDatetimeHasBeenSet; }
    template<typename LastSeenDatetimeT = Aws::String>
    void SetLastSeenDatetime(LastSeenDatetimeT&& value) { m_lastSeenDatetimeHasBeenSet = true; m_lastSeenDatetime = std::forward<LastSeenDatetimeT>(value); }
    template<typename LastSeenDatetimeT = Aws::String>
    VcenterClient& WithLastSeenDatetime(LastSeenDatetimeT&& value) { SetLastSeenDatetime(std::forward<LastSeenDatetimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for Source Server of vCenter client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetSourceServerTags() const { return m_sourceServerTags; }
    inline bool SourceServerTagsHasBeenSet() const { return m_sourceServerTagsHasBeenSet; }
    template<typename SourceServerTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetSourceServerTags(SourceServerTagsT&& value) { m_sourceServerTagsHasBeenSet = true; m_sourceServerTags = std::forward<SourceServerTagsT>(value); }
    template<typename SourceServerTagsT = Aws::Map<Aws::String, Aws::String>>
    VcenterClient& WithSourceServerTags(SourceServerTagsT&& value) { SetSourceServerTags(std::forward<SourceServerTagsT>(value)); return *this;}
    template<typename SourceServerTagsKeyT = Aws::String, typename SourceServerTagsValueT = Aws::String>
    VcenterClient& AddSourceServerTags(SourceServerTagsKeyT&& key, SourceServerTagsValueT&& value) {
      m_sourceServerTagsHasBeenSet = true; m_sourceServerTags.emplace(std::forward<SourceServerTagsKeyT>(key), std::forward<SourceServerTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Tags for vCenter client.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    VcenterClient& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    VcenterClient& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>ID of vCenter client.</p>
     */
    inline const Aws::String& GetVcenterClientID() const { return m_vcenterClientID; }
    inline bool VcenterClientIDHasBeenSet() const { return m_vcenterClientIDHasBeenSet; }
    template<typename VcenterClientIDT = Aws::String>
    void SetVcenterClientID(VcenterClientIDT&& value) { m_vcenterClientIDHasBeenSet = true; m_vcenterClientID = std::forward<VcenterClientIDT>(value); }
    template<typename VcenterClientIDT = Aws::String>
    VcenterClient& WithVcenterClientID(VcenterClientIDT&& value) { SetVcenterClientID(std::forward<VcenterClientIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Vcenter UUID of vCenter client.</p>
     */
    inline const Aws::String& GetVcenterUUID() const { return m_vcenterUUID; }
    inline bool VcenterUUIDHasBeenSet() const { return m_vcenterUUIDHasBeenSet; }
    template<typename VcenterUUIDT = Aws::String>
    void SetVcenterUUID(VcenterUUIDT&& value) { m_vcenterUUIDHasBeenSet = true; m_vcenterUUID = std::forward<VcenterUUIDT>(value); }
    template<typename VcenterUUIDT = Aws::String>
    VcenterClient& WithVcenterUUID(VcenterUUIDT&& value) { SetVcenterUUID(std::forward<VcenterUUIDT>(value)); return *this;}
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
