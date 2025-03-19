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
    AWS_RESILIENCEHUB_API ImportResourcesToDraftAppVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportResourcesToDraftAppVersion"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const { return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    ImportResourcesToDraftAppVersionRequest& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input sources of the Amazon Elastic Kubernetes Service resources you need
     * to import.</p>
     */
    inline const Aws::Vector<EksSource>& GetEksSources() const { return m_eksSources; }
    inline bool EksSourcesHasBeenSet() const { return m_eksSourcesHasBeenSet; }
    template<typename EksSourcesT = Aws::Vector<EksSource>>
    void SetEksSources(EksSourcesT&& value) { m_eksSourcesHasBeenSet = true; m_eksSources = std::forward<EksSourcesT>(value); }
    template<typename EksSourcesT = Aws::Vector<EksSource>>
    ImportResourcesToDraftAppVersionRequest& WithEksSources(EksSourcesT&& value) { SetEksSources(std::forward<EksSourcesT>(value)); return *this;}
    template<typename EksSourcesT = EksSource>
    ImportResourcesToDraftAppVersionRequest& AddEksSources(EksSourcesT&& value) { m_eksSourcesHasBeenSet = true; m_eksSources.emplace_back(std::forward<EksSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The import strategy you would like to set to import resources into Resilience
     * Hub application.</p>
     */
    inline ResourceImportStrategyType GetImportStrategy() const { return m_importStrategy; }
    inline bool ImportStrategyHasBeenSet() const { return m_importStrategyHasBeenSet; }
    inline void SetImportStrategy(ResourceImportStrategyType value) { m_importStrategyHasBeenSet = true; m_importStrategy = value; }
    inline ImportResourcesToDraftAppVersionRequest& WithImportStrategy(ResourceImportStrategyType value) { SetImportStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) for the resources.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceArns() const { return m_sourceArns; }
    inline bool SourceArnsHasBeenSet() const { return m_sourceArnsHasBeenSet; }
    template<typename SourceArnsT = Aws::Vector<Aws::String>>
    void SetSourceArns(SourceArnsT&& value) { m_sourceArnsHasBeenSet = true; m_sourceArns = std::forward<SourceArnsT>(value); }
    template<typename SourceArnsT = Aws::Vector<Aws::String>>
    ImportResourcesToDraftAppVersionRequest& WithSourceArns(SourceArnsT&& value) { SetSourceArns(std::forward<SourceArnsT>(value)); return *this;}
    template<typename SourceArnsT = Aws::String>
    ImportResourcesToDraftAppVersionRequest& AddSourceArns(SourceArnsT&& value) { m_sourceArnsHasBeenSet = true; m_sourceArns.emplace_back(std::forward<SourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A list of terraform file s3 URLs you need to import. </p>
     */
    inline const Aws::Vector<TerraformSource>& GetTerraformSources() const { return m_terraformSources; }
    inline bool TerraformSourcesHasBeenSet() const { return m_terraformSourcesHasBeenSet; }
    template<typename TerraformSourcesT = Aws::Vector<TerraformSource>>
    void SetTerraformSources(TerraformSourcesT&& value) { m_terraformSourcesHasBeenSet = true; m_terraformSources = std::forward<TerraformSourcesT>(value); }
    template<typename TerraformSourcesT = Aws::Vector<TerraformSource>>
    ImportResourcesToDraftAppVersionRequest& WithTerraformSources(TerraformSourcesT&& value) { SetTerraformSources(std::forward<TerraformSourcesT>(value)); return *this;}
    template<typename TerraformSourcesT = TerraformSource>
    ImportResourcesToDraftAppVersionRequest& AddTerraformSources(TerraformSourcesT&& value) { m_terraformSourcesHasBeenSet = true; m_terraformSources.emplace_back(std::forward<TerraformSourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::Vector<EksSource> m_eksSources;
    bool m_eksSourcesHasBeenSet = false;

    ResourceImportStrategyType m_importStrategy{ResourceImportStrategyType::NOT_SET};
    bool m_importStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceArns;
    bool m_sourceArnsHasBeenSet = false;

    Aws::Vector<TerraformSource> m_terraformSources;
    bool m_terraformSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
