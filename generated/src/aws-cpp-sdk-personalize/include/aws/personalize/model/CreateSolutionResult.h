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
  class CreateSolutionResult
  {
  public:
    AWS_PERSONALIZE_API CreateSolutionResult();
    AWS_PERSONALIZE_API CreateSolutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateSolutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the solution.</p>
     */
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArn = value; }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArn = std::move(value); }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline void SetSolutionArn(const char* value) { m_solutionArn.assign(value); }

    /**
     * <p>The ARN of the solution.</p>
     */
    inline CreateSolutionResult& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}

    /**
     * <p>The ARN of the solution.</p>
     */
    inline CreateSolutionResult& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the solution.</p>
     */
    inline CreateSolutionResult& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}

  private:

    Aws::String m_solutionArn;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
