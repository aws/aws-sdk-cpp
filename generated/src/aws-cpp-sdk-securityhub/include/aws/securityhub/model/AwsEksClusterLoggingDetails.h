/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEksClusterLoggingClusterLoggingDetails.h>
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
   * <p>The logging configuration for an Amazon EKS cluster.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEksClusterLoggingDetails">AWS
   * API Reference</a></p>
   */
  class AwsEksClusterLoggingDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEksClusterLoggingDetails() = default;
    AWS_SECURITYHUB_API AwsEksClusterLoggingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEksClusterLoggingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Cluster logging configurations.</p>
     */
    inline const Aws::Vector<AwsEksClusterLoggingClusterLoggingDetails>& GetClusterLogging() const { return m_clusterLogging; }
    inline bool ClusterLoggingHasBeenSet() const { return m_clusterLoggingHasBeenSet; }
    template<typename ClusterLoggingT = Aws::Vector<AwsEksClusterLoggingClusterLoggingDetails>>
    void SetClusterLogging(ClusterLoggingT&& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging = std::forward<ClusterLoggingT>(value); }
    template<typename ClusterLoggingT = Aws::Vector<AwsEksClusterLoggingClusterLoggingDetails>>
    AwsEksClusterLoggingDetails& WithClusterLogging(ClusterLoggingT&& value) { SetClusterLogging(std::forward<ClusterLoggingT>(value)); return *this;}
    template<typename ClusterLoggingT = AwsEksClusterLoggingClusterLoggingDetails>
    AwsEksClusterLoggingDetails& AddClusterLogging(ClusterLoggingT&& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging.emplace_back(std::forward<ClusterLoggingT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<AwsEksClusterLoggingClusterLoggingDetails> m_clusterLogging;
    bool m_clusterLoggingHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
