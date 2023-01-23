/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/Table.h>
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
namespace TimestreamWrite
{
namespace Model
{
  class UpdateTableResult
  {
  public:
    AWS_TIMESTREAMWRITE_API UpdateTableResult();
    AWS_TIMESTREAMWRITE_API UpdateTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API UpdateTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The updated Timestream table.</p>
     */
    inline const Table& GetTable() const{ return m_table; }

    /**
     * <p>The updated Timestream table.</p>
     */
    inline void SetTable(const Table& value) { m_table = value; }

    /**
     * <p>The updated Timestream table.</p>
     */
    inline void SetTable(Table&& value) { m_table = std::move(value); }

    /**
     * <p>The updated Timestream table.</p>
     */
    inline UpdateTableResult& WithTable(const Table& value) { SetTable(value); return *this;}

    /**
     * <p>The updated Timestream table.</p>
     */
    inline UpdateTableResult& WithTable(Table&& value) { SetTable(std::move(value)); return *this;}

  private:

    Table m_table;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
