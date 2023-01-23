/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/snowball/model/JobType.h>
#include <aws/snowball/model/JobResource.h>
#include <aws/snowball/model/OnDeviceServiceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/SnowballCapacity.h>
#include <aws/snowball/model/ShippingOption.h>
#include <aws/snowball/model/Notification.h>
#include <aws/snowball/model/SnowballType.h>
#include <aws/snowball/model/TaxDocuments.h>
#include <aws/snowball/model/DeviceConfiguration.h>
#include <aws/snowball/model/RemoteManagement.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class CreateJobRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API CreateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline const JobType& GetJobType() const{ return m_jobType; }

    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline CreateJobRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    /**
     * <p>Defines the type of job that you're creating. </p>
     */
    inline CreateJobRequest& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}


    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline const JobResource& GetResources() const{ return m_resources; }

    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }

    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline void SetResources(const JobResource& value) { m_resourcesHasBeenSet = true; m_resources = value; }

    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline void SetResources(JobResource&& value) { m_resourcesHasBeenSet = true; m_resources = std::move(value); }

    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline CreateJobRequest& WithResources(const JobResource& value) { SetResources(value); return *this;}

    /**
     * <p>Defines the Amazon S3 buckets associated with this job.</p> <p>With
     * <code>IMPORT</code> jobs, you specify the bucket or buckets that your
     * transferred data will be imported into.</p> <p>With <code>EXPORT</code> jobs,
     * you specify the bucket or buckets that your transferred data will be exported
     * from. Optionally, you can also specify a <code>KeyRange</code> value. If you
     * choose to export a range, you define the length of the range by providing either
     * an inclusive <code>BeginMarker</code> value, an inclusive <code>EndMarker</code>
     * value, or both. Ranges are UTF-8 binary sorted.</p>
     */
    inline CreateJobRequest& WithResources(JobResource&& value) { SetResources(std::move(value)); return *this;}


    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System) and the Amazon Web
     * Services Storage Gateway service Tape Gateway type.</p>
     */
    inline const OnDeviceServiceConfiguration& GetOnDeviceServiceConfiguration() const{ return m_onDeviceServiceConfiguration; }

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System) and the Amazon Web
     * Services Storage Gateway service Tape Gateway type.</p>
     */
    inline bool OnDeviceServiceConfigurationHasBeenSet() const { return m_onDeviceServiceConfigurationHasBeenSet; }

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System) and the Amazon Web
     * Services Storage Gateway service Tape Gateway type.</p>
     */
    inline void SetOnDeviceServiceConfiguration(const OnDeviceServiceConfiguration& value) { m_onDeviceServiceConfigurationHasBeenSet = true; m_onDeviceServiceConfiguration = value; }

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System) and the Amazon Web
     * Services Storage Gateway service Tape Gateway type.</p>
     */
    inline void SetOnDeviceServiceConfiguration(OnDeviceServiceConfiguration&& value) { m_onDeviceServiceConfigurationHasBeenSet = true; m_onDeviceServiceConfiguration = std::move(value); }

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System) and the Amazon Web
     * Services Storage Gateway service Tape Gateway type.</p>
     */
    inline CreateJobRequest& WithOnDeviceServiceConfiguration(const OnDeviceServiceConfiguration& value) { SetOnDeviceServiceConfiguration(value); return *this;}

    /**
     * <p>Specifies the service or services on the Snow Family device that your
     * transferred data will be exported from or imported into. Amazon Web Services
     * Snow Family supports Amazon S3 and NFS (Network File System) and the Amazon Web
     * Services Storage Gateway service Tape Gateway type.</p>
     */
    inline CreateJobRequest& WithOnDeviceServiceConfiguration(OnDeviceServiceConfiguration&& value) { SetOnDeviceServiceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline CreateJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline CreateJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Defines an optional description of this specific job, for example
     * <code>Important Photos 2016-08-11</code>.</p>
     */
    inline CreateJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID for the address that you want the Snow device shipped to.</p>
     */
    inline const Aws::String& GetAddressId() const{ return m_addressId; }

    /**
     * <p>The ID for the address that you want the Snow device shipped to.</p>
     */
    inline bool AddressIdHasBeenSet() const { return m_addressIdHasBeenSet; }

    /**
     * <p>The ID for the address that you want the Snow device shipped to.</p>
     */
    inline void SetAddressId(const Aws::String& value) { m_addressIdHasBeenSet = true; m_addressId = value; }

    /**
     * <p>The ID for the address that you want the Snow device shipped to.</p>
     */
    inline void SetAddressId(Aws::String&& value) { m_addressIdHasBeenSet = true; m_addressId = std::move(value); }

    /**
     * <p>The ID for the address that you want the Snow device shipped to.</p>
     */
    inline void SetAddressId(const char* value) { m_addressIdHasBeenSet = true; m_addressId.assign(value); }

    /**
     * <p>The ID for the address that you want the Snow device shipped to.</p>
     */
    inline CreateJobRequest& WithAddressId(const Aws::String& value) { SetAddressId(value); return *this;}

    /**
     * <p>The ID for the address that you want the Snow device shipped to.</p>
     */
    inline CreateJobRequest& WithAddressId(Aws::String&& value) { SetAddressId(std::move(value)); return *this;}

    /**
     * <p>The ID for the address that you want the Snow device shipped to.</p>
     */
    inline CreateJobRequest& WithAddressId(const char* value) { SetAddressId(value); return *this;}


    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * Key Management Service (KMS) API action.</p>
     */
    inline const Aws::String& GetKmsKeyARN() const{ return m_kmsKeyARN; }

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * Key Management Service (KMS) API action.</p>
     */
    inline bool KmsKeyARNHasBeenSet() const { return m_kmsKeyARNHasBeenSet; }

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * Key Management Service (KMS) API action.</p>
     */
    inline void SetKmsKeyARN(const Aws::String& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = value; }

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * Key Management Service (KMS) API action.</p>
     */
    inline void SetKmsKeyARN(Aws::String&& value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN = std::move(value); }

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * Key Management Service (KMS) API action.</p>
     */
    inline void SetKmsKeyARN(const char* value) { m_kmsKeyARNHasBeenSet = true; m_kmsKeyARN.assign(value); }

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * Key Management Service (KMS) API action.</p>
     */
    inline CreateJobRequest& WithKmsKeyARN(const Aws::String& value) { SetKmsKeyARN(value); return *this;}

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * Key Management Service (KMS) API action.</p>
     */
    inline CreateJobRequest& WithKmsKeyARN(Aws::String&& value) { SetKmsKeyARN(std::move(value)); return *this;}

    /**
     * <p>The <code>KmsKeyARN</code> that you want to associate with this job.
     * <code>KmsKeyARN</code>s are created using the <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_CreateKey.html">CreateKey</a>
     * Key Management Service (KMS) API action.</p>
     */
    inline CreateJobRequest& WithKmsKeyARN(const char* value) { SetKmsKeyARN(value); return *this;}


    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * Identity and Access Management (IAM) API action.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * Identity and Access Management (IAM) API action.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * Identity and Access Management (IAM) API action.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * Identity and Access Management (IAM) API action.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * Identity and Access Management (IAM) API action.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * Identity and Access Management (IAM) API action.</p>
     */
    inline CreateJobRequest& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * Identity and Access Management (IAM) API action.</p>
     */
    inline CreateJobRequest& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The <code>RoleARN</code> that you want to associate with this job.
     * <code>RoleArn</code>s are created using the <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_CreateRole.html">CreateRole</a>
     * Identity and Access Management (IAM) API action.</p>
     */
    inline CreateJobRequest& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snow device you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline const SnowballCapacity& GetSnowballCapacityPreference() const{ return m_snowballCapacityPreference; }

    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snow device you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline bool SnowballCapacityPreferenceHasBeenSet() const { return m_snowballCapacityPreferenceHasBeenSet; }

    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snow device you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline void SetSnowballCapacityPreference(const SnowballCapacity& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = value; }

    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snow device you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline void SetSnowballCapacityPreference(SnowballCapacity&& value) { m_snowballCapacityPreferenceHasBeenSet = true; m_snowballCapacityPreference = std::move(value); }

    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snow device you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline CreateJobRequest& WithSnowballCapacityPreference(const SnowballCapacity& value) { SetSnowballCapacityPreference(value); return *this;}

    /**
     * <p>If your job is being created in one of the US regions, you have the option of
     * specifying what size Snow device you'd like for this job. In all other regions,
     * Snowballs come with 80 TB in storage capacity.</p> <p>For more information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline CreateJobRequest& WithSnowballCapacityPreference(SnowballCapacity&& value) { SetSnowballCapacityPreference(std::move(value)); return *this;}


    /**
     * <p>The shipping speed for this job. This speed doesn't dictate how soon you'll
     * get the Snow device, rather it represents how quickly the Snow device moves to
     * its destination while in transit. Regional shipping speeds are as follows:</p>
     * <ul> <li> <p>In Australia, you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day.</p> </li> <li> <p>In the
     * European Union (EU), you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day. In addition, most
     * countries in the EU have access to standard shipping, which typically takes less
     * than a week, one way.</p> </li> <li> <p>In India, Snow devices are delivered in
     * one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline const ShippingOption& GetShippingOption() const{ return m_shippingOption; }

    /**
     * <p>The shipping speed for this job. This speed doesn't dictate how soon you'll
     * get the Snow device, rather it represents how quickly the Snow device moves to
     * its destination while in transit. Regional shipping speeds are as follows:</p>
     * <ul> <li> <p>In Australia, you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day.</p> </li> <li> <p>In the
     * European Union (EU), you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day. In addition, most
     * countries in the EU have access to standard shipping, which typically takes less
     * than a week, one way.</p> </li> <li> <p>In India, Snow devices are delivered in
     * one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline bool ShippingOptionHasBeenSet() const { return m_shippingOptionHasBeenSet; }

    /**
     * <p>The shipping speed for this job. This speed doesn't dictate how soon you'll
     * get the Snow device, rather it represents how quickly the Snow device moves to
     * its destination while in transit. Regional shipping speeds are as follows:</p>
     * <ul> <li> <p>In Australia, you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day.</p> </li> <li> <p>In the
     * European Union (EU), you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day. In addition, most
     * countries in the EU have access to standard shipping, which typically takes less
     * than a week, one way.</p> </li> <li> <p>In India, Snow devices are delivered in
     * one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline void SetShippingOption(const ShippingOption& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = value; }

    /**
     * <p>The shipping speed for this job. This speed doesn't dictate how soon you'll
     * get the Snow device, rather it represents how quickly the Snow device moves to
     * its destination while in transit. Regional shipping speeds are as follows:</p>
     * <ul> <li> <p>In Australia, you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day.</p> </li> <li> <p>In the
     * European Union (EU), you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day. In addition, most
     * countries in the EU have access to standard shipping, which typically takes less
     * than a week, one way.</p> </li> <li> <p>In India, Snow devices are delivered in
     * one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline void SetShippingOption(ShippingOption&& value) { m_shippingOptionHasBeenSet = true; m_shippingOption = std::move(value); }

    /**
     * <p>The shipping speed for this job. This speed doesn't dictate how soon you'll
     * get the Snow device, rather it represents how quickly the Snow device moves to
     * its destination while in transit. Regional shipping speeds are as follows:</p>
     * <ul> <li> <p>In Australia, you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day.</p> </li> <li> <p>In the
     * European Union (EU), you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day. In addition, most
     * countries in the EU have access to standard shipping, which typically takes less
     * than a week, one way.</p> </li> <li> <p>In India, Snow devices are delivered in
     * one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline CreateJobRequest& WithShippingOption(const ShippingOption& value) { SetShippingOption(value); return *this;}

    /**
     * <p>The shipping speed for this job. This speed doesn't dictate how soon you'll
     * get the Snow device, rather it represents how quickly the Snow device moves to
     * its destination while in transit. Regional shipping speeds are as follows:</p>
     * <ul> <li> <p>In Australia, you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day.</p> </li> <li> <p>In the
     * European Union (EU), you have access to express shipping. Typically, Snow
     * devices shipped express are delivered in about a day. In addition, most
     * countries in the EU have access to standard shipping, which typically takes less
     * than a week, one way.</p> </li> <li> <p>In India, Snow devices are delivered in
     * one to seven days.</p> </li> <li> <p>In the US, you have access to one-day
     * shipping and two-day shipping.</p> </li> </ul>
     */
    inline CreateJobRequest& WithShippingOption(ShippingOption&& value) { SetShippingOption(std::move(value)); return *this;}


    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline const Notification& GetNotification() const{ return m_notification; }

    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline bool NotificationHasBeenSet() const { return m_notificationHasBeenSet; }

    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline void SetNotification(const Notification& value) { m_notificationHasBeenSet = true; m_notification = value; }

    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline void SetNotification(Notification&& value) { m_notificationHasBeenSet = true; m_notification = std::move(value); }

    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline CreateJobRequest& WithNotification(const Notification& value) { SetNotification(value); return *this;}

    /**
     * <p>Defines the Amazon Simple Notification Service (Amazon SNS) notification
     * settings for this job.</p>
     */
    inline CreateJobRequest& WithNotification(Notification&& value) { SetNotification(std::move(value)); return *this;}


    /**
     * <p>The ID of a cluster. If you're creating a job for a node in a cluster, you
     * need to provide only this <code>clusterId</code> value. The other job attributes
     * are inherited from the cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The ID of a cluster. If you're creating a job for a node in a cluster, you
     * need to provide only this <code>clusterId</code> value. The other job attributes
     * are inherited from the cluster.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The ID of a cluster. If you're creating a job for a node in a cluster, you
     * need to provide only this <code>clusterId</code> value. The other job attributes
     * are inherited from the cluster.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The ID of a cluster. If you're creating a job for a node in a cluster, you
     * need to provide only this <code>clusterId</code> value. The other job attributes
     * are inherited from the cluster.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The ID of a cluster. If you're creating a job for a node in a cluster, you
     * need to provide only this <code>clusterId</code> value. The other job attributes
     * are inherited from the cluster.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The ID of a cluster. If you're creating a job for a node in a cluster, you
     * need to provide only this <code>clusterId</code> value. The other job attributes
     * are inherited from the cluster.</p>
     */
    inline CreateJobRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The ID of a cluster. If you're creating a job for a node in a cluster, you
     * need to provide only this <code>clusterId</code> value. The other job attributes
     * are inherited from the cluster.</p>
     */
    inline CreateJobRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The ID of a cluster. If you're creating a job for a node in a cluster, you
     * need to provide only this <code>clusterId</code> value. The other job attributes
     * are inherited from the cluster.</p>
     */
    inline CreateJobRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The type of Snow Family devices to use for this job. </p>  <p>For
     * cluster jobs, Amazon Web Services Snow Family currently supports only the
     * <code>EDGE</code> device type.</p>  <p>The type of Amazon Web Services
     * Snow device to use for this job. Currently, the only supported device type for
     * cluster jobs is <code>EDGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/snowball/latest/developer-guide/device-differences.html">Snowball
     * Edge Device Options</a> in the Snowball Edge Developer Guide.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline const SnowballType& GetSnowballType() const{ return m_snowballType; }

    /**
     * <p>The type of Snow Family devices to use for this job. </p>  <p>For
     * cluster jobs, Amazon Web Services Snow Family currently supports only the
     * <code>EDGE</code> device type.</p>  <p>The type of Amazon Web Services
     * Snow device to use for this job. Currently, the only supported device type for
     * cluster jobs is <code>EDGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/snowball/latest/developer-guide/device-differences.html">Snowball
     * Edge Device Options</a> in the Snowball Edge Developer Guide.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline bool SnowballTypeHasBeenSet() const { return m_snowballTypeHasBeenSet; }

    /**
     * <p>The type of Snow Family devices to use for this job. </p>  <p>For
     * cluster jobs, Amazon Web Services Snow Family currently supports only the
     * <code>EDGE</code> device type.</p>  <p>The type of Amazon Web Services
     * Snow device to use for this job. Currently, the only supported device type for
     * cluster jobs is <code>EDGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/snowball/latest/developer-guide/device-differences.html">Snowball
     * Edge Device Options</a> in the Snowball Edge Developer Guide.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline void SetSnowballType(const SnowballType& value) { m_snowballTypeHasBeenSet = true; m_snowballType = value; }

    /**
     * <p>The type of Snow Family devices to use for this job. </p>  <p>For
     * cluster jobs, Amazon Web Services Snow Family currently supports only the
     * <code>EDGE</code> device type.</p>  <p>The type of Amazon Web Services
     * Snow device to use for this job. Currently, the only supported device type for
     * cluster jobs is <code>EDGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/snowball/latest/developer-guide/device-differences.html">Snowball
     * Edge Device Options</a> in the Snowball Edge Developer Guide.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline void SetSnowballType(SnowballType&& value) { m_snowballTypeHasBeenSet = true; m_snowballType = std::move(value); }

    /**
     * <p>The type of Snow Family devices to use for this job. </p>  <p>For
     * cluster jobs, Amazon Web Services Snow Family currently supports only the
     * <code>EDGE</code> device type.</p>  <p>The type of Amazon Web Services
     * Snow device to use for this job. Currently, the only supported device type for
     * cluster jobs is <code>EDGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/snowball/latest/developer-guide/device-differences.html">Snowball
     * Edge Device Options</a> in the Snowball Edge Developer Guide.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline CreateJobRequest& WithSnowballType(const SnowballType& value) { SetSnowballType(value); return *this;}

    /**
     * <p>The type of Snow Family devices to use for this job. </p>  <p>For
     * cluster jobs, Amazon Web Services Snow Family currently supports only the
     * <code>EDGE</code> device type.</p>  <p>The type of Amazon Web Services
     * Snow device to use for this job. Currently, the only supported device type for
     * cluster jobs is <code>EDGE</code>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/snowball/latest/developer-guide/device-differences.html">Snowball
     * Edge Device Options</a> in the Snowball Edge Developer Guide.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline CreateJobRequest& WithSnowballType(SnowballType&& value) { SetSnowballType(std::move(value)); return *this;}


    /**
     * <p>The forwarding address ID for a job. This field is not supported in most
     * Regions.</p>
     */
    inline const Aws::String& GetForwardingAddressId() const{ return m_forwardingAddressId; }

    /**
     * <p>The forwarding address ID for a job. This field is not supported in most
     * Regions.</p>
     */
    inline bool ForwardingAddressIdHasBeenSet() const { return m_forwardingAddressIdHasBeenSet; }

    /**
     * <p>The forwarding address ID for a job. This field is not supported in most
     * Regions.</p>
     */
    inline void SetForwardingAddressId(const Aws::String& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = value; }

    /**
     * <p>The forwarding address ID for a job. This field is not supported in most
     * Regions.</p>
     */
    inline void SetForwardingAddressId(Aws::String&& value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId = std::move(value); }

    /**
     * <p>The forwarding address ID for a job. This field is not supported in most
     * Regions.</p>
     */
    inline void SetForwardingAddressId(const char* value) { m_forwardingAddressIdHasBeenSet = true; m_forwardingAddressId.assign(value); }

    /**
     * <p>The forwarding address ID for a job. This field is not supported in most
     * Regions.</p>
     */
    inline CreateJobRequest& WithForwardingAddressId(const Aws::String& value) { SetForwardingAddressId(value); return *this;}

    /**
     * <p>The forwarding address ID for a job. This field is not supported in most
     * Regions.</p>
     */
    inline CreateJobRequest& WithForwardingAddressId(Aws::String&& value) { SetForwardingAddressId(std::move(value)); return *this;}

    /**
     * <p>The forwarding address ID for a job. This field is not supported in most
     * Regions.</p>
     */
    inline CreateJobRequest& WithForwardingAddressId(const char* value) { SetForwardingAddressId(value); return *this;}


    /**
     * <p>The tax documents required in your Amazon Web Services Region.</p>
     */
    inline const TaxDocuments& GetTaxDocuments() const{ return m_taxDocuments; }

    /**
     * <p>The tax documents required in your Amazon Web Services Region.</p>
     */
    inline bool TaxDocumentsHasBeenSet() const { return m_taxDocumentsHasBeenSet; }

    /**
     * <p>The tax documents required in your Amazon Web Services Region.</p>
     */
    inline void SetTaxDocuments(const TaxDocuments& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = value; }

    /**
     * <p>The tax documents required in your Amazon Web Services Region.</p>
     */
    inline void SetTaxDocuments(TaxDocuments&& value) { m_taxDocumentsHasBeenSet = true; m_taxDocuments = std::move(value); }

    /**
     * <p>The tax documents required in your Amazon Web Services Region.</p>
     */
    inline CreateJobRequest& WithTaxDocuments(const TaxDocuments& value) { SetTaxDocuments(value); return *this;}

    /**
     * <p>The tax documents required in your Amazon Web Services Region.</p>
     */
    inline CreateJobRequest& WithTaxDocuments(TaxDocuments&& value) { SetTaxDocuments(std::move(value)); return *this;}


    /**
     * <p>Defines the device configuration for an Snowcone job.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline const DeviceConfiguration& GetDeviceConfiguration() const{ return m_deviceConfiguration; }

    /**
     * <p>Defines the device configuration for an Snowcone job.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline bool DeviceConfigurationHasBeenSet() const { return m_deviceConfigurationHasBeenSet; }

    /**
     * <p>Defines the device configuration for an Snowcone job.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline void SetDeviceConfiguration(const DeviceConfiguration& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = value; }

    /**
     * <p>Defines the device configuration for an Snowcone job.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline void SetDeviceConfiguration(DeviceConfiguration&& value) { m_deviceConfigurationHasBeenSet = true; m_deviceConfiguration = std::move(value); }

    /**
     * <p>Defines the device configuration for an Snowcone job.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline CreateJobRequest& WithDeviceConfiguration(const DeviceConfiguration& value) { SetDeviceConfiguration(value); return *this;}

    /**
     * <p>Defines the device configuration for an Snowcone job.</p> <p>For more
     * information, see
     * "https://docs.aws.amazon.com/snowball/latest/snowcone-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i> or
     * "https://docs.aws.amazon.com/snowball/latest/developer-guide/snow-device-types.html"
     * (Snow Family Devices and Capacity) in the <i>Snowcone User Guide</i>.</p>
     */
    inline CreateJobRequest& WithDeviceConfiguration(DeviceConfiguration&& value) { SetDeviceConfiguration(std::move(value)); return *this;}


    /**
     * <p>Allows you to securely operate and manage Snowcone devices remotely from
     * outside of your internal network. When set to <code>INSTALLED_AUTOSTART</code>,
     * remote management will automatically be available when the device arrives at
     * your location. Otherwise, you need to use the Snowball Client to manage the
     * device.</p>
     */
    inline const RemoteManagement& GetRemoteManagement() const{ return m_remoteManagement; }

    /**
     * <p>Allows you to securely operate and manage Snowcone devices remotely from
     * outside of your internal network. When set to <code>INSTALLED_AUTOSTART</code>,
     * remote management will automatically be available when the device arrives at
     * your location. Otherwise, you need to use the Snowball Client to manage the
     * device.</p>
     */
    inline bool RemoteManagementHasBeenSet() const { return m_remoteManagementHasBeenSet; }

    /**
     * <p>Allows you to securely operate and manage Snowcone devices remotely from
     * outside of your internal network. When set to <code>INSTALLED_AUTOSTART</code>,
     * remote management will automatically be available when the device arrives at
     * your location. Otherwise, you need to use the Snowball Client to manage the
     * device.</p>
     */
    inline void SetRemoteManagement(const RemoteManagement& value) { m_remoteManagementHasBeenSet = true; m_remoteManagement = value; }

    /**
     * <p>Allows you to securely operate and manage Snowcone devices remotely from
     * outside of your internal network. When set to <code>INSTALLED_AUTOSTART</code>,
     * remote management will automatically be available when the device arrives at
     * your location. Otherwise, you need to use the Snowball Client to manage the
     * device.</p>
     */
    inline void SetRemoteManagement(RemoteManagement&& value) { m_remoteManagementHasBeenSet = true; m_remoteManagement = std::move(value); }

    /**
     * <p>Allows you to securely operate and manage Snowcone devices remotely from
     * outside of your internal network. When set to <code>INSTALLED_AUTOSTART</code>,
     * remote management will automatically be available when the device arrives at
     * your location. Otherwise, you need to use the Snowball Client to manage the
     * device.</p>
     */
    inline CreateJobRequest& WithRemoteManagement(const RemoteManagement& value) { SetRemoteManagement(value); return *this;}

    /**
     * <p>Allows you to securely operate and manage Snowcone devices remotely from
     * outside of your internal network. When set to <code>INSTALLED_AUTOSTART</code>,
     * remote management will automatically be available when the device arrives at
     * your location. Otherwise, you need to use the Snowball Client to manage the
     * device.</p>
     */
    inline CreateJobRequest& WithRemoteManagement(RemoteManagement&& value) { SetRemoteManagement(std::move(value)); return *this;}


    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline const Aws::String& GetLongTermPricingId() const{ return m_longTermPricingId; }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline bool LongTermPricingIdHasBeenSet() const { return m_longTermPricingIdHasBeenSet; }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline void SetLongTermPricingId(const Aws::String& value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId = value; }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline void SetLongTermPricingId(Aws::String&& value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId = std::move(value); }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline void SetLongTermPricingId(const char* value) { m_longTermPricingIdHasBeenSet = true; m_longTermPricingId.assign(value); }

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline CreateJobRequest& WithLongTermPricingId(const Aws::String& value) { SetLongTermPricingId(value); return *this;}

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline CreateJobRequest& WithLongTermPricingId(Aws::String&& value) { SetLongTermPricingId(std::move(value)); return *this;}

    /**
     * <p>The ID of the long-term pricing type for the device.</p>
     */
    inline CreateJobRequest& WithLongTermPricingId(const char* value) { SetLongTermPricingId(value); return *this;}

  private:

    JobType m_jobType;
    bool m_jobTypeHasBeenSet = false;

    JobResource m_resources;
    bool m_resourcesHasBeenSet = false;

    OnDeviceServiceConfiguration m_onDeviceServiceConfiguration;
    bool m_onDeviceServiceConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_addressId;
    bool m_addressIdHasBeenSet = false;

    Aws::String m_kmsKeyARN;
    bool m_kmsKeyARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    SnowballCapacity m_snowballCapacityPreference;
    bool m_snowballCapacityPreferenceHasBeenSet = false;

    ShippingOption m_shippingOption;
    bool m_shippingOptionHasBeenSet = false;

    Notification m_notification;
    bool m_notificationHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    SnowballType m_snowballType;
    bool m_snowballTypeHasBeenSet = false;

    Aws::String m_forwardingAddressId;
    bool m_forwardingAddressIdHasBeenSet = false;

    TaxDocuments m_taxDocuments;
    bool m_taxDocumentsHasBeenSet = false;

    DeviceConfiguration m_deviceConfiguration;
    bool m_deviceConfigurationHasBeenSet = false;

    RemoteManagement m_remoteManagement;
    bool m_remoteManagementHasBeenSet = false;

    Aws::String m_longTermPricingId;
    bool m_longTermPricingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
