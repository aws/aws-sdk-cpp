/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/meteringmarketplace/model/Tag.h>
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
namespace MarketplaceMetering
{
namespace Model
{

  /**
   * <p>Usage allocations allow you to split usage into buckets by tags.</p> <p>Each
   * <code>UsageAllocation</code> indicates the usage quantity for a specific set of
   * tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/UsageAllocation">AWS
   * API Reference</a></p>
   */
  class UsageAllocation
  {
  public:
    AWS_MARKETPLACEMETERING_API UsageAllocation() = default;
    AWS_MARKETPLACEMETERING_API UsageAllocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API UsageAllocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MARKETPLACEMETERING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total quantity allocated to this bucket of usage.</p>
     */
    inline int GetAllocatedUsageQuantity() const { return m_allocatedUsageQuantity; }
    inline bool AllocatedUsageQuantityHasBeenSet() const { return m_allocatedUsageQuantityHasBeenSet; }
    inline void SetAllocatedUsageQuantity(int value) { m_allocatedUsageQuantityHasBeenSet = true; m_allocatedUsageQuantity = value; }
    inline UsageAllocation& WithAllocatedUsageQuantity(int value) { SetAllocatedUsageQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of tags that define the bucket of usage. For the bucket of items with
     * no tags, this parameter can be left out.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    UsageAllocation& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    UsageAllocation& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    int m_allocatedUsageQuantity{0};
    bool m_allocatedUsageQuantityHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
