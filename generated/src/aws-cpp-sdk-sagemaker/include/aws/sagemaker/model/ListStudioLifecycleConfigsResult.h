/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/StudioLifecycleConfigDetails.h>
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
namespace SageMaker
{
namespace Model
{
  class ListStudioLifecycleConfigsResult
  {
  public:
    AWS_SAGEMAKER_API ListStudioLifecycleConfigsResult() = default;
    AWS_SAGEMAKER_API ListStudioLifecycleConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListStudioLifecycleConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListStudioLifecycleConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Lifecycle Configurations and their properties.</p>
     */
    inline const Aws::Vector<StudioLifecycleConfigDetails>& GetStudioLifecycleConfigs() const { return m_studioLifecycleConfigs; }
    template<typename StudioLifecycleConfigsT = Aws::Vector<StudioLifecycleConfigDetails>>
    void SetStudioLifecycleConfigs(StudioLifecycleConfigsT&& value) { m_studioLifecycleConfigsHasBeenSet = true; m_studioLifecycleConfigs = std::forward<StudioLifecycleConfigsT>(value); }
    template<typename StudioLifecycleConfigsT = Aws::Vector<StudioLifecycleConfigDetails>>
    ListStudioLifecycleConfigsResult& WithStudioLifecycleConfigs(StudioLifecycleConfigsT&& value) { SetStudioLifecycleConfigs(std::forward<StudioLifecycleConfigsT>(value)); return *this;}
    template<typename StudioLifecycleConfigsT = StudioLifecycleConfigDetails>
    ListStudioLifecycleConfigsResult& AddStudioLifecycleConfigs(StudioLifecycleConfigsT&& value) { m_studioLifecycleConfigsHasBeenSet = true; m_studioLifecycleConfigs.emplace_back(std::forward<StudioLifecycleConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListStudioLifecycleConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<StudioLifecycleConfigDetails> m_studioLifecycleConfigs;
    bool m_studioLifecycleConfigsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
