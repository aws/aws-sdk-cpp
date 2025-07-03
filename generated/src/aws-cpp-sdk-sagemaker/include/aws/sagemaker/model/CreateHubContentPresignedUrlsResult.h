/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/AuthorizedUrl.h>
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
  class CreateHubContentPresignedUrlsResult
  {
  public:
    AWS_SAGEMAKER_API CreateHubContentPresignedUrlsResult() = default;
    AWS_SAGEMAKER_API CreateHubContentPresignedUrlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API CreateHubContentPresignedUrlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of authorized URL configurations, each containing a presigned URL
     * and its corresponding local file path for proper file organization during
     * download.</p>
     */
    inline const Aws::Vector<AuthorizedUrl>& GetAuthorizedUrlConfigs() const { return m_authorizedUrlConfigs; }
    template<typename AuthorizedUrlConfigsT = Aws::Vector<AuthorizedUrl>>
    void SetAuthorizedUrlConfigs(AuthorizedUrlConfigsT&& value) { m_authorizedUrlConfigsHasBeenSet = true; m_authorizedUrlConfigs = std::forward<AuthorizedUrlConfigsT>(value); }
    template<typename AuthorizedUrlConfigsT = Aws::Vector<AuthorizedUrl>>
    CreateHubContentPresignedUrlsResult& WithAuthorizedUrlConfigs(AuthorizedUrlConfigsT&& value) { SetAuthorizedUrlConfigs(std::forward<AuthorizedUrlConfigsT>(value)); return *this;}
    template<typename AuthorizedUrlConfigsT = AuthorizedUrl>
    CreateHubContentPresignedUrlsResult& AddAuthorizedUrlConfigs(AuthorizedUrlConfigsT&& value) { m_authorizedUrlConfigsHasBeenSet = true; m_authorizedUrlConfigs.emplace_back(std::forward<AuthorizedUrlConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for pagination. If present, indicates that more presigned URLs are
     * available. Use this token in a subsequent request to retrieve additional
     * URLs.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    CreateHubContentPresignedUrlsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateHubContentPresignedUrlsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthorizedUrl> m_authorizedUrlConfigs;
    bool m_authorizedUrlConfigsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
