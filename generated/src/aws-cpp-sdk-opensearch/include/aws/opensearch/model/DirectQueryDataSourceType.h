/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/CloudWatchDirectQueryDataSource.h>
#include <aws/opensearch/model/SecurityLakeDirectQueryDataSource.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p> The type of data source that is used for direct queries. This is a supported
   * Amazon Web Services service, such as CloudWatch Logs or Security Lake.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DirectQueryDataSourceType">AWS
   * API Reference</a></p>
   */
  class DirectQueryDataSourceType
  {
  public:
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSourceType() = default;
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies CloudWatch Logs as a type of data source for direct queries. </p>
     */
    inline const CloudWatchDirectQueryDataSource& GetCloudWatchLog() const { return m_cloudWatchLog; }
    inline bool CloudWatchLogHasBeenSet() const { return m_cloudWatchLogHasBeenSet; }
    template<typename CloudWatchLogT = CloudWatchDirectQueryDataSource>
    void SetCloudWatchLog(CloudWatchLogT&& value) { m_cloudWatchLogHasBeenSet = true; m_cloudWatchLog = std::forward<CloudWatchLogT>(value); }
    template<typename CloudWatchLogT = CloudWatchDirectQueryDataSource>
    DirectQueryDataSourceType& WithCloudWatchLog(CloudWatchLogT&& value) { SetCloudWatchLog(std::forward<CloudWatchLogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies Security Lake as a type of data source for direct queries. </p>
     */
    inline const SecurityLakeDirectQueryDataSource& GetSecurityLake() const { return m_securityLake; }
    inline bool SecurityLakeHasBeenSet() const { return m_securityLakeHasBeenSet; }
    template<typename SecurityLakeT = SecurityLakeDirectQueryDataSource>
    void SetSecurityLake(SecurityLakeT&& value) { m_securityLakeHasBeenSet = true; m_securityLake = std::forward<SecurityLakeT>(value); }
    template<typename SecurityLakeT = SecurityLakeDirectQueryDataSource>
    DirectQueryDataSourceType& WithSecurityLake(SecurityLakeT&& value) { SetSecurityLake(std::forward<SecurityLakeT>(value)); return *this;}
    ///@}
  private:

    CloudWatchDirectQueryDataSource m_cloudWatchLog;
    bool m_cloudWatchLogHasBeenSet = false;

    SecurityLakeDirectQueryDataSource m_securityLake;
    bool m_securityLakeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
