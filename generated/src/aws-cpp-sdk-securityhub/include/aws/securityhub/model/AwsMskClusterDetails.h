/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsMskClusterClusterInfoDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about an Amazon Managed Streaming for Apache Kafka (Amazon
   * MSK) cluster. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsMskClusterDetails">AWS
   * API Reference</a></p>
   */
  class AwsMskClusterDetails
  {
  public:
    AWS_SECURITYHUB_API AwsMskClusterDetails() = default;
    AWS_SECURITYHUB_API AwsMskClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Provides information about a cluster.</p>
     */
    inline const AwsMskClusterClusterInfoDetails& GetClusterInfo() const { return m_clusterInfo; }
    inline bool ClusterInfoHasBeenSet() const { return m_clusterInfoHasBeenSet; }
    template<typename ClusterInfoT = AwsMskClusterClusterInfoDetails>
    void SetClusterInfo(ClusterInfoT&& value) { m_clusterInfoHasBeenSet = true; m_clusterInfo = std::forward<ClusterInfoT>(value); }
    template<typename ClusterInfoT = AwsMskClusterClusterInfoDetails>
    AwsMskClusterDetails& WithClusterInfo(ClusterInfoT&& value) { SetClusterInfo(std::forward<ClusterInfoT>(value)); return *this;}
    ///@}
  private:

    AwsMskClusterClusterInfoDetails m_clusterInfo;
    bool m_clusterInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
