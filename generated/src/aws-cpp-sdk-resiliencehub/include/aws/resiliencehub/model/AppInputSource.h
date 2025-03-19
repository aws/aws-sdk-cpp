/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/model/EksSourceClusterNamespace.h>
#include <aws/resiliencehub/model/ResourceMappingType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehub/model/TerraformSource.h>
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
namespace ResilienceHub
{
namespace Model
{

  /**
   * <p>The list of Resilience Hub application input sources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/AppInputSource">AWS
   * API Reference</a></p>
   */
  class AppInputSource
  {
  public:
    AWS_RESILIENCEHUB_API AppInputSource() = default;
    AWS_RESILIENCEHUB_API AppInputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AppInputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster.</p>
     */
    inline const EksSourceClusterNamespace& GetEksSourceClusterNamespace() const { return m_eksSourceClusterNamespace; }
    inline bool EksSourceClusterNamespaceHasBeenSet() const { return m_eksSourceClusterNamespaceHasBeenSet; }
    template<typename EksSourceClusterNamespaceT = EksSourceClusterNamespace>
    void SetEksSourceClusterNamespace(EksSourceClusterNamespaceT&& value) { m_eksSourceClusterNamespaceHasBeenSet = true; m_eksSourceClusterNamespace = std::forward<EksSourceClusterNamespaceT>(value); }
    template<typename EksSourceClusterNamespaceT = EksSourceClusterNamespace>
    AppInputSource& WithEksSourceClusterNamespace(EksSourceClusterNamespaceT&& value) { SetEksSourceClusterNamespace(std::forward<EksSourceClusterNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the input source.</p>
     */
    inline ResourceMappingType GetImportType() const { return m_importType; }
    inline bool ImportTypeHasBeenSet() const { return m_importTypeHasBeenSet; }
    inline void SetImportType(ResourceMappingType value) { m_importTypeHasBeenSet = true; m_importType = value; }
    inline AppInputSource& WithImportType(ResourceMappingType value) { SetImportType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of resources.</p>
     */
    inline int GetResourceCount() const { return m_resourceCount; }
    inline bool ResourceCountHasBeenSet() const { return m_resourceCountHasBeenSet; }
    inline void SetResourceCount(int value) { m_resourceCountHasBeenSet = true; m_resourceCount = value; }
    inline AppInputSource& WithResourceCount(int value) { SetResourceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the input source. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    AppInputSource& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the input source.</p>
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    AppInputSource& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Terraform s3 state ﬁle.</p>
     */
    inline const TerraformSource& GetTerraformSource() const { return m_terraformSource; }
    inline bool TerraformSourceHasBeenSet() const { return m_terraformSourceHasBeenSet; }
    template<typename TerraformSourceT = TerraformSource>
    void SetTerraformSource(TerraformSourceT&& value) { m_terraformSourceHasBeenSet = true; m_terraformSource = std::forward<TerraformSourceT>(value); }
    template<typename TerraformSourceT = TerraformSource>
    AppInputSource& WithTerraformSource(TerraformSourceT&& value) { SetTerraformSource(std::forward<TerraformSourceT>(value)); return *this;}
    ///@}
  private:

    EksSourceClusterNamespace m_eksSourceClusterNamespace;
    bool m_eksSourceClusterNamespaceHasBeenSet = false;

    ResourceMappingType m_importType{ResourceMappingType::NOT_SET};
    bool m_importTypeHasBeenSet = false;

    int m_resourceCount{0};
    bool m_resourceCountHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    TerraformSource m_terraformSource;
    bool m_terraformSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
