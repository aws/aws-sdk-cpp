/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class DeleteResourceExplorerSetupRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API DeleteResourceExplorerSetupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourceExplorerSetup"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of Amazon Web Services Regions from which to delete the Resource
     * Explorer configuration. If not specified, the operation uses the
     * <code>DeleteInAllRegions</code> parameter to determine scope.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegionList() const { return m_regionList; }
    inline bool RegionListHasBeenSet() const { return m_regionListHasBeenSet; }
    template<typename RegionListT = Aws::Vector<Aws::String>>
    void SetRegionList(RegionListT&& value) { m_regionListHasBeenSet = true; m_regionList = std::forward<RegionListT>(value); }
    template<typename RegionListT = Aws::Vector<Aws::String>>
    DeleteResourceExplorerSetupRequest& WithRegionList(RegionListT&& value) { SetRegionList(std::forward<RegionListT>(value)); return *this;}
    template<typename RegionListT = Aws::String>
    DeleteResourceExplorerSetupRequest& AddRegionList(RegionListT&& value) { m_regionListHasBeenSet = true; m_regionList.emplace_back(std::forward<RegionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to delete Resource Explorer configuration from all Regions
     * where it is currently enabled. If this parameter is set to <code>true</code>, a
     * value for <code>RegionList</code> must not be provided. Otherwise, the operation
     * fails with a <code>ValidationException</code> error.</p>
     */
    inline bool GetDeleteInAllRegions() const { return m_deleteInAllRegions; }
    inline bool DeleteInAllRegionsHasBeenSet() const { return m_deleteInAllRegionsHasBeenSet; }
    inline void SetDeleteInAllRegions(bool value) { m_deleteInAllRegionsHasBeenSet = true; m_deleteInAllRegions = value; }
    inline DeleteResourceExplorerSetupRequest& WithDeleteInAllRegions(bool value) { SetDeleteInAllRegions(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_regionList;
    bool m_regionListHasBeenSet = false;

    bool m_deleteInAllRegions{false};
    bool m_deleteInAllRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
