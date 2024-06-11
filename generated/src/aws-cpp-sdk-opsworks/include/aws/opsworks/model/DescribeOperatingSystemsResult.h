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
    AWS_OPSWORKS_API DescribeOperatingSystemsResult();
    AWS_OPSWORKS_API DescribeOperatingSystemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeOperatingSystemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains information in response to a <code>DescribeOperatingSystems</code>
     * request.</p>
     */
    inline const Aws::Vector<OperatingSystem>& GetOperatingSystems() const{ return m_operatingSystems; }
    inline void SetOperatingSystems(const Aws::Vector<OperatingSystem>& value) { m_operatingSystems = value; }
    inline void SetOperatingSystems(Aws::Vector<OperatingSystem>&& value) { m_operatingSystems = std::move(value); }
    inline DescribeOperatingSystemsResult& WithOperatingSystems(const Aws::Vector<OperatingSystem>& value) { SetOperatingSystems(value); return *this;}
    inline DescribeOperatingSystemsResult& WithOperatingSystems(Aws::Vector<OperatingSystem>&& value) { SetOperatingSystems(std::move(value)); return *this;}
    inline DescribeOperatingSystemsResult& AddOperatingSystems(const OperatingSystem& value) { m_operatingSystems.push_back(value); return *this; }
    inline DescribeOperatingSystemsResult& AddOperatingSystems(OperatingSystem&& value) { m_operatingSystems.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeOperatingSystemsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeOperatingSystemsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeOperatingSystemsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<OperatingSystem> m_operatingSystems;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
