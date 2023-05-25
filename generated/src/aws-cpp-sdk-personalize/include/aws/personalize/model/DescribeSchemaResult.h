/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/DatasetSchema.h>
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
namespace Personalize
{
namespace Model
{
  class DescribeSchemaResult
  {
  public:
    AWS_PERSONALIZE_API DescribeSchemaResult();
    AWS_PERSONALIZE_API DescribeSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested schema.</p>
     */
    inline const DatasetSchema& GetSchema() const{ return m_schema; }

    /**
     * <p>The requested schema.</p>
     */
    inline void SetSchema(const DatasetSchema& value) { m_schema = value; }

    /**
     * <p>The requested schema.</p>
     */
    inline void SetSchema(DatasetSchema&& value) { m_schema = std::move(value); }

    /**
     * <p>The requested schema.</p>
     */
    inline DescribeSchemaResult& WithSchema(const DatasetSchema& value) { SetSchema(value); return *this;}

    /**
     * <p>The requested schema.</p>
     */
    inline DescribeSchemaResult& WithSchema(DatasetSchema&& value) { SetSchema(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DatasetSchema m_schema;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
