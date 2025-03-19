/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage/model/EgressAccessLogs.h>
#include <aws/mediapackage/model/HlsIngest.h>
#include <aws/mediapackage/model/IngressAccessLogs.h>
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
namespace MediaPackage
{
namespace Model
{

  /**
   * A Channel resource configuration.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-2017-10-12/Channel">AWS
   * API Reference</a></p>
   */
  class Channel
  {
  public:
    AWS_MEDIAPACKAGE_API Channel() = default;
    AWS_MEDIAPACKAGE_API Channel(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Channel& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The date and time the Channel was created.
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    Channel& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A short text description of the Channel.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Channel& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EgressAccessLogs& GetEgressAccessLogs() const { return m_egressAccessLogs; }
    inline bool EgressAccessLogsHasBeenSet() const { return m_egressAccessLogsHasBeenSet; }
    template<typename EgressAccessLogsT = EgressAccessLogs>
    void SetEgressAccessLogs(EgressAccessLogsT&& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = std::forward<EgressAccessLogsT>(value); }
    template<typename EgressAccessLogsT = EgressAccessLogs>
    Channel& WithEgressAccessLogs(EgressAccessLogsT&& value) { SetEgressAccessLogs(std::forward<EgressAccessLogsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsIngest& GetHlsIngest() const { return m_hlsIngest; }
    inline bool HlsIngestHasBeenSet() const { return m_hlsIngestHasBeenSet; }
    template<typename HlsIngestT = HlsIngest>
    void SetHlsIngest(HlsIngestT&& value) { m_hlsIngestHasBeenSet = true; m_hlsIngest = std::forward<HlsIngestT>(value); }
    template<typename HlsIngestT = HlsIngest>
    Channel& WithHlsIngest(HlsIngestT&& value) { SetHlsIngest(std::forward<HlsIngestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Channel.
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Channel& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IngressAccessLogs& GetIngressAccessLogs() const { return m_ingressAccessLogs; }
    inline bool IngressAccessLogsHasBeenSet() const { return m_ingressAccessLogsHasBeenSet; }
    template<typename IngressAccessLogsT = IngressAccessLogs>
    void SetIngressAccessLogs(IngressAccessLogsT&& value) { m_ingressAccessLogsHasBeenSet = true; m_ingressAccessLogs = std::forward<IngressAccessLogsT>(value); }
    template<typename IngressAccessLogsT = IngressAccessLogs>
    Channel& WithIngressAccessLogs(IngressAccessLogsT&& value) { SetIngressAccessLogs(std::forward<IngressAccessLogsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    Channel& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    Channel& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    EgressAccessLogs m_egressAccessLogs;
    bool m_egressAccessLogsHasBeenSet = false;

    HlsIngest m_hlsIngest;
    bool m_hlsIngestHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    IngressAccessLogs m_ingressAccessLogs;
    bool m_ingressAccessLogsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
