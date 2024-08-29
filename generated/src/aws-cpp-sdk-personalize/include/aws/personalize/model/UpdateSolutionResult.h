/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class UpdateSolutionResult
  {
  public:
    AWS_PERSONALIZE_API UpdateSolutionResult();
    AWS_PERSONALIZE_API UpdateSolutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API UpdateSolutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The same solution Amazon Resource Name (ARN) as given in the request.</p>
     */
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArn = value; }
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArn = std::move(value); }
    inline void SetSolutionArn(const char* value) { m_solutionArn.assign(value); }
    inline UpdateSolutionResult& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}
    inline UpdateSolutionResult& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}
    inline UpdateSolutionResult& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateSolutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateSolutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateSolutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_solutionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
