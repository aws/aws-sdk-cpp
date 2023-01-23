/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/rds-data/model/ResultFrame.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>The result of a SQL statement.</p> <pre><code> &lt;note&gt; &lt;p&gt;This
   * data structure is only used with the deprecated
   * &lt;code&gt;ExecuteSql&lt;/code&gt; operation. Use the
   * &lt;code&gt;BatchExecuteStatement&lt;/code&gt; or
   * &lt;code&gt;ExecuteStatement&lt;/code&gt; operation instead.&lt;/p&gt;
   * &lt;/note&gt; </code></pre><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/SqlStatementResult">AWS
   * API Reference</a></p>
   */
  class SqlStatementResult
  {
  public:
    AWS_RDSDATASERVICE_API SqlStatementResult();
    AWS_RDSDATASERVICE_API SqlStatementResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API SqlStatementResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The result set of the SQL statement.</p>
     */
    inline const ResultFrame& GetResultFrame() const{ return m_resultFrame; }

    /**
     * <p>The result set of the SQL statement.</p>
     */
    inline bool ResultFrameHasBeenSet() const { return m_resultFrameHasBeenSet; }

    /**
     * <p>The result set of the SQL statement.</p>
     */
    inline void SetResultFrame(const ResultFrame& value) { m_resultFrameHasBeenSet = true; m_resultFrame = value; }

    /**
     * <p>The result set of the SQL statement.</p>
     */
    inline void SetResultFrame(ResultFrame&& value) { m_resultFrameHasBeenSet = true; m_resultFrame = std::move(value); }

    /**
     * <p>The result set of the SQL statement.</p>
     */
    inline SqlStatementResult& WithResultFrame(const ResultFrame& value) { SetResultFrame(value); return *this;}

    /**
     * <p>The result set of the SQL statement.</p>
     */
    inline SqlStatementResult& WithResultFrame(ResultFrame&& value) { SetResultFrame(std::move(value)); return *this;}


    /**
     * <p>The number of records updated by a SQL statement.</p>
     */
    inline long long GetNumberOfRecordsUpdated() const{ return m_numberOfRecordsUpdated; }

    /**
     * <p>The number of records updated by a SQL statement.</p>
     */
    inline bool NumberOfRecordsUpdatedHasBeenSet() const { return m_numberOfRecordsUpdatedHasBeenSet; }

    /**
     * <p>The number of records updated by a SQL statement.</p>
     */
    inline void SetNumberOfRecordsUpdated(long long value) { m_numberOfRecordsUpdatedHasBeenSet = true; m_numberOfRecordsUpdated = value; }

    /**
     * <p>The number of records updated by a SQL statement.</p>
     */
    inline SqlStatementResult& WithNumberOfRecordsUpdated(long long value) { SetNumberOfRecordsUpdated(value); return *this;}

  private:

    ResultFrame m_resultFrame;
    bool m_resultFrameHasBeenSet = false;

    long long m_numberOfRecordsUpdated;
    bool m_numberOfRecordsUpdatedHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
