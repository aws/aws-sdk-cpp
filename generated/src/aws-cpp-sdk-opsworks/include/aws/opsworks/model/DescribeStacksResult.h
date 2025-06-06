﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/Stack.h>
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
   * <p>Contains the response to a <code>DescribeStacks</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStacksResult">AWS
   * API Reference</a></p>
   */
  class DescribeStacksResult
  {
  public:
    AWS_OPSWORKS_API DescribeStacksResult() = default;
    AWS_OPSWORKS_API DescribeStacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeStacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>Stack</code> objects that describe the stacks.</p>
     */
    inline const Aws::Vector<Stack>& GetStacks() const { return m_stacks; }
    template<typename StacksT = Aws::Vector<Stack>>
    void SetStacks(StacksT&& value) { m_stacksHasBeenSet = true; m_stacks = std::forward<StacksT>(value); }
    template<typename StacksT = Aws::Vector<Stack>>
    DescribeStacksResult& WithStacks(StacksT&& value) { SetStacks(std::forward<StacksT>(value)); return *this;}
    template<typename StacksT = Stack>
    DescribeStacksResult& AddStacks(StacksT&& value) { m_stacksHasBeenSet = true; m_stacks.emplace_back(std::forward<StacksT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStacksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Stack> m_stacks;
    bool m_stacksHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
