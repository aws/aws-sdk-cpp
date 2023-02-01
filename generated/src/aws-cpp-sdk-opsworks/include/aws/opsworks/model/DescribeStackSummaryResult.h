/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/model/StackSummary.h>
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
   * <p>Contains the response to a <code>DescribeStackSummary</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStackSummaryResult">AWS
   * API Reference</a></p>
   */
  class DescribeStackSummaryResult
  {
  public:
    AWS_OPSWORKS_API DescribeStackSummaryResult();
    AWS_OPSWORKS_API DescribeStackSummaryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeStackSummaryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <code>StackSummary</code> object that contains the results.</p>
     */
    inline const StackSummary& GetStackSummary() const{ return m_stackSummary; }

    /**
     * <p>A <code>StackSummary</code> object that contains the results.</p>
     */
    inline void SetStackSummary(const StackSummary& value) { m_stackSummary = value; }

    /**
     * <p>A <code>StackSummary</code> object that contains the results.</p>
     */
    inline void SetStackSummary(StackSummary&& value) { m_stackSummary = std::move(value); }

    /**
     * <p>A <code>StackSummary</code> object that contains the results.</p>
     */
    inline DescribeStackSummaryResult& WithStackSummary(const StackSummary& value) { SetStackSummary(value); return *this;}

    /**
     * <p>A <code>StackSummary</code> object that contains the results.</p>
     */
    inline DescribeStackSummaryResult& WithStackSummary(StackSummary&& value) { SetStackSummary(std::move(value)); return *this;}

  private:

    StackSummary m_stackSummary;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
