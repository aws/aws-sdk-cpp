/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>The details for an Amazon Security Lake exception.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/DataLakeException">AWS
   * API Reference</a></p>
   */
  class DataLakeException
  {
  public:
    AWS_SECURITYLAKE_API DataLakeException();
    AWS_SECURITYLAKE_API DataLakeException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The underlying exception of a Security Lake exception.</p>
     */
    inline const Aws::String& GetException() const{ return m_exception; }

    /**
     * <p>The underlying exception of a Security Lake exception.</p>
     */
    inline bool ExceptionHasBeenSet() const { return m_exceptionHasBeenSet; }

    /**
     * <p>The underlying exception of a Security Lake exception.</p>
     */
    inline void SetException(const Aws::String& value) { m_exceptionHasBeenSet = true; m_exception = value; }

    /**
     * <p>The underlying exception of a Security Lake exception.</p>
     */
    inline void SetException(Aws::String&& value) { m_exceptionHasBeenSet = true; m_exception = std::move(value); }

    /**
     * <p>The underlying exception of a Security Lake exception.</p>
     */
    inline void SetException(const char* value) { m_exceptionHasBeenSet = true; m_exception.assign(value); }

    /**
     * <p>The underlying exception of a Security Lake exception.</p>
     */
    inline DataLakeException& WithException(const Aws::String& value) { SetException(value); return *this;}

    /**
     * <p>The underlying exception of a Security Lake exception.</p>
     */
    inline DataLakeException& WithException(Aws::String&& value) { SetException(std::move(value)); return *this;}

    /**
     * <p>The underlying exception of a Security Lake exception.</p>
     */
    inline DataLakeException& WithException(const char* value) { SetException(value); return *this;}


    /**
     * <p>The Amazon Web Services Regions where the exception occurred.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Regions where the exception occurred.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Regions where the exception occurred.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Regions where the exception occurred.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Regions where the exception occurred.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Regions where the exception occurred.</p>
     */
    inline DataLakeException& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Regions where the exception occurred.</p>
     */
    inline DataLakeException& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Regions where the exception occurred.</p>
     */
    inline DataLakeException& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>List of all remediation steps for a Security Lake exception.</p>
     */
    inline const Aws::String& GetRemediation() const{ return m_remediation; }

    /**
     * <p>List of all remediation steps for a Security Lake exception.</p>
     */
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }

    /**
     * <p>List of all remediation steps for a Security Lake exception.</p>
     */
    inline void SetRemediation(const Aws::String& value) { m_remediationHasBeenSet = true; m_remediation = value; }

    /**
     * <p>List of all remediation steps for a Security Lake exception.</p>
     */
    inline void SetRemediation(Aws::String&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }

    /**
     * <p>List of all remediation steps for a Security Lake exception.</p>
     */
    inline void SetRemediation(const char* value) { m_remediationHasBeenSet = true; m_remediation.assign(value); }

    /**
     * <p>List of all remediation steps for a Security Lake exception.</p>
     */
    inline DataLakeException& WithRemediation(const Aws::String& value) { SetRemediation(value); return *this;}

    /**
     * <p>List of all remediation steps for a Security Lake exception.</p>
     */
    inline DataLakeException& WithRemediation(Aws::String&& value) { SetRemediation(std::move(value)); return *this;}

    /**
     * <p>List of all remediation steps for a Security Lake exception.</p>
     */
    inline DataLakeException& WithRemediation(const char* value) { SetRemediation(value); return *this;}


    /**
     * <p>This error can occur if you configure the wrong timestamp format, or if the
     * subset of entries used for validation had errors or missing values.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>This error can occur if you configure the wrong timestamp format, or if the
     * subset of entries used for validation had errors or missing values.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>This error can occur if you configure the wrong timestamp format, or if the
     * subset of entries used for validation had errors or missing values.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>This error can occur if you configure the wrong timestamp format, or if the
     * subset of entries used for validation had errors or missing values.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>This error can occur if you configure the wrong timestamp format, or if the
     * subset of entries used for validation had errors or missing values.</p>
     */
    inline DataLakeException& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>This error can occur if you configure the wrong timestamp format, or if the
     * subset of entries used for validation had errors or missing values.</p>
     */
    inline DataLakeException& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_exception;
    bool m_exceptionHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
