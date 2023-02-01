/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/SubnetGroup.h>
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


    /**
     * <p>The newly-created subnet group</p>
     */
    inline const SubnetGroup& GetSubnetGroup() const{ return m_subnetGroup; }

    /**
     * <p>The newly-created subnet group</p>
     */
    inline void SetSubnetGroup(const SubnetGroup& value) { m_subnetGroup = value; }

    /**
     * <p>The newly-created subnet group</p>
     */
    inline void SetSubnetGroup(SubnetGroup&& value) { m_subnetGroup = std::move(value); }

    /**
     * <p>The newly-created subnet group</p>
     */
    inline CreateSubnetGroupResult& WithSubnetGroup(const SubnetGroup& value) { SetSubnetGroup(value); return *this;}

    /**
     * <p>The newly-created subnet group</p>
     */
    inline CreateSubnetGroupResult& WithSubnetGroup(SubnetGroup&& value) { SetSubnetGroup(std::move(value)); return *this;}

  private:

    SubnetGroup m_subnetGroup;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
