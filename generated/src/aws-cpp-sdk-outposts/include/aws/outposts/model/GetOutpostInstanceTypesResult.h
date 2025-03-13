/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/InstanceTypeItem.h>
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
namespace Outposts
{
namespace Model
{
  class GetOutpostInstanceTypesResult
  {
  public:
    AWS_OUTPOSTS_API GetOutpostInstanceTypesResult() = default;
    AWS_OUTPOSTS_API GetOutpostInstanceTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetOutpostInstanceTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Vector<InstanceTypeItem>& GetInstanceTypes() const { return m_instanceTypes; }
    template<typename InstanceTypesT = Aws::Vector<InstanceTypeItem>>
    void SetInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::forward<InstanceTypesT>(value); }
    template<typename InstanceTypesT = Aws::Vector<InstanceTypeItem>>
    GetOutpostInstanceTypesResult& WithInstanceTypes(InstanceTypesT&& value) { SetInstanceTypes(std::forward<InstanceTypesT>(value)); return *this;}
    template<typename InstanceTypesT = InstanceTypeItem>
    GetOutpostInstanceTypesResult& AddInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.emplace_back(std::forward<InstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetOutpostInstanceTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the Outpost. </p>
     */
    inline const Aws::String& GetOutpostId() const { return m_outpostId; }
    template<typename OutpostIdT = Aws::String>
    void SetOutpostId(OutpostIdT&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::forward<OutpostIdT>(value); }
    template<typename OutpostIdT = Aws::String>
    GetOutpostInstanceTypesResult& WithOutpostId(OutpostIdT&& value) { SetOutpostId(std::forward<OutpostIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    GetOutpostInstanceTypesResult& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetOutpostInstanceTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceTypeItem> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
