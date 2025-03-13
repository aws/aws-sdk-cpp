/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/SubnetGroup.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MemoryDB
{
namespace Model
{
  class CreateSubnetGroupResult
  {
  public:
    AWS_MEMORYDB_API CreateSubnetGroupResult() = default;
    AWS_MEMORYDB_API CreateSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API CreateSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The newly-created subnet group.</p>
     */
    inline const SubnetGroup& GetSubnetGroup() const { return m_subnetGroup; }
    template<typename SubnetGroupT = SubnetGroup>
    void SetSubnetGroup(SubnetGroupT&& value) { m_subnetGroupHasBeenSet = true; m_subnetGroup = std::forward<SubnetGroupT>(value); }
    template<typename SubnetGroupT = SubnetGroup>
    CreateSubnetGroupResult& WithSubnetGroup(SubnetGroupT&& value) { SetSubnetGroup(std::forward<SubnetGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateSubnetGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SubnetGroup m_subnetGroup;
    bool m_subnetGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
