﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/ImportFileTaskInformation.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{
  class ListImportFileTaskResult
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListImportFileTaskResult();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListImportFileTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListImportFileTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListImportFileTaskResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListImportFileTaskResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListImportFileTaskResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists information about the files you import.</p>
     */
    inline const Aws::Vector<ImportFileTaskInformation>& GetTaskInfos() const{ return m_taskInfos; }
    inline void SetTaskInfos(const Aws::Vector<ImportFileTaskInformation>& value) { m_taskInfos = value; }
    inline void SetTaskInfos(Aws::Vector<ImportFileTaskInformation>&& value) { m_taskInfos = std::move(value); }
    inline ListImportFileTaskResult& WithTaskInfos(const Aws::Vector<ImportFileTaskInformation>& value) { SetTaskInfos(value); return *this;}
    inline ListImportFileTaskResult& WithTaskInfos(Aws::Vector<ImportFileTaskInformation>&& value) { SetTaskInfos(std::move(value)); return *this;}
    inline ListImportFileTaskResult& AddTaskInfos(const ImportFileTaskInformation& value) { m_taskInfos.push_back(value); return *this; }
    inline ListImportFileTaskResult& AddTaskInfos(ImportFileTaskInformation&& value) { m_taskInfos.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListImportFileTaskResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListImportFileTaskResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListImportFileTaskResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ImportFileTaskInformation> m_taskInfos;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
