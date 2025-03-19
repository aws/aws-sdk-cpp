/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/oam/model/LinkConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace OAM
{
namespace Model
{
  class UpdateLinkResult
  {
  public:
    AWS_OAM_API UpdateLinkResult() = default;
    AWS_OAM_API UpdateLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OAM_API UpdateLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the link that you have updated.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateLinkResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The random ID string that Amazon Web Services generated as part of the sink
     * ARN.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateLinkResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label assigned to this link, with the variables resolved to their actual
     * values.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    UpdateLinkResult& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exact label template that was specified when the link was created, with
     * the template variables not resolved.</p>
     */
    inline const Aws::String& GetLabelTemplate() const { return m_labelTemplate; }
    template<typename LabelTemplateT = Aws::String>
    void SetLabelTemplate(LabelTemplateT&& value) { m_labelTemplateHasBeenSet = true; m_labelTemplate = std::forward<LabelTemplateT>(value); }
    template<typename LabelTemplateT = Aws::String>
    UpdateLinkResult& WithLabelTemplate(LabelTemplateT&& value) { SetLabelTemplate(std::forward<LabelTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure includes filters that specify which metric namespaces and
     * which log groups are shared from the source account to the monitoring
     * account.</p>
     */
    inline const LinkConfiguration& GetLinkConfiguration() const { return m_linkConfiguration; }
    template<typename LinkConfigurationT = LinkConfiguration>
    void SetLinkConfiguration(LinkConfigurationT&& value) { m_linkConfigurationHasBeenSet = true; m_linkConfiguration = std::forward<LinkConfigurationT>(value); }
    template<typename LinkConfigurationT = LinkConfiguration>
    UpdateLinkResult& WithLinkConfiguration(LinkConfigurationT&& value) { SetLinkConfiguration(std::forward<LinkConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource types now supported by this link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const { return m_resourceTypes; }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    void SetResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::forward<ResourceTypesT>(value); }
    template<typename ResourceTypesT = Aws::Vector<Aws::String>>
    UpdateLinkResult& WithResourceTypes(ResourceTypesT&& value) { SetResourceTypes(std::forward<ResourceTypesT>(value)); return *this;}
    template<typename ResourceTypesT = Aws::String>
    UpdateLinkResult& AddResourceTypes(ResourceTypesT&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.emplace_back(std::forward<ResourceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the sink that is used for this link.</p>
     */
    inline const Aws::String& GetSinkArn() const { return m_sinkArn; }
    template<typename SinkArnT = Aws::String>
    void SetSinkArn(SinkArnT&& value) { m_sinkArnHasBeenSet = true; m_sinkArn = std::forward<SinkArnT>(value); }
    template<typename SinkArnT = Aws::String>
    UpdateLinkResult& WithSinkArn(SinkArnT&& value) { SetSinkArn(std::forward<SinkArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the link.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateLinkResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    UpdateLinkResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateLinkResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_labelTemplate;
    bool m_labelTemplateHasBeenSet = false;

    LinkConfiguration m_linkConfiguration;
    bool m_linkConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceTypes;
    bool m_resourceTypesHasBeenSet = false;

    Aws::String m_sinkArn;
    bool m_sinkArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
