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
   * <p>Provides summary information for an endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EndpointSummary">AWS
   * API Reference</a></p>
   */
  class EndpointSummary
  {
  public:
    AWS_SAGEMAKER_API EndpointSummary();
    AWS_SAGEMAKER_API EndpointSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EndpointSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline EndpointSummary& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline EndpointSummary& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline EndpointSummary& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }
    inline EndpointSummary& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}
    inline EndpointSummary& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}
    inline EndpointSummary& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the endpoint was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline EndpointSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline EndpointSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the endpoint was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline EndpointSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline EndpointSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the endpoint.</p> <ul> <li> <p> <code>OutOfService</code>:
     * Endpoint is not available to take incoming requests.</p> </li> <li> <p>
     * <code>Creating</code>: <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateEndpoint.html">CreateEndpoint</a>
     * is executing.</p> </li> <li> <p> <code>Updating</code>: <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateEndpoint.html">UpdateEndpoint</a>
     * or <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateEndpointWeightsAndCapacities.html">UpdateEndpointWeightsAndCapacities</a>
     * is executing.</p> </li> <li> <p> <code>SystemUpdating</code>: Endpoint is
     * undergoing maintenance and cannot be updated or deleted or re-scaled until it
     * has completed. This maintenance operation does not change any customer-specified
     * values such as VPC config, KMS encryption, model, instance type, or instance
     * count.</p> </li> <li> <p> <code>RollingBack</code>: Endpoint fails to scale up
     * or down or change its variant weight and is in the process of rolling back to
     * its previous configuration. Once the rollback completes, endpoint returns to an
     * <code>InService</code> status. This transitional status only applies to an
     * endpoint that has autoscaling enabled and is undergoing variant weight or
     * capacity changes as part of an <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateEndpointWeightsAndCapacities.html">UpdateEndpointWeightsAndCapacities</a>
     * call or when the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_UpdateEndpointWeightsAndCapacities.html">UpdateEndpointWeightsAndCapacities</a>
     * operation is called explicitly.</p> </li> <li> <p> <code>InService</code>:
     * Endpoint is available to process incoming requests.</p> </li> <li> <p>
     * <code>Deleting</code>: <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteEndpoint.html">DeleteEndpoint</a>
     * is executing.</p> </li> <li> <p> <code>Failed</code>: Endpoint could not be
     * created, updated, or re-scaled. Use
     * <code>DescribeEndpointOutput$FailureReason</code> for information about the
     * failure. <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_DeleteEndpoint.html">DeleteEndpoint</a>
     * is the only operation that can be performed on a failed endpoint.</p> </li>
     * </ul> <p>To get a list of endpoints with a specified status, use the
     * <code>StatusEquals</code> filter with a call to <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListEndpoints.html">ListEndpoints</a>.</p>
     */
    inline const EndpointStatus& GetEndpointStatus() const{ return m_endpointStatus; }
    inline bool EndpointStatusHasBeenSet() const { return m_endpointStatusHasBeenSet; }
    inline void SetEndpointStatus(const EndpointStatus& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = value; }
    inline void SetEndpointStatus(EndpointStatus&& value) { m_endpointStatusHasBeenSet = true; m_endpointStatus = std::move(value); }
    inline EndpointSummary& WithEndpointStatus(const EndpointStatus& value) { SetEndpointStatus(value); return *this;}
    inline EndpointSummary& WithEndpointStatus(EndpointStatus&& value) { SetEndpointStatus(std::move(value)); return *this;}
    ///@}
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
