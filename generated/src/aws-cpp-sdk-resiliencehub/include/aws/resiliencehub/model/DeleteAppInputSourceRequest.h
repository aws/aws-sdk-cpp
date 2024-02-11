/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/EksSourceClusterNamespace.h>
#include <aws/resiliencehub/model/TerraformSource.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class DeleteAppInputSourceRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API DeleteAppInputSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAppInputSource"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


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
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline DeleteAppInputSourceRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline DeleteAppInputSourceRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline DeleteAppInputSourceRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline DeleteAppInputSourceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline DeleteAppInputSourceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Used for an idempotency token. A client token is a unique, case-sensitive
     * string of up to 64 ASCII characters. You should not reuse the same client token
     * for other API requests.</p>
     */
    inline DeleteAppInputSourceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster that you want
     * to delete from the Resilience Hub application.</p>
     */
    inline const EksSourceClusterNamespace& GetEksSourceClusterNamespace() const{ return m_eksSourceClusterNamespace; }

    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster that you want
     * to delete from the Resilience Hub application.</p>
     */
    inline bool EksSourceClusterNamespaceHasBeenSet() const { return m_eksSourceClusterNamespaceHasBeenSet; }

    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster that you want
     * to delete from the Resilience Hub application.</p>
     */
    inline void SetEksSourceClusterNamespace(const EksSourceClusterNamespace& value) { m_eksSourceClusterNamespaceHasBeenSet = true; m_eksSourceClusterNamespace = value; }

    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster that you want
     * to delete from the Resilience Hub application.</p>
     */
    inline void SetEksSourceClusterNamespace(EksSourceClusterNamespace&& value) { m_eksSourceClusterNamespaceHasBeenSet = true; m_eksSourceClusterNamespace = std::move(value); }

    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster that you want
     * to delete from the Resilience Hub application.</p>
     */
    inline DeleteAppInputSourceRequest& WithEksSourceClusterNamespace(const EksSourceClusterNamespace& value) { SetEksSourceClusterNamespace(value); return *this;}

    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster that you want
     * to delete from the Resilience Hub application.</p>
     */
    inline DeleteAppInputSourceRequest& WithEksSourceClusterNamespace(EksSourceClusterNamespace&& value) { SetEksSourceClusterNamespace(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the imported resource you want to remove
     * from the Resilience Hub application. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the imported resource you want to remove
     * from the Resilience Hub application. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the imported resource you want to remove
     * from the Resilience Hub application. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the imported resource you want to remove
     * from the Resilience Hub application. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the imported resource you want to remove
     * from the Resilience Hub application. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the imported resource you want to remove
     * from the Resilience Hub application. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline DeleteAppInputSourceRequest& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the imported resource you want to remove
     * from the Resilience Hub application. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline DeleteAppInputSourceRequest& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the imported resource you want to remove
     * from the Resilience Hub application. For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline DeleteAppInputSourceRequest& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The imported Terraform s3 state ﬁle you want to remove from the Resilience
     * Hub application.</p>
     */
    inline const TerraformSource& GetTerraformSource() const{ return m_terraformSource; }

    /**
     * <p>The imported Terraform s3 state ﬁle you want to remove from the Resilience
     * Hub application.</p>
     */
    inline bool TerraformSourceHasBeenSet() const { return m_terraformSourceHasBeenSet; }

    /**
     * <p>The imported Terraform s3 state ﬁle you want to remove from the Resilience
     * Hub application.</p>
     */
    inline void SetTerraformSource(const TerraformSource& value) { m_terraformSourceHasBeenSet = true; m_terraformSource = value; }

    /**
     * <p>The imported Terraform s3 state ﬁle you want to remove from the Resilience
     * Hub application.</p>
     */
    inline void SetTerraformSource(TerraformSource&& value) { m_terraformSourceHasBeenSet = true; m_terraformSource = std::move(value); }

    /**
     * <p>The imported Terraform s3 state ﬁle you want to remove from the Resilience
     * Hub application.</p>
     */
    inline DeleteAppInputSourceRequest& WithTerraformSource(const TerraformSource& value) { SetTerraformSource(value); return *this;}

    /**
     * <p>The imported Terraform s3 state ﬁle you want to remove from the Resilience
     * Hub application.</p>
     */
    inline DeleteAppInputSourceRequest& WithTerraformSource(TerraformSource&& value) { SetTerraformSource(std::move(value)); return *this;}

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    EksSourceClusterNamespace m_eksSourceClusterNamespace;
    bool m_eksSourceClusterNamespaceHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    TerraformSource m_terraformSource;
    bool m_terraformSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
