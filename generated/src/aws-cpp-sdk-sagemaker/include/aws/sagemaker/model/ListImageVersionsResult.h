﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ImageVersion.h>
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
  class ListImageVersionsResult
  {
  public:
    AWS_SAGEMAKER_API ListImageVersionsResult() = default;
    AWS_SAGEMAKER_API ListImageVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListImageVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of versions and their properties.</p>
     */
    inline const Aws::Vector<ImageVersion>& GetImageVersions() const { return m_imageVersions; }
    template<typename ImageVersionsT = Aws::Vector<ImageVersion>>
    void SetImageVersions(ImageVersionsT&& value) { m_imageVersionsHasBeenSet = true; m_imageVersions = std::forward<ImageVersionsT>(value); }
    template<typename ImageVersionsT = Aws::Vector<ImageVersion>>
    ListImageVersionsResult& WithImageVersions(ImageVersionsT&& value) { SetImageVersions(std::forward<ImageVersionsT>(value)); return *this;}
    template<typename ImageVersionsT = ImageVersion>
    ListImageVersionsResult& AddImageVersions(ImageVersionsT&& value) { m_imageVersionsHasBeenSet = true; m_imageVersions.emplace_back(std::forward<ImageVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token for getting the next set of versions, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImageVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImageVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ImageVersion> m_imageVersions;
    bool m_imageVersionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
