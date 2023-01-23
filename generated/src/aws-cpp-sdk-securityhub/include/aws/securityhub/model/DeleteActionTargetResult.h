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
  class DeleteActionTargetResult
  {
  public:
    AWS_SECURITYHUB_API DeleteActionTargetResult();
    AWS_SECURITYHUB_API DeleteActionTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DeleteActionTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline const Aws::String& GetActionTargetArn() const{ return m_actionTargetArn; }

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline void SetActionTargetArn(const Aws::String& value) { m_actionTargetArn = value; }

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline void SetActionTargetArn(Aws::String&& value) { m_actionTargetArn = std::move(value); }

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline void SetActionTargetArn(const char* value) { m_actionTargetArn.assign(value); }

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline DeleteActionTargetResult& WithActionTargetArn(const Aws::String& value) { SetActionTargetArn(value); return *this;}

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline DeleteActionTargetResult& WithActionTargetArn(Aws::String&& value) { SetActionTargetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the custom action target that was deleted.</p>
     */
    inline DeleteActionTargetResult& WithActionTargetArn(const char* value) { SetActionTargetArn(value); return *this;}

  private:

    Aws::String m_actionTargetArn;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
