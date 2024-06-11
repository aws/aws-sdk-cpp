/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The input source of the Amazon Elastic Kubernetes Service
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehub-2020-04-30/EksSource">AWS
   * API Reference</a></p>
   */
  class EksSource
  {
  public:
    AWS_RESILIENCEHUB_API EksSource();
    AWS_RESILIENCEHUB_API EksSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API EksSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESILIENCEHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
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
    inline bool EksClusterArnHasBeenSet() const { return m_eksClusterArnHasBeenSet; }
    inline void SetEksClusterArn(const Aws::String& value) { m_eksClusterArnHasBeenSet = true; m_eksClusterArn = value; }
    inline void SetEksClusterArn(Aws::String&& value) { m_eksClusterArnHasBeenSet = true; m_eksClusterArn = std::move(value); }
    inline void SetEksClusterArn(const char* value) { m_eksClusterArnHasBeenSet = true; m_eksClusterArn.assign(value); }
    inline EksSource& WithEksClusterArn(const Aws::String& value) { SetEksClusterArn(value); return *this;}
    inline EksSource& WithEksClusterArn(Aws::String&& value) { SetEksClusterArn(std::move(value)); return *this;}
    inline EksSource& WithEksClusterArn(const char* value) { SetEksClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of namespaces located on your Amazon Elastic Kubernetes Service
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNamespaces() const{ return m_namespaces; }
    inline bool NamespacesHasBeenSet() const { return m_namespacesHasBeenSet; }
    inline void SetNamespaces(const Aws::Vector<Aws::String>& value) { m_namespacesHasBeenSet = true; m_namespaces = value; }
    inline void SetNamespaces(Aws::Vector<Aws::String>&& value) { m_namespacesHasBeenSet = true; m_namespaces = std::move(value); }
    inline EksSource& WithNamespaces(const Aws::Vector<Aws::String>& value) { SetNamespaces(value); return *this;}
    inline EksSource& WithNamespaces(Aws::Vector<Aws::String>&& value) { SetNamespaces(std::move(value)); return *this;}
    inline EksSource& AddNamespaces(const Aws::String& value) { m_namespacesHasBeenSet = true; m_namespaces.push_back(value); return *this; }
    inline EksSource& AddNamespaces(Aws::String&& value) { m_namespacesHasBeenSet = true; m_namespaces.push_back(std::move(value)); return *this; }
    inline EksSource& AddNamespaces(const char* value) { m_namespacesHasBeenSet = true; m_namespaces.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_eksClusterArn;
    bool m_eksClusterArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_namespaces;
    bool m_namespacesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
