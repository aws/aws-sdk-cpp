/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Contains job logs. Whenever a Snow device is used to import data into or
   * export data out of Amazon S3, you'll have the option of downloading a PDF job
   * report. Job logs are returned as a part of the response syntax of the
   * <code>DescribeJob</code> action in the <code>JobMetadata</code> data type. The
   * job logs can be accessed for up to 60 minutes after this request has been made.
   * To access any of the job logs after 60 minutes have passed, you'll have to make
   * another call to the <code>DescribeJob</code> action.</p> <p>For import jobs, the
   * PDF job report becomes available at the end of the import process. For export
   * jobs, your job report typically becomes available while the Snow device for your
   * job part is being delivered to you.</p> <p>The job report provides you insight
   * into the state of your Amazon S3 data transfer. The report includes details
   * about your job or job part for your records.</p> <p>For deeper visibility into
   * the status of your transferred objects, you can look at the two associated logs:
   * a success log and a failure log. The logs are saved in comma-separated value
   * (CSV) format, and the name of each log includes the ID of the job or job part
   * that the log describes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/JobLogs">AWS
   * API Reference</a></p>
   */
  class JobLogs
  {
  public:
    AWS_SNOWBALL_API JobLogs() = default;
    AWS_SNOWBALL_API JobLogs(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API JobLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A link to an Amazon S3 presigned URL where the job completion report is
     * located.</p>
     */
    inline const Aws::String& GetJobCompletionReportURI() const { return m_jobCompletionReportURI; }
    inline bool JobCompletionReportURIHasBeenSet() const { return m_jobCompletionReportURIHasBeenSet; }
    template<typename JobCompletionReportURIT = Aws::String>
    void SetJobCompletionReportURI(JobCompletionReportURIT&& value) { m_jobCompletionReportURIHasBeenSet = true; m_jobCompletionReportURI = std::forward<JobCompletionReportURIT>(value); }
    template<typename JobCompletionReportURIT = Aws::String>
    JobLogs& WithJobCompletionReportURI(JobCompletionReportURIT&& value) { SetJobCompletionReportURI(std::forward<JobCompletionReportURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to an Amazon S3 presigned URL where the job success log is
     * located.</p>
     */
    inline const Aws::String& GetJobSuccessLogURI() const { return m_jobSuccessLogURI; }
    inline bool JobSuccessLogURIHasBeenSet() const { return m_jobSuccessLogURIHasBeenSet; }
    template<typename JobSuccessLogURIT = Aws::String>
    void SetJobSuccessLogURI(JobSuccessLogURIT&& value) { m_jobSuccessLogURIHasBeenSet = true; m_jobSuccessLogURI = std::forward<JobSuccessLogURIT>(value); }
    template<typename JobSuccessLogURIT = Aws::String>
    JobLogs& WithJobSuccessLogURI(JobSuccessLogURIT&& value) { SetJobSuccessLogURI(std::forward<JobSuccessLogURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A link to an Amazon S3 presigned URL where the job failure log is
     * located.</p>
     */
    inline const Aws::String& GetJobFailureLogURI() const { return m_jobFailureLogURI; }
    inline bool JobFailureLogURIHasBeenSet() const { return m_jobFailureLogURIHasBeenSet; }
    template<typename JobFailureLogURIT = Aws::String>
    void SetJobFailureLogURI(JobFailureLogURIT&& value) { m_jobFailureLogURIHasBeenSet = true; m_jobFailureLogURI = std::forward<JobFailureLogURIT>(value); }
    template<typename JobFailureLogURIT = Aws::String>
    JobLogs& WithJobFailureLogURI(JobFailureLogURIT&& value) { SetJobFailureLogURI(std::forward<JobFailureLogURIT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobCompletionReportURI;
    bool m_jobCompletionReportURIHasBeenSet = false;

    Aws::String m_jobSuccessLogURI;
    bool m_jobSuccessLogURIHasBeenSet = false;

    Aws::String m_jobFailureLogURI;
    bool m_jobFailureLogURIHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
