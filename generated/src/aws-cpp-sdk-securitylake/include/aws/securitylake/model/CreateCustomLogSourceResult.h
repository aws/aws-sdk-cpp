/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/model/CustomLogSourceResource.h>
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
namespace SecurityLake
{
namespace Model
{
  class CreateCustomLogSourceResult
  {
  public:
    AWS_SECURITYLAKE_API CreateCustomLogSourceResult();
    AWS_SECURITYLAKE_API CreateCustomLogSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API CreateCustomLogSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The created third-party custom source.</p>
     */
    inline const CustomLogSourceResource& GetSource() const{ return m_source; }

    /**
     * <p>The created third-party custom source.</p>
     */
    inline void SetSource(const CustomLogSourceResource& value) { m_source = value; }

    /**
     * <p>The created third-party custom source.</p>
     */
    inline void SetSource(CustomLogSourceResource&& value) { m_source = std::move(value); }

    /**
     * <p>The created third-party custom source.</p>
     */
    inline CreateCustomLogSourceResult& WithSource(const CustomLogSourceResource& value) { SetSource(value); return *this;}

    /**
     * <p>The created third-party custom source.</p>
     */
    inline CreateCustomLogSourceResult& WithSource(CustomLogSourceResource&& value) { SetSource(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateCustomLogSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateCustomLogSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateCustomLogSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CustomLogSourceResource m_source;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
