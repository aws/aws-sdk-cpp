/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/DataSourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migrationhubstrategy/model/Group.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class StartImportFileTaskRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StartImportFileTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImportFileTask"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The S3 bucket where the import file is located. The bucket name is required
     * to begin with <code>migrationhub-strategy-</code>.</p>
     */
    inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
    template<typename S3BucketT = Aws::String>
    void SetS3Bucket(S3BucketT&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::forward<S3BucketT>(value); }
    template<typename S3BucketT = Aws::String>
    StartImportFileTaskRequest& WithS3Bucket(S3BucketT&& value) { SetS3Bucket(std::forward<S3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the source that the servers are coming from. By default, Strategy
     * Recommendations assumes that the servers specified in the import file are
     * available in AWS Application Discovery Service. </p>
     */
    inline DataSourceType GetDataSourceType() const { return m_dataSourceType; }
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
    inline void SetDataSourceType(DataSourceType value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = value; }
    inline StartImportFileTaskRequest& WithDataSourceType(DataSourceType value) { SetDataSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Groups the resources in the import file together with a unique name. This ID
     * can be as filter in <code>ListApplicationComponents</code> and
     * <code>ListServers</code>. </p>
     */
    inline const Aws::Vector<Group>& GetGroupId() const { return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    template<typename GroupIdT = Aws::Vector<Group>>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::Vector<Group>>
    StartImportFileTaskRequest& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    template<typename GroupIdT = Group>
    StartImportFileTaskRequest& AddGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId.emplace_back(std::forward<GroupIdT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A descriptive name for the request. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartImportFileTaskRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The S3 bucket where Strategy Recommendations uploads import results. The
     * bucket name is required to begin with migrationhub-strategy-. </p>
     */
    inline const Aws::String& GetS3bucketForReportData() const { return m_s3bucketForReportData; }
    inline bool S3bucketForReportDataHasBeenSet() const { return m_s3bucketForReportDataHasBeenSet; }
    template<typename S3bucketForReportDataT = Aws::String>
    void SetS3bucketForReportData(S3bucketForReportDataT&& value) { m_s3bucketForReportDataHasBeenSet = true; m_s3bucketForReportData = std::forward<S3bucketForReportDataT>(value); }
    template<typename S3bucketForReportDataT = Aws::String>
    StartImportFileTaskRequest& WithS3bucketForReportData(S3bucketForReportDataT&& value) { SetS3bucketForReportData(std::forward<S3bucketForReportDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline const Aws::String& GetS3key() const { return m_s3key; }
    inline bool S3keyHasBeenSet() const { return m_s3keyHasBeenSet; }
    template<typename S3keyT = Aws::String>
    void SetS3key(S3keyT&& value) { m_s3keyHasBeenSet = true; m_s3key = std::forward<S3keyT>(value); }
    template<typename S3keyT = Aws::String>
    StartImportFileTaskRequest& WithS3key(S3keyT&& value) { SetS3key(std::forward<S3keyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    DataSourceType m_dataSourceType{DataSourceType::NOT_SET};
    bool m_dataSourceTypeHasBeenSet = false;

    Aws::Vector<Group> m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_s3bucketForReportData;
    bool m_s3bucketForReportDataHasBeenSet = false;

    Aws::String m_s3key;
    bool m_s3keyHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
