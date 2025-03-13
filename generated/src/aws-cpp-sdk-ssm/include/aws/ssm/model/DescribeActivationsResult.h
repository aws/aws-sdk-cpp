/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Activation.h>
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
namespace SSM
{
namespace Model
{
  class DescribeActivationsResult
  {
  public:
    AWS_SSM_API DescribeActivationsResult() = default;
    AWS_SSM_API DescribeActivationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeActivationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of activations for your Amazon Web Services account.</p>
     */
    inline const Aws::Vector<Activation>& GetActivationList() const { return m_activationList; }
    template<typename ActivationListT = Aws::Vector<Activation>>
    void SetActivationList(ActivationListT&& value) { m_activationListHasBeenSet = true; m_activationList = std::forward<ActivationListT>(value); }
    template<typename ActivationListT = Aws::Vector<Activation>>
    DescribeActivationsResult& WithActivationList(ActivationListT&& value) { SetActivationList(std::forward<ActivationListT>(value)); return *this;}
    template<typename ActivationListT = Activation>
    DescribeActivationsResult& AddActivationList(ActivationListT&& value) { m_activationListHasBeenSet = true; m_activationList.emplace_back(std::forward<ActivationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. Use this token to get the next
     * set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeActivationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeActivationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Activation> m_activationList;
    bool m_activationListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
