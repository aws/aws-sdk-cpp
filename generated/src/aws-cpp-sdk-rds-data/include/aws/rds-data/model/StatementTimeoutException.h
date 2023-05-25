/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>The execution of the SQL statement timed out.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/StatementTimeoutException">AWS
   * API Reference</a></p>
   */
  class StatementTimeoutException
  {
  public:
    AWS_RDSDATASERVICE_API StatementTimeoutException();
    AWS_RDSDATASERVICE_API StatementTimeoutException(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API StatementTimeoutException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The error message returned by this <code>StatementTimeoutException</code>
     * error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The error message returned by this <code>StatementTimeoutException</code>
     * error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The error message returned by this <code>StatementTimeoutException</code>
     * error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The error message returned by this <code>StatementTimeoutException</code>
     * error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The error message returned by this <code>StatementTimeoutException</code>
     * error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The error message returned by this <code>StatementTimeoutException</code>
     * error.</p>
     */
    inline StatementTimeoutException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The error message returned by this <code>StatementTimeoutException</code>
     * error.</p>
     */
    inline StatementTimeoutException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The error message returned by this <code>StatementTimeoutException</code>
     * error.</p>
     */
    inline StatementTimeoutException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The database connection ID that executed the SQL statement.</p>
     */
    inline long long GetDbConnectionId() const{ return m_dbConnectionId; }

    /**
     * <p>The database connection ID that executed the SQL statement.</p>
     */
    inline bool DbConnectionIdHasBeenSet() const { return m_dbConnectionIdHasBeenSet; }

    /**
     * <p>The database connection ID that executed the SQL statement.</p>
     */
    inline void SetDbConnectionId(long long value) { m_dbConnectionIdHasBeenSet = true; m_dbConnectionId = value; }

    /**
     * <p>The database connection ID that executed the SQL statement.</p>
     */
    inline StatementTimeoutException& WithDbConnectionId(long long value) { SetDbConnectionId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_dbConnectionId;
    bool m_dbConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
