/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{
  class UpdateActionResult
  {
  public:
    AWS_SAGEMAKER_API UpdateActionResult();
    AWS_SAGEMAKER_API UpdateActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdateActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline const Aws::String& GetActionArn() const{ return m_actionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline void SetActionArn(const Aws::String& value) { m_actionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline void SetActionArn(Aws::String&& value) { m_actionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline void SetActionArn(const char* value) { m_actionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline UpdateActionResult& WithActionArn(const Aws::String& value) { SetActionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline UpdateActionResult& WithActionArn(Aws::String&& value) { SetActionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the action.</p>
     */
    inline UpdateActionResult& WithActionArn(const char* value) { SetActionArn(value); return *this;}

  private:

    Aws::String m_actionArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
