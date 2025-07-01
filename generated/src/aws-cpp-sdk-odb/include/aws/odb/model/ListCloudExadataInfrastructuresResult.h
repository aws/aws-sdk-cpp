/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/CloudExadataInfrastructureSummary.h>
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
namespace odb
{
namespace Model
{
  class ListCloudExadataInfrastructuresResult
  {
  public:
    AWS_ODB_API ListCloudExadataInfrastructuresResult() = default;
    AWS_ODB_API ListCloudExadataInfrastructuresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ODB_API ListCloudExadataInfrastructuresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCloudExadataInfrastructuresResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of Exadata infrastructures along with their properties.</p>
     */
    inline const Aws::Vector<CloudExadataInfrastructureSummary>& GetCloudExadataInfrastructures() const { return m_cloudExadataInfrastructures; }
    template<typename CloudExadataInfrastructuresT = Aws::Vector<CloudExadataInfrastructureSummary>>
    void SetCloudExadataInfrastructures(CloudExadataInfrastructuresT&& value) { m_cloudExadataInfrastructuresHasBeenSet = true; m_cloudExadataInfrastructures = std::forward<CloudExadataInfrastructuresT>(value); }
    template<typename CloudExadataInfrastructuresT = Aws::Vector<CloudExadataInfrastructureSummary>>
    ListCloudExadataInfrastructuresResult& WithCloudExadataInfrastructures(CloudExadataInfrastructuresT&& value) { SetCloudExadataInfrastructures(std::forward<CloudExadataInfrastructuresT>(value)); return *this;}
    template<typename CloudExadataInfrastructuresT = CloudExadataInfrastructureSummary>
    ListCloudExadataInfrastructuresResult& AddCloudExadataInfrastructures(CloudExadataInfrastructuresT&& value) { m_cloudExadataInfrastructuresHasBeenSet = true; m_cloudExadataInfrastructures.emplace_back(std::forward<CloudExadataInfrastructuresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCloudExadataInfrastructuresResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CloudExadataInfrastructureSummary> m_cloudExadataInfrastructures;
    bool m_cloudExadataInfrastructuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
