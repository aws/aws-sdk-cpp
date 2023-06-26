/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-incidents/model/RegionMapInputValue.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class CreateReplicationSetRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API CreateReplicationSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateReplicationSet"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline CreateReplicationSetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline CreateReplicationSetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A token that ensures that the operation is called only once with the
     * specified details.</p>
     */
    inline CreateReplicationSetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline const Aws::Map<Aws::String, RegionMapInputValue>& GetRegions() const{ return m_regions; }

    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline void SetRegions(const Aws::Map<Aws::String, RegionMapInputValue>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline void SetRegions(Aws::Map<Aws::String, RegionMapInputValue>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline CreateReplicationSetRequest& WithRegions(const Aws::Map<Aws::String, RegionMapInputValue>& value) { SetRegions(value); return *this;}

    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline CreateReplicationSetRequest& WithRegions(Aws::Map<Aws::String, RegionMapInputValue>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline CreateReplicationSetRequest& AddRegions(const Aws::String& key, const RegionMapInputValue& value) { m_regionsHasBeenSet = true; m_regions.emplace(key, value); return *this; }

    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline CreateReplicationSetRequest& AddRegions(Aws::String&& key, const RegionMapInputValue& value) { m_regionsHasBeenSet = true; m_regions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline CreateReplicationSetRequest& AddRegions(const Aws::String& key, RegionMapInputValue&& value) { m_regionsHasBeenSet = true; m_regions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline CreateReplicationSetRequest& AddRegions(Aws::String&& key, RegionMapInputValue&& value) { m_regionsHasBeenSet = true; m_regions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline CreateReplicationSetRequest& AddRegions(const char* key, RegionMapInputValue&& value) { m_regionsHasBeenSet = true; m_regions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The Regions that Incident Manager replicates your data to. You can have up to
     * three Regions in your replication set.</p>
     */
    inline CreateReplicationSetRequest& AddRegions(const char* key, const RegionMapInputValue& value) { m_regionsHasBeenSet = true; m_regions.emplace(key, value); return *this; }


    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline CreateReplicationSetRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline CreateReplicationSetRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline CreateReplicationSetRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline CreateReplicationSetRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline CreateReplicationSetRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline CreateReplicationSetRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline CreateReplicationSetRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline CreateReplicationSetRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A list of tags to add to the replication set.</p>
     */
    inline CreateReplicationSetRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, RegionMapInputValue> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
