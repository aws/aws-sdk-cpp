/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ResourceStatus.h>
#include <aws/quicksight/model/AnalysisDefinition.h>
#include <aws/quicksight/model/AnalysisError.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeAnalysisDefinitionResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeAnalysisDefinitionResult();
    AWS_QUICKSIGHT_API DescribeAnalysisDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAnalysisDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the analysis described.</p>
     */
    inline const Aws::String& GetAnalysisId() const{ return m_analysisId; }
    inline void SetAnalysisId(const Aws::String& value) { m_analysisId = value; }
    inline void SetAnalysisId(Aws::String&& value) { m_analysisId = std::move(value); }
    inline void SetAnalysisId(const char* value) { m_analysisId.assign(value); }
    inline DescribeAnalysisDefinitionResult& WithAnalysisId(const Aws::String& value) { SetAnalysisId(value); return *this;}
    inline DescribeAnalysisDefinitionResult& WithAnalysisId(Aws::String&& value) { SetAnalysisId(std::move(value)); return *this;}
    inline DescribeAnalysisDefinitionResult& WithAnalysisId(const char* value) { SetAnalysisId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptive name of the analysis.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeAnalysisDefinitionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeAnalysisDefinitionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeAnalysisDefinitionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Errors associated with the analysis.</p>
     */
    inline const Aws::Vector<AnalysisError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<AnalysisError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<AnalysisError>&& value) { m_errors = std::move(value); }
    inline DescribeAnalysisDefinitionResult& WithErrors(const Aws::Vector<AnalysisError>& value) { SetErrors(value); return *this;}
    inline DescribeAnalysisDefinitionResult& WithErrors(Aws::Vector<AnalysisError>&& value) { SetErrors(std::move(value)); return *this;}
    inline DescribeAnalysisDefinitionResult& AddErrors(const AnalysisError& value) { m_errors.push_back(value); return *this; }
    inline DescribeAnalysisDefinitionResult& AddErrors(AnalysisError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Status associated with the analysis.</p> <ul> <li> <p>
     * <code>CREATION_IN_PROGRESS</code> </p> </li> <li> <p>
     * <code>CREATION_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>CREATION_FAILED</code> </p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code>
     * </p> </li> <li> <p> <code>UPDATE_SUCCESSFUL</code> </p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> </p> </li> <li> <p> <code>DELETED</code> </p> </li>
     * </ul>
     */
    inline const ResourceStatus& GetResourceStatus() const{ return m_resourceStatus; }
    inline void SetResourceStatus(const ResourceStatus& value) { m_resourceStatus = value; }
    inline void SetResourceStatus(ResourceStatus&& value) { m_resourceStatus = std::move(value); }
    inline DescribeAnalysisDefinitionResult& WithResourceStatus(const ResourceStatus& value) { SetResourceStatus(value); return *this;}
    inline DescribeAnalysisDefinitionResult& WithResourceStatus(ResourceStatus&& value) { SetResourceStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the theme of the analysis.</p>
     */
    inline const Aws::String& GetThemeArn() const{ return m_themeArn; }
    inline void SetThemeArn(const Aws::String& value) { m_themeArn = value; }
    inline void SetThemeArn(Aws::String&& value) { m_themeArn = std::move(value); }
    inline void SetThemeArn(const char* value) { m_themeArn.assign(value); }
    inline DescribeAnalysisDefinitionResult& WithThemeArn(const Aws::String& value) { SetThemeArn(value); return *this;}
    inline DescribeAnalysisDefinitionResult& WithThemeArn(Aws::String&& value) { SetThemeArn(std::move(value)); return *this;}
    inline DescribeAnalysisDefinitionResult& WithThemeArn(const char* value) { SetThemeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of an analysis.</p> <p>A definition is the data model of all
     * features in a Dashboard, Template, or Analysis.</p>
     */
    inline const AnalysisDefinition& GetDefinition() const{ return m_definition; }
    inline void SetDefinition(const AnalysisDefinition& value) { m_definition = value; }
    inline void SetDefinition(AnalysisDefinition&& value) { m_definition = std::move(value); }
    inline DescribeAnalysisDefinitionResult& WithDefinition(const AnalysisDefinition& value) { SetDefinition(value); return *this;}
    inline DescribeAnalysisDefinitionResult& WithDefinition(AnalysisDefinition&& value) { SetDefinition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline DescribeAnalysisDefinitionResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeAnalysisDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeAnalysisDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeAnalysisDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_analysisId;

    Aws::String m_name;

    Aws::Vector<AnalysisError> m_errors;

    ResourceStatus m_resourceStatus;

    Aws::String m_themeArn;

    AnalysisDefinition m_definition;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
