/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>Provides replication details for objects stored in the Amazon Security Lake
   * data lake.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeReplicationConfiguration">AWS
   * API Reference</a></p>
   */
  class DataLakeReplicationConfiguration
  {
  public:
    AWS_SECURITYLAKE_API DataLakeReplicationConfiguration();
    AWS_SECURITYLAKE_API DataLakeReplicationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeReplicationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies one or more centralized rollup Regions. The Amazon Web Services
     * Region specified in the <code>region</code> parameter of the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_CreateDataLake.html">
     * <code>CreateDataLake</code> </a> or <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_UpdateDataLake.html">
     * <code>UpdateDataLake</code> </a> operations contributes data to the rollup
     * Region or Regions specified in this parameter.</p> <p>Replication enables
     * automatic, asynchronous copying of objects across Amazon S3 buckets. S3 buckets
     * that are configured for object replication can be owned by the same Amazon Web
     * Services account or by different accounts. You can replicate objects to a single
     * destination bucket or to multiple destination buckets. The destination buckets
     * can be in different Regions or within the same Region as the source bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }

    /**
     * <p>Specifies one or more centralized rollup Regions. The Amazon Web Services
     * Region specified in the <code>region</code> parameter of the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_CreateDataLake.html">
     * <code>CreateDataLake</code> </a> or <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_UpdateDataLake.html">
     * <code>UpdateDataLake</code> </a> operations contributes data to the rollup
     * Region or Regions specified in this parameter.</p> <p>Replication enables
     * automatic, asynchronous copying of objects across Amazon S3 buckets. S3 buckets
     * that are configured for object replication can be owned by the same Amazon Web
     * Services account or by different accounts. You can replicate objects to a single
     * destination bucket or to multiple destination buckets. The destination buckets
     * can be in different Regions or within the same Region as the source bucket.</p>
     */
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }

    /**
     * <p>Specifies one or more centralized rollup Regions. The Amazon Web Services
     * Region specified in the <code>region</code> parameter of the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_CreateDataLake.html">
     * <code>CreateDataLake</code> </a> or <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_UpdateDataLake.html">
     * <code>UpdateDataLake</code> </a> operations contributes data to the rollup
     * Region or Regions specified in this parameter.</p> <p>Replication enables
     * automatic, asynchronous copying of objects across Amazon S3 buckets. S3 buckets
     * that are configured for object replication can be owned by the same Amazon Web
     * Services account or by different accounts. You can replicate objects to a single
     * destination bucket or to multiple destination buckets. The destination buckets
     * can be in different Regions or within the same Region as the source bucket.</p>
     */
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }

    /**
     * <p>Specifies one or more centralized rollup Regions. The Amazon Web Services
     * Region specified in the <code>region</code> parameter of the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_CreateDataLake.html">
     * <code>CreateDataLake</code> </a> or <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_UpdateDataLake.html">
     * <code>UpdateDataLake</code> </a> operations contributes data to the rollup
     * Region or Regions specified in this parameter.</p> <p>Replication enables
     * automatic, asynchronous copying of objects across Amazon S3 buckets. S3 buckets
     * that are configured for object replication can be owned by the same Amazon Web
     * Services account or by different accounts. You can replicate objects to a single
     * destination bucket or to multiple destination buckets. The destination buckets
     * can be in different Regions or within the same Region as the source bucket.</p>
     */
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }

    /**
     * <p>Specifies one or more centralized rollup Regions. The Amazon Web Services
     * Region specified in the <code>region</code> parameter of the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_CreateDataLake.html">
     * <code>CreateDataLake</code> </a> or <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_UpdateDataLake.html">
     * <code>UpdateDataLake</code> </a> operations contributes data to the rollup
     * Region or Regions specified in this parameter.</p> <p>Replication enables
     * automatic, asynchronous copying of objects across Amazon S3 buckets. S3 buckets
     * that are configured for object replication can be owned by the same Amazon Web
     * Services account or by different accounts. You can replicate objects to a single
     * destination bucket or to multiple destination buckets. The destination buckets
     * can be in different Regions or within the same Region as the source bucket.</p>
     */
    inline DataLakeReplicationConfiguration& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}

    /**
     * <p>Specifies one or more centralized rollup Regions. The Amazon Web Services
     * Region specified in the <code>region</code> parameter of the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_CreateDataLake.html">
     * <code>CreateDataLake</code> </a> or <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_UpdateDataLake.html">
     * <code>UpdateDataLake</code> </a> operations contributes data to the rollup
     * Region or Regions specified in this parameter.</p> <p>Replication enables
     * automatic, asynchronous copying of objects across Amazon S3 buckets. S3 buckets
     * that are configured for object replication can be owned by the same Amazon Web
     * Services account or by different accounts. You can replicate objects to a single
     * destination bucket or to multiple destination buckets. The destination buckets
     * can be in different Regions or within the same Region as the source bucket.</p>
     */
    inline DataLakeReplicationConfiguration& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}

    /**
     * <p>Specifies one or more centralized rollup Regions. The Amazon Web Services
     * Region specified in the <code>region</code> parameter of the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_CreateDataLake.html">
     * <code>CreateDataLake</code> </a> or <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_UpdateDataLake.html">
     * <code>UpdateDataLake</code> </a> operations contributes data to the rollup
     * Region or Regions specified in this parameter.</p> <p>Replication enables
     * automatic, asynchronous copying of objects across Amazon S3 buckets. S3 buckets
     * that are configured for object replication can be owned by the same Amazon Web
     * Services account or by different accounts. You can replicate objects to a single
     * destination bucket or to multiple destination buckets. The destination buckets
     * can be in different Regions or within the same Region as the source bucket.</p>
     */
    inline DataLakeReplicationConfiguration& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }

    /**
     * <p>Specifies one or more centralized rollup Regions. The Amazon Web Services
     * Region specified in the <code>region</code> parameter of the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_CreateDataLake.html">
     * <code>CreateDataLake</code> </a> or <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_UpdateDataLake.html">
     * <code>UpdateDataLake</code> </a> operations contributes data to the rollup
     * Region or Regions specified in this parameter.</p> <p>Replication enables
     * automatic, asynchronous copying of objects across Amazon S3 buckets. S3 buckets
     * that are configured for object replication can be owned by the same Amazon Web
     * Services account or by different accounts. You can replicate objects to a single
     * destination bucket or to multiple destination buckets. The destination buckets
     * can be in different Regions or within the same Region as the source bucket.</p>
     */
    inline DataLakeReplicationConfiguration& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies one or more centralized rollup Regions. The Amazon Web Services
     * Region specified in the <code>region</code> parameter of the <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_CreateDataLake.html">
     * <code>CreateDataLake</code> </a> or <a
     * href="https://docs.aws.amazon.com/security-lake/latest/APIReference/API_UpdateDataLake.html">
     * <code>UpdateDataLake</code> </a> operations contributes data to the rollup
     * Region or Regions specified in this parameter.</p> <p>Replication enables
     * automatic, asynchronous copying of objects across Amazon S3 buckets. S3 buckets
     * that are configured for object replication can be owned by the same Amazon Web
     * Services account or by different accounts. You can replicate objects to a single
     * destination bucket or to multiple destination buckets. The destination buckets
     * can be in different Regions or within the same Region as the source bucket.</p>
     */
    inline DataLakeReplicationConfiguration& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }


    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the
     * Identity and Access Management (IAM) role you created that is managed by
     * Security Lake, to ensure the replication setting is correct.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the
     * Identity and Access Management (IAM) role you created that is managed by
     * Security Lake, to ensure the replication setting is correct.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the
     * Identity and Access Management (IAM) role you created that is managed by
     * Security Lake, to ensure the replication setting is correct.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the
     * Identity and Access Management (IAM) role you created that is managed by
     * Security Lake, to ensure the replication setting is correct.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the
     * Identity and Access Management (IAM) role you created that is managed by
     * Security Lake, to ensure the replication setting is correct.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the
     * Identity and Access Management (IAM) role you created that is managed by
     * Security Lake, to ensure the replication setting is correct.</p>
     */
    inline DataLakeReplicationConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the
     * Identity and Access Management (IAM) role you created that is managed by
     * Security Lake, to ensure the replication setting is correct.</p>
     */
    inline DataLakeReplicationConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>Replication settings for the Amazon S3 buckets. This parameter uses the
     * Identity and Access Management (IAM) role you created that is managed by
     * Security Lake, to ensure the replication setting is correct.</p>
     */
    inline DataLakeReplicationConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
