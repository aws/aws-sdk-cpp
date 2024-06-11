﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb/QLDB_EXPORTS.h>
#include <aws/qldb/QLDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qldb/model/S3ExportConfiguration.h>
#include <aws/qldb/model/OutputFormat.h>
#include <utility>

namespace Aws
{
namespace QLDB
{
namespace Model
{

  /**
   */
  class ExportJournalToS3Request : public QLDBRequest
  {
  public:
    AWS_QLDB_API ExportJournalToS3Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExportJournalToS3"; }

    AWS_QLDB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the ledger.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ExportJournalToS3Request& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ExportJournalToS3Request& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ExportJournalToS3Request& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inclusive start date and time for the range of journal contents to
     * export.</p> <p>The <code>InclusiveStartTime</code> must be in <code>ISO
     * 8601</code> date and time format and in Universal Coordinated Time (UTC). For
     * example: <code>2019-06-13T21:36:34Z</code>.</p> <p>The
     * <code>InclusiveStartTime</code> must be before
     * <code>ExclusiveEndTime</code>.</p> <p>If you provide an
     * <code>InclusiveStartTime</code> that is before the ledger's
     * <code>CreationDateTime</code>, Amazon QLDB defaults it to the ledger's
     * <code>CreationDateTime</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetInclusiveStartTime() const{ return m_inclusiveStartTime; }
    inline bool InclusiveStartTimeHasBeenSet() const { return m_inclusiveStartTimeHasBeenSet; }
    inline void SetInclusiveStartTime(const Aws::Utils::DateTime& value) { m_inclusiveStartTimeHasBeenSet = true; m_inclusiveStartTime = value; }
    inline void SetInclusiveStartTime(Aws::Utils::DateTime&& value) { m_inclusiveStartTimeHasBeenSet = true; m_inclusiveStartTime = std::move(value); }
    inline ExportJournalToS3Request& WithInclusiveStartTime(const Aws::Utils::DateTime& value) { SetInclusiveStartTime(value); return *this;}
    inline ExportJournalToS3Request& WithInclusiveStartTime(Aws::Utils::DateTime&& value) { SetInclusiveStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusive end date and time for the range of journal contents to
     * export.</p> <p>The <code>ExclusiveEndTime</code> must be in <code>ISO
     * 8601</code> date and time format and in Universal Coordinated Time (UTC). For
     * example: <code>2019-06-13T21:36:34Z</code>.</p> <p>The
     * <code>ExclusiveEndTime</code> must be less than or equal to the current UTC date
     * and time.</p>
     */
    inline const Aws::Utils::DateTime& GetExclusiveEndTime() const{ return m_exclusiveEndTime; }
    inline bool ExclusiveEndTimeHasBeenSet() const { return m_exclusiveEndTimeHasBeenSet; }
    inline void SetExclusiveEndTime(const Aws::Utils::DateTime& value) { m_exclusiveEndTimeHasBeenSet = true; m_exclusiveEndTime = value; }
    inline void SetExclusiveEndTime(Aws::Utils::DateTime&& value) { m_exclusiveEndTimeHasBeenSet = true; m_exclusiveEndTime = std::move(value); }
    inline ExportJournalToS3Request& WithExclusiveEndTime(const Aws::Utils::DateTime& value) { SetExclusiveEndTime(value); return *this;}
    inline ExportJournalToS3Request& WithExclusiveEndTime(Aws::Utils::DateTime&& value) { SetExclusiveEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings of the Amazon S3 bucket destination for your
     * export request.</p>
     */
    inline const S3ExportConfiguration& GetS3ExportConfiguration() const{ return m_s3ExportConfiguration; }
    inline bool S3ExportConfigurationHasBeenSet() const { return m_s3ExportConfigurationHasBeenSet; }
    inline void SetS3ExportConfiguration(const S3ExportConfiguration& value) { m_s3ExportConfigurationHasBeenSet = true; m_s3ExportConfiguration = value; }
    inline void SetS3ExportConfiguration(S3ExportConfiguration&& value) { m_s3ExportConfigurationHasBeenSet = true; m_s3ExportConfiguration = std::move(value); }
    inline ExportJournalToS3Request& WithS3ExportConfiguration(const S3ExportConfiguration& value) { SetS3ExportConfiguration(value); return *this;}
    inline ExportJournalToS3Request& WithS3ExportConfiguration(S3ExportConfiguration&& value) { SetS3ExportConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants QLDB permissions
     * for a journal export job to do the following:</p> <ul> <li> <p>Write objects
     * into your Amazon S3 bucket.</p> </li> <li> <p>(Optional) Use your customer
     * managed key in Key Management Service (KMS) for server-side encryption of your
     * exported data.</p> </li> </ul> <p>To pass a role to QLDB when requesting a
     * journal export, you must have permissions to perform the
     * <code>iam:PassRole</code> action on the IAM role resource. This is required for
     * all journal export requests.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline ExportJournalToS3Request& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline ExportJournalToS3Request& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline ExportJournalToS3Request& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output format of your exported journal data. A journal export job can
     * write the data objects in either the text or binary representation of <a
     * href="https://docs.aws.amazon.com/qldb/latest/developerguide/ion.html">Amazon
     * Ion</a> format, or in <a href="https://jsonlines.org/">JSON Lines</a> text
     * format.</p> <p>Default: <code>ION_TEXT</code> </p> <p>In JSON Lines format, each
     * journal block in an exported data object is a valid JSON object that is
     * delimited by a newline. You can use this format to directly integrate JSON
     * exports with analytics tools such as Amazon Athena and Glue because these
     * services can parse newline-delimited JSON automatically.</p>
     */
    inline const OutputFormat& GetOutputFormat() const{ return m_outputFormat; }
    inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
    inline void SetOutputFormat(const OutputFormat& value) { m_outputFormatHasBeenSet = true; m_outputFormat = value; }
    inline void SetOutputFormat(OutputFormat&& value) { m_outputFormatHasBeenSet = true; m_outputFormat = std::move(value); }
    inline ExportJournalToS3Request& WithOutputFormat(const OutputFormat& value) { SetOutputFormat(value); return *this;}
    inline ExportJournalToS3Request& WithOutputFormat(OutputFormat&& value) { SetOutputFormat(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_inclusiveStartTime;
    bool m_inclusiveStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_exclusiveEndTime;
    bool m_exclusiveEndTimeHasBeenSet = false;

    S3ExportConfiguration m_s3ExportConfiguration;
    bool m_s3ExportConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    OutputFormat m_outputFormat;
    bool m_outputFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace QLDB
} // namespace Aws
