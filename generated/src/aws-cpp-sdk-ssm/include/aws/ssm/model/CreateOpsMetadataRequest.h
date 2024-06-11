/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/MetadataValue.h>
#include <aws/ssm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class CreateOpsMetadataRequest : public SSMRequest
  {
  public:
    AWS_SSM_API CreateOpsMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOpsMetadata"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A resource ID for a new Application Manager application.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline CreateOpsMetadataRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline CreateOpsMetadataRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline CreateOpsMetadataRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata for a new Application Manager application. </p>
     */
    inline const Aws::Map<Aws::String, MetadataValue>& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::Map<Aws::String, MetadataValue>& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::Map<Aws::String, MetadataValue>&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline CreateOpsMetadataRequest& WithMetadata(const Aws::Map<Aws::String, MetadataValue>& value) { SetMetadata(value); return *this;}
    inline CreateOpsMetadataRequest& WithMetadata(Aws::Map<Aws::String, MetadataValue>&& value) { SetMetadata(std::move(value)); return *this;}
    inline CreateOpsMetadataRequest& AddMetadata(const Aws::String& key, const MetadataValue& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    inline CreateOpsMetadataRequest& AddMetadata(Aws::String&& key, const MetadataValue& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), value); return *this; }
    inline CreateOpsMetadataRequest& AddMetadata(const Aws::String& key, MetadataValue&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline CreateOpsMetadataRequest& AddMetadata(Aws::String&& key, MetadataValue&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateOpsMetadataRequest& AddMetadata(const char* key, MetadataValue&& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, std::move(value)); return *this; }
    inline CreateOpsMetadataRequest& AddMetadata(const char* key, const MetadataValue& value) { m_metadataHasBeenSet = true; m_metadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Optional metadata that you assign to a resource. You can specify a maximum of
     * five tags for an OpsMetadata object. Tags enable you to categorize a resource in
     * different ways, such as by purpose, owner, or environment. For example, you
     * might want to tag an OpsMetadata object to identify an environment or target
     * Amazon Web Services Region. In this case, you could specify the following
     * key-value pairs:</p> <ul> <li> <p> <code>Key=Environment,Value=Production</code>
     * </p> </li> <li> <p> <code>Key=Region,Value=us-east-2</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateOpsMetadataRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateOpsMetadataRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateOpsMetadataRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateOpsMetadataRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::Map<Aws::String, MetadataValue> m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
