/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/LogicalResourceId.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class DescribeAppVersionResourceRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API DescribeAppVersionResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAppVersionResource"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Resilience Hub application. The
     * format for this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>AWS General Reference</i> guide.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline void SetAppVersion(const Aws::String& value) { m_appVersionHasBeenSet = true; m_appVersion = value; }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline void SetAppVersion(Aws::String&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::move(value); }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline void SetAppVersion(const char* value) { m_appVersionHasBeenSet = true; m_appVersion.assign(value); }

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}

    /**
     * <p>The AWS Resilience Hub application version.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}


    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account that owns the physical resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon Web Services region that owns the physical resource.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The Amazon Web Services region that owns the physical resource.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services region that owns the physical resource.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The Amazon Web Services region that owns the physical resource.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services region that owns the physical resource.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The Amazon Web Services region that owns the physical resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services region that owns the physical resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services region that owns the physical resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline const LogicalResourceId& GetLogicalResourceId() const{ return m_logicalResourceId; }

    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline bool LogicalResourceIdHasBeenSet() const { return m_logicalResourceIdHasBeenSet; }

    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline void SetLogicalResourceId(const LogicalResourceId& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = value; }

    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline void SetLogicalResourceId(LogicalResourceId&& value) { m_logicalResourceIdHasBeenSet = true; m_logicalResourceId = std::move(value); }

    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithLogicalResourceId(const LogicalResourceId& value) { SetLogicalResourceId(value); return *this;}

    /**
     * <p>The logical identifier of the resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithLogicalResourceId(LogicalResourceId&& value) { SetLogicalResourceId(std::move(value)); return *this;}


    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline const Aws::String& GetPhysicalResourceId() const{ return m_physicalResourceId; }

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline bool PhysicalResourceIdHasBeenSet() const { return m_physicalResourceIdHasBeenSet; }

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline void SetPhysicalResourceId(const Aws::String& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = value; }

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline void SetPhysicalResourceId(Aws::String&& value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId = std::move(value); }

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline void SetPhysicalResourceId(const char* value) { m_physicalResourceIdHasBeenSet = true; m_physicalResourceId.assign(value); }

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithPhysicalResourceId(const Aws::String& value) { SetPhysicalResourceId(value); return *this;}

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithPhysicalResourceId(Aws::String&& value) { SetPhysicalResourceId(std::move(value)); return *this;}

    /**
     * <p>The physical identifier of the resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithPhysicalResourceId(const char* value) { SetPhysicalResourceId(value); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the resource.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline DescribeAppVersionResourceRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    LogicalResourceId m_logicalResourceId;
    bool m_logicalResourceIdHasBeenSet = false;

    Aws::String m_physicalResourceId;
    bool m_physicalResourceIdHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
