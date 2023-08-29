/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/BounceType.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>Information about a <code>Bounce</code> event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Bounce">AWS API
   * Reference</a></p>
   */
  class Bounce
  {
  public:
    AWS_SESV2_API Bounce();
    AWS_SESV2_API Bounce(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Bounce& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of the bounce, as determined by SES. Can be one of
     * <code>UNDETERMINED</code>, <code>TRANSIENT</code>, or <code>PERMANENT</code>
     * </p>
     */
    inline const BounceType& GetBounceType() const{ return m_bounceType; }

    /**
     * <p>The type of the bounce, as determined by SES. Can be one of
     * <code>UNDETERMINED</code>, <code>TRANSIENT</code>, or <code>PERMANENT</code>
     * </p>
     */
    inline bool BounceTypeHasBeenSet() const { return m_bounceTypeHasBeenSet; }

    /**
     * <p>The type of the bounce, as determined by SES. Can be one of
     * <code>UNDETERMINED</code>, <code>TRANSIENT</code>, or <code>PERMANENT</code>
     * </p>
     */
    inline void SetBounceType(const BounceType& value) { m_bounceTypeHasBeenSet = true; m_bounceType = value; }

    /**
     * <p>The type of the bounce, as determined by SES. Can be one of
     * <code>UNDETERMINED</code>, <code>TRANSIENT</code>, or <code>PERMANENT</code>
     * </p>
     */
    inline void SetBounceType(BounceType&& value) { m_bounceTypeHasBeenSet = true; m_bounceType = std::move(value); }

    /**
     * <p>The type of the bounce, as determined by SES. Can be one of
     * <code>UNDETERMINED</code>, <code>TRANSIENT</code>, or <code>PERMANENT</code>
     * </p>
     */
    inline Bounce& WithBounceType(const BounceType& value) { SetBounceType(value); return *this;}

    /**
     * <p>The type of the bounce, as determined by SES. Can be one of
     * <code>UNDETERMINED</code>, <code>TRANSIENT</code>, or <code>PERMANENT</code>
     * </p>
     */
    inline Bounce& WithBounceType(BounceType&& value) { SetBounceType(std::move(value)); return *this;}


    /**
     * <p>The subtype of the bounce, as determined by SES.</p>
     */
    inline const Aws::String& GetBounceSubType() const{ return m_bounceSubType; }

    /**
     * <p>The subtype of the bounce, as determined by SES.</p>
     */
    inline bool BounceSubTypeHasBeenSet() const { return m_bounceSubTypeHasBeenSet; }

    /**
     * <p>The subtype of the bounce, as determined by SES.</p>
     */
    inline void SetBounceSubType(const Aws::String& value) { m_bounceSubTypeHasBeenSet = true; m_bounceSubType = value; }

    /**
     * <p>The subtype of the bounce, as determined by SES.</p>
     */
    inline void SetBounceSubType(Aws::String&& value) { m_bounceSubTypeHasBeenSet = true; m_bounceSubType = std::move(value); }

    /**
     * <p>The subtype of the bounce, as determined by SES.</p>
     */
    inline void SetBounceSubType(const char* value) { m_bounceSubTypeHasBeenSet = true; m_bounceSubType.assign(value); }

    /**
     * <p>The subtype of the bounce, as determined by SES.</p>
     */
    inline Bounce& WithBounceSubType(const Aws::String& value) { SetBounceSubType(value); return *this;}

    /**
     * <p>The subtype of the bounce, as determined by SES.</p>
     */
    inline Bounce& WithBounceSubType(Aws::String&& value) { SetBounceSubType(std::move(value)); return *this;}

    /**
     * <p>The subtype of the bounce, as determined by SES.</p>
     */
    inline Bounce& WithBounceSubType(const char* value) { SetBounceSubType(value); return *this;}


    /**
     * <p>The status code issued by the reporting Message Transfer Authority (MTA).
     * This field only appears if a delivery status notification (DSN) was attached to
     * the bounce and the <code>Diagnostic-Code</code> was provided in the DSN. </p>
     */
    inline const Aws::String& GetDiagnosticCode() const{ return m_diagnosticCode; }

    /**
     * <p>The status code issued by the reporting Message Transfer Authority (MTA).
     * This field only appears if a delivery status notification (DSN) was attached to
     * the bounce and the <code>Diagnostic-Code</code> was provided in the DSN. </p>
     */
    inline bool DiagnosticCodeHasBeenSet() const { return m_diagnosticCodeHasBeenSet; }

    /**
     * <p>The status code issued by the reporting Message Transfer Authority (MTA).
     * This field only appears if a delivery status notification (DSN) was attached to
     * the bounce and the <code>Diagnostic-Code</code> was provided in the DSN. </p>
     */
    inline void SetDiagnosticCode(const Aws::String& value) { m_diagnosticCodeHasBeenSet = true; m_diagnosticCode = value; }

    /**
     * <p>The status code issued by the reporting Message Transfer Authority (MTA).
     * This field only appears if a delivery status notification (DSN) was attached to
     * the bounce and the <code>Diagnostic-Code</code> was provided in the DSN. </p>
     */
    inline void SetDiagnosticCode(Aws::String&& value) { m_diagnosticCodeHasBeenSet = true; m_diagnosticCode = std::move(value); }

    /**
     * <p>The status code issued by the reporting Message Transfer Authority (MTA).
     * This field only appears if a delivery status notification (DSN) was attached to
     * the bounce and the <code>Diagnostic-Code</code> was provided in the DSN. </p>
     */
    inline void SetDiagnosticCode(const char* value) { m_diagnosticCodeHasBeenSet = true; m_diagnosticCode.assign(value); }

    /**
     * <p>The status code issued by the reporting Message Transfer Authority (MTA).
     * This field only appears if a delivery status notification (DSN) was attached to
     * the bounce and the <code>Diagnostic-Code</code> was provided in the DSN. </p>
     */
    inline Bounce& WithDiagnosticCode(const Aws::String& value) { SetDiagnosticCode(value); return *this;}

    /**
     * <p>The status code issued by the reporting Message Transfer Authority (MTA).
     * This field only appears if a delivery status notification (DSN) was attached to
     * the bounce and the <code>Diagnostic-Code</code> was provided in the DSN. </p>
     */
    inline Bounce& WithDiagnosticCode(Aws::String&& value) { SetDiagnosticCode(std::move(value)); return *this;}

    /**
     * <p>The status code issued by the reporting Message Transfer Authority (MTA).
     * This field only appears if a delivery status notification (DSN) was attached to
     * the bounce and the <code>Diagnostic-Code</code> was provided in the DSN. </p>
     */
    inline Bounce& WithDiagnosticCode(const char* value) { SetDiagnosticCode(value); return *this;}

  private:

    BounceType m_bounceType;
    bool m_bounceTypeHasBeenSet = false;

    Aws::String m_bounceSubType;
    bool m_bounceSubTypeHasBeenSet = false;

    Aws::String m_diagnosticCode;
    bool m_diagnosticCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
