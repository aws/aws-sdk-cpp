/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/OperatingSystem.h>
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
   * <p>The response to a <code>DescribeOperatingSystems</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeOperatingSystemsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeOperatingSystemsResult
  {
  public:
    AWS_OPSWORKS_API DescribeOperatingSystemsResult() = default;
    AWS_OPSWORKS_API DescribeOperatingSystemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeOperatingSystemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information in response to a <code>DescribeOperatingSystems</code>
     * request.</p>
     */
    inline const Aws::Vector<OperatingSystem>& GetOperatingSystems() const { return m_operatingSystems; }
    template<typename OperatingSystemsT = Aws::Vector<OperatingSystem>>
    void SetOperatingSystems(OperatingSystemsT&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems = std::forward<OperatingSystemsT>(value); }
    template<typename OperatingSystemsT = Aws::Vector<OperatingSystem>>
    DescribeOperatingSystemsResult& WithOperatingSystems(OperatingSystemsT&& value) { SetOperatingSystems(std::forward<OperatingSystemsT>(value)); return *this;}
    template<typename OperatingSystemsT = OperatingSystem>
    DescribeOperatingSystemsResult& AddOperatingSystems(OperatingSystemsT&& value) { m_operatingSystemsHasBeenSet = true; m_operatingSystems.emplace_back(std::forward<OperatingSystemsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeOperatingSystemsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OperatingSystem> m_operatingSystems;
    bool m_operatingSystemsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
