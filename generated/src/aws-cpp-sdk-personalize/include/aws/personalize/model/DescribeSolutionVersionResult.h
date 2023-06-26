/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/SolutionVersion.h>
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
  class DescribeSolutionVersionResult
  {
  public:
    AWS_PERSONALIZE_API DescribeSolutionVersionResult();
    AWS_PERSONALIZE_API DescribeSolutionVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API DescribeSolutionVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The solution version.</p>
     */
    inline const SolutionVersion& GetSolutionVersion() const{ return m_solutionVersion; }

    /**
     * <p>The solution version.</p>
     */
    inline void SetSolutionVersion(const SolutionVersion& value) { m_solutionVersion = value; }

    /**
     * <p>The solution version.</p>
     */
    inline void SetSolutionVersion(SolutionVersion&& value) { m_solutionVersion = std::move(value); }

    /**
     * <p>The solution version.</p>
     */
    inline DescribeSolutionVersionResult& WithSolutionVersion(const SolutionVersion& value) { SetSolutionVersion(value); return *this;}

    /**
     * <p>The solution version.</p>
     */
    inline DescribeSolutionVersionResult& WithSolutionVersion(SolutionVersion&& value) { SetSolutionVersion(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeSolutionVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeSolutionVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeSolutionVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SolutionVersion m_solutionVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
