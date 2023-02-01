/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/model/ParameterGroup.h>
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
  class ResetParameterGroupResult
  {
  public:
    AWS_MEMORYDB_API ResetParameterGroupResult();
    AWS_MEMORYDB_API ResetParameterGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEMORYDB_API ResetParameterGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The parameter group being reset.</p>
     */
    inline const ParameterGroup& GetParameterGroup() const{ return m_parameterGroup; }

    /**
     * <p>The parameter group being reset.</p>
     */
    inline void SetParameterGroup(const ParameterGroup& value) { m_parameterGroup = value; }

    /**
     * <p>The parameter group being reset.</p>
     */
    inline void SetParameterGroup(ParameterGroup&& value) { m_parameterGroup = std::move(value); }

    /**
     * <p>The parameter group being reset.</p>
     */
    inline ResetParameterGroupResult& WithParameterGroup(const ParameterGroup& value) { SetParameterGroup(value); return *this;}

    /**
     * <p>The parameter group being reset.</p>
     */
    inline ResetParameterGroupResult& WithParameterGroup(ParameterGroup&& value) { SetParameterGroup(std::move(value)); return *this;}

  private:

    ParameterGroup m_parameterGroup;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
