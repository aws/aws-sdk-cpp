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
   * <p>List of all failures.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/Failures">AWS
   * API Reference</a></p>
   */
  class Failures
  {
  public:
    AWS_SECURITYLAKE_API Failures();
    AWS_SECURITYLAKE_API Failures(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Failures& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of all exception messages.</p>
     */
    inline const Aws::String& GetExceptionMessage() const{ return m_exceptionMessage; }

    /**
     * <p>List of all exception messages.</p>
     */
    inline bool ExceptionMessageHasBeenSet() const { return m_exceptionMessageHasBeenSet; }

    /**
     * <p>List of all exception messages.</p>
     */
    inline void SetExceptionMessage(const Aws::String& value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage = value; }

    /**
     * <p>List of all exception messages.</p>
     */
    inline void SetExceptionMessage(Aws::String&& value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage = std::move(value); }

    /**
     * <p>List of all exception messages.</p>
     */
    inline void SetExceptionMessage(const char* value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage.assign(value); }

    /**
     * <p>List of all exception messages.</p>
     */
    inline Failures& WithExceptionMessage(const Aws::String& value) { SetExceptionMessage(value); return *this;}

    /**
     * <p>List of all exception messages.</p>
     */
    inline Failures& WithExceptionMessage(Aws::String&& value) { SetExceptionMessage(std::move(value)); return *this;}

    /**
     * <p>List of all exception messages.</p>
     */
    inline Failures& WithExceptionMessage(const char* value) { SetExceptionMessage(value); return *this;}


    /**
     * <p>List of all remediation steps for failures.</p>
     */
    inline const Aws::String& GetRemediation() const{ return m_remediation; }

    /**
     * <p>List of all remediation steps for failures.</p>
     */
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }

    /**
     * <p>List of all remediation steps for failures.</p>
     */
    inline void SetRemediation(const Aws::String& value) { m_remediationHasBeenSet = true; m_remediation = value; }

    /**
     * <p>List of all remediation steps for failures.</p>
     */
    inline void SetRemediation(Aws::String&& value) { m_remediationHasBeenSet = true; m_remediation = std::move(value); }

    /**
     * <p>List of all remediation steps for failures.</p>
     */
    inline void SetRemediation(const char* value) { m_remediationHasBeenSet = true; m_remediation.assign(value); }

    /**
     * <p>List of all remediation steps for failures.</p>
     */
    inline Failures& WithRemediation(const Aws::String& value) { SetRemediation(value); return *this;}

    /**
     * <p>List of all remediation steps for failures.</p>
     */
    inline Failures& WithRemediation(Aws::String&& value) { SetRemediation(std::move(value)); return *this;}

    /**
     * <p>List of all remediation steps for failures.</p>
     */
    inline Failures& WithRemediation(const char* value) { SetRemediation(value); return *this;}


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
    inline Failures& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>This error can occur if you configure the wrong timestamp format, or if the
     * subset of entries used for validation had errors or missing values.</p>
     */
    inline Failures& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_exceptionMessage;
    bool m_exceptionMessageHasBeenSet = false;

    Aws::String m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
