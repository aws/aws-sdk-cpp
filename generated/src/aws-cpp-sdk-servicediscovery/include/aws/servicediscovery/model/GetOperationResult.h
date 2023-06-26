/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/Operation.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class GetOperationResult
  {
  public:
    AWS_SERVICEDISCOVERY_API GetOperationResult();
    AWS_SERVICEDISCOVERY_API GetOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API GetOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline const Operation& GetOperation() const{ return m_operation; }

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline void SetOperation(const Operation& value) { m_operation = value; }

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline void SetOperation(Operation&& value) { m_operation = std::move(value); }

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline GetOperationResult& WithOperation(const Operation& value) { SetOperation(value); return *this;}

    /**
     * <p>A complex type that contains information about the operation.</p>
     */
    inline GetOperationResult& WithOperation(Operation&& value) { SetOperation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetOperationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetOperationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetOperationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Operation m_operation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
