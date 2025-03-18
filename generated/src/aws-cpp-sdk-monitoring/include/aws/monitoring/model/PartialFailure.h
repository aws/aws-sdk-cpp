/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>This array is empty if the API operation was successful for all the rules
   * specified in the request. If the operation could not process one of the rules,
   * the following data is returned for each of those rules.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/PartialFailure">AWS
   * API Reference</a></p>
   */
  class PartialFailure
  {
  public:
    AWS_CLOUDWATCH_API PartialFailure() = default;
    AWS_CLOUDWATCH_API PartialFailure(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API PartialFailure& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The specified rule that could not be deleted.</p>
     */
    inline const Aws::String& GetFailureResource() const { return m_failureResource; }
    inline bool FailureResourceHasBeenSet() const { return m_failureResourceHasBeenSet; }
    template<typename FailureResourceT = Aws::String>
    void SetFailureResource(FailureResourceT&& value) { m_failureResourceHasBeenSet = true; m_failureResource = std::forward<FailureResourceT>(value); }
    template<typename FailureResourceT = Aws::String>
    PartialFailure& WithFailureResource(FailureResourceT&& value) { SetFailureResource(std::forward<FailureResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of error.</p>
     */
    inline const Aws::String& GetExceptionType() const { return m_exceptionType; }
    inline bool ExceptionTypeHasBeenSet() const { return m_exceptionTypeHasBeenSet; }
    template<typename ExceptionTypeT = Aws::String>
    void SetExceptionType(ExceptionTypeT&& value) { m_exceptionTypeHasBeenSet = true; m_exceptionType = std::forward<ExceptionTypeT>(value); }
    template<typename ExceptionTypeT = Aws::String>
    PartialFailure& WithExceptionType(ExceptionTypeT&& value) { SetExceptionType(std::forward<ExceptionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code of the error.</p>
     */
    inline const Aws::String& GetFailureCode() const { return m_failureCode; }
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
    template<typename FailureCodeT = Aws::String>
    void SetFailureCode(FailureCodeT&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::forward<FailureCodeT>(value); }
    template<typename FailureCodeT = Aws::String>
    PartialFailure& WithFailureCode(FailureCodeT&& value) { SetFailureCode(std::forward<FailureCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the error.</p>
     */
    inline const Aws::String& GetFailureDescription() const { return m_failureDescription; }
    inline bool FailureDescriptionHasBeenSet() const { return m_failureDescriptionHasBeenSet; }
    template<typename FailureDescriptionT = Aws::String>
    void SetFailureDescription(FailureDescriptionT&& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = std::forward<FailureDescriptionT>(value); }
    template<typename FailureDescriptionT = Aws::String>
    PartialFailure& WithFailureDescription(FailureDescriptionT&& value) { SetFailureDescription(std::forward<FailureDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_failureResource;
    bool m_failureResourceHasBeenSet = false;

    Aws::String m_exceptionType;
    bool m_exceptionTypeHasBeenSet = false;

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet = false;

    Aws::String m_failureDescription;
    bool m_failureDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
