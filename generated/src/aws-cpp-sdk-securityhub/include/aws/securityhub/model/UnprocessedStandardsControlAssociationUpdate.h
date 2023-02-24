/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/StandardsControlAssociationUpdate.h>
#include <aws/securityhub/model/UnprocessedErrorCode.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides details about which control's enablement status could not be updated
   * in a specified standard when calling the <a
   * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>
   * API. This parameter also provides details about why the request was unprocessed.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UnprocessedStandardsControlAssociationUpdate">AWS
   * API Reference</a></p>
   */
  class UnprocessedStandardsControlAssociationUpdate
  {
  public:
    AWS_SECURITYHUB_API UnprocessedStandardsControlAssociationUpdate();
    AWS_SECURITYHUB_API UnprocessedStandardsControlAssociationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API UnprocessedStandardsControlAssociationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of control and standard associations for which an update failed when
     * calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline const StandardsControlAssociationUpdate& GetStandardsControlAssociationUpdate() const{ return m_standardsControlAssociationUpdate; }

    /**
     * <p>An array of control and standard associations for which an update failed when
     * calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline bool StandardsControlAssociationUpdateHasBeenSet() const { return m_standardsControlAssociationUpdateHasBeenSet; }

    /**
     * <p>An array of control and standard associations for which an update failed when
     * calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline void SetStandardsControlAssociationUpdate(const StandardsControlAssociationUpdate& value) { m_standardsControlAssociationUpdateHasBeenSet = true; m_standardsControlAssociationUpdate = value; }

    /**
     * <p>An array of control and standard associations for which an update failed when
     * calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline void SetStandardsControlAssociationUpdate(StandardsControlAssociationUpdate&& value) { m_standardsControlAssociationUpdateHasBeenSet = true; m_standardsControlAssociationUpdate = std::move(value); }

    /**
     * <p>An array of control and standard associations for which an update failed when
     * calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline UnprocessedStandardsControlAssociationUpdate& WithStandardsControlAssociationUpdate(const StandardsControlAssociationUpdate& value) { SetStandardsControlAssociationUpdate(value); return *this;}

    /**
     * <p>An array of control and standard associations for which an update failed when
     * calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline UnprocessedStandardsControlAssociationUpdate& WithStandardsControlAssociationUpdate(StandardsControlAssociationUpdate&& value) { SetStandardsControlAssociationUpdate(std::move(value)); return *this;}


    /**
     * <p>The error code for the unprocessed update of the control's enablement status
     * in the specified standard.</p>
     */
    inline const UnprocessedErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code for the unprocessed update of the control's enablement status
     * in the specified standard.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code for the unprocessed update of the control's enablement status
     * in the specified standard.</p>
     */
    inline void SetErrorCode(const UnprocessedErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code for the unprocessed update of the control's enablement status
     * in the specified standard.</p>
     */
    inline void SetErrorCode(UnprocessedErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code for the unprocessed update of the control's enablement status
     * in the specified standard.</p>
     */
    inline UnprocessedStandardsControlAssociationUpdate& WithErrorCode(const UnprocessedErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code for the unprocessed update of the control's enablement status
     * in the specified standard.</p>
     */
    inline UnprocessedStandardsControlAssociationUpdate& WithErrorCode(UnprocessedErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The reason why a control's enablement status in the specified standard
     * couldn't be updated. </p>
     */
    inline const Aws::String& GetErrorReason() const{ return m_errorReason; }

    /**
     * <p>The reason why a control's enablement status in the specified standard
     * couldn't be updated. </p>
     */
    inline bool ErrorReasonHasBeenSet() const { return m_errorReasonHasBeenSet; }

    /**
     * <p>The reason why a control's enablement status in the specified standard
     * couldn't be updated. </p>
     */
    inline void SetErrorReason(const Aws::String& value) { m_errorReasonHasBeenSet = true; m_errorReason = value; }

    /**
     * <p>The reason why a control's enablement status in the specified standard
     * couldn't be updated. </p>
     */
    inline void SetErrorReason(Aws::String&& value) { m_errorReasonHasBeenSet = true; m_errorReason = std::move(value); }

    /**
     * <p>The reason why a control's enablement status in the specified standard
     * couldn't be updated. </p>
     */
    inline void SetErrorReason(const char* value) { m_errorReasonHasBeenSet = true; m_errorReason.assign(value); }

    /**
     * <p>The reason why a control's enablement status in the specified standard
     * couldn't be updated. </p>
     */
    inline UnprocessedStandardsControlAssociationUpdate& WithErrorReason(const Aws::String& value) { SetErrorReason(value); return *this;}

    /**
     * <p>The reason why a control's enablement status in the specified standard
     * couldn't be updated. </p>
     */
    inline UnprocessedStandardsControlAssociationUpdate& WithErrorReason(Aws::String&& value) { SetErrorReason(std::move(value)); return *this;}

    /**
     * <p>The reason why a control's enablement status in the specified standard
     * couldn't be updated. </p>
     */
    inline UnprocessedStandardsControlAssociationUpdate& WithErrorReason(const char* value) { SetErrorReason(value); return *this;}

  private:

    StandardsControlAssociationUpdate m_standardsControlAssociationUpdate;
    bool m_standardsControlAssociationUpdateHasBeenSet = false;

    UnprocessedErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorReason;
    bool m_errorReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
