/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/Table.h>
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
namespace TimestreamWrite
{
namespace Model
{
  class CreateTableResult
  {
  public:
    AWS_TIMESTREAMWRITE_API CreateTableResult();
    AWS_TIMESTREAMWRITE_API CreateTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API CreateTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The newly created Timestream table.</p>
     */
    inline const Table& GetTable() const{ return m_table; }

    /**
     * <p>The newly created Timestream table.</p>
     */
    inline void SetTable(const Table& value) { m_table = value; }

    /**
     * <p>The newly created Timestream table.</p>
     */
    inline void SetTable(Table&& value) { m_table = std::move(value); }

    /**
     * <p>The newly created Timestream table.</p>
     */
    inline CreateTableResult& WithTable(const Table& value) { SetTable(value); return *this;}

    /**
     * <p>The newly created Timestream table.</p>
     */
    inline CreateTableResult& WithTable(Table&& value) { SetTable(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTableResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTableResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTableResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Table m_table;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
