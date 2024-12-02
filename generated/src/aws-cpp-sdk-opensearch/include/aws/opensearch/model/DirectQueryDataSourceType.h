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
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSourceType();
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSourceType(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSourceType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies CloudWatch Logs as a type of data source for direct queries. </p>
     */
    inline const CloudWatchDirectQueryDataSource& GetCloudWatchLog() const{ return m_cloudWatchLog; }
    inline bool CloudWatchLogHasBeenSet() const { return m_cloudWatchLogHasBeenSet; }
    inline void SetCloudWatchLog(const CloudWatchDirectQueryDataSource& value) { m_cloudWatchLogHasBeenSet = true; m_cloudWatchLog = value; }
    inline void SetCloudWatchLog(CloudWatchDirectQueryDataSource&& value) { m_cloudWatchLogHasBeenSet = true; m_cloudWatchLog = std::move(value); }
    inline DirectQueryDataSourceType& WithCloudWatchLog(const CloudWatchDirectQueryDataSource& value) { SetCloudWatchLog(value); return *this;}
    inline DirectQueryDataSourceType& WithCloudWatchLog(CloudWatchDirectQueryDataSource&& value) { SetCloudWatchLog(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies Security Lake as a type of data source for direct queries. </p>
     */
    inline const SecurityLakeDirectQueryDataSource& GetSecurityLake() const{ return m_securityLake; }
    inline bool SecurityLakeHasBeenSet() const { return m_securityLakeHasBeenSet; }
    inline void SetSecurityLake(const SecurityLakeDirectQueryDataSource& value) { m_securityLakeHasBeenSet = true; m_securityLake = value; }
    inline void SetSecurityLake(SecurityLakeDirectQueryDataSource&& value) { m_securityLakeHasBeenSet = true; m_securityLake = std::move(value); }
    inline DirectQueryDataSourceType& WithSecurityLake(const SecurityLakeDirectQueryDataSource& value) { SetSecurityLake(value); return *this;}
    inline DirectQueryDataSourceType& WithSecurityLake(SecurityLakeDirectQueryDataSource&& value) { SetSecurityLake(std::move(value)); return *this;}
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
