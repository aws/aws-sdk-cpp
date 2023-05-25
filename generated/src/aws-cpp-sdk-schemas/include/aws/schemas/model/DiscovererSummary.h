/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/schemas/model/DiscovererState.h>
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
namespace Schemas
{
namespace Model
{

  class DiscovererSummary
  {
  public:
    AWS_SCHEMAS_API DiscovererSummary();
    AWS_SCHEMAS_API DiscovererSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API DiscovererSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SCHEMAS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererArn() const{ return m_discovererArn; }

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline bool DiscovererArnHasBeenSet() const { return m_discovererArnHasBeenSet; }

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline void SetDiscovererArn(const Aws::String& value) { m_discovererArnHasBeenSet = true; m_discovererArn = value; }

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline void SetDiscovererArn(Aws::String&& value) { m_discovererArnHasBeenSet = true; m_discovererArn = std::move(value); }

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline void SetDiscovererArn(const char* value) { m_discovererArnHasBeenSet = true; m_discovererArn.assign(value); }

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline DiscovererSummary& WithDiscovererArn(const Aws::String& value) { SetDiscovererArn(value); return *this;}

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline DiscovererSummary& WithDiscovererArn(Aws::String&& value) { SetDiscovererArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the discoverer.</p>
     */
    inline DiscovererSummary& WithDiscovererArn(const char* value) { SetDiscovererArn(value); return *this;}


    /**
     * <p>The ID of the discoverer.</p>
     */
    inline const Aws::String& GetDiscovererId() const{ return m_discovererId; }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline bool DiscovererIdHasBeenSet() const { return m_discovererIdHasBeenSet; }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(const Aws::String& value) { m_discovererIdHasBeenSet = true; m_discovererId = value; }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(Aws::String&& value) { m_discovererIdHasBeenSet = true; m_discovererId = std::move(value); }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline void SetDiscovererId(const char* value) { m_discovererIdHasBeenSet = true; m_discovererId.assign(value); }

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline DiscovererSummary& WithDiscovererId(const Aws::String& value) { SetDiscovererId(value); return *this;}

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline DiscovererSummary& WithDiscovererId(Aws::String&& value) { SetDiscovererId(std::move(value)); return *this;}

    /**
     * <p>The ID of the discoverer.</p>
     */
    inline DiscovererSummary& WithDiscovererId(const char* value) { SetDiscovererId(value); return *this;}


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
    inline DiscovererSummary& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline DiscovererSummary& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event bus.</p>
     */
    inline DiscovererSummary& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The state of the discoverer.</p>
     */
    inline const DiscovererState& GetState() const{ return m_state; }

    /**
     * <p>The state of the discoverer.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the discoverer.</p>
     */
    inline void SetState(const DiscovererState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the discoverer.</p>
     */
    inline void SetState(DiscovererState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the discoverer.</p>
     */
    inline DiscovererSummary& WithState(const DiscovererState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the discoverer.</p>
     */
    inline DiscovererSummary& WithState(DiscovererState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The Status if the discoverer will discover schemas from events sent from
     * another account.</p>
     */
    inline bool GetCrossAccount() const{ return m_crossAccount; }

    /**
     * <p>The Status if the discoverer will discover schemas from events sent from
     * another account.</p>
     */
    inline bool CrossAccountHasBeenSet() const { return m_crossAccountHasBeenSet; }

    /**
     * <p>The Status if the discoverer will discover schemas from events sent from
     * another account.</p>
     */
    inline void SetCrossAccount(bool value) { m_crossAccountHasBeenSet = true; m_crossAccount = value; }

    /**
     * <p>The Status if the discoverer will discover schemas from events sent from
     * another account.</p>
     */
    inline DiscovererSummary& WithCrossAccount(bool value) { SetCrossAccount(value); return *this;}


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
    inline DiscovererSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DiscovererSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DiscovererSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DiscovererSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DiscovererSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DiscovererSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DiscovererSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DiscovererSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags associated with the resource.</p>
     */
    inline DiscovererSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_discovererArn;
    bool m_discovererArnHasBeenSet = false;

    Aws::String m_discovererId;
    bool m_discovererIdHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    DiscovererState m_state;
    bool m_stateHasBeenSet = false;

    bool m_crossAccount;
    bool m_crossAccountHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
