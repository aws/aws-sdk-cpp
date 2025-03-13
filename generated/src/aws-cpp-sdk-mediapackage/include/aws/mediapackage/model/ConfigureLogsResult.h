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
  class ConfigureLogsResult
  {
  public:
    AWS_MEDIAPACKAGE_API ConfigureLogsResult() = default;
    AWS_MEDIAPACKAGE_API ConfigureLogsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGE_API ConfigureLogsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * The Amazon Resource Name (ARN) assigned to the Channel.
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ConfigureLogsResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The date and time the Channel was created.
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    ConfigureLogsResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A short text description of the Channel.
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ConfigureLogsResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EgressAccessLogs& GetEgressAccessLogs() const { return m_egressAccessLogs; }
    template<typename EgressAccessLogsT = EgressAccessLogs>
    void SetEgressAccessLogs(EgressAccessLogsT&& value) { m_egressAccessLogsHasBeenSet = true; m_egressAccessLogs = std::forward<EgressAccessLogsT>(value); }
    template<typename EgressAccessLogsT = EgressAccessLogs>
    ConfigureLogsResult& WithEgressAccessLogs(EgressAccessLogsT&& value) { SetEgressAccessLogs(std::forward<EgressAccessLogsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const HlsIngest& GetHlsIngest() const { return m_hlsIngest; }
    template<typename HlsIngestT = HlsIngest>
    void SetHlsIngest(HlsIngestT&& value) { m_hlsIngestHasBeenSet = true; m_hlsIngest = std::forward<HlsIngestT>(value); }
    template<typename HlsIngestT = HlsIngest>
    ConfigureLogsResult& WithHlsIngest(HlsIngestT&& value) { SetHlsIngest(std::forward<HlsIngestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Channel.
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ConfigureLogsResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const IngressAccessLogs& GetIngressAccessLogs() const { return m_ingressAccessLogs; }
    template<typename IngressAccessLogsT = IngressAccessLogs>
    void SetIngressAccessLogs(IngressAccessLogsT&& value) { m_ingressAccessLogsHasBeenSet = true; m_ingressAccessLogs = std::forward<IngressAccessLogsT>(value); }
    template<typename IngressAccessLogsT = IngressAccessLogs>
    ConfigureLogsResult& WithIngressAccessLogs(IngressAccessLogsT&& value) { SetIngressAccessLogs(std::forward<IngressAccessLogsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ConfigureLogsResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ConfigureLogsResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ConfigureLogsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackage
} // namespace Aws
