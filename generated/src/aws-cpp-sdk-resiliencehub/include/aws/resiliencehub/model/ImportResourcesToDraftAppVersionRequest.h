/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceImportStrategyType.h>
#include <aws/resiliencehub/model/EksSource.h>
#include <aws/resiliencehub/model/TerraformSource.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class ImportResourcesToDraftAppVersionRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API ImportResourcesToDraftAppVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportResourcesToDraftAppVersion"; }

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
    inline ImportResourcesToDraftAppVersionRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}


    /**
     * <p>The input sources of the Amazon Elastic Kubernetes Service resources you need
     * to import.</p>
     */
    inline const Aws::Vector<EksSource>& GetEksSources() const{ return m_eksSources; }

    /**
     * <p>The input sources of the Amazon Elastic Kubernetes Service resources you need
     * to import.</p>
     */
    inline bool EksSourcesHasBeenSet() const { return m_eksSourcesHasBeenSet; }

    /**
     * <p>The input sources of the Amazon Elastic Kubernetes Service resources you need
     * to import.</p>
     */
    inline void SetEksSources(const Aws::Vector<EksSource>& value) { m_eksSourcesHasBeenSet = true; m_eksSources = value; }

    /**
     * <p>The input sources of the Amazon Elastic Kubernetes Service resources you need
     * to import.</p>
     */
    inline void SetEksSources(Aws::Vector<EksSource>&& value) { m_eksSourcesHasBeenSet = true; m_eksSources = std::move(value); }

    /**
     * <p>The input sources of the Amazon Elastic Kubernetes Service resources you need
     * to import.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& WithEksSources(const Aws::Vector<EksSource>& value) { SetEksSources(value); return *this;}

    /**
     * <p>The input sources of the Amazon Elastic Kubernetes Service resources you need
     * to import.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& WithEksSources(Aws::Vector<EksSource>&& value) { SetEksSources(std::move(value)); return *this;}

    /**
     * <p>The input sources of the Amazon Elastic Kubernetes Service resources you need
     * to import.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& AddEksSources(const EksSource& value) { m_eksSourcesHasBeenSet = true; m_eksSources.push_back(value); return *this; }

    /**
     * <p>The input sources of the Amazon Elastic Kubernetes Service resources you need
     * to import.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& AddEksSources(EksSource&& value) { m_eksSourcesHasBeenSet = true; m_eksSources.push_back(std::move(value)); return *this; }


    /**
     * <p>The import strategy you would like to set to import resources into Resilience
     * Hub application.</p>
     */
    inline const ResourceImportStrategyType& GetImportStrategy() const{ return m_importStrategy; }

    /**
     * <p>The import strategy you would like to set to import resources into Resilience
     * Hub application.</p>
     */
    inline bool ImportStrategyHasBeenSet() const { return m_importStrategyHasBeenSet; }

    /**
     * <p>The import strategy you would like to set to import resources into Resilience
     * Hub application.</p>
     */
    inline void SetImportStrategy(const ResourceImportStrategyType& value) { m_importStrategyHasBeenSet = true; m_importStrategy = value; }

    /**
     * <p>The import strategy you would like to set to import resources into Resilience
     * Hub application.</p>
     */
    inline void SetImportStrategy(ResourceImportStrategyType&& value) { m_importStrategyHasBeenSet = true; m_importStrategy = std::move(value); }

    /**
     * <p>The import strategy you would like to set to import resources into Resilience
     * Hub application.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& WithImportStrategy(const ResourceImportStrategyType& value) { SetImportStrategy(value); return *this;}

    /**
     * <p>The import strategy you would like to set to import resources into Resilience
     * Hub application.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& WithImportStrategy(ResourceImportStrategyType&& value) { SetImportStrategy(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) for the resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceArns() const{ return m_sourceArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources.</p>
     */
    inline bool SourceArnsHasBeenSet() const { return m_sourceArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources.</p>
     */
    inline void SetSourceArns(const Aws::Vector<Aws::String>& value) { m_sourceArnsHasBeenSet = true; m_sourceArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources.</p>
     */
    inline void SetSourceArns(Aws::Vector<Aws::String>&& value) { m_sourceArnsHasBeenSet = true; m_sourceArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& WithSourceArns(const Aws::Vector<Aws::String>& value) { SetSourceArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& WithSourceArns(Aws::Vector<Aws::String>&& value) { SetSourceArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& AddSourceArns(const Aws::String& value) { m_sourceArnsHasBeenSet = true; m_sourceArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& AddSourceArns(Aws::String&& value) { m_sourceArnsHasBeenSet = true; m_sourceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) for the resources.</p>
     */
    inline ImportResourcesToDraftAppVersionRequest& AddSourceArns(const char* value) { m_sourceArnsHasBeenSet = true; m_sourceArns.push_back(value); return *this; }


    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline const Aws::Vector<TerraformSource>& GetTerraformSources() const{ return m_terraformSources; }

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline bool TerraformSourcesHasBeenSet() const { return m_terraformSourcesHasBeenSet; }

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline void SetTerraformSources(const Aws::Vector<TerraformSource>& value) { m_terraformSourcesHasBeenSet = true; m_terraformSources = value; }

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline void SetTerraformSources(Aws::Vector<TerraformSource>&& value) { m_terraformSourcesHasBeenSet = true; m_terraformSources = std::move(value); }

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline ImportResourcesToDraftAppVersionRequest& WithTerraformSources(const Aws::Vector<TerraformSource>& value) { SetTerraformSources(value); return *this;}

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline ImportResourcesToDraftAppVersionRequest& WithTerraformSources(Aws::Vector<TerraformSource>&& value) { SetTerraformSources(std::move(value)); return *this;}

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline ImportResourcesToDraftAppVersionRequest& AddTerraformSources(const TerraformSource& value) { m_terraformSourcesHasBeenSet = true; m_terraformSources.push_back(value); return *this; }

    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline ImportResourcesToDraftAppVersionRequest& AddTerraformSources(TerraformSource&& value) { m_terraformSourcesHasBeenSet = true; m_terraformSources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::Vector<EksSource> m_eksSources;
    bool m_eksSourcesHasBeenSet = false;

    ResourceImportStrategyType m_importStrategy;
    bool m_importStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceArns;
    bool m_sourceArnsHasBeenSet = false;

    Aws::Vector<TerraformSource> m_terraformSources;
    bool m_terraformSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
