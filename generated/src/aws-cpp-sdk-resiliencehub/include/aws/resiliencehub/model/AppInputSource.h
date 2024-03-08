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
    AWS_RESILIENCEHUB_API AppInputSource();
    AWS_RESILIENCEHUB_API AppInputSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API AppInputSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster.</p>
     */
    inline const EksSourceClusterNamespace& GetEksSourceClusterNamespace() const{ return m_eksSourceClusterNamespace; }

    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster.</p>
     */
    inline bool EksSourceClusterNamespaceHasBeenSet() const { return m_eksSourceClusterNamespaceHasBeenSet; }

    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster.</p>
     */
    inline void SetEksSourceClusterNamespace(const EksSourceClusterNamespace& value) { m_eksSourceClusterNamespaceHasBeenSet = true; m_eksSourceClusterNamespace = value; }

    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster.</p>
     */
    inline void SetEksSourceClusterNamespace(EksSourceClusterNamespace&& value) { m_eksSourceClusterNamespaceHasBeenSet = true; m_eksSourceClusterNamespace = std::move(value); }

    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster.</p>
     */
    inline AppInputSource& WithEksSourceClusterNamespace(const EksSourceClusterNamespace& value) { SetEksSourceClusterNamespace(value); return *this;}

    /**
     * <p>The namespace on your Amazon Elastic Kubernetes Service cluster.</p>
     */
    inline AppInputSource& WithEksSourceClusterNamespace(EksSourceClusterNamespace&& value) { SetEksSourceClusterNamespace(std::move(value)); return *this;}


    /**
     * <p>The resource type of the input source.</p>
     */
    inline const ResourceMappingType& GetImportType() const{ return m_importType; }

    /**
     * <p>The resource type of the input source.</p>
     */
    inline bool ImportTypeHasBeenSet() const { return m_importTypeHasBeenSet; }

    /**
     * <p>The resource type of the input source.</p>
     */
    inline void SetImportType(const ResourceMappingType& value) { m_importTypeHasBeenSet = true; m_importType = value; }

    /**
     * <p>The resource type of the input source.</p>
     */
    inline void SetImportType(ResourceMappingType&& value) { m_importTypeHasBeenSet = true; m_importType = std::move(value); }

    /**
     * <p>The resource type of the input source.</p>
     */
    inline AppInputSource& WithImportType(const ResourceMappingType& value) { SetImportType(value); return *this;}

    /**
     * <p>The resource type of the input source.</p>
     */
    inline AppInputSource& WithImportType(ResourceMappingType&& value) { SetImportType(std::move(value)); return *this;}


    /**
     * <p>The number of resources.</p>
     */
    inline int GetResourceCount() const{ return m_resourceCount; }

    /**
     * <p>The number of resources.</p>
     */
    inline bool ResourceCountHasBeenSet() const { return m_resourceCountHasBeenSet; }

    /**
     * <p>The number of resources.</p>
     */
    inline void SetResourceCount(int value) { m_resourceCountHasBeenSet = true; m_resourceCount = value; }

    /**
     * <p>The number of resources.</p>
     */
    inline AppInputSource& WithResourceCount(int value) { SetResourceCount(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the input source. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the input source. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the input source. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the input source. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the input source. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the input source. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline AppInputSource& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the input source. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline AppInputSource& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the input source. For more information
     * about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline AppInputSource& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The name of the input source.</p>
     */
    inline const Aws::String& GetSourceName() const{ return m_sourceName; }

    /**
     * <p>The name of the input source.</p>
     */
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }

    /**
     * <p>The name of the input source.</p>
     */
    inline void SetSourceName(const Aws::String& value) { m_sourceNameHasBeenSet = true; m_sourceName = value; }

    /**
     * <p>The name of the input source.</p>
     */
    inline void SetSourceName(Aws::String&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::move(value); }

    /**
     * <p>The name of the input source.</p>
     */
    inline void SetSourceName(const char* value) { m_sourceNameHasBeenSet = true; m_sourceName.assign(value); }

    /**
     * <p>The name of the input source.</p>
     */
    inline AppInputSource& WithSourceName(const Aws::String& value) { SetSourceName(value); return *this;}

    /**
     * <p>The name of the input source.</p>
     */
    inline AppInputSource& WithSourceName(Aws::String&& value) { SetSourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the input source.</p>
     */
    inline AppInputSource& WithSourceName(const char* value) { SetSourceName(value); return *this;}


    /**
     * <p>The name of the Terraform s3 state ﬁle.</p>
     */
    inline const TerraformSource& GetTerraformSource() const{ return m_terraformSource; }

    /**
     * <p>The name of the Terraform s3 state ﬁle.</p>
     */
    inline bool TerraformSourceHasBeenSet() const { return m_terraformSourceHasBeenSet; }

    /**
     * <p>The name of the Terraform s3 state ﬁle.</p>
     */
    inline void SetTerraformSource(const TerraformSource& value) { m_terraformSourceHasBeenSet = true; m_terraformSource = value; }

    /**
     * <p>The name of the Terraform s3 state ﬁle.</p>
     */
    inline void SetTerraformSource(TerraformSource&& value) { m_terraformSourceHasBeenSet = true; m_terraformSource = std::move(value); }

    /**
     * <p>The name of the Terraform s3 state ﬁle.</p>
     */
    inline AppInputSource& WithTerraformSource(const TerraformSource& value) { SetTerraformSource(value); return *this;}

    /**
     * <p>The name of the Terraform s3 state ﬁle.</p>
     */
    inline AppInputSource& WithTerraformSource(TerraformSource&& value) { SetTerraformSource(std::move(value)); return *this;}

  private:

    EksSourceClusterNamespace m_eksSourceClusterNamespace;
    bool m_eksSourceClusterNamespaceHasBeenSet = false;

    ResourceMappingType m_importType;
    bool m_importTypeHasBeenSet = false;

    int m_resourceCount;
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
