/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
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
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   * <p>The configuration for the Lambda endpoint type. </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/LambdaEndpointConfig">AWS
   * API Reference</a></p>
   */
  class LambdaEndpointConfig
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API LambdaEndpointConfig();
    AWS_MIGRATIONHUBREFACTORSPACES_API LambdaEndpointConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API LambdaEndpointConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda endpoint. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda endpoint. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda endpoint. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda endpoint. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda endpoint. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda endpoint. </p>
     */
    inline LambdaEndpointConfig& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda endpoint. </p>
     */
    inline LambdaEndpointConfig& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Lambda endpoint. </p>
     */
    inline LambdaEndpointConfig& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
