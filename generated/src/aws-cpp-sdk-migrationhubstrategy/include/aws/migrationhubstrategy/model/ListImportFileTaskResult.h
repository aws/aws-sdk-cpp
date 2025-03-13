/**
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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListImportFileTaskResult() = default;
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListImportFileTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API ListImportFileTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The token you use to retrieve the next set of results, or null if there are
     * no more results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImportFileTaskResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Lists information about the files you import.</p>
     */
    inline const Aws::Vector<ImportFileTaskInformation>& GetTaskInfos() const { return m_taskInfos; }
    template<typename TaskInfosT = Aws::Vector<ImportFileTaskInformation>>
    void SetTaskInfos(TaskInfosT&& value) { m_taskInfosHasBeenSet = true; m_taskInfos = std::forward<TaskInfosT>(value); }
    template<typename TaskInfosT = Aws::Vector<ImportFileTaskInformation>>
    ListImportFileTaskResult& WithTaskInfos(TaskInfosT&& value) { SetTaskInfos(std::forward<TaskInfosT>(value)); return *this;}
    template<typename TaskInfosT = ImportFileTaskInformation>
    ListImportFileTaskResult& AddTaskInfos(TaskInfosT&& value) { m_taskInfosHasBeenSet = true; m_taskInfos.emplace_back(std::forward<TaskInfosT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImportFileTaskResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ImportFileTaskInformation> m_taskInfos;
    bool m_taskInfosHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
