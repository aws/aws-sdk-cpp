/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkMail
{
namespace Model
{

  /**
   * <p>Describes a Lambda based availability provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/LambdaAvailabilityProvider">AWS
   * API Reference</a></p>
   */
  class LambdaAvailabilityProvider
  {
  public:
    AWS_WORKMAIL_API LambdaAvailabilityProvider();
    AWS_WORKMAIL_API LambdaAvailabilityProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API LambdaAvailabilityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda that acts as the availability
     * provider.</p>
     */
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda that acts as the availability
     * provider.</p>
     */
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda that acts as the availability
     * provider.</p>
     */
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda that acts as the availability
     * provider.</p>
     */
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda that acts as the availability
     * provider.</p>
     */
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda that acts as the availability
     * provider.</p>
     */
    inline LambdaAvailabilityProvider& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda that acts as the availability
     * provider.</p>
     */
    inline LambdaAvailabilityProvider& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda that acts as the availability
     * provider.</p>
     */
    inline LambdaAvailabilityProvider& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}

  private:

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
