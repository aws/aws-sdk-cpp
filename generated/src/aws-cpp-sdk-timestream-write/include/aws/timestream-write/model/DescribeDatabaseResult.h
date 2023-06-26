/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/Database.h>
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
  class DescribeDatabaseResult
  {
  public:
    AWS_TIMESTREAMWRITE_API DescribeDatabaseResult();
    AWS_TIMESTREAMWRITE_API DescribeDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMWRITE_API DescribeDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the Timestream table.</p>
     */
    inline const Database& GetDatabase() const{ return m_database; }

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline void SetDatabase(const Database& value) { m_database = value; }

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline void SetDatabase(Database&& value) { m_database = std::move(value); }

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline DescribeDatabaseResult& WithDatabase(const Database& value) { SetDatabase(value); return *this;}

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline DescribeDatabaseResult& WithDatabase(Database&& value) { SetDatabase(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDatabaseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDatabaseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDatabaseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Database m_database;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
