/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ResilienceHub
{
namespace Model
{
  class DescribeAppVersionTemplateResult
  {
  public:
    AWS_RESILIENCEHUB_API DescribeAppVersionTemplateResult();
    AWS_RESILIENCEHUB_API DescribeAppVersionTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API DescribeAppVersionTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline DescribeAppVersionTemplateResult& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline DescribeAppVersionTemplateResult& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline DescribeAppVersionTemplateResult& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>A JSON string that provides information about your application structure. To
     * learn more about the <code>appTemplateBody</code> template, see the sample
     * template provided in the <i>Examples</i> section.</p> <p>The
     * <code>appTemplateBody</code> JSON string has the following structure:</p> <ul>
     * <li> <p> <b> <code>resources</code> </b> </p> <p>The list of logical resources
     * that must be included in the Resilience Hub application.</p> <p>Type: Array</p>
     *  <p>Don't add the resources that you want to exclude.</p>  <p>Each
     * <code>resources</code> array item includes the following fields:</p> <ul> <li>
     * <p> <i> <code>logicalResourceId</code> </i> </p> <p>Logical identifier of the
     * resource.</p> <p>Type: Object</p> <p>Each <code>logicalResourceId</code> object
     * includes the following fields:</p> <ul> <li> <p> <code>identifier</code> </p>
     * <p>Identifier of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>logicalStackName</code> </p> <p>The name of the CloudFormation stack this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceGroupName</code> </p> <p>The name of the resource group this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> <li> <p> <i> <code>type</code> </i> </p> <p>The
     * type of resource.</p> <p>Type: string</p> </li> <li> <p> <i> <code>name</code>
     * </i> </p> <p>The name of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>appComponents</code> </b> </p> <p>List of Application
     * Components that this resource belongs to. If an Application Component is not
     * part of the Resilience Hub application, it will be added.</p> <p>Type: Array</p>
     * <p>Each <code>appComponents</code> array item includes the following fields:</p>
     * <ul> <li> <p> <code>name</code> </p> <p>Name of the Application Component.</p>
     * <p>Type: String</p> </li> <li> <p> <code>type</code> </p> <p>Type of Application
     * Component. For more information about the types of Application Component, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/AppComponent.grouping.html">Grouping
     * resources in an AppComponent</a>.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceNames</code> </p> <p>The list of included resources that are
     * assigned to the Application Component.</p> <p>Type: Array of strings</p> </li>
     * <li> <p> <code>additionalInfo</code> </p> <p>Additional configuration parameters
     * for an Resilience Hub application. If you want to implement
     * <code>additionalInfo</code> through the Resilience Hub console rather than using
     * an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>excludedResources</code> </b> </p> <p>The list of
     * logical resource identifiers to be excluded from the application.</p> <p>Type:
     * Array</p>  <p>Don't add the resources that you want to include.</p>
     *  <p>Each <code>excludedResources</code> array item includes the following
     * fields:</p> <ul> <li> <p> <i> <code>logicalResourceIds</code> </i> </p>
     * <p>Logical identifier of the resource.</p> <p>Type: Object</p>  <p>You can
     * configure only one of the following fields:</p> <ul> <li> <p>
     * <code>logicalStackName</code> </p> </li> <li> <p> <code>resourceGroupName</code>
     * </p> </li> <li> <p> <code>terraformSourceName</code> </p> </li> <li> <p>
     * <code>eksSourceName</code> </p> </li> </ul>  <p>Each
     * <code>logicalResourceIds</code> object includes the following fields:</p> <ul>
     * <li> <p> <code>identifier</code> </p> <p>Identifier of the resource.</p>
     * <p>Type: String</p> </li> <li> <p> <code>logicalStackName</code> </p> <p>The
     * name of the CloudFormation stack this resource belongs to.</p> <p>Type:
     * String</p> </li> <li> <p> <code>resourceGroupName</code> </p> <p>The name of the
     * resource group this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> </ul> </li> <li> <p> <b> <code>version</code> </b>
     * </p> <p>Resilience Hub application version.</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     */
    inline const Aws::String& GetAppTemplateBody() const{ return m_appTemplateBody; }

    /**
     * <p>A JSON string that provides information about your application structure. To
     * learn more about the <code>appTemplateBody</code> template, see the sample
     * template provided in the <i>Examples</i> section.</p> <p>The
     * <code>appTemplateBody</code> JSON string has the following structure:</p> <ul>
     * <li> <p> <b> <code>resources</code> </b> </p> <p>The list of logical resources
     * that must be included in the Resilience Hub application.</p> <p>Type: Array</p>
     *  <p>Don't add the resources that you want to exclude.</p>  <p>Each
     * <code>resources</code> array item includes the following fields:</p> <ul> <li>
     * <p> <i> <code>logicalResourceId</code> </i> </p> <p>Logical identifier of the
     * resource.</p> <p>Type: Object</p> <p>Each <code>logicalResourceId</code> object
     * includes the following fields:</p> <ul> <li> <p> <code>identifier</code> </p>
     * <p>Identifier of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>logicalStackName</code> </p> <p>The name of the CloudFormation stack this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceGroupName</code> </p> <p>The name of the resource group this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> <li> <p> <i> <code>type</code> </i> </p> <p>The
     * type of resource.</p> <p>Type: string</p> </li> <li> <p> <i> <code>name</code>
     * </i> </p> <p>The name of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>appComponents</code> </b> </p> <p>List of Application
     * Components that this resource belongs to. If an Application Component is not
     * part of the Resilience Hub application, it will be added.</p> <p>Type: Array</p>
     * <p>Each <code>appComponents</code> array item includes the following fields:</p>
     * <ul> <li> <p> <code>name</code> </p> <p>Name of the Application Component.</p>
     * <p>Type: String</p> </li> <li> <p> <code>type</code> </p> <p>Type of Application
     * Component. For more information about the types of Application Component, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/AppComponent.grouping.html">Grouping
     * resources in an AppComponent</a>.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceNames</code> </p> <p>The list of included resources that are
     * assigned to the Application Component.</p> <p>Type: Array of strings</p> </li>
     * <li> <p> <code>additionalInfo</code> </p> <p>Additional configuration parameters
     * for an Resilience Hub application. If you want to implement
     * <code>additionalInfo</code> through the Resilience Hub console rather than using
     * an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>excludedResources</code> </b> </p> <p>The list of
     * logical resource identifiers to be excluded from the application.</p> <p>Type:
     * Array</p>  <p>Don't add the resources that you want to include.</p>
     *  <p>Each <code>excludedResources</code> array item includes the following
     * fields:</p> <ul> <li> <p> <i> <code>logicalResourceIds</code> </i> </p>
     * <p>Logical identifier of the resource.</p> <p>Type: Object</p>  <p>You can
     * configure only one of the following fields:</p> <ul> <li> <p>
     * <code>logicalStackName</code> </p> </li> <li> <p> <code>resourceGroupName</code>
     * </p> </li> <li> <p> <code>terraformSourceName</code> </p> </li> <li> <p>
     * <code>eksSourceName</code> </p> </li> </ul>  <p>Each
     * <code>logicalResourceIds</code> object includes the following fields:</p> <ul>
     * <li> <p> <code>identifier</code> </p> <p>Identifier of the resource.</p>
     * <p>Type: String</p> </li> <li> <p> <code>logicalStackName</code> </p> <p>The
     * name of the CloudFormation stack this resource belongs to.</p> <p>Type:
     * String</p> </li> <li> <p> <code>resourceGroupName</code> </p> <p>The name of the
     * resource group this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> </ul> </li> <li> <p> <b> <code>version</code> </b>
     * </p> <p>Resilience Hub application version.</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     */
    inline void SetAppTemplateBody(const Aws::String& value) { m_appTemplateBody = value; }

    /**
     * <p>A JSON string that provides information about your application structure. To
     * learn more about the <code>appTemplateBody</code> template, see the sample
     * template provided in the <i>Examples</i> section.</p> <p>The
     * <code>appTemplateBody</code> JSON string has the following structure:</p> <ul>
     * <li> <p> <b> <code>resources</code> </b> </p> <p>The list of logical resources
     * that must be included in the Resilience Hub application.</p> <p>Type: Array</p>
     *  <p>Don't add the resources that you want to exclude.</p>  <p>Each
     * <code>resources</code> array item includes the following fields:</p> <ul> <li>
     * <p> <i> <code>logicalResourceId</code> </i> </p> <p>Logical identifier of the
     * resource.</p> <p>Type: Object</p> <p>Each <code>logicalResourceId</code> object
     * includes the following fields:</p> <ul> <li> <p> <code>identifier</code> </p>
     * <p>Identifier of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>logicalStackName</code> </p> <p>The name of the CloudFormation stack this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceGroupName</code> </p> <p>The name of the resource group this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> <li> <p> <i> <code>type</code> </i> </p> <p>The
     * type of resource.</p> <p>Type: string</p> </li> <li> <p> <i> <code>name</code>
     * </i> </p> <p>The name of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>appComponents</code> </b> </p> <p>List of Application
     * Components that this resource belongs to. If an Application Component is not
     * part of the Resilience Hub application, it will be added.</p> <p>Type: Array</p>
     * <p>Each <code>appComponents</code> array item includes the following fields:</p>
     * <ul> <li> <p> <code>name</code> </p> <p>Name of the Application Component.</p>
     * <p>Type: String</p> </li> <li> <p> <code>type</code> </p> <p>Type of Application
     * Component. For more information about the types of Application Component, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/AppComponent.grouping.html">Grouping
     * resources in an AppComponent</a>.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceNames</code> </p> <p>The list of included resources that are
     * assigned to the Application Component.</p> <p>Type: Array of strings</p> </li>
     * <li> <p> <code>additionalInfo</code> </p> <p>Additional configuration parameters
     * for an Resilience Hub application. If you want to implement
     * <code>additionalInfo</code> through the Resilience Hub console rather than using
     * an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>excludedResources</code> </b> </p> <p>The list of
     * logical resource identifiers to be excluded from the application.</p> <p>Type:
     * Array</p>  <p>Don't add the resources that you want to include.</p>
     *  <p>Each <code>excludedResources</code> array item includes the following
     * fields:</p> <ul> <li> <p> <i> <code>logicalResourceIds</code> </i> </p>
     * <p>Logical identifier of the resource.</p> <p>Type: Object</p>  <p>You can
     * configure only one of the following fields:</p> <ul> <li> <p>
     * <code>logicalStackName</code> </p> </li> <li> <p> <code>resourceGroupName</code>
     * </p> </li> <li> <p> <code>terraformSourceName</code> </p> </li> <li> <p>
     * <code>eksSourceName</code> </p> </li> </ul>  <p>Each
     * <code>logicalResourceIds</code> object includes the following fields:</p> <ul>
     * <li> <p> <code>identifier</code> </p> <p>Identifier of the resource.</p>
     * <p>Type: String</p> </li> <li> <p> <code>logicalStackName</code> </p> <p>The
     * name of the CloudFormation stack this resource belongs to.</p> <p>Type:
     * String</p> </li> <li> <p> <code>resourceGroupName</code> </p> <p>The name of the
     * resource group this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> </ul> </li> <li> <p> <b> <code>version</code> </b>
     * </p> <p>Resilience Hub application version.</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     */
    inline void SetAppTemplateBody(Aws::String&& value) { m_appTemplateBody = std::move(value); }

    /**
     * <p>A JSON string that provides information about your application structure. To
     * learn more about the <code>appTemplateBody</code> template, see the sample
     * template provided in the <i>Examples</i> section.</p> <p>The
     * <code>appTemplateBody</code> JSON string has the following structure:</p> <ul>
     * <li> <p> <b> <code>resources</code> </b> </p> <p>The list of logical resources
     * that must be included in the Resilience Hub application.</p> <p>Type: Array</p>
     *  <p>Don't add the resources that you want to exclude.</p>  <p>Each
     * <code>resources</code> array item includes the following fields:</p> <ul> <li>
     * <p> <i> <code>logicalResourceId</code> </i> </p> <p>Logical identifier of the
     * resource.</p> <p>Type: Object</p> <p>Each <code>logicalResourceId</code> object
     * includes the following fields:</p> <ul> <li> <p> <code>identifier</code> </p>
     * <p>Identifier of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>logicalStackName</code> </p> <p>The name of the CloudFormation stack this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceGroupName</code> </p> <p>The name of the resource group this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> <li> <p> <i> <code>type</code> </i> </p> <p>The
     * type of resource.</p> <p>Type: string</p> </li> <li> <p> <i> <code>name</code>
     * </i> </p> <p>The name of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>appComponents</code> </b> </p> <p>List of Application
     * Components that this resource belongs to. If an Application Component is not
     * part of the Resilience Hub application, it will be added.</p> <p>Type: Array</p>
     * <p>Each <code>appComponents</code> array item includes the following fields:</p>
     * <ul> <li> <p> <code>name</code> </p> <p>Name of the Application Component.</p>
     * <p>Type: String</p> </li> <li> <p> <code>type</code> </p> <p>Type of Application
     * Component. For more information about the types of Application Component, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/AppComponent.grouping.html">Grouping
     * resources in an AppComponent</a>.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceNames</code> </p> <p>The list of included resources that are
     * assigned to the Application Component.</p> <p>Type: Array of strings</p> </li>
     * <li> <p> <code>additionalInfo</code> </p> <p>Additional configuration parameters
     * for an Resilience Hub application. If you want to implement
     * <code>additionalInfo</code> through the Resilience Hub console rather than using
     * an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>excludedResources</code> </b> </p> <p>The list of
     * logical resource identifiers to be excluded from the application.</p> <p>Type:
     * Array</p>  <p>Don't add the resources that you want to include.</p>
     *  <p>Each <code>excludedResources</code> array item includes the following
     * fields:</p> <ul> <li> <p> <i> <code>logicalResourceIds</code> </i> </p>
     * <p>Logical identifier of the resource.</p> <p>Type: Object</p>  <p>You can
     * configure only one of the following fields:</p> <ul> <li> <p>
     * <code>logicalStackName</code> </p> </li> <li> <p> <code>resourceGroupName</code>
     * </p> </li> <li> <p> <code>terraformSourceName</code> </p> </li> <li> <p>
     * <code>eksSourceName</code> </p> </li> </ul>  <p>Each
     * <code>logicalResourceIds</code> object includes the following fields:</p> <ul>
     * <li> <p> <code>identifier</code> </p> <p>Identifier of the resource.</p>
     * <p>Type: String</p> </li> <li> <p> <code>logicalStackName</code> </p> <p>The
     * name of the CloudFormation stack this resource belongs to.</p> <p>Type:
     * String</p> </li> <li> <p> <code>resourceGroupName</code> </p> <p>The name of the
     * resource group this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> </ul> </li> <li> <p> <b> <code>version</code> </b>
     * </p> <p>Resilience Hub application version.</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     */
    inline void SetAppTemplateBody(const char* value) { m_appTemplateBody.assign(value); }

    /**
     * <p>A JSON string that provides information about your application structure. To
     * learn more about the <code>appTemplateBody</code> template, see the sample
     * template provided in the <i>Examples</i> section.</p> <p>The
     * <code>appTemplateBody</code> JSON string has the following structure:</p> <ul>
     * <li> <p> <b> <code>resources</code> </b> </p> <p>The list of logical resources
     * that must be included in the Resilience Hub application.</p> <p>Type: Array</p>
     *  <p>Don't add the resources that you want to exclude.</p>  <p>Each
     * <code>resources</code> array item includes the following fields:</p> <ul> <li>
     * <p> <i> <code>logicalResourceId</code> </i> </p> <p>Logical identifier of the
     * resource.</p> <p>Type: Object</p> <p>Each <code>logicalResourceId</code> object
     * includes the following fields:</p> <ul> <li> <p> <code>identifier</code> </p>
     * <p>Identifier of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>logicalStackName</code> </p> <p>The name of the CloudFormation stack this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceGroupName</code> </p> <p>The name of the resource group this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> <li> <p> <i> <code>type</code> </i> </p> <p>The
     * type of resource.</p> <p>Type: string</p> </li> <li> <p> <i> <code>name</code>
     * </i> </p> <p>The name of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>appComponents</code> </b> </p> <p>List of Application
     * Components that this resource belongs to. If an Application Component is not
     * part of the Resilience Hub application, it will be added.</p> <p>Type: Array</p>
     * <p>Each <code>appComponents</code> array item includes the following fields:</p>
     * <ul> <li> <p> <code>name</code> </p> <p>Name of the Application Component.</p>
     * <p>Type: String</p> </li> <li> <p> <code>type</code> </p> <p>Type of Application
     * Component. For more information about the types of Application Component, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/AppComponent.grouping.html">Grouping
     * resources in an AppComponent</a>.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceNames</code> </p> <p>The list of included resources that are
     * assigned to the Application Component.</p> <p>Type: Array of strings</p> </li>
     * <li> <p> <code>additionalInfo</code> </p> <p>Additional configuration parameters
     * for an Resilience Hub application. If you want to implement
     * <code>additionalInfo</code> through the Resilience Hub console rather than using
     * an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>excludedResources</code> </b> </p> <p>The list of
     * logical resource identifiers to be excluded from the application.</p> <p>Type:
     * Array</p>  <p>Don't add the resources that you want to include.</p>
     *  <p>Each <code>excludedResources</code> array item includes the following
     * fields:</p> <ul> <li> <p> <i> <code>logicalResourceIds</code> </i> </p>
     * <p>Logical identifier of the resource.</p> <p>Type: Object</p>  <p>You can
     * configure only one of the following fields:</p> <ul> <li> <p>
     * <code>logicalStackName</code> </p> </li> <li> <p> <code>resourceGroupName</code>
     * </p> </li> <li> <p> <code>terraformSourceName</code> </p> </li> <li> <p>
     * <code>eksSourceName</code> </p> </li> </ul>  <p>Each
     * <code>logicalResourceIds</code> object includes the following fields:</p> <ul>
     * <li> <p> <code>identifier</code> </p> <p>Identifier of the resource.</p>
     * <p>Type: String</p> </li> <li> <p> <code>logicalStackName</code> </p> <p>The
     * name of the CloudFormation stack this resource belongs to.</p> <p>Type:
     * String</p> </li> <li> <p> <code>resourceGroupName</code> </p> <p>The name of the
     * resource group this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> </ul> </li> <li> <p> <b> <code>version</code> </b>
     * </p> <p>Resilience Hub application version.</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     */
    inline DescribeAppVersionTemplateResult& WithAppTemplateBody(const Aws::String& value) { SetAppTemplateBody(value); return *this;}

    /**
     * <p>A JSON string that provides information about your application structure. To
     * learn more about the <code>appTemplateBody</code> template, see the sample
     * template provided in the <i>Examples</i> section.</p> <p>The
     * <code>appTemplateBody</code> JSON string has the following structure:</p> <ul>
     * <li> <p> <b> <code>resources</code> </b> </p> <p>The list of logical resources
     * that must be included in the Resilience Hub application.</p> <p>Type: Array</p>
     *  <p>Don't add the resources that you want to exclude.</p>  <p>Each
     * <code>resources</code> array item includes the following fields:</p> <ul> <li>
     * <p> <i> <code>logicalResourceId</code> </i> </p> <p>Logical identifier of the
     * resource.</p> <p>Type: Object</p> <p>Each <code>logicalResourceId</code> object
     * includes the following fields:</p> <ul> <li> <p> <code>identifier</code> </p>
     * <p>Identifier of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>logicalStackName</code> </p> <p>The name of the CloudFormation stack this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceGroupName</code> </p> <p>The name of the resource group this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> <li> <p> <i> <code>type</code> </i> </p> <p>The
     * type of resource.</p> <p>Type: string</p> </li> <li> <p> <i> <code>name</code>
     * </i> </p> <p>The name of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>appComponents</code> </b> </p> <p>List of Application
     * Components that this resource belongs to. If an Application Component is not
     * part of the Resilience Hub application, it will be added.</p> <p>Type: Array</p>
     * <p>Each <code>appComponents</code> array item includes the following fields:</p>
     * <ul> <li> <p> <code>name</code> </p> <p>Name of the Application Component.</p>
     * <p>Type: String</p> </li> <li> <p> <code>type</code> </p> <p>Type of Application
     * Component. For more information about the types of Application Component, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/AppComponent.grouping.html">Grouping
     * resources in an AppComponent</a>.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceNames</code> </p> <p>The list of included resources that are
     * assigned to the Application Component.</p> <p>Type: Array of strings</p> </li>
     * <li> <p> <code>additionalInfo</code> </p> <p>Additional configuration parameters
     * for an Resilience Hub application. If you want to implement
     * <code>additionalInfo</code> through the Resilience Hub console rather than using
     * an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>excludedResources</code> </b> </p> <p>The list of
     * logical resource identifiers to be excluded from the application.</p> <p>Type:
     * Array</p>  <p>Don't add the resources that you want to include.</p>
     *  <p>Each <code>excludedResources</code> array item includes the following
     * fields:</p> <ul> <li> <p> <i> <code>logicalResourceIds</code> </i> </p>
     * <p>Logical identifier of the resource.</p> <p>Type: Object</p>  <p>You can
     * configure only one of the following fields:</p> <ul> <li> <p>
     * <code>logicalStackName</code> </p> </li> <li> <p> <code>resourceGroupName</code>
     * </p> </li> <li> <p> <code>terraformSourceName</code> </p> </li> <li> <p>
     * <code>eksSourceName</code> </p> </li> </ul>  <p>Each
     * <code>logicalResourceIds</code> object includes the following fields:</p> <ul>
     * <li> <p> <code>identifier</code> </p> <p>Identifier of the resource.</p>
     * <p>Type: String</p> </li> <li> <p> <code>logicalStackName</code> </p> <p>The
     * name of the CloudFormation stack this resource belongs to.</p> <p>Type:
     * String</p> </li> <li> <p> <code>resourceGroupName</code> </p> <p>The name of the
     * resource group this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> </ul> </li> <li> <p> <b> <code>version</code> </b>
     * </p> <p>Resilience Hub application version.</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     */
    inline DescribeAppVersionTemplateResult& WithAppTemplateBody(Aws::String&& value) { SetAppTemplateBody(std::move(value)); return *this;}

    /**
     * <p>A JSON string that provides information about your application structure. To
     * learn more about the <code>appTemplateBody</code> template, see the sample
     * template provided in the <i>Examples</i> section.</p> <p>The
     * <code>appTemplateBody</code> JSON string has the following structure:</p> <ul>
     * <li> <p> <b> <code>resources</code> </b> </p> <p>The list of logical resources
     * that must be included in the Resilience Hub application.</p> <p>Type: Array</p>
     *  <p>Don't add the resources that you want to exclude.</p>  <p>Each
     * <code>resources</code> array item includes the following fields:</p> <ul> <li>
     * <p> <i> <code>logicalResourceId</code> </i> </p> <p>Logical identifier of the
     * resource.</p> <p>Type: Object</p> <p>Each <code>logicalResourceId</code> object
     * includes the following fields:</p> <ul> <li> <p> <code>identifier</code> </p>
     * <p>Identifier of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>logicalStackName</code> </p> <p>The name of the CloudFormation stack this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceGroupName</code> </p> <p>The name of the resource group this
     * resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> <li> <p> <i> <code>type</code> </i> </p> <p>The
     * type of resource.</p> <p>Type: string</p> </li> <li> <p> <i> <code>name</code>
     * </i> </p> <p>The name of the resource.</p> <p>Type: String</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>appComponents</code> </b> </p> <p>List of Application
     * Components that this resource belongs to. If an Application Component is not
     * part of the Resilience Hub application, it will be added.</p> <p>Type: Array</p>
     * <p>Each <code>appComponents</code> array item includes the following fields:</p>
     * <ul> <li> <p> <code>name</code> </p> <p>Name of the Application Component.</p>
     * <p>Type: String</p> </li> <li> <p> <code>type</code> </p> <p>Type of Application
     * Component. For more information about the types of Application Component, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/AppComponent.grouping.html">Grouping
     * resources in an AppComponent</a>.</p> <p>Type: String</p> </li> <li> <p>
     * <code>resourceNames</code> </p> <p>The list of included resources that are
     * assigned to the Application Component.</p> <p>Type: Array of strings</p> </li>
     * <li> <p> <code>additionalInfo</code> </p> <p>Additional configuration parameters
     * for an Resilience Hub application. If you want to implement
     * <code>additionalInfo</code> through the Resilience Hub console rather than using
     * an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     * </li> <li> <p> <b> <code>excludedResources</code> </b> </p> <p>The list of
     * logical resource identifiers to be excluded from the application.</p> <p>Type:
     * Array</p>  <p>Don't add the resources that you want to include.</p>
     *  <p>Each <code>excludedResources</code> array item includes the following
     * fields:</p> <ul> <li> <p> <i> <code>logicalResourceIds</code> </i> </p>
     * <p>Logical identifier of the resource.</p> <p>Type: Object</p>  <p>You can
     * configure only one of the following fields:</p> <ul> <li> <p>
     * <code>logicalStackName</code> </p> </li> <li> <p> <code>resourceGroupName</code>
     * </p> </li> <li> <p> <code>terraformSourceName</code> </p> </li> <li> <p>
     * <code>eksSourceName</code> </p> </li> </ul>  <p>Each
     * <code>logicalResourceIds</code> object includes the following fields:</p> <ul>
     * <li> <p> <code>identifier</code> </p> <p>Identifier of the resource.</p>
     * <p>Type: String</p> </li> <li> <p> <code>logicalStackName</code> </p> <p>The
     * name of the CloudFormation stack this resource belongs to.</p> <p>Type:
     * String</p> </li> <li> <p> <code>resourceGroupName</code> </p> <p>The name of the
     * resource group this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>terraformSourceName</code> </p> <p>The name of the Terraform S3 state file
     * this resource belongs to.</p> <p>Type: String</p> </li> <li> <p>
     * <code>eksSourceName</code> </p> <p>Name of the Amazon Elastic Kubernetes Service
     * cluster and namespace this resource belongs to.</p>  <p>This parameter
     * accepts values in "eks-cluster/namespace" format.</p>  <p>Type:
     * String</p> </li> </ul> </li> </ul> </li> <li> <p> <b> <code>version</code> </b>
     * </p> <p>Resilience Hub application version.</p> </li> <li> <p>
     * <code>additionalInfo</code> </p> <p>Additional configuration parameters for an
     * Resilience Hub application. If you want to implement <code>additionalInfo</code>
     * through the Resilience Hub console rather than using an API call, see <a
     * href="https://docs.aws.amazon.com/resilience-hub/latest/userguide/app-config-param.html">Configure
     * the application configuration parameters</a>.</p>  <p>Currently, this
     * parameter accepts a key-value mapping (in a string format) of only one failover
     * region and one associated account.</p> <p>Key: <code>"failover-regions"</code>
     * </p> <p>Value: <code>"[{"region":"&lt;REGION&gt;",
     * "accounts":[{"id":"&lt;ACCOUNT_ID&gt;"}]}]"</code> </p>  </li> </ul>
     */
    inline DescribeAppVersionTemplateResult& WithAppTemplateBody(const char* value) { SetAppTemplateBody(value); return *this;}


    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersion = value; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersion = std::move(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetAppVersion(const char* value) { m_appVersion.assign(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline DescribeAppVersionTemplateResult& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline DescribeAppVersionTemplateResult& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline DescribeAppVersionTemplateResult& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAppVersionTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAppVersionTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAppVersionTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_appArn;

    Aws::String m_appTemplateBody;

    Aws::String m_appVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
