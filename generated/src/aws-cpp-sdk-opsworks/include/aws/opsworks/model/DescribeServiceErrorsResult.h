/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/ServiceError.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeServiceErrors</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeServiceErrorsResult">AWS
   * API Reference</a></p>
   */
  class DescribeServiceErrorsResult
  {
  public:
    AWS_OPSWORKS_API DescribeServiceErrorsResult();
    AWS_OPSWORKS_API DescribeServiceErrorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeServiceErrorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline const Aws::Vector<ServiceError>& GetServiceErrors() const{ return m_serviceErrors; }

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline void SetServiceErrors(const Aws::Vector<ServiceError>& value) { m_serviceErrors = value; }

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline void SetServiceErrors(Aws::Vector<ServiceError>&& value) { m_serviceErrors = std::move(value); }

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline DescribeServiceErrorsResult& WithServiceErrors(const Aws::Vector<ServiceError>& value) { SetServiceErrors(value); return *this;}

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline DescribeServiceErrorsResult& WithServiceErrors(Aws::Vector<ServiceError>&& value) { SetServiceErrors(std::move(value)); return *this;}

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline DescribeServiceErrorsResult& AddServiceErrors(const ServiceError& value) { m_serviceErrors.push_back(value); return *this; }

    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline DescribeServiceErrorsResult& AddServiceErrors(ServiceError&& value) { m_serviceErrors.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeServiceErrorsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeServiceErrorsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeServiceErrorsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ServiceError> m_serviceErrors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
