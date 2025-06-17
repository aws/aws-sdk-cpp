/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ResourceCategory.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Document.h>
#include <aws/securityhub/model/ResourceFindingsSummary.h>
#include <aws/securityhub/model/ResourceTag.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides comprehensive details about an Amazon Web Services resource and its
   * associated security findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/ResourceResult">AWS
   * API Reference</a></p>
   */
  class ResourceResult
  {
  public:
    AWS_SECURITYHUB_API ResourceResult() = default;
    AWS_SECURITYHUB_API ResourceResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API ResourceResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the ARN that uniquely identifies a resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    ResourceResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for a resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    ResourceResult& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account that owns the resource.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ResourceResult& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the resource is located.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    ResourceResult& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The grouping where the resource belongs.</p>
     */
    inline ResourceCategory GetResourceCategory() const { return m_resourceCategory; }
    inline bool ResourceCategoryHasBeenSet() const { return m_resourceCategoryHasBeenSet; }
    inline void SetResourceCategory(ResourceCategory value) { m_resourceCategoryHasBeenSet = true; m_resourceCategory = value; }
    inline ResourceResult& WithResourceCategory(ResourceCategory value) { SetResourceCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    ResourceResult& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    ResourceResult& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the resource was created.</p>
     */
    inline const Aws::String& GetResourceCreationTimeDt() const { return m_resourceCreationTimeDt; }
    inline bool ResourceCreationTimeDtHasBeenSet() const { return m_resourceCreationTimeDtHasBeenSet; }
    template<typename ResourceCreationTimeDtT = Aws::String>
    void SetResourceCreationTimeDt(ResourceCreationTimeDtT&& value) { m_resourceCreationTimeDtHasBeenSet = true; m_resourceCreationTimeDt = std::forward<ResourceCreationTimeDtT>(value); }
    template<typename ResourceCreationTimeDtT = Aws::String>
    ResourceResult& WithResourceCreationTimeDt(ResourceCreationTimeDtT&& value) { SetResourceCreationTimeDt(std::forward<ResourceCreationTimeDtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when information about the resource was captured.</p>
     */
    inline const Aws::String& GetResourceDetailCaptureTimeDt() const { return m_resourceDetailCaptureTimeDt; }
    inline bool ResourceDetailCaptureTimeDtHasBeenSet() const { return m_resourceDetailCaptureTimeDtHasBeenSet; }
    template<typename ResourceDetailCaptureTimeDtT = Aws::String>
    void SetResourceDetailCaptureTimeDt(ResourceDetailCaptureTimeDtT&& value) { m_resourceDetailCaptureTimeDtHasBeenSet = true; m_resourceDetailCaptureTimeDt = std::forward<ResourceDetailCaptureTimeDtT>(value); }
    template<typename ResourceDetailCaptureTimeDtT = Aws::String>
    ResourceResult& WithResourceDetailCaptureTimeDt(ResourceDetailCaptureTimeDtT&& value) { SetResourceDetailCaptureTimeDt(std::forward<ResourceDetailCaptureTimeDtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An aggregated view of security findings associated with a resource.</p>
     */
    inline const Aws::Vector<ResourceFindingsSummary>& GetFindingsSummary() const { return m_findingsSummary; }
    inline bool FindingsSummaryHasBeenSet() const { return m_findingsSummaryHasBeenSet; }
    template<typename FindingsSummaryT = Aws::Vector<ResourceFindingsSummary>>
    void SetFindingsSummary(FindingsSummaryT&& value) { m_findingsSummaryHasBeenSet = true; m_findingsSummary = std::forward<FindingsSummaryT>(value); }
    template<typename FindingsSummaryT = Aws::Vector<ResourceFindingsSummary>>
    ResourceResult& WithFindingsSummary(FindingsSummaryT&& value) { SetFindingsSummary(std::forward<FindingsSummaryT>(value)); return *this;}
    template<typename FindingsSummaryT = ResourceFindingsSummary>
    ResourceResult& AddFindingsSummary(FindingsSummaryT&& value) { m_findingsSummaryHasBeenSet = true; m_findingsSummary.emplace_back(std::forward<FindingsSummaryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The key-value pairs associated with a resource.</p>
     */
    inline const Aws::Vector<ResourceTag>& GetResourceTags() const { return m_resourceTags; }
    inline bool ResourceTagsHasBeenSet() const { return m_resourceTagsHasBeenSet; }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    void SetResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags = std::forward<ResourceTagsT>(value); }
    template<typename ResourceTagsT = Aws::Vector<ResourceTag>>
    ResourceResult& WithResourceTags(ResourceTagsT&& value) { SetResourceTags(std::forward<ResourceTagsT>(value)); return *this;}
    template<typename ResourceTagsT = ResourceTag>
    ResourceResult& AddResourceTags(ResourceTagsT&& value) { m_resourceTagsHasBeenSet = true; m_resourceTags.emplace_back(std::forward<ResourceTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration details of a resource.</p>
     */
    inline Aws::Utils::DocumentView GetResourceConfig() const { return m_resourceConfig; }
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }
    template<typename ResourceConfigT = Aws::Utils::Document>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = Aws::Utils::Document>
    ResourceResult& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    ResourceCategory m_resourceCategory{ResourceCategory::NOT_SET};
    bool m_resourceCategoryHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    Aws::String m_resourceCreationTimeDt;
    bool m_resourceCreationTimeDtHasBeenSet = false;

    Aws::String m_resourceDetailCaptureTimeDt;
    bool m_resourceDetailCaptureTimeDtHasBeenSet = false;

    Aws::Vector<ResourceFindingsSummary> m_findingsSummary;
    bool m_findingsSummaryHasBeenSet = false;

    Aws::Vector<ResourceTag> m_resourceTags;
    bool m_resourceTagsHasBeenSet = false;

    Aws::Utils::Document m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
