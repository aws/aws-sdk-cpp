﻿/**
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
    AWS_MEMORYDB_API CreateSubnetGroupResult();
    AWS_MEMORYDB_API CreateSubnetGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API CreateSubnetGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The newly-created subnet group.</p>
     */
    inline const SubnetGroup& GetSubnetGroup() const{ return m_subnetGroup; }
    inline void SetSubnetGroup(const SubnetGroup& value) { m_subnetGroup = value; }
    inline void SetSubnetGroup(SubnetGroup&& value) { m_subnetGroup = std::move(value); }
    inline CreateSubnetGroupResult& WithSubnetGroup(const SubnetGroup& value) { SetSubnetGroup(value); return *this;}
    inline CreateSubnetGroupResult& WithSubnetGroup(SubnetGroup&& value) { SetSubnetGroup(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateSubnetGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateSubnetGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateSubnetGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    SubnetGroup m_subnetGroup;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
