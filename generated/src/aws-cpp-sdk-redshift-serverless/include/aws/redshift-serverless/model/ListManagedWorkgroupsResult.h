/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/ManagedWorkgroupListItem.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListManagedWorkgroupsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListManagedWorkgroupsResult() = default;
    AWS_REDSHIFTSERVERLESS_API ListManagedWorkgroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListManagedWorkgroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The returned array of managed workgroups.</p>
     */
    inline const Aws::Vector<ManagedWorkgroupListItem>& GetManagedWorkgroups() const { return m_managedWorkgroups; }
    template<typename ManagedWorkgroupsT = Aws::Vector<ManagedWorkgroupListItem>>
    void SetManagedWorkgroups(ManagedWorkgroupsT&& value) { m_managedWorkgroupsHasBeenSet = true; m_managedWorkgroups = std::forward<ManagedWorkgroupsT>(value); }
    template<typename ManagedWorkgroupsT = Aws::Vector<ManagedWorkgroupListItem>>
    ListManagedWorkgroupsResult& WithManagedWorkgroups(ManagedWorkgroupsT&& value) { SetManagedWorkgroups(std::forward<ManagedWorkgroupsT>(value)); return *this;}
    template<typename ManagedWorkgroupsT = ManagedWorkgroupListItem>
    ListManagedWorkgroupsResult& AddManagedWorkgroups(ManagedWorkgroupsT&& value) { m_managedWorkgroupsHasBeenSet = true; m_managedWorkgroups.emplace_back(std::forward<ManagedWorkgroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If nextToken is returned, there are more results available. The value of
     * nextToken is a unique pagination token for each page. To retrieve the next page,
     * make the call again using the returned token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListManagedWorkgroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListManagedWorkgroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ManagedWorkgroupListItem> m_managedWorkgroups;
    bool m_managedWorkgroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
