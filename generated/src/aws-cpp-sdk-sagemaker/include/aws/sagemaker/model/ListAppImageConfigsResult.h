/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/AppImageConfigDetails.h>
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
  class ListAppImageConfigsResult
  {
  public:
    AWS_SAGEMAKER_API ListAppImageConfigsResult() = default;
    AWS_SAGEMAKER_API ListAppImageConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListAppImageConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A token for getting the next set of AppImageConfigs, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAppImageConfigsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of AppImageConfigs and their properties.</p>
     */
    inline const Aws::Vector<AppImageConfigDetails>& GetAppImageConfigs() const { return m_appImageConfigs; }
    template<typename AppImageConfigsT = Aws::Vector<AppImageConfigDetails>>
    void SetAppImageConfigs(AppImageConfigsT&& value) { m_appImageConfigsHasBeenSet = true; m_appImageConfigs = std::forward<AppImageConfigsT>(value); }
    template<typename AppImageConfigsT = Aws::Vector<AppImageConfigDetails>>
    ListAppImageConfigsResult& WithAppImageConfigs(AppImageConfigsT&& value) { SetAppImageConfigs(std::forward<AppImageConfigsT>(value)); return *this;}
    template<typename AppImageConfigsT = AppImageConfigDetails>
    ListAppImageConfigsResult& AddAppImageConfigs(AppImageConfigsT&& value) { m_appImageConfigsHasBeenSet = true; m_appImageConfigs.emplace_back(std::forward<AppImageConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAppImageConfigsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<AppImageConfigDetails> m_appImageConfigs;
    bool m_appImageConfigsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
