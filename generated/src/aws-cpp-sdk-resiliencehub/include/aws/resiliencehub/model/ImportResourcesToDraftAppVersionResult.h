/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResourceImportStatusType.h>
#include <aws/resiliencehub/model/EksSource.h>
#include <aws/resiliencehub/model/TerraformSource.h>
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
  class ImportResourcesToDraftAppVersionResult
  {
  public:
    AWS_RESILIENCEHUB_API ImportResourcesToDraftAppVersionResult() = default;
    AWS_RESILIENCEHUB_API ImportResourcesToDraftAppVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ImportResourcesToDraftAppVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    template<typename AppArnT = Aws::String>
    void SetAppArn(AppArnT&& value) { m_appArnHasBeenSet = true; m_appArn = std::forward<AppArnT>(value); }
    template<typename AppArnT = Aws::String>
    ImportResourcesToDraftAppVersionResult& WithAppArn(AppArnT&& value) { SetAppArn(std::forward<AppArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetAppVersion() const { return m_appVersion; }
    template<typename AppVersionT = Aws::String>
    void SetAppVersion(AppVersionT&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::forward<AppVersionT>(value); }
    template<typename AppVersionT = Aws::String>
    ImportResourcesToDraftAppVersionResult& WithAppVersion(AppVersionT&& value) { SetAppVersion(std::forward<AppVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input sources of the Amazon Elastic Kubernetes Service resources you have
     * imported.</p>
     */
    inline const Aws::Vector<EksSource>& GetEksSources() const { return m_eksSources; }
    template<typename EksSourcesT = Aws::Vector<EksSource>>
    void SetEksSources(EksSourcesT&& value) { m_eksSourcesHasBeenSet = true; m_eksSources = std::forward<EksSourcesT>(value); }
    template<typename EksSourcesT = Aws::Vector<EksSource>>
    ImportResourcesToDraftAppVersionResult& WithEksSources(EksSourcesT&& value) { SetEksSources(std::forward<EksSourcesT>(value)); return *this;}
    template<typename EksSourcesT = EksSource>
    ImportResourcesToDraftAppVersionResult& AddEksSources(EksSourcesT&& value) { m_eksSourcesHasBeenSet = true; m_eksSources.emplace_back(std::forward<EksSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) for the resources you have imported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceArns() const { return m_sourceArns; }
    template<typename SourceArnsT = Aws::Vector<Aws::String>>
    void SetSourceArns(SourceArnsT&& value) { m_sourceArnsHasBeenSet = true; m_sourceArns = std::forward<SourceArnsT>(value); }
    template<typename SourceArnsT = Aws::Vector<Aws::String>>
    ImportResourcesToDraftAppVersionResult& WithSourceArns(SourceArnsT&& value) { SetSourceArns(std::forward<SourceArnsT>(value)); return *this;}
    template<typename SourceArnsT = Aws::String>
    ImportResourcesToDraftAppVersionResult& AddSourceArns(SourceArnsT&& value) { m_sourceArnsHasBeenSet = true; m_sourceArns.emplace_back(std::forward<SourceArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Status of the action.</p>
     */
    inline ResourceImportStatusType GetStatus() const { return m_status; }
    inline void SetStatus(ResourceImportStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline ImportResourcesToDraftAppVersionResult& WithStatus(ResourceImportStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of terraform file s3 URLs you have imported. </p>
     */
    inline const Aws::Vector<TerraformSource>& GetTerraformSources() const { return m_terraformSources; }
    template<typename TerraformSourcesT = Aws::Vector<TerraformSource>>
    void SetTerraformSources(TerraformSourcesT&& value) { m_terraformSourcesHasBeenSet = true; m_terraformSources = std::forward<TerraformSourcesT>(value); }
    template<typename TerraformSourcesT = Aws::Vector<TerraformSource>>
    ImportResourcesToDraftAppVersionResult& WithTerraformSources(TerraformSourcesT&& value) { SetTerraformSources(std::forward<TerraformSourcesT>(value)); return *this;}
    template<typename TerraformSourcesT = TerraformSource>
    ImportResourcesToDraftAppVersionResult& AddTerraformSources(TerraformSourcesT&& value) { m_terraformSourcesHasBeenSet = true; m_terraformSources.emplace_back(std::forward<TerraformSourcesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ImportResourcesToDraftAppVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet = false;

    Aws::Vector<EksSource> m_eksSources;
    bool m_eksSourcesHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceArns;
    bool m_sourceArnsHasBeenSet = false;

    ResourceImportStatusType m_status{ResourceImportStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<TerraformSource> m_terraformSources;
    bool m_terraformSourcesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
