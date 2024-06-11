﻿/**
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
  class CreateLinkResult
  {
  public:
    AWS_OAM_API CreateLinkResult();
    AWS_OAM_API CreateLinkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OAM_API CreateLinkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the link that is newly created.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateLinkResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateLinkResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateLinkResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The random ID string that Amazon Web Services generated as part of the link
     * ARN.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateLinkResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateLinkResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateLinkResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label that you assigned to this link. If the <code>labelTemplate</code>
     * includes variables, this field displays the variables resolved to their actual
     * values.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline void SetLabel(const Aws::String& value) { m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_label.assign(value); }
    inline CreateLinkResult& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline CreateLinkResult& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline CreateLinkResult& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exact label template that you specified, with the variables not
     * resolved.</p>
     */
    inline const Aws::String& GetLabelTemplate() const{ return m_labelTemplate; }
    inline void SetLabelTemplate(const Aws::String& value) { m_labelTemplate = value; }
    inline void SetLabelTemplate(Aws::String&& value) { m_labelTemplate = std::move(value); }
    inline void SetLabelTemplate(const char* value) { m_labelTemplate.assign(value); }
    inline CreateLinkResult& WithLabelTemplate(const Aws::String& value) { SetLabelTemplate(value); return *this;}
    inline CreateLinkResult& WithLabelTemplate(Aws::String&& value) { SetLabelTemplate(std::move(value)); return *this;}
    inline CreateLinkResult& WithLabelTemplate(const char* value) { SetLabelTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure includes filters that specify which metric namespaces and
     * which log groups are shared from the source account to the monitoring
     * account.</p>
     */
    inline const LinkConfiguration& GetLinkConfiguration() const{ return m_linkConfiguration; }
    inline void SetLinkConfiguration(const LinkConfiguration& value) { m_linkConfiguration = value; }
    inline void SetLinkConfiguration(LinkConfiguration&& value) { m_linkConfiguration = std::move(value); }
    inline CreateLinkResult& WithLinkConfiguration(const LinkConfiguration& value) { SetLinkConfiguration(value); return *this;}
    inline CreateLinkResult& WithLinkConfiguration(LinkConfiguration&& value) { SetLinkConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource types supported by this link.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceTypes() const{ return m_resourceTypes; }
    inline void SetResourceTypes(const Aws::Vector<Aws::String>& value) { m_resourceTypes = value; }
    inline void SetResourceTypes(Aws::Vector<Aws::String>&& value) { m_resourceTypes = std::move(value); }
    inline CreateLinkResult& WithResourceTypes(const Aws::Vector<Aws::String>& value) { SetResourceTypes(value); return *this;}
    inline CreateLinkResult& WithResourceTypes(Aws::Vector<Aws::String>&& value) { SetResourceTypes(std::move(value)); return *this;}
    inline CreateLinkResult& AddResourceTypes(const Aws::String& value) { m_resourceTypes.push_back(value); return *this; }
    inline CreateLinkResult& AddResourceTypes(Aws::String&& value) { m_resourceTypes.push_back(std::move(value)); return *this; }
    inline CreateLinkResult& AddResourceTypes(const char* value) { m_resourceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the sink that is used for this link.</p>
     */
    inline const Aws::String& GetSinkArn() const{ return m_sinkArn; }
    inline void SetSinkArn(const Aws::String& value) { m_sinkArn = value; }
    inline void SetSinkArn(Aws::String&& value) { m_sinkArn = std::move(value); }
    inline void SetSinkArn(const char* value) { m_sinkArn.assign(value); }
    inline CreateLinkResult& WithSinkArn(const Aws::String& value) { SetSinkArn(value); return *this;}
    inline CreateLinkResult& WithSinkArn(Aws::String&& value) { SetSinkArn(std::move(value)); return *this;}
    inline CreateLinkResult& WithSinkArn(const char* value) { SetSinkArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the link.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateLinkResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateLinkResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLinkResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateLinkResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateLinkResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateLinkResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateLinkResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateLinkResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateLinkResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLinkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLinkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLinkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_id;

    Aws::String m_label;

    Aws::String m_labelTemplate;

    LinkConfiguration m_linkConfiguration;

    Aws::Vector<Aws::String> m_resourceTypes;

    Aws::String m_sinkArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
