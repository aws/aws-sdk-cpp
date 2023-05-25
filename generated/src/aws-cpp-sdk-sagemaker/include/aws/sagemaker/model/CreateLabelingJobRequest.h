/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/LabelingJobInputConfig.h>
#include <aws/sagemaker/model/LabelingJobOutputConfig.h>
#include <aws/sagemaker/model/LabelingJobStoppingConditions.h>
#include <aws/sagemaker/model/LabelingJobAlgorithmsConfig.h>
#include <aws/sagemaker/model/HumanTaskConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateLabelingJobRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateLabelingJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLabelingJob"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs. Labeling job names must be unique within an Amazon Web
     * Services account and region. <code>LabelingJobName</code> is not case sensitive.
     * For example, Example-job and example-job are considered the same labeling job
     * name by Ground Truth.</p>
     */
    inline const Aws::String& GetLabelingJobName() const{ return m_labelingJobName; }

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs. Labeling job names must be unique within an Amazon Web
     * Services account and region. <code>LabelingJobName</code> is not case sensitive.
     * For example, Example-job and example-job are considered the same labeling job
     * name by Ground Truth.</p>
     */
    inline bool LabelingJobNameHasBeenSet() const { return m_labelingJobNameHasBeenSet; }

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs. Labeling job names must be unique within an Amazon Web
     * Services account and region. <code>LabelingJobName</code> is not case sensitive.
     * For example, Example-job and example-job are considered the same labeling job
     * name by Ground Truth.</p>
     */
    inline void SetLabelingJobName(const Aws::String& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = value; }

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs. Labeling job names must be unique within an Amazon Web
     * Services account and region. <code>LabelingJobName</code> is not case sensitive.
     * For example, Example-job and example-job are considered the same labeling job
     * name by Ground Truth.</p>
     */
    inline void SetLabelingJobName(Aws::String&& value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName = std::move(value); }

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs. Labeling job names must be unique within an Amazon Web
     * Services account and region. <code>LabelingJobName</code> is not case sensitive.
     * For example, Example-job and example-job are considered the same labeling job
     * name by Ground Truth.</p>
     */
    inline void SetLabelingJobName(const char* value) { m_labelingJobNameHasBeenSet = true; m_labelingJobName.assign(value); }

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs. Labeling job names must be unique within an Amazon Web
     * Services account and region. <code>LabelingJobName</code> is not case sensitive.
     * For example, Example-job and example-job are considered the same labeling job
     * name by Ground Truth.</p>
     */
    inline CreateLabelingJobRequest& WithLabelingJobName(const Aws::String& value) { SetLabelingJobName(value); return *this;}

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs. Labeling job names must be unique within an Amazon Web
     * Services account and region. <code>LabelingJobName</code> is not case sensitive.
     * For example, Example-job and example-job are considered the same labeling job
     * name by Ground Truth.</p>
     */
    inline CreateLabelingJobRequest& WithLabelingJobName(Aws::String&& value) { SetLabelingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the labeling job. This name is used to identify the job in a list
     * of labeling jobs. Labeling job names must be unique within an Amazon Web
     * Services account and region. <code>LabelingJobName</code> is not case sensitive.
     * For example, Example-job and example-job are considered the same labeling job
     * name by Ground Truth.</p>
     */
    inline CreateLabelingJobRequest& WithLabelingJobName(const char* value) { SetLabelingJobName(value); return *this;}


    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The <code>LabelAttributeName</code> must meet the following
     * requirements.</p> <ul> <li> <p>The name can't end with "-metadata". </p> </li>
     * <li> <p>If you are using one of the following <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, the attribute name <i>must</i> end with "-ref". If the task type
     * you are using is not listed below, the attribute name <i>must not</i> end with
     * "-ref".</p> <ul> <li> <p>Image semantic segmentation
     * (<code>SemanticSegmentation)</code>, and adjustment
     * (<code>AdjustmentSemanticSegmentation</code>) and verification
     * (<code>VerificationSemanticSegmentation</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object detection
     * (<code>VideoObjectDetection</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectDetection</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object tracking
     * (<code>VideoObjectTracking</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectTracking</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>3D point cloud semantic segmentation
     * (<code>3DPointCloudSemanticSegmentation</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudSemanticSegmentation</code>) labeling jobs for this
     * task type. </p> </li> <li> <p>3D point cloud object tracking
     * (<code>3DPointCloudObjectTracking</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudObjectTracking</code>) labeling jobs for this task
     * type. </p> </li> </ul> </li> </ul> <p/>  <p>If you are creating an
     * adjustment or verification labeling job, you must use a <i>different</i>
     * <code>LabelAttributeName</code> than the one used in the original labeling job.
     * The original labeling job is the Ground Truth labeling job that produced the
     * labels that you want verified or adjusted. To learn more about adjustment and
     * verification labeling jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels</a>.</p> 
     */
    inline const Aws::String& GetLabelAttributeName() const{ return m_labelAttributeName; }

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The <code>LabelAttributeName</code> must meet the following
     * requirements.</p> <ul> <li> <p>The name can't end with "-metadata". </p> </li>
     * <li> <p>If you are using one of the following <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, the attribute name <i>must</i> end with "-ref". If the task type
     * you are using is not listed below, the attribute name <i>must not</i> end with
     * "-ref".</p> <ul> <li> <p>Image semantic segmentation
     * (<code>SemanticSegmentation)</code>, and adjustment
     * (<code>AdjustmentSemanticSegmentation</code>) and verification
     * (<code>VerificationSemanticSegmentation</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object detection
     * (<code>VideoObjectDetection</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectDetection</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object tracking
     * (<code>VideoObjectTracking</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectTracking</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>3D point cloud semantic segmentation
     * (<code>3DPointCloudSemanticSegmentation</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudSemanticSegmentation</code>) labeling jobs for this
     * task type. </p> </li> <li> <p>3D point cloud object tracking
     * (<code>3DPointCloudObjectTracking</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudObjectTracking</code>) labeling jobs for this task
     * type. </p> </li> </ul> </li> </ul> <p/>  <p>If you are creating an
     * adjustment or verification labeling job, you must use a <i>different</i>
     * <code>LabelAttributeName</code> than the one used in the original labeling job.
     * The original labeling job is the Ground Truth labeling job that produced the
     * labels that you want verified or adjusted. To learn more about adjustment and
     * verification labeling jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels</a>.</p> 
     */
    inline bool LabelAttributeNameHasBeenSet() const { return m_labelAttributeNameHasBeenSet; }

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The <code>LabelAttributeName</code> must meet the following
     * requirements.</p> <ul> <li> <p>The name can't end with "-metadata". </p> </li>
     * <li> <p>If you are using one of the following <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, the attribute name <i>must</i> end with "-ref". If the task type
     * you are using is not listed below, the attribute name <i>must not</i> end with
     * "-ref".</p> <ul> <li> <p>Image semantic segmentation
     * (<code>SemanticSegmentation)</code>, and adjustment
     * (<code>AdjustmentSemanticSegmentation</code>) and verification
     * (<code>VerificationSemanticSegmentation</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object detection
     * (<code>VideoObjectDetection</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectDetection</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object tracking
     * (<code>VideoObjectTracking</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectTracking</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>3D point cloud semantic segmentation
     * (<code>3DPointCloudSemanticSegmentation</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudSemanticSegmentation</code>) labeling jobs for this
     * task type. </p> </li> <li> <p>3D point cloud object tracking
     * (<code>3DPointCloudObjectTracking</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudObjectTracking</code>) labeling jobs for this task
     * type. </p> </li> </ul> </li> </ul> <p/>  <p>If you are creating an
     * adjustment or verification labeling job, you must use a <i>different</i>
     * <code>LabelAttributeName</code> than the one used in the original labeling job.
     * The original labeling job is the Ground Truth labeling job that produced the
     * labels that you want verified or adjusted. To learn more about adjustment and
     * verification labeling jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels</a>.</p> 
     */
    inline void SetLabelAttributeName(const Aws::String& value) { m_labelAttributeNameHasBeenSet = true; m_labelAttributeName = value; }

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The <code>LabelAttributeName</code> must meet the following
     * requirements.</p> <ul> <li> <p>The name can't end with "-metadata". </p> </li>
     * <li> <p>If you are using one of the following <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, the attribute name <i>must</i> end with "-ref". If the task type
     * you are using is not listed below, the attribute name <i>must not</i> end with
     * "-ref".</p> <ul> <li> <p>Image semantic segmentation
     * (<code>SemanticSegmentation)</code>, and adjustment
     * (<code>AdjustmentSemanticSegmentation</code>) and verification
     * (<code>VerificationSemanticSegmentation</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object detection
     * (<code>VideoObjectDetection</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectDetection</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object tracking
     * (<code>VideoObjectTracking</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectTracking</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>3D point cloud semantic segmentation
     * (<code>3DPointCloudSemanticSegmentation</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudSemanticSegmentation</code>) labeling jobs for this
     * task type. </p> </li> <li> <p>3D point cloud object tracking
     * (<code>3DPointCloudObjectTracking</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudObjectTracking</code>) labeling jobs for this task
     * type. </p> </li> </ul> </li> </ul> <p/>  <p>If you are creating an
     * adjustment or verification labeling job, you must use a <i>different</i>
     * <code>LabelAttributeName</code> than the one used in the original labeling job.
     * The original labeling job is the Ground Truth labeling job that produced the
     * labels that you want verified or adjusted. To learn more about adjustment and
     * verification labeling jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels</a>.</p> 
     */
    inline void SetLabelAttributeName(Aws::String&& value) { m_labelAttributeNameHasBeenSet = true; m_labelAttributeName = std::move(value); }

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The <code>LabelAttributeName</code> must meet the following
     * requirements.</p> <ul> <li> <p>The name can't end with "-metadata". </p> </li>
     * <li> <p>If you are using one of the following <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, the attribute name <i>must</i> end with "-ref". If the task type
     * you are using is not listed below, the attribute name <i>must not</i> end with
     * "-ref".</p> <ul> <li> <p>Image semantic segmentation
     * (<code>SemanticSegmentation)</code>, and adjustment
     * (<code>AdjustmentSemanticSegmentation</code>) and verification
     * (<code>VerificationSemanticSegmentation</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object detection
     * (<code>VideoObjectDetection</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectDetection</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object tracking
     * (<code>VideoObjectTracking</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectTracking</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>3D point cloud semantic segmentation
     * (<code>3DPointCloudSemanticSegmentation</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudSemanticSegmentation</code>) labeling jobs for this
     * task type. </p> </li> <li> <p>3D point cloud object tracking
     * (<code>3DPointCloudObjectTracking</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudObjectTracking</code>) labeling jobs for this task
     * type. </p> </li> </ul> </li> </ul> <p/>  <p>If you are creating an
     * adjustment or verification labeling job, you must use a <i>different</i>
     * <code>LabelAttributeName</code> than the one used in the original labeling job.
     * The original labeling job is the Ground Truth labeling job that produced the
     * labels that you want verified or adjusted. To learn more about adjustment and
     * verification labeling jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels</a>.</p> 
     */
    inline void SetLabelAttributeName(const char* value) { m_labelAttributeNameHasBeenSet = true; m_labelAttributeName.assign(value); }

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The <code>LabelAttributeName</code> must meet the following
     * requirements.</p> <ul> <li> <p>The name can't end with "-metadata". </p> </li>
     * <li> <p>If you are using one of the following <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, the attribute name <i>must</i> end with "-ref". If the task type
     * you are using is not listed below, the attribute name <i>must not</i> end with
     * "-ref".</p> <ul> <li> <p>Image semantic segmentation
     * (<code>SemanticSegmentation)</code>, and adjustment
     * (<code>AdjustmentSemanticSegmentation</code>) and verification
     * (<code>VerificationSemanticSegmentation</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object detection
     * (<code>VideoObjectDetection</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectDetection</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object tracking
     * (<code>VideoObjectTracking</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectTracking</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>3D point cloud semantic segmentation
     * (<code>3DPointCloudSemanticSegmentation</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudSemanticSegmentation</code>) labeling jobs for this
     * task type. </p> </li> <li> <p>3D point cloud object tracking
     * (<code>3DPointCloudObjectTracking</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudObjectTracking</code>) labeling jobs for this task
     * type. </p> </li> </ul> </li> </ul> <p/>  <p>If you are creating an
     * adjustment or verification labeling job, you must use a <i>different</i>
     * <code>LabelAttributeName</code> than the one used in the original labeling job.
     * The original labeling job is the Ground Truth labeling job that produced the
     * labels that you want verified or adjusted. To learn more about adjustment and
     * verification labeling jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels</a>.</p> 
     */
    inline CreateLabelingJobRequest& WithLabelAttributeName(const Aws::String& value) { SetLabelAttributeName(value); return *this;}

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The <code>LabelAttributeName</code> must meet the following
     * requirements.</p> <ul> <li> <p>The name can't end with "-metadata". </p> </li>
     * <li> <p>If you are using one of the following <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, the attribute name <i>must</i> end with "-ref". If the task type
     * you are using is not listed below, the attribute name <i>must not</i> end with
     * "-ref".</p> <ul> <li> <p>Image semantic segmentation
     * (<code>SemanticSegmentation)</code>, and adjustment
     * (<code>AdjustmentSemanticSegmentation</code>) and verification
     * (<code>VerificationSemanticSegmentation</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object detection
     * (<code>VideoObjectDetection</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectDetection</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object tracking
     * (<code>VideoObjectTracking</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectTracking</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>3D point cloud semantic segmentation
     * (<code>3DPointCloudSemanticSegmentation</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudSemanticSegmentation</code>) labeling jobs for this
     * task type. </p> </li> <li> <p>3D point cloud object tracking
     * (<code>3DPointCloudObjectTracking</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudObjectTracking</code>) labeling jobs for this task
     * type. </p> </li> </ul> </li> </ul> <p/>  <p>If you are creating an
     * adjustment or verification labeling job, you must use a <i>different</i>
     * <code>LabelAttributeName</code> than the one used in the original labeling job.
     * The original labeling job is the Ground Truth labeling job that produced the
     * labels that you want verified or adjusted. To learn more about adjustment and
     * verification labeling jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels</a>.</p> 
     */
    inline CreateLabelingJobRequest& WithLabelAttributeName(Aws::String&& value) { SetLabelAttributeName(std::move(value)); return *this;}

    /**
     * <p>The attribute name to use for the label in the output manifest file. This is
     * the key for the key/value pair formed with the label that a worker assigns to
     * the object. The <code>LabelAttributeName</code> must meet the following
     * requirements.</p> <ul> <li> <p>The name can't end with "-metadata". </p> </li>
     * <li> <p>If you are using one of the following <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a>, the attribute name <i>must</i> end with "-ref". If the task type
     * you are using is not listed below, the attribute name <i>must not</i> end with
     * "-ref".</p> <ul> <li> <p>Image semantic segmentation
     * (<code>SemanticSegmentation)</code>, and adjustment
     * (<code>AdjustmentSemanticSegmentation</code>) and verification
     * (<code>VerificationSemanticSegmentation</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object detection
     * (<code>VideoObjectDetection</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectDetection</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>Video frame object tracking
     * (<code>VideoObjectTracking</code>), and adjustment and verification
     * (<code>AdjustmentVideoObjectTracking</code>) labeling jobs for this task
     * type.</p> </li> <li> <p>3D point cloud semantic segmentation
     * (<code>3DPointCloudSemanticSegmentation</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudSemanticSegmentation</code>) labeling jobs for this
     * task type. </p> </li> <li> <p>3D point cloud object tracking
     * (<code>3DPointCloudObjectTracking</code>), and adjustment and verification
     * (<code>Adjustment3DPointCloudObjectTracking</code>) labeling jobs for this task
     * type. </p> </li> </ul> </li> </ul> <p/>  <p>If you are creating an
     * adjustment or verification labeling job, you must use a <i>different</i>
     * <code>LabelAttributeName</code> than the one used in the original labeling job.
     * The original labeling job is the Ground Truth labeling job that produced the
     * labels that you want verified or adjusted. To learn more about adjustment and
     * verification labeling jobs, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-verification-data.html">Verify
     * and Adjust Labels</a>.</p> 
     */
    inline CreateLabelingJobRequest& WithLabelAttributeName(const char* value) { SetLabelAttributeName(value); return *this;}


    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p> <p>You must specify at least one of the following:
     * <code>S3DataSource</code> or <code>SnsDataSource</code>. </p> <ul> <li> <p>Use
     * <code>SnsDataSource</code> to specify an SNS input topic for a streaming
     * labeling job. If you do not specify and SNS input topic ARN, Ground Truth will
     * create a one-time labeling job that stops after all data objects in the input
     * manifest file have been labeled.</p> </li> <li> <p>Use <code>S3DataSource</code>
     * to specify an input manifest file for both streaming and one-time labeling jobs.
     * Adding an <code>S3DataSource</code> is optional if you use
     * <code>SnsDataSource</code> to create a streaming labeling job.</p> </li> </ul>
     * <p>If you use the Amazon Mechanical Turk workforce, your input data should not
     * include confidential information, personal information or protected health
     * information. Use <code>ContentClassifiers</code> to specify that your data is
     * free of personally identifiable information and adult content.</p>
     */
    inline const LabelingJobInputConfig& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p> <p>You must specify at least one of the following:
     * <code>S3DataSource</code> or <code>SnsDataSource</code>. </p> <ul> <li> <p>Use
     * <code>SnsDataSource</code> to specify an SNS input topic for a streaming
     * labeling job. If you do not specify and SNS input topic ARN, Ground Truth will
     * create a one-time labeling job that stops after all data objects in the input
     * manifest file have been labeled.</p> </li> <li> <p>Use <code>S3DataSource</code>
     * to specify an input manifest file for both streaming and one-time labeling jobs.
     * Adding an <code>S3DataSource</code> is optional if you use
     * <code>SnsDataSource</code> to create a streaming labeling job.</p> </li> </ul>
     * <p>If you use the Amazon Mechanical Turk workforce, your input data should not
     * include confidential information, personal information or protected health
     * information. Use <code>ContentClassifiers</code> to specify that your data is
     * free of personally identifiable information and adult content.</p>
     */
    inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }

    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p> <p>You must specify at least one of the following:
     * <code>S3DataSource</code> or <code>SnsDataSource</code>. </p> <ul> <li> <p>Use
     * <code>SnsDataSource</code> to specify an SNS input topic for a streaming
     * labeling job. If you do not specify and SNS input topic ARN, Ground Truth will
     * create a one-time labeling job that stops after all data objects in the input
     * manifest file have been labeled.</p> </li> <li> <p>Use <code>S3DataSource</code>
     * to specify an input manifest file for both streaming and one-time labeling jobs.
     * Adding an <code>S3DataSource</code> is optional if you use
     * <code>SnsDataSource</code> to create a streaming labeling job.</p> </li> </ul>
     * <p>If you use the Amazon Mechanical Turk workforce, your input data should not
     * include confidential information, personal information or protected health
     * information. Use <code>ContentClassifiers</code> to specify that your data is
     * free of personally identifiable information and adult content.</p>
     */
    inline void SetInputConfig(const LabelingJobInputConfig& value) { m_inputConfigHasBeenSet = true; m_inputConfig = value; }

    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p> <p>You must specify at least one of the following:
     * <code>S3DataSource</code> or <code>SnsDataSource</code>. </p> <ul> <li> <p>Use
     * <code>SnsDataSource</code> to specify an SNS input topic for a streaming
     * labeling job. If you do not specify and SNS input topic ARN, Ground Truth will
     * create a one-time labeling job that stops after all data objects in the input
     * manifest file have been labeled.</p> </li> <li> <p>Use <code>S3DataSource</code>
     * to specify an input manifest file for both streaming and one-time labeling jobs.
     * Adding an <code>S3DataSource</code> is optional if you use
     * <code>SnsDataSource</code> to create a streaming labeling job.</p> </li> </ul>
     * <p>If you use the Amazon Mechanical Turk workforce, your input data should not
     * include confidential information, personal information or protected health
     * information. Use <code>ContentClassifiers</code> to specify that your data is
     * free of personally identifiable information and adult content.</p>
     */
    inline void SetInputConfig(LabelingJobInputConfig&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::move(value); }

    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p> <p>You must specify at least one of the following:
     * <code>S3DataSource</code> or <code>SnsDataSource</code>. </p> <ul> <li> <p>Use
     * <code>SnsDataSource</code> to specify an SNS input topic for a streaming
     * labeling job. If you do not specify and SNS input topic ARN, Ground Truth will
     * create a one-time labeling job that stops after all data objects in the input
     * manifest file have been labeled.</p> </li> <li> <p>Use <code>S3DataSource</code>
     * to specify an input manifest file for both streaming and one-time labeling jobs.
     * Adding an <code>S3DataSource</code> is optional if you use
     * <code>SnsDataSource</code> to create a streaming labeling job.</p> </li> </ul>
     * <p>If you use the Amazon Mechanical Turk workforce, your input data should not
     * include confidential information, personal information or protected health
     * information. Use <code>ContentClassifiers</code> to specify that your data is
     * free of personally identifiable information and adult content.</p>
     */
    inline CreateLabelingJobRequest& WithInputConfig(const LabelingJobInputConfig& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Input data for the labeling job, such as the Amazon S3 location of the data
     * objects and the location of the manifest file that describes the data
     * objects.</p> <p>You must specify at least one of the following:
     * <code>S3DataSource</code> or <code>SnsDataSource</code>. </p> <ul> <li> <p>Use
     * <code>SnsDataSource</code> to specify an SNS input topic for a streaming
     * labeling job. If you do not specify and SNS input topic ARN, Ground Truth will
     * create a one-time labeling job that stops after all data objects in the input
     * manifest file have been labeled.</p> </li> <li> <p>Use <code>S3DataSource</code>
     * to specify an input manifest file for both streaming and one-time labeling jobs.
     * Adding an <code>S3DataSource</code> is optional if you use
     * <code>SnsDataSource</code> to create a streaming labeling job.</p> </li> </ul>
     * <p>If you use the Amazon Mechanical Turk workforce, your input data should not
     * include confidential information, personal information or protected health
     * information. Use <code>ContentClassifiers</code> to specify that your data is
     * free of personally identifiable information and adult content.</p>
     */
    inline CreateLabelingJobRequest& WithInputConfig(LabelingJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>The location of the output data and the Amazon Web Services Key Management
     * Service key ID for the key used to encrypt the output data, if any.</p>
     */
    inline const LabelingJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    /**
     * <p>The location of the output data and the Amazon Web Services Key Management
     * Service key ID for the key used to encrypt the output data, if any.</p>
     */
    inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }

    /**
     * <p>The location of the output data and the Amazon Web Services Key Management
     * Service key ID for the key used to encrypt the output data, if any.</p>
     */
    inline void SetOutputConfig(const LabelingJobOutputConfig& value) { m_outputConfigHasBeenSet = true; m_outputConfig = value; }

    /**
     * <p>The location of the output data and the Amazon Web Services Key Management
     * Service key ID for the key used to encrypt the output data, if any.</p>
     */
    inline void SetOutputConfig(LabelingJobOutputConfig&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::move(value); }

    /**
     * <p>The location of the output data and the Amazon Web Services Key Management
     * Service key ID for the key used to encrypt the output data, if any.</p>
     */
    inline CreateLabelingJobRequest& WithOutputConfig(const LabelingJobOutputConfig& value) { SetOutputConfig(value); return *this;}

    /**
     * <p>The location of the output data and the Amazon Web Services Key Management
     * Service key ID for the key used to encrypt the output data, if any.</p>
     */
    inline CreateLabelingJobRequest& WithOutputConfig(LabelingJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline CreateLabelingJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline CreateLabelingJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Number (ARN) that Amazon SageMaker assumes to perform
     * tasks on your behalf during data labeling. You must grant this role the
     * necessary permissions so that Amazon SageMaker can successfully complete data
     * labeling.</p>
     */
    inline CreateLabelingJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The S3 URI of the file, referred to as a <i>label category configuration
     * file</i>, that defines the categories used to label the data objects.</p> <p>For
     * 3D point cloud and video frame task types, you can add label category attributes
     * and frame attributes to your label category configuration file. To learn how,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-label-category-config.html">Create
     * a Labeling Category Configuration File for 3D Point Cloud Labeling Jobs</a>.
     * </p> <p>For named entity recognition jobs, in addition to <code>"labels"</code>,
     * you must provide worker instructions in the label category configuration file
     * using the <code>"instructions"</code> parameter: <code>"instructions":
     * {"shortInstruction":"&lt;h1&gt;Add header&lt;/h1&gt;&lt;p&gt;Add
     * Instructions&lt;/p&gt;", "fullInstruction":"&lt;p&gt;Add additional
     * instructions.&lt;/p&gt;"}</code>. For details and an example, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-named-entity-recg.html#sms-creating-ner-api">Create
     * a Named Entity Recognition Labeling Job (API) </a>.</p> <p>For all other <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates.html">custom
     * tasks</a>, your label category configuration file must be a JSON file in the
     * following format. Identify the labels you want to use by replacing
     * <code>label_1</code>, <code>label_2</code>,<code>...</code>,<code>label_n</code>
     * with your label categories.</p> <p> <code>{ </code> </p> <p>
     * <code>"document-version": "2018-11-28",</code> </p> <p> <code>"labels":
     * [{"label": "label_1"},{"label": "label_2"},...{"label": "label_n"}]</code> </p>
     * <p> <code>}</code> </p> <p>Note the following about the label category
     * configuration file:</p> <ul> <li> <p>For image classification and text
     * classification (single and multi-label) you must specify at least two label
     * categories. For all other task types, the minimum number of label categories
     * required is one. </p> </li> <li> <p>Each label category must be unique, you
     * cannot specify duplicate label categories.</p> </li> <li> <p>If you create a 3D
     * point cloud or video frame adjustment or verification labeling job, you must
     * include <code>auditLabelAttributeName</code> in the label category
     * configuration. Use this parameter to enter the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateLabelingJob.html#sagemaker-CreateLabelingJob-request-LabelAttributeName">
     * <code>LabelAttributeName</code> </a> of the labeling job you want to adjust or
     * verify annotations of.</p> </li> </ul>
     */
    inline const Aws::String& GetLabelCategoryConfigS3Uri() const{ return m_labelCategoryConfigS3Uri; }

    /**
     * <p>The S3 URI of the file, referred to as a <i>label category configuration
     * file</i>, that defines the categories used to label the data objects.</p> <p>For
     * 3D point cloud and video frame task types, you can add label category attributes
     * and frame attributes to your label category configuration file. To learn how,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-label-category-config.html">Create
     * a Labeling Category Configuration File for 3D Point Cloud Labeling Jobs</a>.
     * </p> <p>For named entity recognition jobs, in addition to <code>"labels"</code>,
     * you must provide worker instructions in the label category configuration file
     * using the <code>"instructions"</code> parameter: <code>"instructions":
     * {"shortInstruction":"&lt;h1&gt;Add header&lt;/h1&gt;&lt;p&gt;Add
     * Instructions&lt;/p&gt;", "fullInstruction":"&lt;p&gt;Add additional
     * instructions.&lt;/p&gt;"}</code>. For details and an example, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-named-entity-recg.html#sms-creating-ner-api">Create
     * a Named Entity Recognition Labeling Job (API) </a>.</p> <p>For all other <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates.html">custom
     * tasks</a>, your label category configuration file must be a JSON file in the
     * following format. Identify the labels you want to use by replacing
     * <code>label_1</code>, <code>label_2</code>,<code>...</code>,<code>label_n</code>
     * with your label categories.</p> <p> <code>{ </code> </p> <p>
     * <code>"document-version": "2018-11-28",</code> </p> <p> <code>"labels":
     * [{"label": "label_1"},{"label": "label_2"},...{"label": "label_n"}]</code> </p>
     * <p> <code>}</code> </p> <p>Note the following about the label category
     * configuration file:</p> <ul> <li> <p>For image classification and text
     * classification (single and multi-label) you must specify at least two label
     * categories. For all other task types, the minimum number of label categories
     * required is one. </p> </li> <li> <p>Each label category must be unique, you
     * cannot specify duplicate label categories.</p> </li> <li> <p>If you create a 3D
     * point cloud or video frame adjustment or verification labeling job, you must
     * include <code>auditLabelAttributeName</code> in the label category
     * configuration. Use this parameter to enter the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateLabelingJob.html#sagemaker-CreateLabelingJob-request-LabelAttributeName">
     * <code>LabelAttributeName</code> </a> of the labeling job you want to adjust or
     * verify annotations of.</p> </li> </ul>
     */
    inline bool LabelCategoryConfigS3UriHasBeenSet() const { return m_labelCategoryConfigS3UriHasBeenSet; }

    /**
     * <p>The S3 URI of the file, referred to as a <i>label category configuration
     * file</i>, that defines the categories used to label the data objects.</p> <p>For
     * 3D point cloud and video frame task types, you can add label category attributes
     * and frame attributes to your label category configuration file. To learn how,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-label-category-config.html">Create
     * a Labeling Category Configuration File for 3D Point Cloud Labeling Jobs</a>.
     * </p> <p>For named entity recognition jobs, in addition to <code>"labels"</code>,
     * you must provide worker instructions in the label category configuration file
     * using the <code>"instructions"</code> parameter: <code>"instructions":
     * {"shortInstruction":"&lt;h1&gt;Add header&lt;/h1&gt;&lt;p&gt;Add
     * Instructions&lt;/p&gt;", "fullInstruction":"&lt;p&gt;Add additional
     * instructions.&lt;/p&gt;"}</code>. For details and an example, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-named-entity-recg.html#sms-creating-ner-api">Create
     * a Named Entity Recognition Labeling Job (API) </a>.</p> <p>For all other <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates.html">custom
     * tasks</a>, your label category configuration file must be a JSON file in the
     * following format. Identify the labels you want to use by replacing
     * <code>label_1</code>, <code>label_2</code>,<code>...</code>,<code>label_n</code>
     * with your label categories.</p> <p> <code>{ </code> </p> <p>
     * <code>"document-version": "2018-11-28",</code> </p> <p> <code>"labels":
     * [{"label": "label_1"},{"label": "label_2"},...{"label": "label_n"}]</code> </p>
     * <p> <code>}</code> </p> <p>Note the following about the label category
     * configuration file:</p> <ul> <li> <p>For image classification and text
     * classification (single and multi-label) you must specify at least two label
     * categories. For all other task types, the minimum number of label categories
     * required is one. </p> </li> <li> <p>Each label category must be unique, you
     * cannot specify duplicate label categories.</p> </li> <li> <p>If you create a 3D
     * point cloud or video frame adjustment or verification labeling job, you must
     * include <code>auditLabelAttributeName</code> in the label category
     * configuration. Use this parameter to enter the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateLabelingJob.html#sagemaker-CreateLabelingJob-request-LabelAttributeName">
     * <code>LabelAttributeName</code> </a> of the labeling job you want to adjust or
     * verify annotations of.</p> </li> </ul>
     */
    inline void SetLabelCategoryConfigS3Uri(const Aws::String& value) { m_labelCategoryConfigS3UriHasBeenSet = true; m_labelCategoryConfigS3Uri = value; }

    /**
     * <p>The S3 URI of the file, referred to as a <i>label category configuration
     * file</i>, that defines the categories used to label the data objects.</p> <p>For
     * 3D point cloud and video frame task types, you can add label category attributes
     * and frame attributes to your label category configuration file. To learn how,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-label-category-config.html">Create
     * a Labeling Category Configuration File for 3D Point Cloud Labeling Jobs</a>.
     * </p> <p>For named entity recognition jobs, in addition to <code>"labels"</code>,
     * you must provide worker instructions in the label category configuration file
     * using the <code>"instructions"</code> parameter: <code>"instructions":
     * {"shortInstruction":"&lt;h1&gt;Add header&lt;/h1&gt;&lt;p&gt;Add
     * Instructions&lt;/p&gt;", "fullInstruction":"&lt;p&gt;Add additional
     * instructions.&lt;/p&gt;"}</code>. For details and an example, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-named-entity-recg.html#sms-creating-ner-api">Create
     * a Named Entity Recognition Labeling Job (API) </a>.</p> <p>For all other <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates.html">custom
     * tasks</a>, your label category configuration file must be a JSON file in the
     * following format. Identify the labels you want to use by replacing
     * <code>label_1</code>, <code>label_2</code>,<code>...</code>,<code>label_n</code>
     * with your label categories.</p> <p> <code>{ </code> </p> <p>
     * <code>"document-version": "2018-11-28",</code> </p> <p> <code>"labels":
     * [{"label": "label_1"},{"label": "label_2"},...{"label": "label_n"}]</code> </p>
     * <p> <code>}</code> </p> <p>Note the following about the label category
     * configuration file:</p> <ul> <li> <p>For image classification and text
     * classification (single and multi-label) you must specify at least two label
     * categories. For all other task types, the minimum number of label categories
     * required is one. </p> </li> <li> <p>Each label category must be unique, you
     * cannot specify duplicate label categories.</p> </li> <li> <p>If you create a 3D
     * point cloud or video frame adjustment or verification labeling job, you must
     * include <code>auditLabelAttributeName</code> in the label category
     * configuration. Use this parameter to enter the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateLabelingJob.html#sagemaker-CreateLabelingJob-request-LabelAttributeName">
     * <code>LabelAttributeName</code> </a> of the labeling job you want to adjust or
     * verify annotations of.</p> </li> </ul>
     */
    inline void SetLabelCategoryConfigS3Uri(Aws::String&& value) { m_labelCategoryConfigS3UriHasBeenSet = true; m_labelCategoryConfigS3Uri = std::move(value); }

    /**
     * <p>The S3 URI of the file, referred to as a <i>label category configuration
     * file</i>, that defines the categories used to label the data objects.</p> <p>For
     * 3D point cloud and video frame task types, you can add label category attributes
     * and frame attributes to your label category configuration file. To learn how,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-label-category-config.html">Create
     * a Labeling Category Configuration File for 3D Point Cloud Labeling Jobs</a>.
     * </p> <p>For named entity recognition jobs, in addition to <code>"labels"</code>,
     * you must provide worker instructions in the label category configuration file
     * using the <code>"instructions"</code> parameter: <code>"instructions":
     * {"shortInstruction":"&lt;h1&gt;Add header&lt;/h1&gt;&lt;p&gt;Add
     * Instructions&lt;/p&gt;", "fullInstruction":"&lt;p&gt;Add additional
     * instructions.&lt;/p&gt;"}</code>. For details and an example, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-named-entity-recg.html#sms-creating-ner-api">Create
     * a Named Entity Recognition Labeling Job (API) </a>.</p> <p>For all other <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates.html">custom
     * tasks</a>, your label category configuration file must be a JSON file in the
     * following format. Identify the labels you want to use by replacing
     * <code>label_1</code>, <code>label_2</code>,<code>...</code>,<code>label_n</code>
     * with your label categories.</p> <p> <code>{ </code> </p> <p>
     * <code>"document-version": "2018-11-28",</code> </p> <p> <code>"labels":
     * [{"label": "label_1"},{"label": "label_2"},...{"label": "label_n"}]</code> </p>
     * <p> <code>}</code> </p> <p>Note the following about the label category
     * configuration file:</p> <ul> <li> <p>For image classification and text
     * classification (single and multi-label) you must specify at least two label
     * categories. For all other task types, the minimum number of label categories
     * required is one. </p> </li> <li> <p>Each label category must be unique, you
     * cannot specify duplicate label categories.</p> </li> <li> <p>If you create a 3D
     * point cloud or video frame adjustment or verification labeling job, you must
     * include <code>auditLabelAttributeName</code> in the label category
     * configuration. Use this parameter to enter the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateLabelingJob.html#sagemaker-CreateLabelingJob-request-LabelAttributeName">
     * <code>LabelAttributeName</code> </a> of the labeling job you want to adjust or
     * verify annotations of.</p> </li> </ul>
     */
    inline void SetLabelCategoryConfigS3Uri(const char* value) { m_labelCategoryConfigS3UriHasBeenSet = true; m_labelCategoryConfigS3Uri.assign(value); }

    /**
     * <p>The S3 URI of the file, referred to as a <i>label category configuration
     * file</i>, that defines the categories used to label the data objects.</p> <p>For
     * 3D point cloud and video frame task types, you can add label category attributes
     * and frame attributes to your label category configuration file. To learn how,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-label-category-config.html">Create
     * a Labeling Category Configuration File for 3D Point Cloud Labeling Jobs</a>.
     * </p> <p>For named entity recognition jobs, in addition to <code>"labels"</code>,
     * you must provide worker instructions in the label category configuration file
     * using the <code>"instructions"</code> parameter: <code>"instructions":
     * {"shortInstruction":"&lt;h1&gt;Add header&lt;/h1&gt;&lt;p&gt;Add
     * Instructions&lt;/p&gt;", "fullInstruction":"&lt;p&gt;Add additional
     * instructions.&lt;/p&gt;"}</code>. For details and an example, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-named-entity-recg.html#sms-creating-ner-api">Create
     * a Named Entity Recognition Labeling Job (API) </a>.</p> <p>For all other <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates.html">custom
     * tasks</a>, your label category configuration file must be a JSON file in the
     * following format. Identify the labels you want to use by replacing
     * <code>label_1</code>, <code>label_2</code>,<code>...</code>,<code>label_n</code>
     * with your label categories.</p> <p> <code>{ </code> </p> <p>
     * <code>"document-version": "2018-11-28",</code> </p> <p> <code>"labels":
     * [{"label": "label_1"},{"label": "label_2"},...{"label": "label_n"}]</code> </p>
     * <p> <code>}</code> </p> <p>Note the following about the label category
     * configuration file:</p> <ul> <li> <p>For image classification and text
     * classification (single and multi-label) you must specify at least two label
     * categories. For all other task types, the minimum number of label categories
     * required is one. </p> </li> <li> <p>Each label category must be unique, you
     * cannot specify duplicate label categories.</p> </li> <li> <p>If you create a 3D
     * point cloud or video frame adjustment or verification labeling job, you must
     * include <code>auditLabelAttributeName</code> in the label category
     * configuration. Use this parameter to enter the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateLabelingJob.html#sagemaker-CreateLabelingJob-request-LabelAttributeName">
     * <code>LabelAttributeName</code> </a> of the labeling job you want to adjust or
     * verify annotations of.</p> </li> </ul>
     */
    inline CreateLabelingJobRequest& WithLabelCategoryConfigS3Uri(const Aws::String& value) { SetLabelCategoryConfigS3Uri(value); return *this;}

    /**
     * <p>The S3 URI of the file, referred to as a <i>label category configuration
     * file</i>, that defines the categories used to label the data objects.</p> <p>For
     * 3D point cloud and video frame task types, you can add label category attributes
     * and frame attributes to your label category configuration file. To learn how,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-label-category-config.html">Create
     * a Labeling Category Configuration File for 3D Point Cloud Labeling Jobs</a>.
     * </p> <p>For named entity recognition jobs, in addition to <code>"labels"</code>,
     * you must provide worker instructions in the label category configuration file
     * using the <code>"instructions"</code> parameter: <code>"instructions":
     * {"shortInstruction":"&lt;h1&gt;Add header&lt;/h1&gt;&lt;p&gt;Add
     * Instructions&lt;/p&gt;", "fullInstruction":"&lt;p&gt;Add additional
     * instructions.&lt;/p&gt;"}</code>. For details and an example, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-named-entity-recg.html#sms-creating-ner-api">Create
     * a Named Entity Recognition Labeling Job (API) </a>.</p> <p>For all other <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates.html">custom
     * tasks</a>, your label category configuration file must be a JSON file in the
     * following format. Identify the labels you want to use by replacing
     * <code>label_1</code>, <code>label_2</code>,<code>...</code>,<code>label_n</code>
     * with your label categories.</p> <p> <code>{ </code> </p> <p>
     * <code>"document-version": "2018-11-28",</code> </p> <p> <code>"labels":
     * [{"label": "label_1"},{"label": "label_2"},...{"label": "label_n"}]</code> </p>
     * <p> <code>}</code> </p> <p>Note the following about the label category
     * configuration file:</p> <ul> <li> <p>For image classification and text
     * classification (single and multi-label) you must specify at least two label
     * categories. For all other task types, the minimum number of label categories
     * required is one. </p> </li> <li> <p>Each label category must be unique, you
     * cannot specify duplicate label categories.</p> </li> <li> <p>If you create a 3D
     * point cloud or video frame adjustment or verification labeling job, you must
     * include <code>auditLabelAttributeName</code> in the label category
     * configuration. Use this parameter to enter the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateLabelingJob.html#sagemaker-CreateLabelingJob-request-LabelAttributeName">
     * <code>LabelAttributeName</code> </a> of the labeling job you want to adjust or
     * verify annotations of.</p> </li> </ul>
     */
    inline CreateLabelingJobRequest& WithLabelCategoryConfigS3Uri(Aws::String&& value) { SetLabelCategoryConfigS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3 URI of the file, referred to as a <i>label category configuration
     * file</i>, that defines the categories used to label the data objects.</p> <p>For
     * 3D point cloud and video frame task types, you can add label category attributes
     * and frame attributes to your label category configuration file. To learn how,
     * see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-point-cloud-label-category-config.html">Create
     * a Labeling Category Configuration File for 3D Point Cloud Labeling Jobs</a>.
     * </p> <p>For named entity recognition jobs, in addition to <code>"labels"</code>,
     * you must provide worker instructions in the label category configuration file
     * using the <code>"instructions"</code> parameter: <code>"instructions":
     * {"shortInstruction":"&lt;h1&gt;Add header&lt;/h1&gt;&lt;p&gt;Add
     * Instructions&lt;/p&gt;", "fullInstruction":"&lt;p&gt;Add additional
     * instructions.&lt;/p&gt;"}</code>. For details and an example, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-named-entity-recg.html#sms-creating-ner-api">Create
     * a Named Entity Recognition Labeling Job (API) </a>.</p> <p>For all other <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-task-types.html">built-in
     * task types</a> and <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sms-custom-templates.html">custom
     * tasks</a>, your label category configuration file must be a JSON file in the
     * following format. Identify the labels you want to use by replacing
     * <code>label_1</code>, <code>label_2</code>,<code>...</code>,<code>label_n</code>
     * with your label categories.</p> <p> <code>{ </code> </p> <p>
     * <code>"document-version": "2018-11-28",</code> </p> <p> <code>"labels":
     * [{"label": "label_1"},{"label": "label_2"},...{"label": "label_n"}]</code> </p>
     * <p> <code>}</code> </p> <p>Note the following about the label category
     * configuration file:</p> <ul> <li> <p>For image classification and text
     * classification (single and multi-label) you must specify at least two label
     * categories. For all other task types, the minimum number of label categories
     * required is one. </p> </li> <li> <p>Each label category must be unique, you
     * cannot specify duplicate label categories.</p> </li> <li> <p>If you create a 3D
     * point cloud or video frame adjustment or verification labeling job, you must
     * include <code>auditLabelAttributeName</code> in the label category
     * configuration. Use this parameter to enter the <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateLabelingJob.html#sagemaker-CreateLabelingJob-request-LabelAttributeName">
     * <code>LabelAttributeName</code> </a> of the labeling job you want to adjust or
     * verify annotations of.</p> </li> </ul>
     */
    inline CreateLabelingJobRequest& WithLabelCategoryConfigS3Uri(const char* value) { SetLabelCategoryConfigS3Uri(value); return *this;}


    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline const LabelingJobStoppingConditions& GetStoppingConditions() const{ return m_stoppingConditions; }

    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline bool StoppingConditionsHasBeenSet() const { return m_stoppingConditionsHasBeenSet; }

    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline void SetStoppingConditions(const LabelingJobStoppingConditions& value) { m_stoppingConditionsHasBeenSet = true; m_stoppingConditions = value; }

    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline void SetStoppingConditions(LabelingJobStoppingConditions&& value) { m_stoppingConditionsHasBeenSet = true; m_stoppingConditions = std::move(value); }

    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline CreateLabelingJobRequest& WithStoppingConditions(const LabelingJobStoppingConditions& value) { SetStoppingConditions(value); return *this;}

    /**
     * <p>A set of conditions for stopping the labeling job. If any of the conditions
     * are met, the job is automatically stopped. You can use these conditions to
     * control the cost of data labeling.</p>
     */
    inline CreateLabelingJobRequest& WithStoppingConditions(LabelingJobStoppingConditions&& value) { SetStoppingConditions(std::move(value)); return *this;}


    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline const LabelingJobAlgorithmsConfig& GetLabelingJobAlgorithmsConfig() const{ return m_labelingJobAlgorithmsConfig; }

    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline bool LabelingJobAlgorithmsConfigHasBeenSet() const { return m_labelingJobAlgorithmsConfigHasBeenSet; }

    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline void SetLabelingJobAlgorithmsConfig(const LabelingJobAlgorithmsConfig& value) { m_labelingJobAlgorithmsConfigHasBeenSet = true; m_labelingJobAlgorithmsConfig = value; }

    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline void SetLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfig&& value) { m_labelingJobAlgorithmsConfigHasBeenSet = true; m_labelingJobAlgorithmsConfig = std::move(value); }

    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline CreateLabelingJobRequest& WithLabelingJobAlgorithmsConfig(const LabelingJobAlgorithmsConfig& value) { SetLabelingJobAlgorithmsConfig(value); return *this;}

    /**
     * <p>Configures the information required to perform automated data labeling.</p>
     */
    inline CreateLabelingJobRequest& WithLabelingJobAlgorithmsConfig(LabelingJobAlgorithmsConfig&& value) { SetLabelingJobAlgorithmsConfig(std::move(value)); return *this;}


    /**
     * <p>Configures the labeling task and how it is presented to workers; including,
     * but not limited to price, keywords, and batch size (task count).</p>
     */
    inline const HumanTaskConfig& GetHumanTaskConfig() const{ return m_humanTaskConfig; }

    /**
     * <p>Configures the labeling task and how it is presented to workers; including,
     * but not limited to price, keywords, and batch size (task count).</p>
     */
    inline bool HumanTaskConfigHasBeenSet() const { return m_humanTaskConfigHasBeenSet; }

    /**
     * <p>Configures the labeling task and how it is presented to workers; including,
     * but not limited to price, keywords, and batch size (task count).</p>
     */
    inline void SetHumanTaskConfig(const HumanTaskConfig& value) { m_humanTaskConfigHasBeenSet = true; m_humanTaskConfig = value; }

    /**
     * <p>Configures the labeling task and how it is presented to workers; including,
     * but not limited to price, keywords, and batch size (task count).</p>
     */
    inline void SetHumanTaskConfig(HumanTaskConfig&& value) { m_humanTaskConfigHasBeenSet = true; m_humanTaskConfig = std::move(value); }

    /**
     * <p>Configures the labeling task and how it is presented to workers; including,
     * but not limited to price, keywords, and batch size (task count).</p>
     */
    inline CreateLabelingJobRequest& WithHumanTaskConfig(const HumanTaskConfig& value) { SetHumanTaskConfig(value); return *this;}

    /**
     * <p>Configures the labeling task and how it is presented to workers; including,
     * but not limited to price, keywords, and batch size (task count).</p>
     */
    inline CreateLabelingJobRequest& WithHumanTaskConfig(HumanTaskConfig&& value) { SetHumanTaskConfig(std::move(value)); return *this;}


    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateLabelingJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateLabelingJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateLabelingJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key/value pairs. For more information, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html#allocation-what">Using
     * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
     * Management User Guide</i>.</p>
     */
    inline CreateLabelingJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_labelingJobName;
    bool m_labelingJobNameHasBeenSet = false;

    Aws::String m_labelAttributeName;
    bool m_labelAttributeNameHasBeenSet = false;

    LabelingJobInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;

    LabelingJobOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_labelCategoryConfigS3Uri;
    bool m_labelCategoryConfigS3UriHasBeenSet = false;

    LabelingJobStoppingConditions m_stoppingConditions;
    bool m_stoppingConditionsHasBeenSet = false;

    LabelingJobAlgorithmsConfig m_labelingJobAlgorithmsConfig;
    bool m_labelingJobAlgorithmsConfigHasBeenSet = false;

    HumanTaskConfig m_humanTaskConfig;
    bool m_humanTaskConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
