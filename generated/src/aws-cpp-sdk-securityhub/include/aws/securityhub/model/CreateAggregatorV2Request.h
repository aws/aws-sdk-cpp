/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class CreateAggregatorV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API CreateAggregatorV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAggregatorV2"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Determines how Regions are linked to an Aggregator V2.</p>
     */
    inline const Aws::String& GetRegionLinkingMode() const { return m_regionLinkingMode; }
    inline bool RegionLinkingModeHasBeenSet() const { return m_regionLinkingModeHasBeenSet; }
    template<typename RegionLinkingModeT = Aws::String>
    void SetRegionLinkingMode(RegionLinkingModeT&& value) { m_regionLinkingModeHasBeenSet = true; m_regionLinkingMode = std::forward<RegionLinkingModeT>(value); }
    template<typename RegionLinkingModeT = Aws::String>
    CreateAggregatorV2Request& WithRegionLinkingMode(RegionLinkingModeT&& value) { SetRegionLinkingMode(std::forward<RegionLinkingModeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Regions that are linked to the aggregation Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedRegions() const { return m_linkedRegions; }
    inline bool LinkedRegionsHasBeenSet() const { return m_linkedRegionsHasBeenSet; }
    template<typename LinkedRegionsT = Aws::Vector<Aws::String>>
    void SetLinkedRegions(LinkedRegionsT&& value) { m_linkedRegionsHasBeenSet = true; m_linkedRegions = std::forward<LinkedRegionsT>(value); }
    template<typename LinkedRegionsT = Aws::Vector<Aws::String>>
    CreateAggregatorV2Request& WithLinkedRegions(LinkedRegionsT&& value) { SetLinkedRegions(std::forward<LinkedRegionsT>(value)); return *this;}
    template<typename LinkedRegionsT = Aws::String>
    CreateAggregatorV2Request& AddLinkedRegions(LinkedRegionsT&& value) { m_linkedRegionsHasBeenSet = true; m_linkedRegions.emplace_back(std::forward<LinkedRegionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to be applied to the AggregatorV2.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateAggregatorV2Request& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAggregatorV2Request& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique identifier used to ensure idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateAggregatorV2Request& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_regionLinkingMode;
    bool m_regionLinkingModeHasBeenSet = false;

    Aws::Vector<Aws::String> m_linkedRegions;
    bool m_linkedRegionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
