/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
   * <p>The details of the last <code>UpdateDataLake</code> or
   * <code>DeleteDataLake</code> API request which failed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeUpdateException">AWS
   * API Reference</a></p>
   */
  class DataLakeUpdateException
  {
  public:
    AWS_SECURITYLAKE_API DataLakeUpdateException();
    AWS_SECURITYLAKE_API DataLakeUpdateException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeUpdateException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The reason code for the exception of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The reason code for the exception of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The reason code for the exception of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The reason code for the exception of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The reason code for the exception of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The reason code for the exception of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline DataLakeUpdateException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The reason code for the exception of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline DataLakeUpdateException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The reason code for the exception of the last <code>UpdateDataLake</code> or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline DataLakeUpdateException& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The reason for the exception of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the exception of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the exception of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the exception of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the exception of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for the exception of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline DataLakeUpdateException& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the exception of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline DataLakeUpdateException& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the exception of the last <code>UpdateDataLake</code>or
     * <code>DeleteDataLake</code> API request.</p>
     */
    inline DataLakeUpdateException& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
