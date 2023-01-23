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
  class DescribeTableResult
  {
  public:
    AWS_TIMESTREAMWRITE_API DescribeTableResult();
    AWS_TIMESTREAMWRITE_API DescribeTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API DescribeTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Timestream table.</p>
     */
    inline const Table& GetTable() const{ return m_table; }

    /**
     * <p>The Timestream table.</p>
     */
    inline void SetTable(const Table& value) { m_table = value; }

    /**
     * <p>The Timestream table.</p>
     */
    inline void SetTable(Table&& value) { m_table = std::move(value); }

    /**
     * <p>The Timestream table.</p>
     */
    inline DescribeTableResult& WithTable(const Table& value) { SetTable(value); return *this;}

    /**
     * <p>The Timestream table.</p>
     */
    inline DescribeTableResult& WithTable(Table&& value) { SetTable(std::move(value)); return *this;}

  private:

    Table m_table;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
