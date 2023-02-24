/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AssociationStatus.h>
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
   * <p>An array of requested updates to the enablement status of controls in
   * specified standards. The objects in the array include a security control ID, the
   * Amazon Resource Name (ARN) of the standard, the requested enablement status, and
   * the reason for updating the enablement status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/StandardsControlAssociationUpdate">AWS
   * API Reference</a></p>
   */
  class StandardsControlAssociationUpdate
  {
  public:
    AWS_SECURITYHUB_API StandardsControlAssociationUpdate();
    AWS_SECURITYHUB_API StandardsControlAssociationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API StandardsControlAssociationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the standard in which you want to update
     * the control's enablement status.</p>
     */
    inline const Aws::String& GetStandardsArn() const{ return m_standardsArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the standard in which you want to update
     * the control's enablement status.</p>
     */
    inline bool StandardsArnHasBeenSet() const { return m_standardsArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the standard in which you want to update
     * the control's enablement status.</p>
     */
    inline void SetStandardsArn(const Aws::String& value) { m_standardsArnHasBeenSet = true; m_standardsArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the standard in which you want to update
     * the control's enablement status.</p>
     */
    inline void SetStandardsArn(Aws::String&& value) { m_standardsArnHasBeenSet = true; m_standardsArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the standard in which you want to update
     * the control's enablement status.</p>
     */
    inline void SetStandardsArn(const char* value) { m_standardsArnHasBeenSet = true; m_standardsArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the standard in which you want to update
     * the control's enablement status.</p>
     */
    inline StandardsControlAssociationUpdate& WithStandardsArn(const Aws::String& value) { SetStandardsArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the standard in which you want to update
     * the control's enablement status.</p>
     */
    inline StandardsControlAssociationUpdate& WithStandardsArn(Aws::String&& value) { SetStandardsArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the standard in which you want to update
     * the control's enablement status.</p>
     */
    inline StandardsControlAssociationUpdate& WithStandardsArn(const char* value) { SetStandardsArn(value); return *this;}


    /**
     * <p>The unique identifier for the security control whose enablement status you
     * want to update.</p>
     */
    inline const Aws::String& GetSecurityControlId() const{ return m_securityControlId; }

    /**
     * <p>The unique identifier for the security control whose enablement status you
     * want to update.</p>
     */
    inline bool SecurityControlIdHasBeenSet() const { return m_securityControlIdHasBeenSet; }

    /**
     * <p>The unique identifier for the security control whose enablement status you
     * want to update.</p>
     */
    inline void SetSecurityControlId(const Aws::String& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = value; }

    /**
     * <p>The unique identifier for the security control whose enablement status you
     * want to update.</p>
     */
    inline void SetSecurityControlId(Aws::String&& value) { m_securityControlIdHasBeenSet = true; m_securityControlId = std::move(value); }

    /**
     * <p>The unique identifier for the security control whose enablement status you
     * want to update.</p>
     */
    inline void SetSecurityControlId(const char* value) { m_securityControlIdHasBeenSet = true; m_securityControlId.assign(value); }

    /**
     * <p>The unique identifier for the security control whose enablement status you
     * want to update.</p>
     */
    inline StandardsControlAssociationUpdate& WithSecurityControlId(const Aws::String& value) { SetSecurityControlId(value); return *this;}

    /**
     * <p>The unique identifier for the security control whose enablement status you
     * want to update.</p>
     */
    inline StandardsControlAssociationUpdate& WithSecurityControlId(Aws::String&& value) { SetSecurityControlId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the security control whose enablement status you
     * want to update.</p>
     */
    inline StandardsControlAssociationUpdate& WithSecurityControlId(const char* value) { SetSecurityControlId(value); return *this;}


    /**
     * <p>The desired enablement status of the control in the standard.</p>
     */
    inline const AssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }

    /**
     * <p>The desired enablement status of the control in the standard.</p>
     */
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }

    /**
     * <p>The desired enablement status of the control in the standard.</p>
     */
    inline void SetAssociationStatus(const AssociationStatus& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }

    /**
     * <p>The desired enablement status of the control in the standard.</p>
     */
    inline void SetAssociationStatus(AssociationStatus&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }

    /**
     * <p>The desired enablement status of the control in the standard.</p>
     */
    inline StandardsControlAssociationUpdate& WithAssociationStatus(const AssociationStatus& value) { SetAssociationStatus(value); return *this;}

    /**
     * <p>The desired enablement status of the control in the standard.</p>
     */
    inline StandardsControlAssociationUpdate& WithAssociationStatus(AssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}


    /**
     * <p>The reason for updating the control's enablement status in the standard.</p>
     */
    inline const Aws::String& GetUpdatedReason() const{ return m_updatedReason; }

    /**
     * <p>The reason for updating the control's enablement status in the standard.</p>
     */
    inline bool UpdatedReasonHasBeenSet() const { return m_updatedReasonHasBeenSet; }

    /**
     * <p>The reason for updating the control's enablement status in the standard.</p>
     */
    inline void SetUpdatedReason(const Aws::String& value) { m_updatedReasonHasBeenSet = true; m_updatedReason = value; }

    /**
     * <p>The reason for updating the control's enablement status in the standard.</p>
     */
    inline void SetUpdatedReason(Aws::String&& value) { m_updatedReasonHasBeenSet = true; m_updatedReason = std::move(value); }

    /**
     * <p>The reason for updating the control's enablement status in the standard.</p>
     */
    inline void SetUpdatedReason(const char* value) { m_updatedReasonHasBeenSet = true; m_updatedReason.assign(value); }

    /**
     * <p>The reason for updating the control's enablement status in the standard.</p>
     */
    inline StandardsControlAssociationUpdate& WithUpdatedReason(const Aws::String& value) { SetUpdatedReason(value); return *this;}

    /**
     * <p>The reason for updating the control's enablement status in the standard.</p>
     */
    inline StandardsControlAssociationUpdate& WithUpdatedReason(Aws::String&& value) { SetUpdatedReason(std::move(value)); return *this;}

    /**
     * <p>The reason for updating the control's enablement status in the standard.</p>
     */
    inline StandardsControlAssociationUpdate& WithUpdatedReason(const char* value) { SetUpdatedReason(value); return *this;}

  private:

    Aws::String m_standardsArn;
    bool m_standardsArnHasBeenSet = false;

    Aws::String m_securityControlId;
    bool m_securityControlIdHasBeenSet = false;

    AssociationStatus m_associationStatus;
    bool m_associationStatusHasBeenSet = false;

    Aws::String m_updatedReason;
    bool m_updatedReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
