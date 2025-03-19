/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/InstanceAssociationStatusInfo.h>
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
namespace SSM
{
namespace Model
{
  class DescribeInstanceAssociationsStatusResult
  {
  public:
    AWS_SSM_API DescribeInstanceAssociationsStatusResult() = default;
    AWS_SSM_API DescribeInstanceAssociationsStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeInstanceAssociationsStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Status information about the association.</p>
     */
    inline const Aws::Vector<InstanceAssociationStatusInfo>& GetInstanceAssociationStatusInfos() const { return m_instanceAssociationStatusInfos; }
    template<typename InstanceAssociationStatusInfosT = Aws::Vector<InstanceAssociationStatusInfo>>
    void SetInstanceAssociationStatusInfos(InstanceAssociationStatusInfosT&& value) { m_instanceAssociationStatusInfosHasBeenSet = true; m_instanceAssociationStatusInfos = std::forward<InstanceAssociationStatusInfosT>(value); }
    template<typename InstanceAssociationStatusInfosT = Aws::Vector<InstanceAssociationStatusInfo>>
    DescribeInstanceAssociationsStatusResult& WithInstanceAssociationStatusInfos(InstanceAssociationStatusInfosT&& value) { SetInstanceAssociationStatusInfos(std::forward<InstanceAssociationStatusInfosT>(value)); return *this;}
    template<typename InstanceAssociationStatusInfosT = InstanceAssociationStatusInfo>
    DescribeInstanceAssociationsStatusResult& AddInstanceAssociationStatusInfos(InstanceAssociationStatusInfosT&& value) { m_instanceAssociationStatusInfosHasBeenSet = true; m_instanceAssociationStatusInfos.emplace_back(std::forward<InstanceAssociationStatusInfosT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeInstanceAssociationsStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeInstanceAssociationsStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceAssociationStatusInfo> m_instanceAssociationStatusInfos;
    bool m_instanceAssociationStatusInfosHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
