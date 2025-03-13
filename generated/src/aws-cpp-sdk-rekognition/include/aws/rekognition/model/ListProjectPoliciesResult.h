/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/ProjectPolicy.h>
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
  class ListProjectPoliciesResult
  {
  public:
    AWS_REKOGNITION_API ListProjectPoliciesResult() = default;
    AWS_REKOGNITION_API ListProjectPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API ListProjectPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of project policies attached to the project.</p>
     */
    inline const Aws::Vector<ProjectPolicy>& GetProjectPolicies() const { return m_projectPolicies; }
    template<typename ProjectPoliciesT = Aws::Vector<ProjectPolicy>>
    void SetProjectPolicies(ProjectPoliciesT&& value) { m_projectPoliciesHasBeenSet = true; m_projectPolicies = std::forward<ProjectPoliciesT>(value); }
    template<typename ProjectPoliciesT = Aws::Vector<ProjectPolicy>>
    ListProjectPoliciesResult& WithProjectPolicies(ProjectPoliciesT&& value) { SetProjectPolicies(std::forward<ProjectPoliciesT>(value)); return *this;}
    template<typename ProjectPoliciesT = ProjectPolicy>
    ListProjectPoliciesResult& AddProjectPolicies(ProjectPoliciesT&& value) { m_projectPoliciesHasBeenSet = true; m_projectPolicies.emplace_back(std::forward<ProjectPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of project
     * policies.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProjectPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProjectPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProjectPolicy> m_projectPolicies;
    bool m_projectPoliciesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
