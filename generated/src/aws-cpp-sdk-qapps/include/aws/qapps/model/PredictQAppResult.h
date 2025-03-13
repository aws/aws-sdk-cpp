/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/qapps/model/PredictAppDefinition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QApps
{
namespace Model
{
  class PredictQAppResult
  {
  public:
    AWS_QAPPS_API PredictQAppResult() = default;
    AWS_QAPPS_API PredictQAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API PredictQAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The generated Q App definition.</p>
     */
    inline const PredictAppDefinition& GetApp() const { return m_app; }
    template<typename AppT = PredictAppDefinition>
    void SetApp(AppT&& value) { m_appHasBeenSet = true; m_app = std::forward<AppT>(value); }
    template<typename AppT = PredictAppDefinition>
    PredictQAppResult& WithApp(AppT&& value) { SetApp(std::forward<AppT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The problem statement extracted from the input conversation, if provided.</p>
     */
    inline const Aws::String& GetProblemStatement() const { return m_problemStatement; }
    template<typename ProblemStatementT = Aws::String>
    void SetProblemStatement(ProblemStatementT&& value) { m_problemStatementHasBeenSet = true; m_problemStatement = std::forward<ProblemStatementT>(value); }
    template<typename ProblemStatementT = Aws::String>
    PredictQAppResult& WithProblemStatement(ProblemStatementT&& value) { SetProblemStatement(std::forward<ProblemStatementT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PredictQAppResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PredictAppDefinition m_app;
    bool m_appHasBeenSet = false;

    Aws::String m_problemStatement;
    bool m_problemStatementHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
