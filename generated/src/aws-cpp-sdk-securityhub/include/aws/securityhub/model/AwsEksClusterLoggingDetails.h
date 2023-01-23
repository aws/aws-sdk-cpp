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
    AWS_SECURITYHUB_API AwsEksClusterLoggingDetails();
    AWS_SECURITYHUB_API AwsEksClusterLoggingDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEksClusterLoggingDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Cluster logging configurations.</p>
     */
    inline const Aws::Vector<AwsEksClusterLoggingClusterLoggingDetails>& GetClusterLogging() const{ return m_clusterLogging; }

    /**
     * <p>Cluster logging configurations.</p>
     */
    inline bool ClusterLoggingHasBeenSet() const { return m_clusterLoggingHasBeenSet; }

    /**
     * <p>Cluster logging configurations.</p>
     */
    inline void SetClusterLogging(const Aws::Vector<AwsEksClusterLoggingClusterLoggingDetails>& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging = value; }

    /**
     * <p>Cluster logging configurations.</p>
     */
    inline void SetClusterLogging(Aws::Vector<AwsEksClusterLoggingClusterLoggingDetails>&& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging = std::move(value); }

    /**
     * <p>Cluster logging configurations.</p>
     */
    inline AwsEksClusterLoggingDetails& WithClusterLogging(const Aws::Vector<AwsEksClusterLoggingClusterLoggingDetails>& value) { SetClusterLogging(value); return *this;}

    /**
     * <p>Cluster logging configurations.</p>
     */
    inline AwsEksClusterLoggingDetails& WithClusterLogging(Aws::Vector<AwsEksClusterLoggingClusterLoggingDetails>&& value) { SetClusterLogging(std::move(value)); return *this;}

    /**
     * <p>Cluster logging configurations.</p>
     */
    inline AwsEksClusterLoggingDetails& AddClusterLogging(const AwsEksClusterLoggingClusterLoggingDetails& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging.push_back(value); return *this; }

    /**
     * <p>Cluster logging configurations.</p>
     */
    inline AwsEksClusterLoggingDetails& AddClusterLogging(AwsEksClusterLoggingClusterLoggingDetails&& value) { m_clusterLoggingHasBeenSet = true; m_clusterLogging.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AwsEksClusterLoggingClusterLoggingDetails> m_clusterLogging;
    bool m_clusterLoggingHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
