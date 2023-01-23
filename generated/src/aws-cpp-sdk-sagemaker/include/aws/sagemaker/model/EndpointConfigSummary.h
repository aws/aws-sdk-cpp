/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Provides summary information for an endpoint configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EndpointConfigSummary">AWS
   * API Reference</a></p>
   */
  class EndpointConfigSummary
  {
  public:
    AWS_SAGEMAKER_API EndpointConfigSummary();
    AWS_SAGEMAKER_API EndpointConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EndpointConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }

    /**
     * <p>The name of the endpoint configuration.</p>
     */
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }

    /**
     * <p>The name of the endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = value; }

    /**
     * <p>The name of the endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::move(value); }

    /**
     * <p>The name of the endpoint configuration.</p>
     */
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName.assign(value); }

    /**
     * <p>The name of the endpoint configuration.</p>
     */
    inline EndpointConfigSummary& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}

    /**
     * <p>The name of the endpoint configuration.</p>
     */
    inline EndpointConfigSummary& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint configuration.</p>
     */
    inline EndpointConfigSummary& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigArn() const{ return m_endpointConfigArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline bool EndpointConfigArnHasBeenSet() const { return m_endpointConfigArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline void SetEndpointConfigArn(const Aws::String& value) { m_endpointConfigArnHasBeenSet = true; m_endpointConfigArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline void SetEndpointConfigArn(Aws::String&& value) { m_endpointConfigArnHasBeenSet = true; m_endpointConfigArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline void SetEndpointConfigArn(const char* value) { m_endpointConfigArnHasBeenSet = true; m_endpointConfigArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline EndpointConfigSummary& WithEndpointConfigArn(const Aws::String& value) { SetEndpointConfigArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline EndpointConfigSummary& WithEndpointConfigArn(Aws::String&& value) { SetEndpointConfigArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint configuration.</p>
     */
    inline EndpointConfigSummary& WithEndpointConfigArn(const char* value) { SetEndpointConfigArn(value); return *this;}


    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline EndpointConfigSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that shows when the endpoint configuration was created.</p>
     */
    inline EndpointConfigSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    Aws::String m_endpointConfigArn;
    bool m_endpointConfigArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
