/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resourcegroupstaggingapi/model/TargetIdType.h>
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
namespace ResourceGroupsTaggingAPI
{
namespace Model
{

  /**
   * <p>A count of noncompliant resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resourcegroupstaggingapi-2017-01-26/Summary">AWS
   * API Reference</a></p>
   */
  class Summary
  {
  public:
    AWS_RESOURCEGROUPSTAGGINGAPI_API Summary() = default;
    AWS_RESOURCEGROUPSTAGGINGAPI_API Summary(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API Summary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp that shows when this summary was generated in this Region. </p>
     */
    inline const Aws::String& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::String>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::String>
    Summary& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account identifier or the root identifier of the organization. If you
     * don't know the root ID, you can call the Organizations <a
     * href="https://docs.aws.amazon.com/organizations/latest/APIReference/API_ListRoots.html">ListRoots</a>
     * API.</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    Summary& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the target is an account, an OU, or the organization root.</p>
     */
    inline TargetIdType GetTargetIdType() const { return m_targetIdType; }
    inline bool TargetIdTypeHasBeenSet() const { return m_targetIdTypeHasBeenSet; }
    inline void SetTargetIdType(TargetIdType value) { m_targetIdTypeHasBeenSet = true; m_targetIdType = value; }
    inline Summary& WithTargetIdType(TargetIdType value) { SetTargetIdType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that the summary applies to.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Summary& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services resource type.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    Summary& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of noncompliant resources.</p>
     */
    inline long long GetNonCompliantResources() const { return m_nonCompliantResources; }
    inline bool NonCompliantResourcesHasBeenSet() const { return m_nonCompliantResourcesHasBeenSet; }
    inline void SetNonCompliantResources(long long value) { m_nonCompliantResourcesHasBeenSet = true; m_nonCompliantResources = value; }
    inline Summary& WithNonCompliantResources(long long value) { SetNonCompliantResources(value); return *this;}
    ///@}
  private:

    Aws::String m_lastUpdated;
    bool m_lastUpdatedHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    TargetIdType m_targetIdType{TargetIdType::NOT_SET};
    bool m_targetIdTypeHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    long long m_nonCompliantResources{0};
    bool m_nonCompliantResourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroupsTaggingAPI
} // namespace Aws
