/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-a2i-runtime/AugmentedAIRuntime_EXPORTS.h>
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
namespace AugmentedAIRuntime
{
namespace Model
{
  class StartHumanLoopResult
  {
  public:
    AWS_AUGMENTEDAIRUNTIME_API StartHumanLoopResult();
    AWS_AUGMENTEDAIRUNTIME_API StartHumanLoopResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUGMENTEDAIRUNTIME_API StartHumanLoopResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline const Aws::String& GetHumanLoopArn() const{ return m_humanLoopArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(const Aws::String& value) { m_humanLoopArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(Aws::String&& value) { m_humanLoopArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline void SetHumanLoopArn(const char* value) { m_humanLoopArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline StartHumanLoopResult& WithHumanLoopArn(const Aws::String& value) { SetHumanLoopArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline StartHumanLoopResult& WithHumanLoopArn(Aws::String&& value) { SetHumanLoopArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the human loop.</p>
     */
    inline StartHumanLoopResult& WithHumanLoopArn(const char* value) { SetHumanLoopArn(value); return *this;}

  private:

    Aws::String m_humanLoopArn;
  };

} // namespace Model
} // namespace AugmentedAIRuntime
} // namespace Aws
