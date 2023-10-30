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
   * <p>The input source of the namespace that is located on your Amazon Elastic
   * Kubernetes Service cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/EksSourceClusterNamespace">AWS
   * API Reference</a></p>
   */
  class EksSourceClusterNamespace
  {
  public:
    AWS_RESILIENCEHUB_API EksSourceClusterNamespace();
    AWS_RESILIENCEHUB_API EksSourceClusterNamespace(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API EksSourceClusterNamespace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Elastic Kubernetes Service cluster.
     * The format for this ARN is:
     * arn:<code>aws</code>:eks:<code>region</code>:<code>account-id</code>:cluster/<code>cluster-name</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetEksClusterArn() const{ return m_eksClusterArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Elastic Kubernetes Service cluster.
     * The format for this ARN is:
     * arn:<code>aws</code>:eks:<code>region</code>:<code>account-id</code>:cluster/<code>cluster-name</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline bool EksClusterArnHasBeenSet() const { return m_eksClusterArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Elastic Kubernetes Service cluster.
     * The format for this ARN is:
     * arn:<code>aws</code>:eks:<code>region</code>:<code>account-id</code>:cluster/<code>cluster-name</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetEksClusterArn(const Aws::String& value) { m_eksClusterArnHasBeenSet = true; m_eksClusterArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Elastic Kubernetes Service cluster.
     * The format for this ARN is:
     * arn:<code>aws</code>:eks:<code>region</code>:<code>account-id</code>:cluster/<code>cluster-name</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetEksClusterArn(Aws::String&& value) { m_eksClusterArnHasBeenSet = true; m_eksClusterArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Elastic Kubernetes Service cluster.
     * The format for this ARN is:
     * arn:<code>aws</code>:eks:<code>region</code>:<code>account-id</code>:cluster/<code>cluster-name</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline void SetEksClusterArn(const char* value) { m_eksClusterArnHasBeenSet = true; m_eksClusterArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Elastic Kubernetes Service cluster.
     * The format for this ARN is:
     * arn:<code>aws</code>:eks:<code>region</code>:<code>account-id</code>:cluster/<code>cluster-name</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline EksSourceClusterNamespace& WithEksClusterArn(const Aws::String& value) { SetEksClusterArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Elastic Kubernetes Service cluster.
     * The format for this ARN is:
     * arn:<code>aws</code>:eks:<code>region</code>:<code>account-id</code>:cluster/<code>cluster-name</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline EksSourceClusterNamespace& WithEksClusterArn(Aws::String&& value) { SetEksClusterArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the Amazon Elastic Kubernetes Service cluster.
     * The format for this ARN is:
     * arn:<code>aws</code>:eks:<code>region</code>:<code>account-id</code>:cluster/<code>cluster-name</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline EksSourceClusterNamespace& WithEksClusterArn(const char* value) { SetEksClusterArn(value); return *this;}


    /**
     * <p>Name of the namespace that is located on your Amazon Elastic Kubernetes
     * Service cluster.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>Name of the namespace that is located on your Amazon Elastic Kubernetes
     * Service cluster.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>Name of the namespace that is located on your Amazon Elastic Kubernetes
     * Service cluster.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>Name of the namespace that is located on your Amazon Elastic Kubernetes
     * Service cluster.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>Name of the namespace that is located on your Amazon Elastic Kubernetes
     * Service cluster.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>Name of the namespace that is located on your Amazon Elastic Kubernetes
     * Service cluster.</p>
     */
    inline EksSourceClusterNamespace& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>Name of the namespace that is located on your Amazon Elastic Kubernetes
     * Service cluster.</p>
     */
    inline EksSourceClusterNamespace& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>Name of the namespace that is located on your Amazon Elastic Kubernetes
     * Service cluster.</p>
     */
    inline EksSourceClusterNamespace& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_eksClusterArn;
    bool m_eksClusterArnHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
