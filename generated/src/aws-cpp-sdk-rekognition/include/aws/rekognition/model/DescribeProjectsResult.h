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
    AWS_REKOGNITION_API DescribeProjectsResult();
    AWS_REKOGNITION_API DescribeProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DescribeProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of project descriptions. The list is sorted by the date and time the
     * projects are created.</p>
     */
    inline const Aws::Vector<ProjectDescription>& GetProjectDescriptions() const{ return m_projectDescriptions; }

    /**
     * <p>A list of project descriptions. The list is sorted by the date and time the
     * projects are created.</p>
     */
    inline void SetProjectDescriptions(const Aws::Vector<ProjectDescription>& value) { m_projectDescriptions = value; }

    /**
     * <p>A list of project descriptions. The list is sorted by the date and time the
     * projects are created.</p>
     */
    inline void SetProjectDescriptions(Aws::Vector<ProjectDescription>&& value) { m_projectDescriptions = std::move(value); }

    /**
     * <p>A list of project descriptions. The list is sorted by the date and time the
     * projects are created.</p>
     */
    inline DescribeProjectsResult& WithProjectDescriptions(const Aws::Vector<ProjectDescription>& value) { SetProjectDescriptions(value); return *this;}

    /**
     * <p>A list of project descriptions. The list is sorted by the date and time the
     * projects are created.</p>
     */
    inline DescribeProjectsResult& WithProjectDescriptions(Aws::Vector<ProjectDescription>&& value) { SetProjectDescriptions(std::move(value)); return *this;}

    /**
     * <p>A list of project descriptions. The list is sorted by the date and time the
     * projects are created.</p>
     */
    inline DescribeProjectsResult& AddProjectDescriptions(const ProjectDescription& value) { m_projectDescriptions.push_back(value); return *this; }

    /**
     * <p>A list of project descriptions. The list is sorted by the date and time the
     * projects are created.</p>
     */
    inline DescribeProjectsResult& AddProjectDescriptions(ProjectDescription&& value) { m_projectDescriptions.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline DescribeProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline DescribeProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition Custom Labels returns a pagination token in the
     * response. You can use this pagination token to retrieve the next set of results.
     * </p>
     */
    inline DescribeProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProjectDescription> m_projectDescriptions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
