﻿/**
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
    AWS_REKOGNITION_API DescribeProjectVersionsResult();
    AWS_REKOGNITION_API DescribeProjectVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DescribeProjectVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of project version descriptions. The list is sorted by the creation
     * date and time of the project versions, latest to earliest.</p>
     */
    inline const Aws::Vector<ProjectVersionDescription>& GetProjectVersionDescriptions() const{ return m_projectVersionDescriptions; }
    inline void SetProjectVersionDescriptions(const Aws::Vector<ProjectVersionDescription>& value) { m_projectVersionDescriptions = value; }
    inline void SetProjectVersionDescriptions(Aws::Vector<ProjectVersionDescription>&& value) { m_projectVersionDescriptions = std::move(value); }
    inline DescribeProjectVersionsResult& WithProjectVersionDescriptions(const Aws::Vector<ProjectVersionDescription>& value) { SetProjectVersionDescriptions(value); return *this;}
    inline DescribeProjectVersionsResult& WithProjectVersionDescriptions(Aws::Vector<ProjectVersionDescription>&& value) { SetProjectVersionDescriptions(std::move(value)); return *this;}
    inline DescribeProjectVersionsResult& AddProjectVersionDescriptions(const ProjectVersionDescription& value) { m_projectVersionDescriptions.push_back(value); return *this; }
    inline DescribeProjectVersionsResult& AddProjectVersionDescriptions(ProjectVersionDescription&& value) { m_projectVersionDescriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was incomplete (because there is more results to
     * retrieve), Amazon Rekognition returns a pagination token in the response. You
     * can use this pagination token to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeProjectVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeProjectVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeProjectVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeProjectVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeProjectVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeProjectVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProjectVersionDescription> m_projectVersionDescriptions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
