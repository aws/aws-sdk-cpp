/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/StandardsControlAssociationId.h>
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
   * <p> Provides details about which control's enablement status couldn't be
   * retrieved in a specified standard when calling <a
   * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
   * This parameter also provides details about why the request was unprocessed.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/UnprocessedStandardsControlAssociation">AWS
   * API Reference</a></p>
   */
  class UnprocessedStandardsControlAssociation
  {
  public:
    AWS_SECURITYHUB_API UnprocessedStandardsControlAssociation();
    AWS_SECURITYHUB_API UnprocessedStandardsControlAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API UnprocessedStandardsControlAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> An array with one or more objects that includes a security control
     * (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) and the Amazon
     * Resource Name (ARN) of a standard. This parameter shows the specific controls
     * for which the enablement status couldn't be retrieved in specified standards
     * when calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline const StandardsControlAssociationId& GetStandardsControlAssociationId() const{ return m_standardsControlAssociationId; }

    /**
     * <p> An array with one or more objects that includes a security control
     * (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) and the Amazon
     * Resource Name (ARN) of a standard. This parameter shows the specific controls
     * for which the enablement status couldn't be retrieved in specified standards
     * when calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline bool StandardsControlAssociationIdHasBeenSet() const { return m_standardsControlAssociationIdHasBeenSet; }

    /**
     * <p> An array with one or more objects that includes a security control
     * (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) and the Amazon
     * Resource Name (ARN) of a standard. This parameter shows the specific controls
     * for which the enablement status couldn't be retrieved in specified standards
     * when calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline void SetStandardsControlAssociationId(const StandardsControlAssociationId& value) { m_standardsControlAssociationIdHasBeenSet = true; m_standardsControlAssociationId = value; }

    /**
     * <p> An array with one or more objects that includes a security control
     * (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) and the Amazon
     * Resource Name (ARN) of a standard. This parameter shows the specific controls
     * for which the enablement status couldn't be retrieved in specified standards
     * when calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline void SetStandardsControlAssociationId(StandardsControlAssociationId&& value) { m_standardsControlAssociationIdHasBeenSet = true; m_standardsControlAssociationId = std::move(value); }

    /**
     * <p> An array with one or more objects that includes a security control
     * (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) and the Amazon
     * Resource Name (ARN) of a standard. This parameter shows the specific controls
     * for which the enablement status couldn't be retrieved in specified standards
     * when calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline UnprocessedStandardsControlAssociation& WithStandardsControlAssociationId(const StandardsControlAssociationId& value) { SetStandardsControlAssociationId(value); return *this;}

    /**
     * <p> An array with one or more objects that includes a security control
     * (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) and the Amazon
     * Resource Name (ARN) of a standard. This parameter shows the specific controls
     * for which the enablement status couldn't be retrieved in specified standards
     * when calling <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/API_BatchUpdateStandardsControlAssociations.html">BatchUpdateStandardsControlAssociations</a>.
     * </p>
     */
    inline UnprocessedStandardsControlAssociation& WithStandardsControlAssociationId(StandardsControlAssociationId&& value) { SetStandardsControlAssociationId(std::move(value)); return *this;}


    /**
     * <p>The error code for the unprocessed standard and control association. </p>
     */
    inline const UnprocessedErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code for the unprocessed standard and control association. </p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code for the unprocessed standard and control association. </p>
     */
    inline void SetErrorCode(const UnprocessedErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code for the unprocessed standard and control association. </p>
     */
    inline void SetErrorCode(UnprocessedErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code for the unprocessed standard and control association. </p>
     */
    inline UnprocessedStandardsControlAssociation& WithErrorCode(const UnprocessedErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code for the unprocessed standard and control association. </p>
     */
    inline UnprocessedStandardsControlAssociation& WithErrorCode(UnprocessedErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>The reason why the standard and control association was unprocessed. </p>
     */
    inline const Aws::String& GetErrorReason() const{ return m_errorReason; }

    /**
     * <p>The reason why the standard and control association was unprocessed. </p>
     */
    inline bool ErrorReasonHasBeenSet() const { return m_errorReasonHasBeenSet; }

    /**
     * <p>The reason why the standard and control association was unprocessed. </p>
     */
    inline void SetErrorReason(const Aws::String& value) { m_errorReasonHasBeenSet = true; m_errorReason = value; }

    /**
     * <p>The reason why the standard and control association was unprocessed. </p>
     */
    inline void SetErrorReason(Aws::String&& value) { m_errorReasonHasBeenSet = true; m_errorReason = std::move(value); }

    /**
     * <p>The reason why the standard and control association was unprocessed. </p>
     */
    inline void SetErrorReason(const char* value) { m_errorReasonHasBeenSet = true; m_errorReason.assign(value); }

    /**
     * <p>The reason why the standard and control association was unprocessed. </p>
     */
    inline UnprocessedStandardsControlAssociation& WithErrorReason(const Aws::String& value) { SetErrorReason(value); return *this;}

    /**
     * <p>The reason why the standard and control association was unprocessed. </p>
     */
    inline UnprocessedStandardsControlAssociation& WithErrorReason(Aws::String&& value) { SetErrorReason(std::move(value)); return *this;}

    /**
     * <p>The reason why the standard and control association was unprocessed. </p>
     */
    inline UnprocessedStandardsControlAssociation& WithErrorReason(const char* value) { SetErrorReason(value); return *this;}

  private:

    StandardsControlAssociationId m_standardsControlAssociationId;
    bool m_standardsControlAssociationIdHasBeenSet = false;

    UnprocessedErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorReason;
    bool m_errorReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
