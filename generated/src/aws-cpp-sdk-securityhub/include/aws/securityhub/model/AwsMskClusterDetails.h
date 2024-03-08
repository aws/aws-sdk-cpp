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
    AWS_SECURITYHUB_API AwsMskClusterDetails();
    AWS_SECURITYHUB_API AwsMskClusterDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsMskClusterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Provides information about a cluster.</p>
     */
    inline const AwsMskClusterClusterInfoDetails& GetClusterInfo() const{ return m_clusterInfo; }

    /**
     * <p> Provides information about a cluster.</p>
     */
    inline bool ClusterInfoHasBeenSet() const { return m_clusterInfoHasBeenSet; }

    /**
     * <p> Provides information about a cluster.</p>
     */
    inline void SetClusterInfo(const AwsMskClusterClusterInfoDetails& value) { m_clusterInfoHasBeenSet = true; m_clusterInfo = value; }

    /**
     * <p> Provides information about a cluster.</p>
     */
    inline void SetClusterInfo(AwsMskClusterClusterInfoDetails&& value) { m_clusterInfoHasBeenSet = true; m_clusterInfo = std::move(value); }

    /**
     * <p> Provides information about a cluster.</p>
     */
    inline AwsMskClusterDetails& WithClusterInfo(const AwsMskClusterClusterInfoDetails& value) { SetClusterInfo(value); return *this;}

    /**
     * <p> Provides information about a cluster.</p>
     */
    inline AwsMskClusterDetails& WithClusterInfo(AwsMskClusterClusterInfoDetails&& value) { SetClusterInfo(std::move(value)); return *this;}

  private:

    AwsMskClusterClusterInfoDetails m_clusterInfo;
    bool m_clusterInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
