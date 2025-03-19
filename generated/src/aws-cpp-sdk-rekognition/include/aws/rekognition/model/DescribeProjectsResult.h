/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/ProjectDescription.h>
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
namespace Rekognition
{
namespace Model
{
  class DescribeProjectsResult
  {
  public:
    AWS_REKOGNITION_API DescribeProjectsResult() = default;
    AWS_REKOGNITION_API DescribeProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DescribeProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of project descriptions. The list is sorted by the date and time the
     * projects are created.</p>
     */
    inline const Aws::Vector<ProjectDescription>& GetProjectDescriptions() const { return m_projectDescriptions; }
    template<typename ProjectDescriptionsT = Aws::Vector<ProjectDescription>>
    void SetProjectDescriptions(ProjectDescriptionsT&& value) { m_projectDescriptionsHasBeenSet = true; m_projectDescriptions = std::forward<ProjectDescriptionsT>(value); }
    template<typename ProjectDescriptionsT = Aws::Vector<ProjectDescription>>
    DescribeProjectsResult& WithProjectDescriptions(ProjectDescriptionsT&& value) { SetProjectDescriptions(std::forward<ProjectDescriptionsT>(value)); return *this;}
    template<typename ProjectDescriptionsT = ProjectDescription>
    DescribeProjectsResult& AddProjectDescriptions(ProjectDescriptionsT&& value) { m_projectDescriptionsHasBeenSet = true; m_projectDescriptions.emplace_back(std::forward<ProjectDescriptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeProjectsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProjectsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProjectDescription> m_projectDescriptions;
    bool m_projectDescriptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
