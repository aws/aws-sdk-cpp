/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{
  class CreateActionTargetResult
  {
  public:
    AWS_SECURITYHUB_API CreateActionTargetResult();
    AWS_SECURITYHUB_API CreateActionTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API CreateActionTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the custom action target.</p>
     */
    inline const Aws::String& GetActionTargetArn() const{ return m_actionTargetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the custom action target.</p>
     */
    inline void SetActionTargetArn(const Aws::String& value) { m_actionTargetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the custom action target.</p>
     */
    inline void SetActionTargetArn(Aws::String&& value) { m_actionTargetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the custom action target.</p>
     */
    inline void SetActionTargetArn(const char* value) { m_actionTargetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the custom action target.</p>
     */
    inline CreateActionTargetResult& WithActionTargetArn(const Aws::String& value) { SetActionTargetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the custom action target.</p>
     */
    inline CreateActionTargetResult& WithActionTargetArn(Aws::String&& value) { SetActionTargetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the custom action target.</p>
     */
    inline CreateActionTargetResult& WithActionTargetArn(const char* value) { SetActionTargetArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateActionTargetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateActionTargetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateActionTargetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_actionTargetArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
