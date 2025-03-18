/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/SnapshotCopyConfiguration.h>
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
  class ListSnapshotCopyConfigurationsResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListSnapshotCopyConfigurationsResult() = default;
    AWS_REDSHIFTSERVERLESS_API ListSnapshotCopyConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListSnapshotCopyConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSnapshotCopyConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>All of the returned snapshot copy configurations.</p>
     */
    inline const Aws::Vector<SnapshotCopyConfiguration>& GetSnapshotCopyConfigurations() const { return m_snapshotCopyConfigurations; }
    template<typename SnapshotCopyConfigurationsT = Aws::Vector<SnapshotCopyConfiguration>>
    void SetSnapshotCopyConfigurations(SnapshotCopyConfigurationsT&& value) { m_snapshotCopyConfigurationsHasBeenSet = true; m_snapshotCopyConfigurations = std::forward<SnapshotCopyConfigurationsT>(value); }
    template<typename SnapshotCopyConfigurationsT = Aws::Vector<SnapshotCopyConfiguration>>
    ListSnapshotCopyConfigurationsResult& WithSnapshotCopyConfigurations(SnapshotCopyConfigurationsT&& value) { SetSnapshotCopyConfigurations(std::forward<SnapshotCopyConfigurationsT>(value)); return *this;}
    template<typename SnapshotCopyConfigurationsT = SnapshotCopyConfiguration>
    ListSnapshotCopyConfigurationsResult& AddSnapshotCopyConfigurations(SnapshotCopyConfigurationsT&& value) { m_snapshotCopyConfigurationsHasBeenSet = true; m_snapshotCopyConfigurations.emplace_back(std::forward<SnapshotCopyConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSnapshotCopyConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SnapshotCopyConfiguration> m_snapshotCopyConfigurations;
    bool m_snapshotCopyConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
