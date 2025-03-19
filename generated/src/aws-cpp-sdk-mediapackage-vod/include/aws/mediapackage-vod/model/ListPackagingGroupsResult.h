/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediapackage-vod/model/PackagingGroup.h>
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
namespace MediaPackageVod
{
namespace Model
{
  class ListPackagingGroupsResult
  {
  public:
    AWS_MEDIAPACKAGEVOD_API ListPackagingGroupsResult() = default;
    AWS_MEDIAPACKAGEVOD_API ListPackagingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIAPACKAGEVOD_API ListPackagingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPackagingGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * A list of MediaPackage VOD PackagingGroup resources.
     */
    inline const Aws::Vector<PackagingGroup>& GetPackagingGroups() const { return m_packagingGroups; }
    template<typename PackagingGroupsT = Aws::Vector<PackagingGroup>>
    void SetPackagingGroups(PackagingGroupsT&& value) { m_packagingGroupsHasBeenSet = true; m_packagingGroups = std::forward<PackagingGroupsT>(value); }
    template<typename PackagingGroupsT = Aws::Vector<PackagingGroup>>
    ListPackagingGroupsResult& WithPackagingGroups(PackagingGroupsT&& value) { SetPackagingGroups(std::forward<PackagingGroupsT>(value)); return *this;}
    template<typename PackagingGroupsT = PackagingGroup>
    ListPackagingGroupsResult& AddPackagingGroups(PackagingGroupsT&& value) { m_packagingGroupsHasBeenSet = true; m_packagingGroups.emplace_back(std::forward<PackagingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPackagingGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<PackagingGroup> m_packagingGroups;
    bool m_packagingGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
