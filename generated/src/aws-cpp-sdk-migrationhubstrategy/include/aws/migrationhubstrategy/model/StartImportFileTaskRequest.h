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
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API StartImportFileTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImportFileTask"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p> The S3 bucket where the import file is located. The bucket name is required
     * to begin with <code>migrationhub-strategy-</code>.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p> The S3 bucket where the import file is located. The bucket name is required
     * to begin with <code>migrationhub-strategy-</code>.</p>
     */
    inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }

    /**
     * <p> The S3 bucket where the import file is located. The bucket name is required
     * to begin with <code>migrationhub-strategy-</code>.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = value; }

    /**
     * <p> The S3 bucket where the import file is located. The bucket name is required
     * to begin with <code>migrationhub-strategy-</code>.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3BucketHasBeenSet = true; m_s3Bucket = std::move(value); }

    /**
     * <p> The S3 bucket where the import file is located. The bucket name is required
     * to begin with <code>migrationhub-strategy-</code>.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3BucketHasBeenSet = true; m_s3Bucket.assign(value); }

    /**
     * <p> The S3 bucket where the import file is located. The bucket name is required
     * to begin with <code>migrationhub-strategy-</code>.</p>
     */
    inline StartImportFileTaskRequest& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p> The S3 bucket where the import file is located. The bucket name is required
     * to begin with <code>migrationhub-strategy-</code>.</p>
     */
    inline StartImportFileTaskRequest& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p> The S3 bucket where the import file is located. The bucket name is required
     * to begin with <code>migrationhub-strategy-</code>.</p>
     */
    inline StartImportFileTaskRequest& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    /**
     * <p>Specifies the source that the servers are coming from. By default, Strategy
     * Recommendations assumes that the servers specified in the import file are
     * available in AWS Application Discovery Service. </p>
     */
    inline const DataSourceType& GetDataSourceType() const{ return m_dataSourceType; }

    /**
     * <p>Specifies the source that the servers are coming from. By default, Strategy
     * Recommendations assumes that the servers specified in the import file are
     * available in AWS Application Discovery Service. </p>
     */
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }

    /**
     * <p>Specifies the source that the servers are coming from. By default, Strategy
     * Recommendations assumes that the servers specified in the import file are
     * available in AWS Application Discovery Service. </p>
     */
    inline void SetDataSourceType(const DataSourceType& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = value; }

    /**
     * <p>Specifies the source that the servers are coming from. By default, Strategy
     * Recommendations assumes that the servers specified in the import file are
     * available in AWS Application Discovery Service. </p>
     */
    inline void SetDataSourceType(DataSourceType&& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = std::move(value); }

    /**
     * <p>Specifies the source that the servers are coming from. By default, Strategy
     * Recommendations assumes that the servers specified in the import file are
     * available in AWS Application Discovery Service. </p>
     */
    inline StartImportFileTaskRequest& WithDataSourceType(const DataSourceType& value) { SetDataSourceType(value); return *this;}

    /**
     * <p>Specifies the source that the servers are coming from. By default, Strategy
     * Recommendations assumes that the servers specified in the import file are
     * available in AWS Application Discovery Service. </p>
     */
    inline StartImportFileTaskRequest& WithDataSourceType(DataSourceType&& value) { SetDataSourceType(std::move(value)); return *this;}


    /**
     * <p>Groups the resources in the import file together with a unique name. This ID
     * can be as filter in <code>ListApplicationComponents</code> and
     * <code>ListServers</code>. </p>
     */
    inline const Aws::Vector<Group>& GetGroupId() const{ return m_groupId; }

    /**
     * <p>Groups the resources in the import file together with a unique name. This ID
     * can be as filter in <code>ListApplicationComponents</code> and
     * <code>ListServers</code>. </p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>Groups the resources in the import file together with a unique name. This ID
     * can be as filter in <code>ListApplicationComponents</code> and
     * <code>ListServers</code>. </p>
     */
    inline void SetGroupId(const Aws::Vector<Group>& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>Groups the resources in the import file together with a unique name. This ID
     * can be as filter in <code>ListApplicationComponents</code> and
     * <code>ListServers</code>. </p>
     */
    inline void SetGroupId(Aws::Vector<Group>&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>Groups the resources in the import file together with a unique name. This ID
     * can be as filter in <code>ListApplicationComponents</code> and
     * <code>ListServers</code>. </p>
     */
    inline StartImportFileTaskRequest& WithGroupId(const Aws::Vector<Group>& value) { SetGroupId(value); return *this;}

    /**
     * <p>Groups the resources in the import file together with a unique name. This ID
     * can be as filter in <code>ListApplicationComponents</code> and
     * <code>ListServers</code>. </p>
     */
    inline StartImportFileTaskRequest& WithGroupId(Aws::Vector<Group>&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>Groups the resources in the import file together with a unique name. This ID
     * can be as filter in <code>ListApplicationComponents</code> and
     * <code>ListServers</code>. </p>
     */
    inline StartImportFileTaskRequest& AddGroupId(const Group& value) { m_groupIdHasBeenSet = true; m_groupId.push_back(value); return *this; }

    /**
     * <p>Groups the resources in the import file together with a unique name. This ID
     * can be as filter in <code>ListApplicationComponents</code> and
     * <code>ListServers</code>. </p>
     */
    inline StartImportFileTaskRequest& AddGroupId(Group&& value) { m_groupIdHasBeenSet = true; m_groupId.push_back(std::move(value)); return *this; }


    /**
     * <p> A descriptive name for the request. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> A descriptive name for the request. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> A descriptive name for the request. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> A descriptive name for the request. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> A descriptive name for the request. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> A descriptive name for the request. </p>
     */
    inline StartImportFileTaskRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> A descriptive name for the request. </p>
     */
    inline StartImportFileTaskRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> A descriptive name for the request. </p>
     */
    inline StartImportFileTaskRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The S3 bucket where Strategy Recommendations uploads import results. The
     * bucket name is required to begin with migrationhub-strategy-. </p>
     */
    inline const Aws::String& GetS3bucketForReportData() const{ return m_s3bucketForReportData; }

    /**
     * <p> The S3 bucket where Strategy Recommendations uploads import results. The
     * bucket name is required to begin with migrationhub-strategy-. </p>
     */
    inline bool S3bucketForReportDataHasBeenSet() const { return m_s3bucketForReportDataHasBeenSet; }

    /**
     * <p> The S3 bucket where Strategy Recommendations uploads import results. The
     * bucket name is required to begin with migrationhub-strategy-. </p>
     */
    inline void SetS3bucketForReportData(const Aws::String& value) { m_s3bucketForReportDataHasBeenSet = true; m_s3bucketForReportData = value; }

    /**
     * <p> The S3 bucket where Strategy Recommendations uploads import results. The
     * bucket name is required to begin with migrationhub-strategy-. </p>
     */
    inline void SetS3bucketForReportData(Aws::String&& value) { m_s3bucketForReportDataHasBeenSet = true; m_s3bucketForReportData = std::move(value); }

    /**
     * <p> The S3 bucket where Strategy Recommendations uploads import results. The
     * bucket name is required to begin with migrationhub-strategy-. </p>
     */
    inline void SetS3bucketForReportData(const char* value) { m_s3bucketForReportDataHasBeenSet = true; m_s3bucketForReportData.assign(value); }

    /**
     * <p> The S3 bucket where Strategy Recommendations uploads import results. The
     * bucket name is required to begin with migrationhub-strategy-. </p>
     */
    inline StartImportFileTaskRequest& WithS3bucketForReportData(const Aws::String& value) { SetS3bucketForReportData(value); return *this;}

    /**
     * <p> The S3 bucket where Strategy Recommendations uploads import results. The
     * bucket name is required to begin with migrationhub-strategy-. </p>
     */
    inline StartImportFileTaskRequest& WithS3bucketForReportData(Aws::String&& value) { SetS3bucketForReportData(std::move(value)); return *this;}

    /**
     * <p> The S3 bucket where Strategy Recommendations uploads import results. The
     * bucket name is required to begin with migrationhub-strategy-. </p>
     */
    inline StartImportFileTaskRequest& WithS3bucketForReportData(const char* value) { SetS3bucketForReportData(value); return *this;}


    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline const Aws::String& GetS3key() const{ return m_s3key; }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline bool S3keyHasBeenSet() const { return m_s3keyHasBeenSet; }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline void SetS3key(const Aws::String& value) { m_s3keyHasBeenSet = true; m_s3key = value; }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline void SetS3key(Aws::String&& value) { m_s3keyHasBeenSet = true; m_s3key = std::move(value); }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline void SetS3key(const char* value) { m_s3keyHasBeenSet = true; m_s3key.assign(value); }

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline StartImportFileTaskRequest& WithS3key(const Aws::String& value) { SetS3key(value); return *this;}

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline StartImportFileTaskRequest& WithS3key(Aws::String&& value) { SetS3key(std::move(value)); return *this;}

    /**
     * <p> The Amazon S3 key name of the import file. </p>
     */
    inline StartImportFileTaskRequest& WithS3key(const char* value) { SetS3key(value); return *this;}

  private:

    Aws::String m_s3Bucket;
    bool m_s3BucketHasBeenSet = false;

    DataSourceType m_dataSourceType;
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
