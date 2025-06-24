/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-instances/model/InstanceTypeInfo.h>
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
namespace WorkspacesInstances
{
namespace Model
{
  /**
   * <p>Contains the list of instance types supported by WorkSpaces
   * Instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/ListInstanceTypesResponse">AWS
   * API Reference</a></p>
   */
  class ListInstanceTypesResult
  {
  public:
    AWS_WORKSPACESINSTANCES_API ListInstanceTypesResult() = default;
    AWS_WORKSPACESINSTANCES_API ListInstanceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESINSTANCES_API ListInstanceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Collection of supported instance types for WorkSpaces Instances.</p>
     */
    inline const Aws::Vector<InstanceTypeInfo>& GetInstanceTypes() const { return m_instanceTypes; }
    template<typename InstanceTypesT = Aws::Vector<InstanceTypeInfo>>
    void SetInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::forward<InstanceTypesT>(value); }
    template<typename InstanceTypesT = Aws::Vector<InstanceTypeInfo>>
    ListInstanceTypesResult& WithInstanceTypes(InstanceTypesT&& value) { SetInstanceTypes(std::forward<InstanceTypesT>(value)); return *this;}
    template<typename InstanceTypesT = InstanceTypeInfo>
    ListInstanceTypesResult& AddInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.emplace_back(std::forward<InstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for retrieving additional instance types if the result set is
     * paginated.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInstanceTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInstanceTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceTypeInfo> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
