/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/EndpointStatus.h>
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
   * <p>An endpoint that hosts a model displayed in the Amazon SageMaker Model
   * Dashboard.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelDashboardEndpoint">AWS
   * API Reference</a></p>
   */
  class ModelDashboardEndpoint
  {
  public:
    AWS_SAGEMAKER_API ModelDashboardEndpoint();
    AWS_SAGEMAKER_API ModelDashboardEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelDashboardEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The endpoint name.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The endpoint name.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The endpoint name.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The endpoint name.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The endpoint name.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The endpoint name.</p>
     */
    inline ModelDashboardEndpoint& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The endpoint name.</p>
     */
    inline ModelDashboardEndpoint& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The endpoint name.</p>
     */
    inline ModelDashboardEndpoint& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline ModelDashboardEndpoint& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline ModelDashboardEndpoint& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline ModelDashboardEndpoint& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>A timestamp that indicates when the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp that indicates when the endpoint was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the endpoint was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp that indicates when the endpoint was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the endpoint was created.</p>
     */
    inline ModelDashboardEndpoint& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the endpoint was created.</p>
     */
    inline ModelDashboardEndpoint& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline ModelDashboardEndpoint& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last time the endpoint was modified.</p>
     */
    inline ModelDashboardEndpoint& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The endpoint status.</p>
     */
    inline const EndpointStatus& GetEndpointStatus() const{ return m_endpointStatus; }

    /**
     * <p>The endpoint status.</p>
     */
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }

    /**
     * <p>The endpoint status.</p>
     */
    inline void SetEndpointStatus(const EndpointStatus& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }

    /**
     * <p>The endpoint status.</p>
     */
    inline void SetEndpointStatus(EndpointStatus&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }

    /**
     * <p>The endpoint status.</p>
     */
    inline ModelDashboardEndpoint& WithEndpointStatus(const EndpointStatus& value) { SetEndpointStatus(value); return *this;}

    /**
     * <p>The endpoint status.</p>
     */
    inline ModelDashboardEndpoint& WithEndpointStatus(EndpointStatus&& value) { SetEndpointStatus(std::move(value)); return *this;}

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    EndpointStatus m_endpointStatus;
    bool m_endpointStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
