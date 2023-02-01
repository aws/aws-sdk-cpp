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
    AWS_REKOGNITION_API ListProjectPoliciesResult();
    AWS_REKOGNITION_API ListProjectPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API ListProjectPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of project policies attached to the project.</p>
     */
    inline const Aws::Vector<ProjectPolicy>& GetProjectPolicies() const{ return m_projectPolicies; }

    /**
     * <p>A list of project policies attached to the project.</p>
     */
    inline void SetProjectPolicies(const Aws::Vector<ProjectPolicy>& value) { m_projectPolicies = value; }

    /**
     * <p>A list of project policies attached to the project.</p>
     */
    inline void SetProjectPolicies(Aws::Vector<ProjectPolicy>&& value) { m_projectPolicies = std::move(value); }

    /**
     * <p>A list of project policies attached to the project.</p>
     */
    inline ListProjectPoliciesResult& WithProjectPolicies(const Aws::Vector<ProjectPolicy>& value) { SetProjectPolicies(value); return *this;}

    /**
     * <p>A list of project policies attached to the project.</p>
     */
    inline ListProjectPoliciesResult& WithProjectPolicies(Aws::Vector<ProjectPolicy>&& value) { SetProjectPolicies(std::move(value)); return *this;}

    /**
     * <p>A list of project policies attached to the project.</p>
     */
    inline ListProjectPoliciesResult& AddProjectPolicies(const ProjectPolicy& value) { m_projectPolicies.push_back(value); return *this; }

    /**
     * <p>A list of project policies attached to the project.</p>
     */
    inline ListProjectPoliciesResult& AddProjectPolicies(ProjectPolicy&& value) { m_projectPolicies.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of project
     * policies.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of project
     * policies.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of project
     * policies.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of project
     * policies.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of project
     * policies.</p>
     */
    inline ListProjectPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of project
     * policies.</p>
     */
    inline ListProjectPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition returns this token that you
     * can use in the subsequent request to retrieve the next set of project
     * policies.</p>
     */
    inline ListProjectPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProjectPolicy> m_projectPolicies;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
