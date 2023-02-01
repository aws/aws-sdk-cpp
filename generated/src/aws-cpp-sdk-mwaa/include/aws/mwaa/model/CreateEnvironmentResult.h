/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
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
namespace MWAA
{
namespace Model
{
  class CreateEnvironmentResult
  {
  public:
    AWS_MWAA_API CreateEnvironmentResult();
    AWS_MWAA_API CreateEnvironmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MWAA_API CreateEnvironmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) returned in the response for the
     * environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) returned in the response for the
     * environment.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) returned in the response for the
     * environment.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) returned in the response for the
     * environment.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) returned in the response for the
     * environment.</p>
     */
    inline CreateEnvironmentResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) returned in the response for the
     * environment.</p>
     */
    inline CreateEnvironmentResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) returned in the response for the
     * environment.</p>
     */
    inline CreateEnvironmentResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
