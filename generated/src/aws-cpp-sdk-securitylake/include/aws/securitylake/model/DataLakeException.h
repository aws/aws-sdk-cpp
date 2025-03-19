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
    AWS_SECURITYLAKE_API DataLakeException() = default;
    AWS_SECURITYLAKE_API DataLakeException(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API DataLakeException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The underlying exception of a Security Lake exception.</p>
     */
    inline const Aws::String& GetException() const { return m_exception; }
    inline bool ExceptionHasBeenSet() const { return m_exceptionHasBeenSet; }
    template<typename ExceptionT = Aws::String>
    void SetException(ExceptionT&& value) { m_exceptionHasBeenSet = true; m_exception = std::forward<ExceptionT>(value); }
    template<typename ExceptionT = Aws::String>
    DataLakeException& WithException(ExceptionT&& value) { SetException(std::forward<ExceptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Regions where the exception occurred.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    DataLakeException& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of all remediation steps for a Security Lake exception.</p>
     */
    inline const Aws::String& GetRemediation() const { return m_remediation; }
    inline bool RemediationHasBeenSet() const { return m_remediationHasBeenSet; }
    template<typename RemediationT = Aws::String>
    void SetRemediation(RemediationT&& value) { m_remediationHasBeenSet = true; m_remediation = std::forward<RemediationT>(value); }
    template<typename RemediationT = Aws::String>
    DataLakeException& WithRemediation(RemediationT&& value) { SetRemediation(std::forward<RemediationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This error can occur if you configure the wrong timestamp format, or if the
     * subset of entries used for validation had errors or missing values.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    DataLakeException& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_exception;
    bool m_exceptionHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_remediation;
    bool m_remediationHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
