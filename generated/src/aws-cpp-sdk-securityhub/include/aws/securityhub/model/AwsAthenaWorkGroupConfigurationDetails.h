/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsAthenaWorkGroupConfigurationResultConfigurationDetails.h>
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
   * <p> The configuration of the workgroup, which includes the location in Amazon
   * Simple Storage Service (Amazon S3) where query results are stored, the
   * encryption option, if any, used for query results, whether Amazon CloudWatch
   * metrics are enabled for the workgroup, and the limit for the amount of bytes
   * scanned (cutoff) per query, if it is specified. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsAthenaWorkGroupConfigurationDetails">AWS
   * API Reference</a></p>
   */
  class AwsAthenaWorkGroupConfigurationDetails
  {
  public:
    AWS_SECURITYHUB_API AwsAthenaWorkGroupConfigurationDetails();
    AWS_SECURITYHUB_API AwsAthenaWorkGroupConfigurationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsAthenaWorkGroupConfigurationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The location in Amazon S3 where query and calculation results are stored and
     * the encryption option, if any, used for query and calculation results. These are
     * known as client-side settings. If workgroup settings override client-side
     * settings, then the query uses the workgroup settings.</p>
     */
    inline const AwsAthenaWorkGroupConfigurationResultConfigurationDetails& GetResultConfiguration() const{ return m_resultConfiguration; }

    /**
     * <p> The location in Amazon S3 where query and calculation results are stored and
     * the encryption option, if any, used for query and calculation results. These are
     * known as client-side settings. If workgroup settings override client-side
     * settings, then the query uses the workgroup settings.</p>
     */
    inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }

    /**
     * <p> The location in Amazon S3 where query and calculation results are stored and
     * the encryption option, if any, used for query and calculation results. These are
     * known as client-side settings. If workgroup settings override client-side
     * settings, then the query uses the workgroup settings.</p>
     */
    inline void SetResultConfiguration(const AwsAthenaWorkGroupConfigurationResultConfigurationDetails& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = value; }

    /**
     * <p> The location in Amazon S3 where query and calculation results are stored and
     * the encryption option, if any, used for query and calculation results. These are
     * known as client-side settings. If workgroup settings override client-side
     * settings, then the query uses the workgroup settings.</p>
     */
    inline void SetResultConfiguration(AwsAthenaWorkGroupConfigurationResultConfigurationDetails&& value) { m_resultConfigurationHasBeenSet = true; m_resultConfiguration = std::move(value); }

    /**
     * <p> The location in Amazon S3 where query and calculation results are stored and
     * the encryption option, if any, used for query and calculation results. These are
     * known as client-side settings. If workgroup settings override client-side
     * settings, then the query uses the workgroup settings.</p>
     */
    inline AwsAthenaWorkGroupConfigurationDetails& WithResultConfiguration(const AwsAthenaWorkGroupConfigurationResultConfigurationDetails& value) { SetResultConfiguration(value); return *this;}

    /**
     * <p> The location in Amazon S3 where query and calculation results are stored and
     * the encryption option, if any, used for query and calculation results. These are
     * known as client-side settings. If workgroup settings override client-side
     * settings, then the query uses the workgroup settings.</p>
     */
    inline AwsAthenaWorkGroupConfigurationDetails& WithResultConfiguration(AwsAthenaWorkGroupConfigurationResultConfigurationDetails&& value) { SetResultConfiguration(std::move(value)); return *this;}

  private:

    AwsAthenaWorkGroupConfigurationResultConfigurationDetails m_resultConfiguration;
    bool m_resultConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
