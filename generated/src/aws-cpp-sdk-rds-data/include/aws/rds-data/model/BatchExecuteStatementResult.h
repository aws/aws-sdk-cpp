/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds-data/model/UpdateResult.h>
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
namespace RDSDataService
{
namespace Model
{
  /**
   * <p>The response elements represent the output of a SQL statement over an array
   * of data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/BatchExecuteStatementResponse">AWS
   * API Reference</a></p>
   */
  class BatchExecuteStatementResult
  {
  public:
    AWS_RDSDATASERVICE_API BatchExecuteStatementResult() = default;
    AWS_RDSDATASERVICE_API BatchExecuteStatementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RDSDATASERVICE_API BatchExecuteStatementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The execution results of each batch entry.</p>
     */
    inline const Aws::Vector<UpdateResult>& GetUpdateResults() const { return m_updateResults; }
    template<typename UpdateResultsT = Aws::Vector<UpdateResult>>
    void SetUpdateResults(UpdateResultsT&& value) { m_updateResultsHasBeenSet = true; m_updateResults = std::forward<UpdateResultsT>(value); }
    template<typename UpdateResultsT = Aws::Vector<UpdateResult>>
    BatchExecuteStatementResult& WithUpdateResults(UpdateResultsT&& value) { SetUpdateResults(std::forward<UpdateResultsT>(value)); return *this;}
    template<typename UpdateResultsT = UpdateResult>
    BatchExecuteStatementResult& AddUpdateResults(UpdateResultsT&& value) { m_updateResultsHasBeenSet = true; m_updateResults.emplace_back(std::forward<UpdateResultsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchExecuteStatementResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UpdateResult> m_updateResults;
    bool m_updateResultsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
