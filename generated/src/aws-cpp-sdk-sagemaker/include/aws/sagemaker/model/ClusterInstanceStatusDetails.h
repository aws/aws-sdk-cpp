/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterInstanceStatus.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Details of an instance in a SageMaker HyperPod cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterInstanceStatusDetails">AWS
   * API Reference</a></p>
   */
  class ClusterInstanceStatusDetails
  {
  public:
    AWS_SAGEMAKER_API ClusterInstanceStatusDetails();
    AWS_SAGEMAKER_API ClusterInstanceStatusDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterInstanceStatusDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of an instance in a SageMaker HyperPod cluster.</p>
     */
    inline const ClusterInstanceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of an instance in a SageMaker HyperPod cluster.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of an instance in a SageMaker HyperPod cluster.</p>
     */
    inline void SetStatus(const ClusterInstanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of an instance in a SageMaker HyperPod cluster.</p>
     */
    inline void SetStatus(ClusterInstanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of an instance in a SageMaker HyperPod cluster.</p>
     */
    inline ClusterInstanceStatusDetails& WithStatus(const ClusterInstanceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of an instance in a SageMaker HyperPod cluster.</p>
     */
    inline ClusterInstanceStatusDetails& WithStatus(ClusterInstanceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The message from an instance in a SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message from an instance in a SageMaker HyperPod cluster.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message from an instance in a SageMaker HyperPod cluster.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message from an instance in a SageMaker HyperPod cluster.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message from an instance in a SageMaker HyperPod cluster.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message from an instance in a SageMaker HyperPod cluster.</p>
     */
    inline ClusterInstanceStatusDetails& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message from an instance in a SageMaker HyperPod cluster.</p>
     */
    inline ClusterInstanceStatusDetails& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message from an instance in a SageMaker HyperPod cluster.</p>
     */
    inline ClusterInstanceStatusDetails& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ClusterInstanceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
