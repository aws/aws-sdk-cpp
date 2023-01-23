/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/servicecatalog/model/ProvisioningArtifactType.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a provisioning artifact (also known as a version) for a
   * product.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactProperties">AWS
   * API Reference</a></p>
   */
  class ProvisioningArtifactProperties
  {
  public:
    AWS_SERVICECATALOG_API ProvisioningArtifactProperties();
    AWS_SERVICECATALOG_API ProvisioningArtifactProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProvisioningArtifactProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the provisioning artifact (for example, v1 v2beta). No spaces are
     * allowed.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the provisioning artifact (for example, v1 v2beta). No spaces are
     * allowed.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the provisioning artifact (for example, v1 v2beta). No spaces are
     * allowed.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the provisioning artifact (for example, v1 v2beta). No spaces are
     * allowed.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the provisioning artifact (for example, v1 v2beta). No spaces are
     * allowed.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the provisioning artifact (for example, v1 v2beta). No spaces are
     * allowed.</p>
     */
    inline ProvisioningArtifactProperties& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the provisioning artifact (for example, v1 v2beta). No spaces are
     * allowed.</p>
     */
    inline ProvisioningArtifactProperties& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the provisioning artifact (for example, v1 v2beta). No spaces are
     * allowed.</p>
     */
    inline ProvisioningArtifactProperties& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the provisioning artifact, including how it differs from
     * the previous provisioning artifact.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the provisioning artifact, including how it differs from
     * the previous provisioning artifact.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the provisioning artifact, including how it differs from
     * the previous provisioning artifact.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the provisioning artifact, including how it differs from
     * the previous provisioning artifact.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the provisioning artifact, including how it differs from
     * the previous provisioning artifact.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the provisioning artifact, including how it differs from
     * the previous provisioning artifact.</p>
     */
    inline ProvisioningArtifactProperties& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the provisioning artifact, including how it differs from
     * the previous provisioning artifact.</p>
     */
    inline ProvisioningArtifactProperties& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the provisioning artifact, including how it differs from
     * the previous provisioning artifact.</p>
     */
    inline ProvisioningArtifactProperties& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInfo() const{ return m_info; }

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline void SetInfo(const Aws::Map<Aws::String, Aws::String>& value) { m_infoHasBeenSet = true; m_info = value; }

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline void SetInfo(Aws::Map<Aws::String, Aws::String>&& value) { m_infoHasBeenSet = true; m_info = std::move(value); }

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline ProvisioningArtifactProperties& WithInfo(const Aws::Map<Aws::String, Aws::String>& value) { SetInfo(value); return *this;}

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline ProvisioningArtifactProperties& WithInfo(Aws::Map<Aws::String, Aws::String>&& value) { SetInfo(std::move(value)); return *this;}

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline ProvisioningArtifactProperties& AddInfo(const Aws::String& key, const Aws::String& value) { m_infoHasBeenSet = true; m_info.emplace(key, value); return *this; }

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline ProvisioningArtifactProperties& AddInfo(Aws::String&& key, const Aws::String& value) { m_infoHasBeenSet = true; m_info.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline ProvisioningArtifactProperties& AddInfo(const Aws::String& key, Aws::String&& value) { m_infoHasBeenSet = true; m_info.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline ProvisioningArtifactProperties& AddInfo(Aws::String&& key, Aws::String&& value) { m_infoHasBeenSet = true; m_info.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline ProvisioningArtifactProperties& AddInfo(const char* key, Aws::String&& value) { m_infoHasBeenSet = true; m_info.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline ProvisioningArtifactProperties& AddInfo(Aws::String&& key, const char* value) { m_infoHasBeenSet = true; m_info.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specify the template source with one of the following options, but not both.
     * Keys accepted: [ <code>LoadTemplateFromURL</code>,
     * <code>ImportFromPhysicalId</code> ]</p> <p>The URL of the CloudFormation
     * template in Amazon S3 or GitHub in JSON format. Specify the URL in JSON format
     * as follows:</p> <p> <code>"LoadTemplateFromURL":
     * "https://s3.amazonaws.com/cf-templates-ozkq9d3hgiq2-us-east-1/..."</code> </p>
     * <p> <code>ImportFromPhysicalId</code>: The physical id of the resource that
     * contains the template. Currently only supports CloudFormation stack arn. Specify
     * the physical id in JSON format as follows: <code>ImportFromPhysicalId:
     * “arn:aws:cloudformation:[us-east-1]:[accountId]:stack/[StackName]/[resourceId]</code>
     * </p>
     */
    inline ProvisioningArtifactProperties& AddInfo(const char* key, const char* value) { m_infoHasBeenSet = true; m_info.emplace(key, value); return *this; }


    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - CloudFormation template</p> </li> <li>
     * <p> <code>MARKETPLACE_AMI</code> - Amazon Web Services Marketplace AMI</p> </li>
     * <li> <p> <code>MARKETPLACE_CAR</code> - Amazon Web Services Marketplace Clusters
     * and Amazon Web Services Resources</p> </li> </ul>
     */
    inline const ProvisioningArtifactType& GetType() const{ return m_type; }

    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - CloudFormation template</p> </li> <li>
     * <p> <code>MARKETPLACE_AMI</code> - Amazon Web Services Marketplace AMI</p> </li>
     * <li> <p> <code>MARKETPLACE_CAR</code> - Amazon Web Services Marketplace Clusters
     * and Amazon Web Services Resources</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - CloudFormation template</p> </li> <li>
     * <p> <code>MARKETPLACE_AMI</code> - Amazon Web Services Marketplace AMI</p> </li>
     * <li> <p> <code>MARKETPLACE_CAR</code> - Amazon Web Services Marketplace Clusters
     * and Amazon Web Services Resources</p> </li> </ul>
     */
    inline void SetType(const ProvisioningArtifactType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - CloudFormation template</p> </li> <li>
     * <p> <code>MARKETPLACE_AMI</code> - Amazon Web Services Marketplace AMI</p> </li>
     * <li> <p> <code>MARKETPLACE_CAR</code> - Amazon Web Services Marketplace Clusters
     * and Amazon Web Services Resources</p> </li> </ul>
     */
    inline void SetType(ProvisioningArtifactType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - CloudFormation template</p> </li> <li>
     * <p> <code>MARKETPLACE_AMI</code> - Amazon Web Services Marketplace AMI</p> </li>
     * <li> <p> <code>MARKETPLACE_CAR</code> - Amazon Web Services Marketplace Clusters
     * and Amazon Web Services Resources</p> </li> </ul>
     */
    inline ProvisioningArtifactProperties& WithType(const ProvisioningArtifactType& value) { SetType(value); return *this;}

    /**
     * <p>The type of provisioning artifact.</p> <ul> <li> <p>
     * <code>CLOUD_FORMATION_TEMPLATE</code> - CloudFormation template</p> </li> <li>
     * <p> <code>MARKETPLACE_AMI</code> - Amazon Web Services Marketplace AMI</p> </li>
     * <li> <p> <code>MARKETPLACE_CAR</code> - Amazon Web Services Marketplace Clusters
     * and Amazon Web Services Resources</p> </li> </ul>
     */
    inline ProvisioningArtifactProperties& WithType(ProvisioningArtifactType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>If set to true, Service Catalog stops validating the specified provisioning
     * artifact even if it is invalid.</p>
     */
    inline bool GetDisableTemplateValidation() const{ return m_disableTemplateValidation; }

    /**
     * <p>If set to true, Service Catalog stops validating the specified provisioning
     * artifact even if it is invalid.</p>
     */
    inline bool DisableTemplateValidationHasBeenSet() const { return m_disableTemplateValidationHasBeenSet; }

    /**
     * <p>If set to true, Service Catalog stops validating the specified provisioning
     * artifact even if it is invalid.</p>
     */
    inline void SetDisableTemplateValidation(bool value) { m_disableTemplateValidationHasBeenSet = true; m_disableTemplateValidation = value; }

    /**
     * <p>If set to true, Service Catalog stops validating the specified provisioning
     * artifact even if it is invalid.</p>
     */
    inline ProvisioningArtifactProperties& WithDisableTemplateValidation(bool value) { SetDisableTemplateValidation(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_info;
    bool m_infoHasBeenSet = false;

    ProvisioningArtifactType m_type;
    bool m_typeHasBeenSet = false;

    bool m_disableTemplateValidation;
    bool m_disableTemplateValidationHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
