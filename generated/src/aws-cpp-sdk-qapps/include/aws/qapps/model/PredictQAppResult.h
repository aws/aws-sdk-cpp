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
    AWS_QAPPS_API PredictQAppResult();
    AWS_QAPPS_API PredictQAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QAPPS_API PredictQAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The generated Q App definition.</p>
     */
    inline const PredictAppDefinition& GetApp() const{ return m_app; }
    inline void SetApp(const PredictAppDefinition& value) { m_app = value; }
    inline void SetApp(PredictAppDefinition&& value) { m_app = std::move(value); }
    inline PredictQAppResult& WithApp(const PredictAppDefinition& value) { SetApp(value); return *this;}
    inline PredictQAppResult& WithApp(PredictAppDefinition&& value) { SetApp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The problem statement extracted from the input conversation, if provided.</p>
     */
    inline const Aws::String& GetProblemStatement() const{ return m_problemStatement; }
    inline void SetProblemStatement(const Aws::String& value) { m_problemStatement = value; }
    inline void SetProblemStatement(Aws::String&& value) { m_problemStatement = std::move(value); }
    inline void SetProblemStatement(const char* value) { m_problemStatement.assign(value); }
    inline PredictQAppResult& WithProblemStatement(const Aws::String& value) { SetProblemStatement(value); return *this;}
    inline PredictQAppResult& WithProblemStatement(Aws::String&& value) { SetProblemStatement(std::move(value)); return *this;}
    inline PredictQAppResult& WithProblemStatement(const char* value) { SetProblemStatement(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PredictQAppResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PredictQAppResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PredictQAppResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    PredictAppDefinition m_app;

    Aws::String m_problemStatement;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
