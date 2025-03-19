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
    AWS_OPSWORKS_API DescribeServiceErrorsResult() = default;
    AWS_OPSWORKS_API DescribeServiceErrorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeServiceErrorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>ServiceError</code> objects that describe the specified
     * service errors.</p>
     */
    inline const Aws::Vector<ServiceError>& GetServiceErrors() const { return m_serviceErrors; }
    template<typename ServiceErrorsT = Aws::Vector<ServiceError>>
    void SetServiceErrors(ServiceErrorsT&& value) { m_serviceErrorsHasBeenSet = true; m_serviceErrors = std::forward<ServiceErrorsT>(value); }
    template<typename ServiceErrorsT = Aws::Vector<ServiceError>>
    DescribeServiceErrorsResult& WithServiceErrors(ServiceErrorsT&& value) { SetServiceErrors(std::forward<ServiceErrorsT>(value)); return *this;}
    template<typename ServiceErrorsT = ServiceError>
    DescribeServiceErrorsResult& AddServiceErrors(ServiceErrorsT&& value) { m_serviceErrorsHasBeenSet = true; m_serviceErrors.emplace_back(std::forward<ServiceErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeServiceErrorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceError> m_serviceErrors;
    bool m_serviceErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
