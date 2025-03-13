/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/ProjectVersionDescription.h>
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
  class DescribeProjectVersionsResult
  {
  public:
    AWS_REKOGNITION_API DescribeProjectVersionsResult() = default;
    AWS_REKOGNITION_API DescribeProjectVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DescribeProjectVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of project version descriptions. The list is sorted by the creation
     * date and time of the project versions, latest to earliest.</p>
     */
    inline const Aws::Vector<ProjectVersionDescription>& GetProjectVersionDescriptions() const { return m_projectVersionDescriptions; }
    template<typename ProjectVersionDescriptionsT = Aws::Vector<ProjectVersionDescription>>
    void SetProjectVersionDescriptions(ProjectVersionDescriptionsT&& value) { m_projectVersionDescriptionsHasBeenSet = true; m_projectVersionDescriptions = std::forward<ProjectVersionDescriptionsT>(value); }
    template<typename ProjectVersionDescriptionsT = Aws::Vector<ProjectVersionDescription>>
    DescribeProjectVersionsResult& WithProjectVersionDescriptions(ProjectVersionDescriptionsT&& value) { SetProjectVersionDescriptions(std::forward<ProjectVersionDescriptionsT>(value)); return *this;}
    template<typename ProjectVersionDescriptionsT = ProjectVersionDescription>
    DescribeProjectVersionsResult& AddProjectVersionDescriptions(ProjectVersionDescriptionsT&& value) { m_projectVersionDescriptionsHasBeenSet = true; m_projectVersionDescriptions.emplace_back(std::forward<ProjectVersionDescriptionsT>(value)); return *this; }
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
    DescribeProjectVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProjectVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProjectVersionDescription> m_projectVersionDescriptions;
    bool m_projectVersionDescriptionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
