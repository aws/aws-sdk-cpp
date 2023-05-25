/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/schemas/SchemasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Schemas
{
namespace Model
{

  /**
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/schemas-2019-12-02/CreateDiscovererRequest">AWS
   * API Reference</a></p>
   */
  class CreateDiscovererRequest : public SchemasRequest
  {
  public:
    AWS_SCHEMAS_API CreateDiscovererRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDiscoverer"; }

    AWS_SCHEMAS_API Aws::String SerializePayload() const override;


    /**
     * <p>A description for the discoverer.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the discoverer.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the discoverer.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the discoverer.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the discoverer.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the discoverer.</p>
     */
    inline CreateDiscovererRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the discoverer.</p>
     */
    inline CreateDiscovererRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the discoverer.</p>
     */
    inline CreateDiscovererRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the event bus.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline CreateDiscovererRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline CreateDiscovererRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline CreateDiscovererRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>Support discovery of schemas in events sent to the bus from another account.
     * (default: true).</p>
     */
    inline bool GetCrossAccount() const{ return m_crossAccount; }

    /**
     * <p>Support discovery of schemas in events sent to the bus from another account.
     * (default: true).</p>
     */
    inline bool CrossAccountHasBeenSet() const { return m_crossAccountHasBeenSet; }

    /**
     * <p>Support discovery of schemas in events sent to the bus from another account.
     * (default: true).</p>
     */
    inline void SetCrossAccount(bool value) { m_crossAccountHasBeenSet = true; m_crossAccount = value; }

    /**
     * <p>Support discovery of schemas in events sent to the bus from another account.
     * (default: true).</p>
     */
    inline CreateDiscovererRequest& WithCrossAccount(bool value) { SetCrossAccount(value); return *this;}


    /**
     * <p>Tags associated with the resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline CreateDiscovererRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline CreateDiscovererRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline CreateDiscovererRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline CreateDiscovererRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline CreateDiscovererRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline CreateDiscovererRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline CreateDiscovererRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline CreateDiscovererRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline CreateDiscovererRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    bool m_crossAccount;
    bool m_crossAccountHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
