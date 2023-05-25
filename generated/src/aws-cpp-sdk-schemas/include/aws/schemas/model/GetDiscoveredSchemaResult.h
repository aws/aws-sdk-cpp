/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/schemas/Schemas_EXPORTS.h>
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
namespace Schemas
{
namespace Model
{
  class GetDiscoveredSchemaResult
  {
  public:
    AWS_SCHEMAS_API GetDiscoveredSchemaResult();
    AWS_SCHEMAS_API GetDiscoveredSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SCHEMAS_API GetDiscoveredSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The source of the schema definition.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline void SetContent(const Aws::String& value) { m_content = value; }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline void SetContent(Aws::String&& value) { m_content = std::move(value); }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline void SetContent(const char* value) { m_content.assign(value); }

    /**
     * <p>The source of the schema definition.</p>
     */
    inline GetDiscoveredSchemaResult& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The source of the schema definition.</p>
     */
    inline GetDiscoveredSchemaResult& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The source of the schema definition.</p>
     */
    inline GetDiscoveredSchemaResult& WithContent(const char* value) { SetContent(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDiscoveredSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDiscoveredSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDiscoveredSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_content;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Schemas
} // namespace Aws
