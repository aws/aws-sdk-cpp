/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ClusterStatus.h>
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
   * <p>Lists a summary of the properties of a SageMaker HyperPod
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterSummary">AWS
   * API Reference</a></p>
   */
  class ClusterSummary
  {
  public:
    AWS_SAGEMAKER_API ClusterSummary();
    AWS_SAGEMAKER_API ClusterSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline ClusterSummary& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline ClusterSummary& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SageMaker HyperPod cluster.</p>
     */
    inline ClusterSummary& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline ClusterSummary& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline ClusterSummary& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the SageMaker HyperPod cluster.</p>
     */
    inline ClusterSummary& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The time when the SageMaker HyperPod cluster is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the SageMaker HyperPod cluster is created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the SageMaker HyperPod cluster is created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the SageMaker HyperPod cluster is created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the SageMaker HyperPod cluster is created.</p>
     */
    inline ClusterSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the SageMaker HyperPod cluster is created.</p>
     */
    inline ClusterSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The status of the SageMaker HyperPod cluster.</p>
     */
    inline const ClusterStatus& GetClusterStatus() const{ return m_clusterStatus; }

    /**
     * <p>The status of the SageMaker HyperPod cluster.</p>
     */
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }

    /**
     * <p>The status of the SageMaker HyperPod cluster.</p>
     */
    inline void SetClusterStatus(const ClusterStatus& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }

    /**
     * <p>The status of the SageMaker HyperPod cluster.</p>
     */
    inline void SetClusterStatus(ClusterStatus&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::move(value); }

    /**
     * <p>The status of the SageMaker HyperPod cluster.</p>
     */
    inline ClusterSummary& WithClusterStatus(const ClusterStatus& value) { SetClusterStatus(value); return *this;}

    /**
     * <p>The status of the SageMaker HyperPod cluster.</p>
     */
    inline ClusterSummary& WithClusterStatus(ClusterStatus&& value) { SetClusterStatus(std::move(value)); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ClusterStatus m_clusterStatus;
    bool m_clusterStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
